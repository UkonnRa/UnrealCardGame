// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UCGCardBase/CardBase.h"
#include "CardSimple.generated.h"

UCLASS()
class UCGCARDSIMPLE_API ACardSimple : public ACardBase
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACardSimple();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
