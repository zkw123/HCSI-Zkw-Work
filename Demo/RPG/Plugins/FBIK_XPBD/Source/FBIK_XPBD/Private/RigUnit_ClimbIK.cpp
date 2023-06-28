#include "RigUnit_ClimbIK.h"
#include "Math/ControlRigMathLibrary.h"
#include "Units/RigUnitContext.h"
#include "Components/PrimitiveComponent.h"
DEFINE_LOG_CATEGORY(LogIK);
FRigUnit_ClimbIK_Execute()
{
	DECLARE_SCOPE_HIERARCHICAL_COUNTER_RIGUNIT()
	
	FRigHierarchyContainer* Hierarchy = ExecuteContext.Hierarchy;
	if (Hierarchy == nullptr)
	{
		return;
	}

	FRigBoneHierarchy& Bones = Hierarchy->BoneHierarchy;

	//初始化
	if (Context.State == EControlRigState::Init&&CurrentFootOffset.Num()==0)
	{
		
		Solver.MovingState = MovingState;
		Solver.Prediction = Prediction;
		Solver.TransformOutput = TransformOutput;
		Solver.EnableComplexCollision = EnableComplexCollision;
		Solver.Initialize(HandName_L, HandEffector_L, HandEffector_L_Idle,HandName_R, HandEffector_R, HandEffector_R_Idle, FootName_L, FootEffector_L, FootEffector_L_Idle,FootName_R, FootEffector_R, FootEffector_R_Idle);
		Solver.UpdateGlobalTransform(Bones);

		CurrentBodyOffset = FVector::ZeroVector;
		CurrentBodyPitch = 0;
		
		for (int i = 0; i < 2; i++)
		{
			CurrentFootOffset.Add(0);
			CurrentHandOffset.Add(0);
			CurrentFootRotate.Add(FQuat::Identity);
			CurrentHandRotate.Add(FQuat::Identity);
			CurrentFootOffsetV.Add(FVector::ZeroVector);
			FMySpringInterp string;
			string.Stiffness = 20;
			string.Mass = 4;
			string.CriticalDamping = 4;
			FootInterps.Add(string);
			HandInterps.Add(string);

		}
		
	}
	else
	{
		
		//如果禁用IK，直接输出原始坐标
		if (ClimbIKControl == 0||MovingState==3)
		{
			Hand_L_Transform = Bones.GetGlobalTransform(HandName_L);
			Hand_R_Transform = Bones.GetGlobalTransform(HandName_R);
			Foot_L_Transform = Bones.GetGlobalTransform(FootName_L);
			Foot_R_Transform = Bones.GetGlobalTransform(FootName_R);
			return;
		}
		//如果允许外部输入，直接输出输入坐标
		if (ExternalInput)
		{
			Hand_L_Transform = Hand_L_Transform_Input;
			Hand_R_Transform = Hand_R_Transform_Input;
			Foot_L_Transform = Foot_L_Transform_Input;
			Foot_R_Transform = Foot_R_Transform_Input;
			return;
		}
		if (MovingState == 1 || ClimbIKControl==3)
		{
			//UE_LOG(LogIK, Log, TEXT("Foot_L:%s"),*Bones.GetGlobalTransform(FootName_L).ToString());
			Foot_L_Transform = Bones.GetGlobalTransform(FootName_L);
			Foot_R_Transform = Bones.GetGlobalTransform(FootName_R);
		}
		if (ClimbIKControl == 4)
		{
			Hand_L_Transform = Bones.GetGlobalTransform(HandName_L);
			Hand_R_Transform = Bones.GetGlobalTransform(HandName_R);
		}
		Solver.MovingState = MovingState;
		Solver.ClimbIkControl = ClimbIKControl;
		/*
		if (MovingState == 0 && LastMovingState != 0)
		{
			Bones.SetInitialGlobalTransform(HandEffector_L_Idle, Bones.GetGlobalTransform(HandEffector_L));
			Bones.SetInitialGlobalTransform(HandEffector_R_Idle, Bones.GetGlobalTransform(HandEffector_R));
			Bones.SetInitialGlobalTransform(FootEffector_L_Idle, Bones.GetGlobalTransform(FootEffector_L));
			Bones.SetInitialGlobalTransform(FootEffector_R_Idle, Bones.GetGlobalTransform(FootEffector_R));
		}
		
		LastMovingState = MovingState;
		*/
		//忽略和自身碰撞
		FCollisionQueryParams QueryParams;
		if (Context.OwningActor)
		{
			QueryParams.AddIgnoredActor(Context.OwningActor);
		}
		
		Solver.UpdateGlobalTransform(Bones);
		
		RootTransform = Bones.GetGlobalTransform(Root);
		//Effetor目标位置为手脚Effector初始位置，为了保证效果需要确保手脚位置不变
		Solver.HandHitInfo.HandEffectorTransform_L_Target = Solver.HandHitInfo.HandEffectorTransform_L;
		Solver.HandHitInfo.HandEffectorTransform_R_Target = Solver.HandHitInfo.HandEffectorTransform_R;
		Solver.FootHitInfo.FootEffectorTransform_L_Target = Solver.FootHitInfo.FootEffectorTransform_L;
		Solver.FootHitInfo.FootEffectorTransform_R_Target = Solver.FootHitInfo.FootEffectorTransform_R;
		Solver.GetHitInfo(Context.World, Context.ToWorldSpaceTransform, QueryParams,BodyCapsuleWidth);

		
		//body rotate
		//仅当允许身体旋转且不处于悬挂Idle时进行旋转
		
		
		if(MovingState!=1&&( ClimbIKControl == 1 || (ClimbIKControl == 2 && MovingState == 0)))
		{
			//如果有手脚射线没打到目标，不进行身体旋转
			if (!(Solver.HandHitInfo.HandHit_L.bBlockingHit && Solver.HandHitInfo.HandHit_R.bBlockingHit && Solver.FootHitInfo.FootHit_L.bBlockingHit && Solver.FootHitInfo.FootHit_R.bBlockingHit))
			{
				float pitch = 0;
				//UE_LOG(LogIK, Log, TEXT("No BodyPitch "));
				CurrentBodyPitch = FMath::FInterpTo(CurrentBodyPitch, pitch, DeltaSeconds, 1);
				if (!Solver.HandHitInfo.HandHit_L.bBlockingHit || !Solver.HandHitInfo.HandHit_R.bBlockingHit)
				{
					Solver.HandHitInfo.HandOffset_L = 0;
					Solver.HandHitInfo.HandOffset_R = 0;
				}
				if (!Solver.FootHitInfo.FootHit_L.bBlockingHit || !Solver.FootHitInfo.FootHit_R.bBlockingHit)
				{
					Solver.FootHitInfo.FootOffset_L = 0;
					Solver.FootHitInfo.FootOffset_R = 0;
				}
			}
			//如果手脚法线均与当前身体方向平行，不进行旋转
			else if (abs(FVector::DotProduct(Solver.HandHitInfo.HandHit_L.Normal, Solver.Forward)) > 0.99 && abs(FVector::DotProduct(Solver.HandHitInfo.HandHit_R.Normal, Solver.Forward)) > 0.99)
			{
				CurrentBodyPitch = 0;
				//UE_LOG(LogIK, Log, TEXT("No BodyPitch because of plane"));
			}
			else
			{
			//身体仅进行俯仰旋转，保证和平面贴合
				FVector PitchRotateDirection;
					

				PitchRotateDirection = Solver.HandHitInfo.HandHit_L.ImpactPoint + Solver.HandHitInfo.HandHit_R.ImpactPoint - Solver.FootHitInfo.FootHit_L.ImpactPoint - Solver.FootHitInfo.FootHit_R.ImpactPoint;

				PitchRotateDirection.Normalize();
				//UE_LOG(LogIK, Log, TEXT("PitchDirectionOri %s"), *PitchRotateDirection.ToString());

				//旋转向量和身体方向平行的分量，对应Y
				float XY = FVector::DotProduct(PitchRotateDirection, Solver.Forward);
				//旋转向量的Z方向分量，对应X
				float pitch = UKismetMathLibrary::Atan2(XY, PitchRotateDirection.Z) / PI * 180;
				//UE_LOG(LogIK, Log, TEXT("BodyPitch Ori%f"), pitch);
				//身体旋转大于40°时，判断当前环境不适合旋转，不进行旋转
				if (abs(pitch) > 40)
				{
					pitch = 0;
					Solver.FootHitInfo.FootHit_L.bBlockingHit = false;
					Solver.FootHitInfo.FootHit_R.bBlockingHit = false;
					Solver.HandHitInfo.HandHit_L.bBlockingHit = false;
					Solver.HandHitInfo.HandHit_R.bBlockingHit = false;
				}
				CurrentBodyPitch = FMath::FInterpTo(CurrentBodyPitch, pitch, DeltaSeconds, 1);
			}

			FRotator rot = UKismetMathLibrary::MakeRotator(CurrentBodyPitch, 0, 0);
			FQuat BodyQuat(rot);
			
			RootTransform.SetRotation(BodyQuat);
			Bones.SetGlobalTransform(Root, RootTransform, true);
			//除了旋转外，为了防止身体下陷，需要进行拉抬
			//拉抬的原则是保证左手的目标点位置不变，因为左手的位置由预先攀爬点决定，较为权威
			
			//拉抬距离向量由原本的左手位置减去身体旋转后的左手位置决定
			FVector DeltaVector = Solver.HandHitInfo.HandTransform_L.GetLocation() - Bones.GetGlobalTransform(HandName_L).GetLocation();
			//UE_LOG(LogIK, Log, TEXT("BodyOffset Ori%s"), *DeltaVector.ToString());
			//对身体拉抬距离进行一些限制，防止距离过远
			//DeltaVector.Z = 0;
			if (DeltaVector.Y > 35)
				DeltaVector.Y = 35;
			if (DeltaVector.Y < -35)
				DeltaVector.Y = -35;
			
			CurrentBodyOffset = FMath::VInterpTo(CurrentBodyOffset, DeltaVector, DeltaSeconds, 1);
			
			
			
			//RootTransform.SetLocation(RootTransform.GetLocation() + FVector(0, -CurrentBodyOffset, DeltaZ));
			RootTransform.SetLocation(RootTransform.GetLocation() + CurrentBodyOffset);
			Bones.SetGlobalTransform(Root, RootTransform, true);

			//UE_LOG(LogIK, Log, TEXT("BodyOffset %s"), *CurrentBodyOffset.ToString());
			//更新旋转后骨骼位置
			Solver.UpdateGlobalTransform(Bones);
			//Solver.GetHitInfo(Context.World, Context.ToWorldSpaceTransform, QueryParams);
			
			//Solver.UpdateHitInfo(Context.ToWorldSpaceTransform);
			
			
		}
		//UE_LOG(LogIK, Log, TEXT("Body Forward %s"), *Solver.Forward.ToString());
		
		//foot&hand rotate
		
		if(MovingState!=1)
		{ 
			FVector Normal;
			FQuat BoneQuat;
			FTransform transform;
			if (Solver.HandHitInfo.HandHit_L.bBlockingHit)
			{
				Normal = Solver.HandHitInfo.HandHit_L.Normal;
				//得到旋转四元数
				BoneQuat = Solver.GetRotator(-Solver.Forward, Normal, RootTransform);
				CurrentHandRotate[0]=FMath::QInterpTo(CurrentHandRotate[0], BoneQuat* transform.GetRotation(), DeltaSeconds, 4);
				
				transform = Solver.HandHitInfo.HandTransform_L;
				
				//旋转左手
				transform.SetRotation(CurrentHandRotate[0] * transform.GetRotation());
				
				
				Bones.SetGlobalTransform(HandName_L, transform, true);
			}
			if (Solver.HandHitInfo.HandHit_R.bBlockingHit)
			{
				Normal = Solver.HandHitInfo.HandHit_R.Normal;
				
				BoneQuat = Solver.GetRotator(-Solver.Forward, Normal, RootTransform);
				CurrentHandRotate[1]=FMath::QInterpTo(CurrentHandRotate[1], BoneQuat, DeltaSeconds, 4);

				transform = Solver.HandHitInfo.HandTransform_R;
				transform.SetRotation(CurrentHandRotate[1] * transform.GetRotation());
				Bones.SetGlobalTransform(HandName_R, transform, true);
			}
			if (Solver.FootHitInfo.FootHit_L.bBlockingHit)
			{
				Normal = Solver.FootHitInfo.FootHit_L.Normal;
				
				BoneQuat = Solver.GetRotator(-Solver.Forward, Normal, RootTransform);
				//UE_LOG(LogIK, Log, TEXT("FootRot_L %s"), *BoneQuat.Euler().ToString());
				CurrentFootRotate[0]=FMath::QInterpTo(CurrentFootRotate[0], BoneQuat, DeltaSeconds, 4);
				transform = Solver.FootHitInfo.FootTransform_L;
				
				transform.SetRotation(CurrentFootRotate[0] * transform.GetRotation());
				
				Bones.SetGlobalTransform(FootName_L, transform, true);
			}
			if (Solver.FootHitInfo.FootHit_R.bBlockingHit)
			{
				Normal =Solver.FootHitInfo.FootHit_R.Normal;
				
				BoneQuat = Solver.GetRotator(-Solver.Forward, Normal, RootTransform);
				//UE_LOG(LogIK, Log, TEXT("FootRot_R %s"), *BoneQuat.Euler().ToString());
				CurrentFootRotate[1]=FMath::QInterpTo(CurrentFootRotate[1], BoneQuat, DeltaSeconds, 4);
				transform = Solver.FootHitInfo.FootTransform_R;
				transform.SetRotation(CurrentFootRotate[1] * transform.GetRotation());
				Bones.SetGlobalTransform(FootName_R, transform, true);
			}
			
			
			//更新骨骼位置
			Solver.UpdateGlobalTransform(Bones);
			//Solver.GetHitInfo(Context.World, Context.ToWorldSpaceTransform, QueryParams);
			
			//Solver.UpdateHitInfo(Context.ToWorldSpaceTransform);
		
				
		}
		//本来是写成数组的，因为不支持所以临时改成了现在这样
		//foot&hand offset
		for (int i = 0; i < 2; i++)
		{
			if (i == 0)
			{
				if (MovingState != 1&&ClimbIKControl!=3)
				{
					if (Solver.FootHitInfo.FootHit_L.bBlockingHit)
					{
						float FootOffset = Solver.FootHitInfo.FootOffset_L;
						//UE_LOG(LogIK, Log, TEXT("FootOffset %f"), FootOffset);

						if (MovingState == 2 && FootOffset > 20)
							FootOffset = 20;

						//弹簧臂插值
						FootInterps[i].Target = FootOffset;
						FootInterps[i].Current = CurrentFootOffset[i];
						FootInterps[i].Execute(DeltaSeconds);
						CurrentFootOffset[i] = FootInterps[i].Result;

						//CurrentFootOffset[i]=FMath::FInterpTo(CurrentFootOffset[i], FootOffset, DeltaSeconds, 2);
						//UE_LOG(LogIK, Log, TEXT("CurrentFootOffset %f"), CurrentFootOffset[i]);
						FVector EffectorLocation;
						EffectorLocation.X = 0;
						EffectorLocation.Y = CurrentFootOffset[i];
						EffectorLocation.Z = 0;

						FTransform NewBoneTM = Solver.FootHitInfo.FootEffectorTransform_L_Target;
						//保证手脚位置与目标（初始）位置相同
						//在此基础上添加前向分量使其贴合
						FVector DeltaV = NewBoneTM.GetLocation() - Solver.FootHitInfo.FootEffectorTransform_L.GetLocation();

						Foot_L_Transform = Solver.FootHitInfo.FootTransform_L;
						Foot_L_Transform.SetLocation(Foot_L_Transform.GetLocation() + DeltaV + EffectorLocation);
						CurrentFootOffsetV[i] = FVector::ZeroVector;
					}
					
					else if(MovingState==0&&EnableComplexCollision)
					{
						
						FVector DeltaV;
						if (Solver.FootHitInfo.FootHit_L_Extra.bBlockingHit)
						{
							DeltaV = Context.ToRigSpace(Solver.FootHitInfo.FootHit_L_Extra.ImpactPoint) - Solver.FootHitInfo.FootEffectorTransform_L.GetLocation();
							
						}
						else
						
							DeltaV = FVector::ZeroVector;
						CurrentFootOffsetV[i] = FMath::VInterpTo(DeltaV, CurrentFootOffsetV[i], DeltaSeconds, 1);
						
						
						Foot_L_Transform = Solver.FootHitInfo.FootTransform_L;
						Foot_L_Transform.SetLocation(Foot_L_Transform.GetLocation() + CurrentFootOffsetV[i]);
					}
					else
						Foot_L_Transform = Solver.FootHitInfo.FootTransform_L;
					
				}
				if (ClimbIKControl != 4)
				{
					float HandOffset = Solver.HandHitInfo.HandOffset_L;
					
					if (MovingState == 2 && HandOffset > 20)
						HandOffset = 20;
					
					HandInterps[i].Target = HandOffset;
					HandInterps[i].Current = CurrentHandOffset[i];
					HandInterps[i].Execute(DeltaSeconds);
					CurrentHandOffset[i] = HandInterps[i].Result;
					
					//UE_LOG(LogIK, Log, TEXT("HandOffset %f"), CurrentHandOffset[i]);
					FVector EffectorLocation;

					EffectorLocation.X = 0;
					EffectorLocation.Y = CurrentHandOffset[i];
					EffectorLocation.Z = 0;
					
					FTransform NewBoneTM = Solver.HandHitInfo.HandTransform_L;
					FVector DeltaV = Solver.HandHitInfo.HandEffectorTransform_L_Target.GetLocation() - Solver.HandHitInfo.HandEffectorTransform_L.GetLocation() ;
					Hand_L_Transform = NewBoneTM;
					Hand_L_Transform.SetLocation(NewBoneTM.GetLocation() +DeltaV+ EffectorLocation);

				}
				
			}
			else
			{
				if (MovingState != 1 && ClimbIKControl != 3)
				{
					if (Solver.FootHitInfo.FootHit_R.bBlockingHit)
					{
						float FootOffset = Solver.FootHitInfo.FootOffset_R;

						if (MovingState == 2 && FootOffset > 20)
							FootOffset = 20;

						FootInterps[i].Target = FootOffset;
						FootInterps[i].Current = CurrentFootOffset[i];
						FootInterps[i].Execute(DeltaSeconds);
						CurrentFootOffset[i] = FootInterps[i].Result;
						//UE_LOG(LogIK, Log, TEXT("CurrentFootOffset %f"), CurrentFootOffset[i]);
						//CurrentFootOffset[i]=FMath::FInterpTo(CurrentFootOffset[i], FootOffset, DeltaSeconds, 2);
						FVector EffectorLocation;
						EffectorLocation.X = 0;
						EffectorLocation.Y = CurrentFootOffset[i];
						EffectorLocation.Z = 0;

						FTransform NewBoneTM = Solver.FootHitInfo.FootEffectorTransform_R_Target;
						FVector DeltaV = NewBoneTM.GetLocation() - Solver.FootHitInfo.FootEffectorTransform_R.GetLocation();


						//UE_LOG(LogIK, Log, TEXT("DeltaV %s"), *DeltaV.ToString());
						Foot_R_Transform = Solver.FootHitInfo.FootTransform_R;
						Foot_R_Transform.SetLocation(Foot_R_Transform.GetLocation() + DeltaV + EffectorLocation);
						CurrentFootOffsetV[i] = FVector::ZeroVector;
						
					}
					
					else if(MovingState==0&&EnableComplexCollision)
					{
						FVector DeltaV;
						if (Solver.FootHitInfo.FootHit_R_Extra.bBlockingHit)
						{
							DeltaV = Context.ToRigSpace(Solver.FootHitInfo.FootHit_R_Extra.ImpactPoint) - Solver.FootHitInfo.FootEffectorTransform_R.GetLocation();
						}
						else
							DeltaV = FVector::ZeroVector;
						
						
						CurrentFootOffsetV[i] = FMath::VInterpTo(DeltaV, CurrentFootOffsetV[i],DeltaSeconds,1);
						Foot_R_Transform = Solver.FootHitInfo.FootTransform_R;
						Foot_R_Transform.SetLocation(Foot_R_Transform.GetLocation() + CurrentFootOffsetV[i]);
					}
					else
					{
						Foot_R_Transform = Solver.FootHitInfo.FootTransform_R;
					}
					
				}
				if (ClimbIKControl != 4)
				{
					float HandOffset = Solver.HandHitInfo.HandOffset_R;
					
					if (MovingState == 2 && HandOffset > 20)
						HandOffset = 20;
					
					HandInterps[i].Target = HandOffset;
					HandInterps[i].Current = CurrentHandOffset[i];
					HandInterps[i].Execute(DeltaSeconds);
					CurrentHandOffset[i] = HandInterps[i].Result;

					//CurrentHandOffset[i]=FMath::FInterpTo(CurrentHandOffset[i], HandOffset, DeltaSeconds, 2);
					FVector EffectorLocation;
					EffectorLocation.X = 0;
					EffectorLocation.Y = CurrentHandOffset[i];
					EffectorLocation.Z = 0;
					//UE_LOG(LogIK, Log, TEXT("HandOffset %f"), CurrentHandOffset[i]);
					FTransform NewBoneTM = Solver.HandHitInfo.HandEffectorTransform_R_Target;
					FVector DeltaV = NewBoneTM.GetLocation() - Solver.HandHitInfo.HandEffectorTransform_R.GetLocation();
					Hand_R_Transform = Solver.HandHitInfo.HandTransform_R;
					Hand_R_Transform.SetLocation(Hand_R_Transform.GetLocation()+ DeltaV + EffectorLocation);
				}
			}
		}
		
	}
	
}
