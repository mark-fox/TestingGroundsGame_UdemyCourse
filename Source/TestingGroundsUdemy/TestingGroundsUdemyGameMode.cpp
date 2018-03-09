// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TestingGroundsUdemyGameMode.h"
#include "TestingGroundsUdemyHUD.h"
#include "Player/FirstPersonCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestingGroundsUdemyGameMode::ATestingGroundsUdemyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Character/Character/Character"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestingGroundsUdemyHUD::StaticClass();
}
