// Fill out your copyright notice in the Description page of Project Settings.


#include "KillEmAllGameMode.h"
#include "EngineUtils.h"
#include "GameFramework/Controller.h"
#include "ShooterAiController.h"
void AKillEmAllGameMode::pawnKilled(APawn* pawnKilled)
{
	Super::pawnKilled(pawnKilled);
	UE_LOG(LogTemp, Display, TEXT("A Pawn was Killed"));
	
	APlayerController* playerController = Cast<APlayerController>(pawnKilled->GetController());
	
	if (playerController) {
		endGame(false);
	}
	else {
		for (AShooterAiController* controller : TActorRange<AShooterAiController>(GetWorld())) {
			if (controller && !controller->isDead()) {
				return; // game aint over yet
			}
		}
		endGame(true);
	}
	
}

void AKillEmAllGameMode::endGame(bool bIsPlayerWinner)
{
	for (AController* controller : TActorRange<AController>(GetWorld())) {
		bool bIsWinner = controller->IsPlayerController() == bIsPlayerWinner;
		controller->GameHasEnded(controller->GetPawn(), bIsWinner);
	}
}
