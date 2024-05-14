// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterPlayerController.h"
#include "TimerManager.h"
#include "Blueprint/UserWidget.h"


void AShooterPlayerController::BeginPlay()
{
	Super::BeginPlay();
	if (HUDClass) {
		HUD = CreateWidget(this, HUDClass);
		HUD->AddToViewport();
	}
}
void AShooterPlayerController::GameHasEnded(AActor* EndGameFocus, bool bIsWinner)
{
	Super::GameHasEnded(EndGameFocus, bIsWinner);
	UE_LOG(LogTemp, Display, TEXT("Game has ended"));
	GetWorldTimerManager().SetTimer(restartTimer, this, &APlayerController::RestartLevel, restartDelay);
	if (HUD) {
		HUD->RemoveFromViewport();
	}
	if (bIsWinner) {
		UUserWidget* winScreen = CreateWidget(this, winScreenClass);
		if (winScreen) {
			winScreen->AddToViewport();
		}
	}
	else {
		UUserWidget* loseScreen = CreateWidget(this, loseScreenClass);
		if (loseScreen) {
			loseScreen->AddToViewport();
		}

	}
}
