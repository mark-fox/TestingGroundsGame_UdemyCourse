// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TestingGroundsUdemyGameMode.h"
#include "TestingGroundsUdemyHUD.h"
#include "TestingGroundsUdemyCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestingGroundsUdemyGameMode::ATestingGroundsUdemyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestingGroundsUdemyHUD::StaticClass();
}
