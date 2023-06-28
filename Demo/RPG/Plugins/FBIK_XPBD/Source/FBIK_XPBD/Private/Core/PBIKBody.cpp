
#include "Core/PBIKBody.h"
#include "Core/PBIKSolver.h"

namespace PBIK
{

FBone::FBone(
	const FName InName,
	const int& InParentIndex,	
	const FVector& InOrigPosition,
	const FQuat& InOrigRotation,
	bool bInIsSolverRoot)
{
	Name = InName;
	ParentIndex = InParentIndex;
	Position = InOrigPosition;
	Rotation = InOrigRotation;
	bIsSolverRoot = bInIsSolverRoot;
	bIsSolved = false; 
}

bool FBone::HasChild(const FBone* Bone)
{
	for (const FBone* Child : Children)
	{
		if (Bone->Name == Child->Name)
		{
			return true;
		}
	}

	return false;
}

FRigidBody::FRigidBody(FBone* InBone)
{
	Bone = InBone;
	J = FBoneSettings();
}

void FRigidBody::Initialize(FBone* SolverRoot)
{
	FVector Centroid = Bone->Position;
	Length = 0.0f;
	for(const FBone* Child : Bone->Children)
	{
		Centroid += Child->Position;
		Length += (Bone->Position - Child->Position).Size();
	}
	Centroid = Centroid * (1.0f / ((float)Bone->Children.Num() + 1.0f));

	Position = Centroid;
	Rotation = RotationOrig = Bone->Rotation;
	BoneLocalPosition = Rotation.Inverse() * (Bone->Position - Centroid);

	for (FBone* Child : Bone->Children)
	{
		FVector ChildLocalPos = Rotation.Inverse() * (Child->Position - Centroid);
		ChildLocalPositions.Add(ChildLocalPos);
	}

	// 计算每个骨骼与根骨骼之间的距离
	NumBonesToRoot = 0;
	FBone* Parent = Bone;
	while (Parent && Parent != SolverRoot)
	{
		NumBonesToRoot += 1;
		Parent = Parent->Parent;
	}
}

void FRigidBody::UpdateFromInputs(const FPBIKSolverSettings& Settings)
{
	//使用初始位置计算新的位置和旋转
	Position = Bone->Position - Bone->Rotation * BoneLocalPosition;
	Rotation = Bone->Rotation;

	// 使用骨骼长度作为质量的估计值
	// 对于有多个子骨骼的关节，其质量为所有子骨骼质量之和
	InvMass = 1.0f / ( Length * ((Settings.MassMultiplier * GLOBAL_UNITS) + 0.5f));
}

int FRigidBody::GetNumBonesToRoot() const
{ 
	return NumBonesToRoot; 
}

FRigidBody* FRigidBody::GetParentBody()
{
	if (Bone && Bone->Parent)
	{
		return Bone->Parent->Body;
	}

	return nullptr;
}

void FRigidBody::ApplyPushToRotateBody(const FVector& Push, const FVector& Offset)
{
	//"Detailed Rigid Body Simulation with XPBD"中的公式8
	FVector Omega = InvMass * (1.0f - J.RotationStiffness) * FVector::CrossProduct(Offset, Push);
	FQuat OQ(Omega.X, Omega.Y, Omega.Z, 0.0f);
	OQ = OQ * Rotation;
	OQ.X *= 0.5f;
	OQ.Y *= 0.5f;
	OQ.Z *= 0.5f;
	OQ.W *= 0.5f;
	Rotation.X = Rotation.X + OQ.X;
	Rotation.Y = Rotation.Y + OQ.Y;
	Rotation.Z = Rotation.Z + OQ.Z;
	Rotation.W = Rotation.W + OQ.W;
	Rotation.Normalize();
}

void FRigidBody::ApplyPushToPosition(const FVector& Push)
{
	if (AttachedEffector)
	{
		return; // 末端不会被力影响，其位置是固定的
	}

	Position += Push * (1.0f - J.PositionStiffness);
}

} 