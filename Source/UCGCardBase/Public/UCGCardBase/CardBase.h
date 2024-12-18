// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CardBase.generated.h"

UCLASS(Abstract)
class UCGCARDBASE_API ACardBase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACardBase();

private:
	UPROPERTY(EditAnywhere)
	FString CardId;

	UPROPERTY(EditAnywhere)
	FString DisplayName;

	UPROPERTY(EditAnywhere)
	FString Description;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	FString GetDisplayName()
	{
		return DisplayName;
	}

	UFUNCTION()
	void SetDisplayName(FString NewDisplayName)
	{
		DisplayName = NewDisplayName;
	}
};
