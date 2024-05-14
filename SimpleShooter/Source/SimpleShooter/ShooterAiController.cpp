// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAiController.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "ShooterCharacter.h"

bool AShooterAiController::isDead() const
{
	AShooterCharacter* controlledCharacter = Cast<AShooterCharacter>(GetPawn());
	if (controlledCharacter) {
		return controlledCharacter->isDead();
	}
	return true;
}

void AShooterAiController::BeginPlay()
{
	Super::BeginPlay();

	if (AIBehavior != nullptr) {
		RunBehaviorTree(AIBehavior);
		GetBlackboardComponent()->SetValueAsVector(TEXT("StartLocation"), GetPawn()->GetActorLocation());
	}
}
