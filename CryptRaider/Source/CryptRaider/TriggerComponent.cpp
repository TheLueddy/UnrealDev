// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerComponent.h"

// Sets default values for this component's properties
UTriggerComponent::UTriggerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTriggerComponent::BeginPlay()
{
	Super::BeginPlay();
    
    Mover = MovableActor->FindComponentByClass<UMover>();
    if (Mover == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("No Mover found! Please check if MovableActor has been set, and if it has a Mover component."));
    }
}


// Called every frame
void UTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    AActor* AcceptedActor = GetAcceptableActor();
    if (AcceptedActor != nullptr)
    {
        //UE_LOG(LogTemp, Display, TEXT("Unlocked!"));
        UPrimitiveComponent* Component = Cast<UPrimitiveComponent>(AcceptedActor->GetRootComponent());
        if (Component != nullptr)
        {
            Component->SetSimulatePhysics(false);
        }
        AcceptedActor->AttachToComponent(
            this,
            FAttachmentTransformRules::SnapToTargetNotIncludingScale
        );
        AcceptedActor->SetActorRelativeRotation(FRotator::ZeroRotator);
        Mover->SetShouldMove(true);
    }
    else
    {
        //UE_LOG(LogTemp, Display, TEXT("Locked!"));
        Mover->SetShouldMove(false);
    }
}

AActor* UTriggerComponent::GetAcceptableActor() const
{
    TArray<AActor*> Actors;
    GetOverlappingActors(Actors);

    for (AActor* CurrentActor : Actors)
    {
        if (CurrentActor->ActorHasTag(TagName) && !CurrentActor->ActorHasTag("Grabbed"))
        {
            return CurrentActor;
        }
    }

    return nullptr;
}