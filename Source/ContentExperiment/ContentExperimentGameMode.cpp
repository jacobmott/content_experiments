// Copyright Epic Games, Inc. All Rights Reserved.

#include "ContentExperimentGameMode.h"
#include "ContentExperimentCharacter.h"
#include "UObject/ConstructorHelpers.h"

AContentExperimentGameMode::AContentExperimentGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
