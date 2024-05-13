// Fill out your copyright notice in the Description page of Project Settings.


#include "Tank.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
//#include "DrawDebugHelpers.h"


ATank::ATank()
{    
    SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
    SpringArm->SetupAttachment(RootComponent);
    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    Camera->SetupAttachment(SpringArm);

    Speed = 200;
    TurnRate = 45;

}
// Called when the game starts or when spawned
void ATank::BeginPlay()
{
	Super::BeginPlay();
    TankPlayerController = Cast<APlayerController>(GetController());
}


// called every frame
void ATank::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    if (TankPlayerController)
    {
        FHitResult HitResult; 
        TankPlayerController->GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, HitResult);

        RotateTurret(HitResult.ImpactPoint);
        /*DrawDebugSphere(
            GetWorld(),
            HitResult.ImpactPoint,
            25.f,
            12,
            FColor::Red,
            false,
            -1.f
        );*/
    }
}

void ATank::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);


    PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &ATank::Move);
    PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ATank::Turn);

    PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &ATank::Fire);
}
void ATank::HandleDestruction()
{
    Super::HandleDestruction();
    SetActorHiddenInGame(true);
    SetActorTickEnabled(false);
    bAlive = false;
}

void ATank::Move(float Value) 
{
    FVector DeltaLocation(0.f);

    // X = Value * DeltaTime * Speed
    auto DeltaTime = UGameplayStatics::GetWorldDeltaSeconds(this);
    DeltaLocation.X = Value * Speed * DeltaTime;
    AddActorLocalOffset(DeltaLocation, true);
}

void ATank::Turn(float Value)
{
    FRotator DeltaRotation = FRotator::ZeroRotator;
    // Yaw = DeltaTime * Value * TurnRate
    auto DeltaTime = UGameplayStatics::GetWorldDeltaSeconds(this);
    DeltaRotation.Yaw = Value * TurnRate * DeltaTime;
    AddActorLocalRotation(DeltaRotation, true);
}