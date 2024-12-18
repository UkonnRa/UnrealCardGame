// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "UCGCardSimple/CardSimple.h"
#include "UCGPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class UNREALCARDGAME_API AUCGPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	AUCGPlayerState();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere)
	TArray<TObjectPtr<ACardSimple>> Cards = {};
};
