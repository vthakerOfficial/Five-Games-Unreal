// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterCharacter.h"
#include "Gun.h"
#include "Components/CapsuleComponent.h"
#include "SimpleShooterGameModeBase.h"

// Sets default values
AShooterCharacter::AShooterCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShooterCharacter::BeginPlay()
{
	Super::BeginPlay();;

	health = maxHealth;

	gun = GetWorld()->SpawnActor<AGun>(gunClass);
	GetMesh()->HideBoneByName(TEXT("weapon_r"), EPhysBodyOp::PBO_None);
	gun->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("WeaponSocket"));
	gun->SetOwner(this);
}

bool AShooterCharacter::isDead() const
{
	return health == 0;
}

// Called every frame
void AShooterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AShooterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AShooterCharacter::moveForward);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AShooterCharacter::lookUp);
	PlayerInputComponent->BindAxis(TEXT("LookUpRate"), this, &AShooterCharacter::lookUpRate);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AShooterCharacter::moveRight);
	PlayerInputComponent->BindAxis(TEXT("LookRight"), this, &AShooterCharacter::lookRight);
	PlayerInputComponent->BindAxis(TEXT("LookRightRate"), this, &AShooterCharacter::lookRightRate);
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &AShooterCharacter::jump);


	PlayerInputComponent->BindAction(TEXT("Shoot"), EInputEvent::IE_Pressed, this, &AShooterCharacter::pullTrigger);
}


void AShooterCharacter::moveForward(float axisValue) { AddMovementInput(GetActorForwardVector() * axisValue * speed); }
void AShooterCharacter::moveRight(float axisValue) {
	AddMovementInput(GetActorRightVector() * axisValue * speed);
}

void AShooterCharacter::lookUp(float axisValue) { AddControllerPitchInput(axisValue); }

void AShooterCharacter::lookUpRate(float axisValue) {
	AddControllerPitchInput(axisValue * rotationRate * GetWorld()->GetDeltaSeconds());
}

void AShooterCharacter::lookRight(float axisValue) {
	AddControllerYawInput(axisValue);
}

void AShooterCharacter::jump() {
	ACharacter::Jump();
}
void AShooterCharacter::lookRightRate(float axisValue) {
	AddControllerYawInput(axisValue * rotationRate * GetWorld()->GetDeltaSeconds());
}

void AShooterCharacter::pullTrigger() {
	gun->pullTrigger();
}

float AShooterCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float damageToApply = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	damageToApply = FMath::Min(health, damageToApply);
	health -= damageToApply;
	UE_LOG(LogTemp, Display, TEXT("Health left %f"), health);

	if (isDead()) {
		GetCapsuleComponent()->DestroyComponent();
		ASimpleShooterGameModeBase* GameMode = Cast<ASimpleShooterGameModeBase>(GetWorld()->GetAuthGameMode()); //GetWorld()->GetAuthGameMode<ASimpleShooterGameModeBase>(); 
		if (GameMode) {
			GameMode->pawnKilled(this);
		}
		DetachFromControllerPendingDestroy();
		//SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
	return damageToApply;
}

float AShooterCharacter::getHealthAsPercent() const
{
	return health / maxHealth;
}
