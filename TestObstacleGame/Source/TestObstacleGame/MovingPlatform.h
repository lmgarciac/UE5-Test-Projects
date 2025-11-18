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
	float memberVariableFloat = 1.0f;

	UPROPERTY(VisibleAnywhere)
	int memberVariableInt = 150;

	UPROPERTY(EditAnywhere)
	FVector movingPlatformLocation = {1.0f, 2.0f, 3.0f};

public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	FVector movingPlatformStartingLocation = { 0.0f, 0.0f, 0.0f };
	bool positiveMoveDirection = true;
};
