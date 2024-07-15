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
	
	//Set StartLocation to spawning location of the platform in the world
	StartLocation = GetActorLocation();

}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MovePlatform(DeltaTime);	
	RotatePlatform(DeltaTime);
}

//Move the platform forwards and backwards
void AMovingPlatform::MovePlatform(float DeltaTime) {
	//Get current location
	FVector CurrentLocation = GetActorLocation();
	
	//Add vector to that location. FPS independent by multiplication with DeltaTime
	CurrentLocation += (PlatformVelocity * DeltaTime);
	
	//Set the new location
	SetActorLocation(CurrentLocation);
		
	//Check how far we've moved
	MovedDistance = FVector::Dist(StartLocation, CurrentLocation);
	
	//Reverse direction of movement if platform has gone too far
	if (MovedDistance >= AllowedDistance) {
		//Log message 
		//float OvershootValue = MovedDistance - AllowedDistance;
		//UE_LOG(LogTemp, Display, TEXT("Object Name: %s, Overshoot: %f"), *GetName(), OvershootValue);

		//Set new Start Location to the End Location of our Movement
		StartLocation = StartLocation + PlatformVelocity.GetSafeNormal() * AllowedDistance;
		SetActorLocation(StartLocation);

		//Reverse direction of the movement velocity
		PlatformVelocity = -PlatformVelocity;
	}
}

//Rotate the platform
void AMovingPlatform::RotatePlatform(float DeltaTime) {
	AddActorLocalRotation(RotationVelocity * DeltaTime);
}
