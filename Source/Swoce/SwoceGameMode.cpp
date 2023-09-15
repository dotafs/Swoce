// Copyright Epic Games, Inc. All Rights Reserved.

#include "SwoceGameMode.h"
#include "SwoceCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASwoceGameMode::ASwoceGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
