// Fill out your copyright notice in the Description page of Project Settings.

#include "AndroidGameGameModeBase.h"
#include "UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"

AAndroidGameGameModeBase::AAndroidGameGameModeBase()
{
	static ConstructorHelpers::FClassFinder<AHUD> GameHUDClass(TEXT("/Game/HUD/GameHUD"));
	HUDClass = GameHUDClass.Class;
	if (GameHUDClass.Class != NULL)
	{
		HUDClass = GameHUDClass.Class;
	}
}

