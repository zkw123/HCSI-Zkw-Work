
#pragma once

#include "PBIKBody.h"

namespace PBIK
{

struct FConstraint
{
	bool bEnabled = true;

	virtual void Solve(bool bMoveSubRoots) = 0;
	virtual void RemoveStretch() {};
};

struct FJointConstraint : public FConstraint
{

private:

	FRigidBody* A;
	FRigidBody* B;

	FVector PinPointLocalToA;
	FVector PinPointLocalToB;

	FVector XOrig;
	FVector YOrig;
	FVector ZOrig;

	FVector XA;
	FVector YA;
	FVector ZA;
	FVector XB;
	FVector YB;
	FVector ZB;

	FVector ZBProjOnX;
	FVector ZBProjOnY;
	FVector YBProjOnZ;

	float AngleX;
	float AngleY;
	float AngleZ;

public:

	FJointConstraint(FRigidBody* InA, FRigidBody* InB);

	virtual ~FJointConstraint() {};

	virtual void Solve(bool bMoveSubRoots) override;

	virtual void RemoveStretch() override;

private:

	FVector GetPositionCorrection(FVector& OutBodyToA, FVector& OutBodyToB);

	void ApplyRotationCorrection(FQuat PureRotA, FQuat PureRotB);

	void UpdateJointLimits();

	void RotateWithinLimits(
		float MinAngle,
		float MaxAngle,
		float CurrentAngle,
		FVector RotAxis,
		FVector CurVec,
		FVector RefVec);

	void UpdateLocalRotateAxes(bool bX, bool bY, bool bZ);

	void DecomposeRotationAngles();

	float SignedAngleBetweenNormals(
		const FVector& From,
		const FVector& To,
		const FVector& Axis) const;
};

struct FPinConstraint : public FConstraint
{
	FVector GoalPoint;
	FRigidBody* A;
	FVector PinPointLocalToA;
	float Alpha = 1.0;

public:

	FPinConstraint(FRigidBody* InBody, const FVector& InPinPoint);

	virtual ~FPinConstraint() {};

	virtual void Solve(bool bMoveSubRoots) override;

private:

	FVector GetPositionCorrection(FVector& OutBodyToPinPoint) const;
};

} 

