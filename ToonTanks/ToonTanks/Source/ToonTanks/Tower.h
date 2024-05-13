// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tower.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATower : public ABasePawn
{
	GENERATED_BODY()
	
public:
	virtual void Tick(float DeltaTime) override;
protected:
	virtual void BeginPlay() override;

// my stuff

public:
	void HandleDestruction();

private:
	class ATank* Tank;
	
	UPROPERTY(Category = "Combat", EditDefaultsOnly) float FireRange;

	FTimerHandle FireRateTimerHandle;
	float FireRate = 2;
	void CheckFireCondition();

	bool InFireRange();
};
