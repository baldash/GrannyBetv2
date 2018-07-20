// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Runtime/Engine/Classes/Engine/TargetPoint.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FolderManager.generated.h"

UCLASS()
class GRANNYBETV2_API AFolderManager : public AActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ATargetPoint *spawnLocation;

	// Sets default values for this actor's properties
	AFolderManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SpawnFolder();

	// Add analytics functions to determine the grandpas deaths
	
};
