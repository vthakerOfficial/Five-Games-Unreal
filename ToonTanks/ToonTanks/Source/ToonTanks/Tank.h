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
	ATank();
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
// my stuff


public:
	void HandleDestruction();
	APlayerController* GetTankPlayerController() const { return TankPlayerController; }

public:
	bool bAlive = true;
private:
	UPROPERTY(Category = "Components", VisibleAnywhere) class USpringArmComponent* SpringArm;
	UPROPERTY(Category = "Components", VisibleAnywhere) class UCameraComponent* Camera;
	UPROPERTY(Category = "Movement", EditAnywhere, BluePrintReadWrite, meta = (AllowPrivateAccess = "true")) float Speed;
	UPROPERTY(Category = "Movement", EditAnywhere, BluePrintReadWrite, meta = (AllowPrivateAccess = "true")) float TurnRate;

private:
	void Move(float Value);

	void Turn(float Value);

	//void Fire() override;

	APlayerController* TankPlayerController;
};
