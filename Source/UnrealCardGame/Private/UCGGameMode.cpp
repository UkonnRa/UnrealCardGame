// Fill out your copyright notice in the Description page of Project Settings.


#include "UCGGameMode.h"

#include "UCGPlayerState.h"

AUCGGameMode::AUCGGameMode()
{
	PlayerStateClass = AUCGPlayerState::StaticClass();
}
