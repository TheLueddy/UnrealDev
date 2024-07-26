// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tank.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATank : public ABasePawn
{
	GENERATED_BODY()
	
public:
	// Sets default values for this pawn's properties
	ATank();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, Category="Components")
	class USpringArmComponent* SpringArmComp;

	UPROPERTY(VisibleAnywhere, Category="Components")
	class UCameraComponent* CameraComp;

	UPROPERTY(EditAnywhere, Category="Movement")
	float MoveSpeed = 1.f;

	UPROPERTY(EditAnywhere, Category="Movement")
	float TurnSpeed = 1.f;

	void Move(float Value);
	void Turn(float Value);

	APlayerController* PlayerControllerRef;

};
