
#include "Core/PBIKConstraint.h"
#include "Core/PBIKSolver.h"
#include "Math/UnrealMathUtility.h"

namespace PBIK
{

	static float ALMOST_ONE = 1.0f - KINDA_SMALL_NUMBER;
	
FJointConstraint::FJointConstraint(FRigidBody* InA, FRigidBody* InB)
{
	A = InA;
	B = InB;

	FVector PinPoint = B->Bone->Position;
	PinPointLocalToA = A->Rotation.Inverse() * (PinPoint - A->Position);
	PinPointLocalToB = B->Rotation.Inverse() * (PinPoint - B->Position);

	XOrig = B->RotationOrig * FVector(1, 0, 0);
	YOrig = B->RotationOrig * FVector(0, 1, 0);
	ZOrig = B->RotationOrig * FVector(0, 0, 1);
}
	
void FJointConstraint::Solve(bool bMoveSubRoots)
{
	//根据位置校正量计算旋转
	FVector OffsetA;
	FVector OffsetB;
	FVector Correction = GetPositionCorrection(OffsetA, OffsetB);
	//Correction = Correction * OneOverInvMassSum;

	// 在关节处对上下骨骼分别进行旋转
	A->ApplyPushToRotateBody(Correction, OffsetA);//* AInvMass, OffsetA);
	B->ApplyPushToRotateBody(-Correction, OffsetB); //* BInvMass, OffsetB);

	// 根据关节约束调整
	UpdateJointLimits();

	// 计算上骨骼A的反质量
	float AInvMass = 1.0f;
	AInvMass -= A->AttachedEffector ? A->AttachedEffector->StrengthAlpha : 0.0f;
	AInvMass -= !bMoveSubRoots && A->Bone->bIsSubRoot ? 1.0f : 0.0f;
	AInvMass = AInvMass <= 0.0f ? 0.0f : AInvMass;

	// 计算下骨骼B的反质量
	float BInvMass = 1.0f;
	BInvMass -= B->AttachedEffector ? B->AttachedEffector->StrengthAlpha : 0.0f;
	BInvMass -= !bMoveSubRoots && B->Bone->bIsSubRoot ? 1.0f : 0.0f;
	BInvMass = BInvMass <= 0.0f ? 0.0f : BInvMass;

	float InvMassSum = AInvMass + BInvMass;
	if (FMath::IsNearlyZero(InvMassSum))
	{
		return; // 如果反质量接近0，也就是质量极大，这种情况下该关节不会运动，直接略过
	}
	float OneOverInvMassSum = 1.0f / InvMassSum;

	// 使用位置校正量将关节上下的两根骨骼连接在一起（防止身体骨骼脱节）
	// 注意：必须先进行旋转校正再位移校正（先位移的话旋转后骨骼又会被拉开）
	// 此时旋转校正已经完成
	Correction = GetPositionCorrection(OffsetA, OffsetB);
	Correction = Correction * OneOverInvMassSum;

	A->ApplyPushToPosition(Correction * AInvMass);
	B->ApplyPushToPosition(-Correction * BInvMass);
}

void FJointConstraint::RemoveStretch()
{
	//应用位置校正量使AB骨骼连接到一起
	FVector ToA;
	FVector ToB;
	FVector Correction = GetPositionCorrection(ToA, ToB);
	B->Position -= Correction;
}

FVector FJointConstraint::GetPositionCorrection(FVector& OutBodyToA, FVector& OutBodyToB)
{
	OutBodyToA = A->Rotation * PinPointLocalToA;
	OutBodyToB = B->Rotation * PinPointLocalToB;
	FVector PinPointOnA = A->Position + OutBodyToA;
	FVector PinPointOnB = B->Position + OutBodyToB;
	return (PinPointOnB - PinPointOnA);
}

void FJointConstraint::ApplyRotationCorrection(FQuat PureRotA, FQuat PureRotB)
{
	// 参考文献：https://matthias-research.github.io/pages/publications/PBDBodies.pdf/
	// "Detailed Rigid Body Simulation with Extended Position Based Dynamics"中的公式8和9 

	PureRotA.X *= 0.5f;
	PureRotA.Y *= 0.5f;
	PureRotA.Z *= 0.5f;
	PureRotB.X *= 0.5f;
	PureRotB.Y *= 0.5f;
	PureRotB.Z *= 0.5f;
	PureRotA = PureRotA * A->Rotation;
	PureRotB = PureRotB * B->Rotation;

	A->Rotation.X = A->Rotation.X + PureRotA.X;
	A->Rotation.Y = A->Rotation.Y + PureRotA.Y;
	A->Rotation.Z = A->Rotation.Z + PureRotA.Z;
	A->Rotation.W = A->Rotation.W + PureRotA.W;

	B->Rotation.X = B->Rotation.X - PureRotB.X;
	B->Rotation.Y = B->Rotation.Y - PureRotB.Y;
	B->Rotation.Z = B->Rotation.Z - PureRotB.Z;
	B->Rotation.W = B->Rotation.W - PureRotB.W;

	A->Rotation.Normalize();
	B->Rotation.Normalize();
}

void FJointConstraint::UpdateJointLimits()
{
	FBoneSettings& J = B->J;

	// 关节之间没有约束，直接return
	if (J.X == ELimitType::Free &&
		J.Y == ELimitType::Free &&
		J.Z == ELimitType::Free)
	{
		return;
	}

	// 如果最大角度小于最小角度，将最大角设为最小角+1
	J.MaxX = J.MaxX < J.MinX ? J.MinX + 1 : J.MaxX;
	J.MaxY = J.MaxY < J.MinY ? J.MinY + 1 : J.MaxY;
	J.MaxZ = J.MaxZ < J.MinZ ? J.MinZ + 1 : J.MaxZ;

	// 哪写轴不能移动
	bool bLockX = (J.X == ELimitType::Locked) || (J.X == ELimitType::Limited && ((J.MaxX - J.MinX) < 2.0f));
	bool bLockY = (J.Y == ELimitType::Locked) || (J.Y == ELimitType::Limited && ((J.MaxY - J.MinY) < 2.0f));
	bool bLockZ = (J.Z == ELimitType::Locked) || (J.Z == ELimitType::Limited && ((J.MaxZ - J.MinZ) < 2.0f));

	// 确定铰链约束（只能在在平面内转动）
	bool bXHinge = !bLockX && bLockY && bLockZ;
	bool bYHinge = bLockX && !bLockY && bLockZ;
	bool bZHinge = bLockX && bLockY && !bLockZ;

	// 计算铰链约束
	if (bXHinge)
	{
		UpdateLocalRotateAxes(true, false, false);
		FVector CrossProd = FVector::CrossProduct(XA, XB);
		FQuat PureRotA = FQuat(CrossProd.X, CrossProd.Y, CrossProd.Z, 0.0f);
		ApplyRotationCorrection(PureRotA, PureRotA);
	}
	else if (bYHinge)
	{
		UpdateLocalRotateAxes(false, true, false);
		FVector CrossProd = FVector::CrossProduct(YA, YB);
		FQuat PureRotA = FQuat(CrossProd.X, CrossProd.Y, CrossProd.Z, 0.0f);
		ApplyRotationCorrection(PureRotA, PureRotA);
	}
	else if (bZHinge)
	{
		UpdateLocalRotateAxes(false, false, true);
		FVector CrossProd = FVector::CrossProduct(ZA, ZB);
		FQuat PureRotA = FQuat(CrossProd.X, CrossProd.Y, CrossProd.Z, 0.0f);
		ApplyRotationCorrection(PureRotA, PureRotA);
	}

	if (bLockX || bLockY || bLockZ)
	{
		DecomposeRotationAngles(); 
	}

	if (bLockX)
	{
		RotateWithinLimits(0, 0, AngleX, XA, ZBProjOnX, ZA);
	}

	if (bLockY)
	{
		RotateWithinLimits(0, 0, AngleY, YA, ZBProjOnY, ZA);
	}

	if (bLockZ)
	{
		RotateWithinLimits(0, 0, AngleZ, ZA, YBProjOnZ, YA);
	}

	// 强制满足角度限制
	bool bLimitX = J.X == ELimitType::Limited && !bLockX;
	bool bLimitY = J.Y == ELimitType::Limited && !bLockY;
	bool bLimitZ = J.Z == ELimitType::Limited && !bLockZ;
	if (bLimitX || bLimitY || bLimitZ)
	{
		DecomposeRotationAngles();
	}

	if (bLimitX)
	{
		RotateWithinLimits(J.MinX, J.MaxX, AngleX, XA, ZBProjOnX, ZA);
	}

	if (bLimitY)
	{
		RotateWithinLimits(J.MinY, J.MaxY, AngleY, YA, ZBProjOnY, ZA);
	}

	if (bLimitZ)
	{
		RotateWithinLimits(J.MinZ, J.MaxZ, AngleZ, ZA, YBProjOnZ, YA);
	}
}

void FJointConstraint::RotateWithinLimits(
	float MinAngle,
	float MaxAngle,
	float CurrentAngle,
	FVector RotAxis,
	FVector CurVec,
	FVector RefVec)
{
	bool bBeyondMin = CurrentAngle < MinAngle;
	bool bBeyondMax = CurrentAngle > MaxAngle;
	if (bBeyondMin || bBeyondMax)
	{
		float TgtAngle = bBeyondMin ? MinAngle : MaxAngle;
		FQuat TgtRot = FQuat(RotAxis, FMath::DegreesToRadians(TgtAngle));
		FVector TgtVec = TgtRot * RefVec;
		FVector TgtCross = FVector::CrossProduct(TgtVec, CurVec);
		FQuat PureRot = FQuat(TgtCross.X, TgtCross.Y, TgtCross.Z, 0.0f);
		ApplyRotationCorrection(PureRot, PureRot);
	}
}

void FJointConstraint::UpdateLocalRotateAxes(bool bX, bool bY, bool bZ)
{
	FQuat ARot = A->Rotation * A->RotationOrig.Inverse();
	FQuat BRot = B->Rotation * B->RotationOrig.Inverse();

	if (bX)
	{
		XA = ARot * XOrig;
		XB = BRot * XOrig;
	}

	if (bY)
	{
		YA = ARot * YOrig;
		YB = BRot * YOrig;
	}

	if (bZ)
	{
		ZA = ARot * ZOrig;
		ZB = BRot * ZOrig;
	}
}

void FJointConstraint::DecomposeRotationAngles()
{
	FQuat ARot = A->Rotation * A->RotationOrig.Inverse();
	FQuat BRot = B->Rotation * B->RotationOrig.Inverse();

	XA = ARot * XOrig;
	YA = ARot * YOrig;
	ZA = ARot * ZOrig;
	XB = BRot * XOrig;
	YB = BRot * YOrig;
	ZB = BRot * ZOrig;

	ZBProjOnX = FVector::VectorPlaneProject(ZB, XA).GetSafeNormal();
	ZBProjOnY = FVector::VectorPlaneProject(ZB, YA).GetSafeNormal();
	YBProjOnZ = FVector::VectorPlaneProject(YB, ZA).GetSafeNormal();

	AngleX = SignedAngleBetweenNormals(ZA, ZBProjOnX, XA);
	AngleY = SignedAngleBetweenNormals(ZA, ZBProjOnY, YA);
	AngleZ = SignedAngleBetweenNormals(YA, YBProjOnZ, ZA);
}

float FJointConstraint::SignedAngleBetweenNormals(
	const FVector& From, 
	const FVector& To, 
	const FVector& Axis) const
{
	float FromDotTo = FVector::DotProduct(From, To);
	float Angle = FMath::RadiansToDegrees(FMath::Acos(FromDotTo));
	FVector Cross = FVector::CrossProduct(From, To); 
	float Dot = FVector::DotProduct(Cross, Axis);
	return Dot >= 0 ? Angle : -Angle;
}
	
FPinConstraint::FPinConstraint(FRigidBody* InBody, const FVector& InPinPoint)
{
	A = InBody;
	PinPointLocalToA = A->Rotation.Inverse() * (InPinPoint - A->Position);
	GoalPoint = InPinPoint;
}

void FPinConstraint::Solve(bool bMoveSubRoots)
{
	if (!bEnabled || (Alpha <= KINDA_SMALL_NUMBER))
	{
		return;
	}

	if (!bMoveSubRoots && A->Bone->bIsSubRoot)
	{
		return;
	}

	// 计算末端效应器的位置校正，用于拉伸和旋转
	FVector AToPinPoint;
	FVector Correction = GetPositionCorrection(AToPinPoint);

	// 从末端效应器开始旋转
	A->ApplyPushToRotateBody(Correction, AToPinPoint);

	// 旋转后，再次将末端拉到目标位置
	// 保证末端和目标位置重合是求解时的最优先事项，所有的迭代都在此基础上进行
	Correction = GetPositionCorrection(AToPinPoint);
	A->Position += Correction; 
}

FVector FPinConstraint::GetPositionCorrection(FVector& OutBodyToPinPoint) const
{
	OutBodyToPinPoint = A->Rotation * PinPointLocalToA;
	FVector PinPoint = A->Position + OutBodyToPinPoint;
	return (GoalPoint - PinPoint) * Alpha;
}

} 

