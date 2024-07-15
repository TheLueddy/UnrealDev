// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
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
	//Set travel speed + direction of platform
	UPROPERTY(EditAnywhere, Category="Moving Parameters")
	FVector PlatformVelocity = FVector(100, 0, 0);

	//Set rotation speed
	UPROPERTY(EditAnywhere, Category="Rotation Parameters")
	FRotator RotationVelocity;

	//Set allowed travel distance
	UPROPERTY(EditAnywhere, Category="Moving Parameters")
	float AllowedDistance = 100;

	//Get the traveled distance (Only information purpose)
	UPROPERTY(VisibleAnywhere, Category="Moving Parameters")
	float MovedDistance = 0;

	//Start location of platform in world
	FVector StartLocation;

	void MovePlatform(float DeltaTime);
	void RotatePlatform(float DeltaTime);
};
