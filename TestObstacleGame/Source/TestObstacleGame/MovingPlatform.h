// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class TESTOBSTACLEGAME_API AMovingPlatform : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	FVector movingPlatformTranslationVelocity = { 0.0f, 0.0f, 0.0f };
	UPROPERTY(EditAnywhere)
	FRotator movingPlatformRotationVelocity = { 0.0f, 0.0f, 0.0f };

	UPROPERTY(EditAnywhere)
	float maxMovingDistance = 100.0f;

public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void MovePlatform(float DeltaTime);
	void RotatePlatform(float DeltaTime);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	FVector movingPlatformStartingLocation = { 0.0f, 0.0f, 0.0f };
	FRotator movingPlatformStartingRotation = { 0.0f, 0.0f, 0.0f };
	FVector movingPlatformCurrentLocation = { 0.0f, 0.0f, 0.0f };
	FRotator movingPlatformCurrentRotation = { 0.0f, 0.0f, 0.0f };
};
