
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "MySpringInterp.generated.h"

/**
 *
 */


USTRUCT(BlueprintType, Blueprintable)
struct FMySpringInterp
{
	GENERATED_BODY()
	FMySpringInterp()
	{
		Current = Target = Result = 0.0f;
		Stiffness = 10.0f;
		CriticalDamping = 2.0f;
		Mass = 10.0f;

		SpringState = FFloatSpringState();
	}
public:
	void Execute(float DeltaTime);
	UPROPERTY(meta = (Input))
		float Current;

	UPROPERTY(meta = (Input))
		float Target;

	UPROPERTY(meta = (Input))
		float Stiffness;

	UPROPERTY(meta = (Input))
		float CriticalDamping;

	UPROPERTY(meta = (Input))
		float Mass;

	UPROPERTY(meta = (Output))
		float Result;

	UPROPERTY()
		FFloatSpringState SpringState;
};
USTRUCT(BlueprintType, Blueprintable)
struct FMySpringInterpVector
{
	GENERATED_BODY()

		FMySpringInterpVector()
	{
		Current = Target = Result = FVector::ZeroVector;
		Stiffness = 10.0f;
		CriticalDamping = 2.0f;
		Mass = 10.0f;
		SpringState = FVectorSpringState();
	}

public:
	void Execute(float DeltaTime);

	UPROPERTY(meta = (Input))
		FVector Current;

	UPROPERTY(meta = (Input))
		FVector Target;

	UPROPERTY(meta = (Input))
		float Stiffness;

	UPROPERTY(meta = (Input))
		float CriticalDamping;

	UPROPERTY(meta = (Input))
		float Mass;

	UPROPERTY(meta = (Output))
		FVector Result;

	UPROPERTY()
		FVectorSpringState SpringState;
};