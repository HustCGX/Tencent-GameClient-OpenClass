// Copyright Epic Games, Inc. All Rights Reserved.

#include "HomeworkOneGameMode.h"
#include "HomeworkOneHUD.h"
#include "HomeworkOneCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHomeworkOneGameMode::AHomeworkOneGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AHomeworkOneHUD::StaticClass();
}
