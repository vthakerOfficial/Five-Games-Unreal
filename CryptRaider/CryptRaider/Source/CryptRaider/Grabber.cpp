// Fill out your copyright notice in the Description page of Project Settings.


#include "Grabber.h"

#include "Engine/World.h"
#include "DrawDebugHelpers.h"

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	UPhysicsHandleComponent* PhysicsHandle = GetPhysicsHandle();
	if (PhysicsHandle && PhysicsHandle->GetGrabbedComponent()) {
		FVector TargetLocation = GetComponentLocation() + GetForwardVector() * HoldDistance;
		PhysicsHandle->SetTargetLocationAndRotation(TargetLocation, GetComponentRotation());
	}
}

void UGrabber::Grab()
{
	UPhysicsHandleComponent* PhysicsHandle = GetPhysicsHandle();
	if (PhysicsHandle == nullptr) { return; }

	FHitResult HitResult;
	bool HasHit = GetGrabbableInReach(HitResult);
	if (HasHit) 
	{
		UPrimitiveComponent* HitComponent = HitResult.GetComponent();
		HitComponent->SetSimulatePhysics(true);
		HitComponent->WakeAllRigidBodies();
		AActor* HitActor = HitResult.GetActor();
		HitActor->Tags.Add("Grabbed");
		HitActor->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		PhysicsHandle->GrabComponentAtLocationWithRotation(
			HitComponent,
			NAME_None,
			HitResult.ImpactPoint,
			GetComponentRotation()
		);
	} 
	else 
	{
		UE_LOG(LogTemp, Display, TEXT("No Actor hit"));
	}
}

void UGrabber::Release() 
{
	UPhysicsHandleComponent* PhysicsHandle = GetPhysicsHandle();
	if (PhysicsHandle && PhysicsHandle->GetGrabbedComponent()) {
		UPrimitiveComponent* GrabbedComponent = PhysicsHandle->GetGrabbedComponent();
		AActor* GrabbedActor = GrabbedComponent->GetOwner();
		GrabbedActor->Tags.Remove("Grabbed");

		GrabbedComponent->WakeAllRigidBodies();
		PhysicsHandle->ReleaseComponent();
	}
}

UPhysicsHandleComponent* UGrabber::GetPhysicsHandle() const {
	UPhysicsHandleComponent* Output =  GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	if (!Output) { UE_LOG(LogTemp, Display, TEXT("Grabber requires a UPhysicsHandleComponent.")); }
	return Output;
}



bool UGrabber::GetGrabbableInReach(FHitResult& OutHitResult) const {
	FVector Start = GetComponentLocation();
	FVector End = Start  + GetForwardVector() * MaxGrabDistance;
	DrawDebugLine(GetWorld(), Start, End, FColor::Red);
	DrawDebugSphere(GetWorld(), End, 10, 10, FColor::Blue, false, 5);
	
	FCollisionShape Sphere = FCollisionShape::MakeSphere(GrabRadius);
	FHitResult HitResult;
	return GetWorld()->SweepSingleByChannel(
		OutHitResult, 
		Start, End, 
		FQuat::Identity, 
		ECC_GameTraceChannel2,
		Sphere
	);
}

