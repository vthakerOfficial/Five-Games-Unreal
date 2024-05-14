// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ShooterCharacter.generated.h"

class AGun;

UCLASS()
class SIMPLESHOOTER_API AShooterCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AShooterCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	UFUNCTION(BlueprintPure) // same as blueprintcallable, and then some
	bool isDead() const;
	void pullTrigger();
private:
	void moveForward(float axisValue);
	void moveRight(float axisValue);
	void lookUp(float axisValue);
	void lookUpRate(float axisValue);
	void lookRight(float axisValue);
	void lookRightRate(float axisValue);
	void jump();
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser);
	UFUNCTION(BlueprintPure) float getHealthAsPercent() const;

private:
	UPROPERTY(EditAnywhere) float rotationRate = 10;
	UPROPERTY(EditDefaultsOnly) TSubclassOf<AGun> gunClass;
	UPROPERTY() AGun* gun;
	UPROPERTY(VisibleAnywhere) float health;
	float speed = 1; // failed attempt feel free to delete (but gotta remove from .cpp)
	UPROPERTY(EditDefaultsOnly) float maxHealth = 100;
};
