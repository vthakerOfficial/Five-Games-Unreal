// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DamageEvents.h"
#include "Gun.generated.h"


UCLASS()
class SIMPLESHOOTER_API AGun : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGun();

	void pullTrigger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	bool gunTrace(FHitResult& hit, FVector& shotDirection);
	AController* getOwnerController() const;
private:
	UPROPERTY(VisibleAnywhere) USceneComponent* root;
	UPROPERTY(VisibleAnywhere) USkeletalMeshComponent* mesh;

	UPROPERTY(EditAnywhere) UParticleSystem* muzzleFlash;

	UPROPERTY(EditAnywhere) float maxRange = 1000; // 10 meters * 100

	UPROPERTY(EditAnywhere) UParticleSystem* impactParticles;

	UPROPERTY(EditAnywhere) float damage = 10;


	UPROPERTY(EditAnywhere) USoundBase* muzzleSound;
	UPROPERTY(EditAnywhere) USoundBase* impactSound;
};
