// Copyright Epic Games, Inc. All Rights Reserved.

#include "BombastManifestDemoGameMode.h"
#include "BombastManifestDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABombastManifestDemoGameMode::ABombastManifestDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
