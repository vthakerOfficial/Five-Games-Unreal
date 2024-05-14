// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
//#include "DamageEvents.h"


// Sets default values
AGun::AGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	SetRootComponent(root);
	mesh->SetupAttachment(root);

}

// Called when the game starts or when spawned
void AGun::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGun::pullTrigger() {
	UGameplayStatics::SpawnEmitterAttached(muzzleFlash, mesh, TEXT("MuzzleFlashSocket"));
	UGameplayStatics::SpawnSoundAttached(muzzleSound, mesh, TEXT("MuzzleFlashSocket"));

	FHitResult hitResult;
	FVector shotDirection;
	bool bHitSomething = gunTrace(hitResult, shotDirection);
	if (bHitSomething)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), impactParticles, hitResult.Location, shotDirection.Rotation());
		UGameplayStatics::SpawnSoundAtLocation(GetWorld(), impactSound, hitResult.Location, shotDirection.Rotation());

		AActor* hitActor = hitResult.GetActor();
		if (hitActor) 
		{
			FPointDamageEvent damageEvent(damage, hitResult, shotDirection, nullptr);
			hitActor->TakeDamage(damage, damageEvent, getOwnerController(), this);
		}
		else {
		}
	}
	//UE_LOG(LogTemp, Display, TEXT("%s"), hitResult);
	//UE_LOG(LogTemp, Warning, TEXT("Pulled trigger"));
}

bool AGun::gunTrace(FHitResult& hitResult, FVector& shotDirection)
{
	AController* ownerController = getOwnerController();
	if (!ownerController) return false;

	FVector camLocation;
	FRotator camRotation;
	ownerController->GetPlayerViewPoint(camLocation, camRotation);
	shotDirection = -camRotation.Vector();

	//DrawDebugPoint(GetWorld(), hitResult.Location, 20, FColor::Red, false, 5.0f); // camLocation, endLocation, FColor::Red, false, 3.0f);
	//DrawDebugCamera(GetWorld(), camLocation, camRotation, 103, 1.0F, FColor::Red, false, 3.0f);

	FCollisionQueryParams collisionIgnoreList;
	collisionIgnoreList.AddIgnoredActor(this);
	collisionIgnoreList.AddIgnoredActor(GetOwner());


	FVector endLocation = camLocation + camRotation.Vector() * maxRange;
	return GetWorld()->LineTraceSingleByChannel(hitResult, camLocation, endLocation, ECollisionChannel::ECC_GameTraceChannel1, collisionIgnoreList);
}
AController* AGun::getOwnerController() const
{
	APawn* ownerPawn = Cast<APawn>(GetOwner());  // dont need to typecast to ashooter character bcuz just need the APawn aspect of it
	if (!ownerPawn) return nullptr;

	return ownerPawn->GetController();
}