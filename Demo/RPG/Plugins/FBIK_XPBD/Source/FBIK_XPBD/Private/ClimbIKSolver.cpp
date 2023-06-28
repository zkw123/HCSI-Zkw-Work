#include "ClimbIKSolver.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Units/RigUnitContext.h"
#include "Math/ControlRigMathLibrary.h"
#include "Components/PrimitiveComponent.h"
#include"DrawDebugHelpers.h"
DEFINE_LOG_CATEGORY(LogIKTest);
void FClimbIKSolver::Initialize(FName HandName_L, FName HandEffector_L, FName HandEffector_L_Idle,FName HandName_R, FName HandEffector_R, FName HandEffector_R_Idle,FName FootName_L, FName FootEffector_L, FName FootEffector_L_Idle,FName FootName_R, FName FootEffector_R, FName FootEffector_R_Idle)
{
	HandHitInfo.HandName_L = HandName_L;
	HandHitInfo.HandName_R = HandName_R;
	HandHitInfo.HandEffector_L = HandEffector_L;
	HandHitInfo.HandEffector_R = HandEffector_R;
	HandHitInfo.HandEffector_L_Idle = HandEffector_L_Idle;
	HandHitInfo.HandEffector_R_Idle = HandEffector_R_Idle;
	FootHitInfo.FootName_L = FootName_L;
	FootHitInfo.FootName_R = FootName_R;
	FootHitInfo.FootEffector_L = FootEffector_L;
	FootHitInfo.FootEffector_R = FootEffector_R;
	FootHitInfo.FootEffector_L_Idle = FootEffector_L_Idle;
	FootHitInfo.FootEffector_R_Idle = FootEffector_R_Idle;
}
void FClimbIKSolver::LinePlaneCross(FVector PlanePoint, FVector Normal, FVector StartPoint, FVector& Result)
{
	float cos = FVector::DotProduct(Forward, Normal);
	Result = StartPoint + (FVector::DotProduct(Normal, PlanePoint) - FVector::DotProduct(Normal, StartPoint))/cos*Forward;
}
void FClimbIKSolver::GetHitInfo(const UWorld* World, FTransform WorldSpaceTransform, FCollisionQueryParams Params,float BodyCapsuleWidth)
{
	
	FVector start;
	FVector end;
	//射线检测
	if (ClimbIkControl != 4)
	{
		//获取身体的forward向量，保证forward的Z轴分量为0
		Forward = WorldSpaceTransform.TransformPosition(FVector(0, 1, 0)) - WorldSpaceTransform.TransformPosition(FVector(0, -1, 0));
		Forward.Z = 0;
		Forward.Normalize();

		FVector HandLocation = HandHitInfo.HandEffectorTransform_L.GetLocation();
		//从-BodyCapsuleWidth到60的射线范围
		start = WorldSpaceTransform.TransformPosition(HandLocation) - BodyCapsuleWidth * Forward;
		end = WorldSpaceTransform.TransformPosition(HandLocation) + 60 * Forward;
		
		World->LineTraceSingleByChannel(HandHitInfo.HandHit_L, start, end, ECC_Visibility, Params);
		
		
		//DrawDebugLine(World, start, end, FColor::Red, false, 0.2,0,2);
		
		if (HandHitInfo.HandHit_L.bBlockingHit)
		{
			//使用预测的偏移量进行偏移
			//如果当前位置在Idle前方就以当前位置为准
			//如果当前位置在Idle后方以Idle位置为准
			float Distance = GetDistanceInControlRig(HandHitInfo.HandEffectorTransform_L, HandHitInfo.HandEffectorTransform_L_Idle);
			//UE_LOG(LogIKTest, Log, TEXT("Distance Hand_L:%f"), Distance);
			if (Distance<1 && MovingState != 1 && Prediction)
			{
				HandHitInfo.HandOffset_L = HandHitInfo.HandHit_L.Distance +Distance- BodyCapsuleWidth;
			}
			else
				HandHitInfo.HandOffset_L = HandHitInfo.HandHit_L.Distance - BodyCapsuleWidth;
			//如果距离过远，不进行拉抬，不然会导致姿态很奇怪
			if (abs(HandHitInfo.HandOffset_L) > 50)
			{
				HandHitInfo.HandOffset_L = 0;
				HandHitInfo.HandHit_L.bBlockingHit = false;
			}

			//DrawDebugLine(World, start, HandHitInfo.HandHit_L.ImpactPoint, FColor::Blue, false, 0.2, 0, 2);
			//DrawDebugLine(World, start, end, FColor::Yellow, false, 0.2, 0, 2);
		}
		else
			HandHitInfo.HandOffset_L = 0;

		HandLocation = HandHitInfo.HandEffectorTransform_R.GetLocation();
		start = WorldSpaceTransform.TransformPosition(HandLocation) - BodyCapsuleWidth * Forward;
		end = WorldSpaceTransform.TransformPosition(HandLocation) + 60 * Forward;
		World->LineTraceSingleByChannel(HandHitInfo.HandHit_R, start, end, ECC_Visibility, Params);
		//DrawDebugLine(World,start, end, FColor::Blue, false, 0.2, 0, 2);
		if (HandHitInfo.HandHit_R.bBlockingHit)
		{
			float Distance = GetDistanceInControlRig(HandHitInfo.HandEffectorTransform_R, HandHitInfo.HandEffectorTransform_R_Idle);
		
			if (Distance < 1 && MovingState != 1&&Prediction)
			{
				HandHitInfo.HandOffset_R = HandHitInfo.HandHit_R.Distance + Distance - BodyCapsuleWidth;
			}
			else
				HandHitInfo.HandOffset_R = HandHitInfo.HandHit_R.Distance - BodyCapsuleWidth;
			
			if (abs(HandHitInfo.HandOffset_R) > 50)
			{
				HandHitInfo.HandOffset_R = 0;
				HandHitInfo.HandHit_R.bBlockingHit = false;
			}

			//DrawDebugLine(World, start, HandHitInfo.HandHit_R.ImpactPoint, FColor::Blue, false, 0.2, 0, 2);
		}
		else
			HandHitInfo.HandOffset_R = 0;
	}
	if (MovingState != 1&&ClimbIkControl!=3)
	{
		//脚部范围是-BodyCapsuleWidth到100，且没有范围限制
		//因为脚部本身长度较大，就算是较远的拉抬实际效果也比较合理
		FVector FootLocation = FootHitInfo.FootEffectorTransform_L.GetLocation();
		start = WorldSpaceTransform.TransformPosition(FootLocation)-BodyCapsuleWidth*Forward;
		end= WorldSpaceTransform.TransformPosition(FootLocation) + 100 * Forward;
		World->LineTraceSingleByChannel(FootHitInfo.FootHit_L, start,end, ECC_Visibility, Params);
		//UKismetSystemLibrary::BoxTraceSingle
		
		
		//DrawDebugLine(World, start,end, FColor::Blue, false, 0.2, 0, 2);
		//WorldSpaceTransform.GetRotation().Rotator();
		if (FootHitInfo.FootHit_L.bBlockingHit)
		{

			float Distance = GetDistanceInControlRig(FootHitInfo.FootEffectorTransform_L, FootHitInfo.FootEffectorTransform_L_Idle);
			//UE_LOG(LogIKTest, Log, TEXT("Distance Foot_L:%f"), Distance);
			if (Distance < 1 && Prediction)
			{
				FootHitInfo.FootOffset_L = FootHitInfo.FootHit_L.Distance + Distance - BodyCapsuleWidth;
			}
			else
				FootHitInfo.FootOffset_L = FootHitInfo.FootHit_L.Distance - BodyCapsuleWidth;
		}
		else if(MovingState==0&&EnableComplexCollision)
		{
			
			FootHitInfo.FootOffset_L = 0;
			World->SweepSingleByChannel(FootHitInfo.FootHit_L_Extra, start, end, WorldSpaceTransform.GetRotation(), ECC_Visibility, FCollisionShape::MakeBox(FVector(0.1, 0.5, 40)), Params);
			//DrawDebugBox(World, FootHitInfo.FootHit_L_Extra.ImpactPoint, FVector(0.1, 0.5, 40), WorldSpaceTransform.GetRotation(), FColor::Blue, false, 5.0f, 3.0f,5.0f);
		}
		else
			FootHitInfo.FootOffset_L = 0;
		FootLocation = FootHitInfo.FootEffectorTransform_R.GetLocation();
		start = WorldSpaceTransform.TransformPosition(FootLocation) - BodyCapsuleWidth * Forward;
		end = WorldSpaceTransform.TransformPosition(FootLocation) + 100 * Forward;
		World->LineTraceSingleByChannel(FootHitInfo.FootHit_R, start, end, ECC_Visibility, Params);
		
		if (FootHitInfo.FootHit_R.bBlockingHit)
		{
			float Distance = GetDistanceInControlRig(FootHitInfo.FootEffectorTransform_R, FootHitInfo.FootEffectorTransform_R_Idle);
			//UE_LOG(LogIKTest, Log, TEXT("Distance Foot_R:%f"), Distance);
			if (Distance < 1 && Prediction)
			{
				FootHitInfo.FootOffset_R = FootHitInfo.FootHit_R.Distance + Distance - BodyCapsuleWidth;
			}
			else
			FootHitInfo.FootOffset_R = FootHitInfo.FootHit_R.Distance - BodyCapsuleWidth;
		}
		
		
		else if(MovingState==0&&EnableComplexCollision)
		{
			
			FootHitInfo.FootOffset_R = 0;
			World->SweepSingleByChannel(FootHitInfo.FootHit_R_Extra, start, end, WorldSpaceTransform.GetRotation(), ECC_Visibility, FCollisionShape::MakeBox(FVector(0.1, 0.5, 60)), Params);
		}
		else
			FootHitInfo.FootOffset_R = 0;
	}
}
void FClimbIKSolver::UpdateGlobalTransform(FRigBoneHierarchy& Bones)
{
	//旋转后更新位置
	if (MovingState == 1)
	{
		HandHitInfo.HandEffectorTransform_L = Bones.GetGlobalTransform(HandHitInfo.HandEffector_L);
		//PrintTransform(HandHitInfo.HandEffectorTransform_L, "HandOriEffector_L");
		HandHitInfo.HandEffectorTransform_R = Bones.GetGlobalTransform(HandHitInfo.HandEffector_R);
		//PrintTransform(HandHitInfo.HandEffectorTransform_R, "HandOriEffector_R");
	}
	

	//输出可以用来获取Idle状态Effector位置
	else
	{
		HandHitInfo.HandEffectorTransform_L = Bones.GetGlobalTransform(HandHitInfo.HandEffector_L);
		
		HandHitInfo.HandEffectorTransform_R = Bones.GetGlobalTransform(HandHitInfo.HandEffector_R);
		
		FootHitInfo.FootEffectorTransform_L = Bones.GetGlobalTransform(FootHitInfo.FootEffector_L);
		
		FootHitInfo.FootEffectorTransform_R = Bones.GetGlobalTransform(FootHitInfo.FootEffector_R);
		
		if (TransformOutput)
		{
			PrintTransform(HandHitInfo.HandEffectorTransform_L, "HandEffector_L");
			PrintTransform(HandHitInfo.HandEffectorTransform_R, "HandEffector_R");
			PrintTransform(FootHitInfo.FootEffectorTransform_L, "FootEffector_L");
			PrintTransform(FootHitInfo.FootEffectorTransform_R, "FootEffector_R");
		}
	}
	
	HandHitInfo.HandTransform_L = Bones.GetGlobalTransform(HandHitInfo.HandName_L);
	
	HandHitInfo.HandTransform_R = Bones.GetGlobalTransform(HandHitInfo.HandName_R);
	FootHitInfo.FootTransform_L = Bones.GetGlobalTransform(FootHitInfo.FootName_L);
	FootHitInfo.FootTransform_R = Bones.GetGlobalTransform(FootHitInfo.FootName_R);
	HandHitInfo.HandEffectorTransform_L_Idle = Bones.GetGlobalTransform(HandHitInfo.HandEffector_L_Idle);
	HandHitInfo.HandEffectorTransform_R_Idle = Bones.GetGlobalTransform(HandHitInfo.HandEffector_R_Idle);
	
	FootHitInfo.FootEffectorTransform_L_Idle = Bones.GetGlobalTransform(FootHitInfo.FootEffector_L_Idle);
	FootHitInfo.FootEffectorTransform_R_Idle = Bones.GetGlobalTransform(FootHitInfo.FootEffector_R_Idle);
	
}

FQuat FClimbIKSolver::GetRotator(FVector Axis, FVector Normal,FTransform RootTransform)
{
	//根据目标向量和当前向量计算旋转角度
	Axis = RootTransform.TransformVectorNoScale(Axis).GetSafeNormal();
	Axis = RootTransform.GetRotation() * Axis;
	FQuat Rotation = FQuat::FindBetweenNormals(Axis, Normal);
	
	//对旋转角度进行限制，不允许绕Y轴的旋转
	//注：在Control Rig中，y轴对应前方，Z对应上方，X对应右方
	Rotation = RotateWithinLimits(Rotation, 15, -30, 0, 0, 10, -10);
	
	return Rotation;
}
void FClimbIKSolver::PrintTransform(FTransform Transform, FString s)
{
	FString a = s +":"+ Transform.ToString();

	UE_LOG(LogIKTest, Log, TEXT("%s"), *a);
}
FQuat FClimbIKSolver::RotateWithinLimits(FQuat Rotation, float LimitX_Max, float LimitX_Min, float LimitY_Max, float LimitY_Min, float LimitZ_Max, float LimitZ_Min)
{
	
	FVector Euler = Rotation.Euler();
	if (Euler.X > LimitX_Max)
		Euler.X = LimitX_Max;
	else if (Euler.X < LimitX_Min)
		Euler.X = LimitX_Min;
	if (Euler.Y > LimitY_Max)
		Euler.Y = LimitY_Max;
	else if (Euler.Y < LimitY_Min)
		Euler.Y = LimitY_Min;
	if (Euler.Z > LimitZ_Max)
		Euler.Z = LimitZ_Max;
	else if (Euler.Z < LimitZ_Min)
		Euler.Z = LimitZ_Min;
	
	return UKismetMathLibrary::Quat_MakeFromEuler(Euler);
	
	
}
//当前位置与Idle位置的差值，用于移动中预测偏移量
float FClimbIKSolver::GetDistanceInControlRig(FTransform Effector, FTransform Idle)
{
	return (Effector.GetLocation().Y - Idle.GetLocation().Y);
}