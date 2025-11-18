// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Display, TEXT("MovingPlatform Begin Play Changed!!"));

	movingPlatformStartingLocation = GetActorLocation();
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float movementIncrement = 0.0f;
	movementIncrement = positiveMoveDirection ? 100.0f : -100.0f;

	movingPlatformLocation += FVector{ movementIncrement * DeltaTime, 0.0f, 0.0f };
	SetActorLocation(movingPlatformLocation);

	if (movingPlatformLocation.X > (movingPlatformStartingLocation.X + 1000.0f) && positiveMoveDirection == true)
		positiveMoveDirection = false;

	if (movingPlatformLocation.X < (movingPlatformStartingLocation.X - 1000.0f) && positiveMoveDirection == false)
		positiveMoveDirection = true;
}

