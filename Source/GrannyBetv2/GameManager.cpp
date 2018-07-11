// Fill out your copyright notice in the Description page of Project Settings.

#include "GameManager.h"


// Sets default values
AGameManager::AGameManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	maxTimer = 30;
	timer = maxTimer;
}

// Called when the game starts or when spawned
void AGameManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGameManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	timer = (timer - DeltaTime > 0) ? timer - DeltaTime : 0;
}

int AGameManager::GetSeconds() const
{
	return static_cast<int>(timer);
}

float AGameManager::GetTimerProgression() const
{
	if (maxTimer > 0)
		return timer / maxTimer;

	return -1;
}

