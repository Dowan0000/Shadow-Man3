// Copyright Epic Games, Inc. All Rights Reserved.

#include "S1GameMode.h"
#include "S1Character.h"
#include "UObject/ConstructorHelpers.h"

AS1GameMode::AS1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
