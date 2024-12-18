// Fill out your copyright notice in the Description page of Project Settings.


#include "UCGPlayerState.h"

AUCGPlayerState::AUCGPlayerState()
{
	if (const auto World = GetWorld())
	{
		for (const auto Name : { "Name 1", "Name 2", "Name 3", "Name 4", "Name 5" })
		{
			auto Card = World->SpawnActor<ACardSimple>(ACardSimple::StaticClass());
			Card->SetDisplayName(Name);
			Cards.Add(Card);
		}
	}
}

void AUCGPlayerState::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Card Size: %d"), Cards.Num());
	for (const auto Card : Cards)
	{
		UE_LOG(LogTemp, Warning, TEXT("  Name: %s"), *Card->GetDisplayName());
	}
}
