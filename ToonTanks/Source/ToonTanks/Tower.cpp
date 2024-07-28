// Fill out your copyright notice in the Description page of Project Settings.


#include "Tower.h"
#include "Tank.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

// Sets default values
ATower::ATower()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATower::BeginPlay()
{
	Super::BeginPlay();

    Tank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0));

    GetWorldTimerManager().SetTimer(
        FireRateTimerHandle, 
        this, 
        &ATower::CheckFireCondition, 
        FireRate,
        true
    );

}

// Called every frame
void ATower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if (CheckInFireRange())
    {
        RotateTurret(Tank->GetActorLocation());
    }

}

void ATower::CheckFireCondition()
{
    if (Tank == nullptr) return;
    if (CheckInFireRange() && Tank->bAlive)
    {
        Fire();
    }
}

bool ATower::CheckInFireRange()
{
    if (Tank)
    {
        float Distance = FVector::Dist(Tank->GetActorLocation(), GetActorLocation());

        return Distance <= ShootDistance;
    }

    return false;
}

void ATower::HandleDestruction()
{
    Super::HandleDestruction();
    Destroy();
}