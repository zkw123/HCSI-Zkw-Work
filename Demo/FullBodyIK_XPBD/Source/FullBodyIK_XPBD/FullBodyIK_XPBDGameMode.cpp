// Copyright Epic Games, Inc. All Rights Reserved.

#include "FullBodyIK_XPBDGameMode.h"
#include "FullBodyIK_XPBDCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFullBodyIK_XPBDGameMode::AFullBodyIK_XPBDGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
