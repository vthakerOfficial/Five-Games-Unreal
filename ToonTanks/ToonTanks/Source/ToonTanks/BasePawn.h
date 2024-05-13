// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasePawn.generated.h"

UCLASS()
class TOONTANKS_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();

	// my stuff
	void HandleDestruction();
protected:
	void RotateTurret(FVector LookAtTarget);
	void Fire();

private:
	UPROPERTY(Category = "Super Duper Components", VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true")) class UCapsuleComponent* CapsuleComp;
	UPROPERTY(Category = "Super Duper Components", VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true")) UStaticMeshComponent* BaseMesh;
	UPROPERTY(Category = "Super Duper Components", VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true")) UStaticMeshComponent* TurretMesh;
	UPROPERTY(Category = "Super Duper Components", VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true")) USceneComponent* ProjectileSpawnPoint;


	UPROPERTY(EditDefaultsOnly, Category = "Combat") TSubclassOf<class AProjectile> ProjectileClass;
	UPROPERTY(EditAnywhere, Category = "Combat")
	class UParticleSystem* DeathParticles;

	UPROPERTY(EditAnywhere, Category = "Combat")
	class USoundBase* DeathSound;

	UPROPERTY(EditAnywhere, Category = "Combat")
	TSubclassOf<class UCameraShakeBase> DeathCameraShakeClass;

};
