// Copyright Epic Games, Inc. All Rights Reserved.

#include "MassAIGameMode.h"
#include "MassAICharacter.h"
#include "UObject/ConstructorHelpers.h"

AMassAIGameMode::AMassAIGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
