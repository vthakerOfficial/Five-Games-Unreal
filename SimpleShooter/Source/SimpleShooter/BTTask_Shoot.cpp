// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_Shoot.h"
#include "AIController.h"
#include "ShooterCharacter.h"

UBTTask_Shoot::UBTTask_Shoot()
{
	NodeName = TEXT("Shoot Player");
}

EBTNodeResult::Type UBTTask_Shoot::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	if (!OwnerComp.GetAIOwner()) return EBTNodeResult::Failed;

	AShooterCharacter* ownerCharacter = Cast<AShooterCharacter>(OwnerComp.GetAIOwner()->GetPawn());

	if (!ownerCharacter) return EBTNodeResult::Failed;

	ownerCharacter->pullTrigger();

	

	return EBTNodeResult::Succeeded;
}
