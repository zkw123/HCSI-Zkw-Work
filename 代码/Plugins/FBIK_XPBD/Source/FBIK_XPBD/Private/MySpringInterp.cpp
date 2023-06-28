
#include "MySpringInterp.h"
namespace RigUnitSpringInterpConstants
{
	static const float FixedTimeStep = 1.0f / 60.0f;
	static const float MaxTimeStep = 0.1f;
}
void FMySpringInterp::Execute(float DeltaTime)
{
	float RemainingTime = DeltaTime;
	//FMath::Min(Context.DeltaTime, RigUnitSpringInterpConstants::MaxTimeStep);

	Result = Current;
	while (RemainingTime >= RigUnitSpringInterpConstants::FixedTimeStep)
	{
		Result = UKismetMathLibrary::FloatSpringInterp(Result, Target, SpringState, Stiffness, CriticalDamping, RigUnitSpringInterpConstants::FixedTimeStep, Mass);
		RemainingTime -= RigUnitSpringInterpConstants::FixedTimeStep;
	}

	Result = UKismetMathLibrary::FloatSpringInterp(Result, Target, SpringState, Stiffness, CriticalDamping, RemainingTime, Mass);
}
void FMySpringInterpVector::Execute(float DeltaTime)
{



	// Clamp to avoid large time deltas.
	float RemainingTime = FMath::Min(DeltaTime, RigUnitSpringInterpConstants::MaxTimeStep);

	Result = Current;
	while (RemainingTime >= RigUnitSpringInterpConstants::FixedTimeStep)
	{
		Result = UKismetMathLibrary::VectorSpringInterp(Result, Target, SpringState, Stiffness, CriticalDamping, RigUnitSpringInterpConstants::FixedTimeStep, Mass);
		RemainingTime -= RigUnitSpringInterpConstants::FixedTimeStep;
	}

	Result = UKismetMathLibrary::VectorSpringInterp(Result, Target, SpringState, Stiffness, CriticalDamping, RemainingTime, Mass);

}