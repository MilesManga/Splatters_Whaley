// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Splatters_WhaleyGameMode.h"
#include "Splatters_WhaleyHUD.h"
#include "Splatters_WhaleyCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASplatters_WhaleyGameMode::ASplatters_WhaleyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASplatters_WhaleyHUD::StaticClass();
}
