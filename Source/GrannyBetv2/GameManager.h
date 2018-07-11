// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameManager.generated.h"

UCLASS()
class GRANNYBETV2_API AGameManager : public AActor
{
	GENERATED_BODY()

public:	
	UPROPERTY(EditAnywhere)
	float maxTimer;
	
	// Sets default values for this actor's properties
	AGameManager();

protected:
	
	float timer;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintPure)
	int GetSeconds() const;
	
	UFUNCTION(BlueprintPure)
	float GetTimerProgression() const;
	
};
