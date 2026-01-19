#include "RotaionStep.h"

ARotaionStep::ARotaionStep()
{
 	PrimaryActorTick.bCanEverTick = true;
}

void ARotaionStep::BeginPlay()
{
	Super::BeginPlay();
}

void ARotaionStep::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FRotator DeltaRotation = GetActorRotation();
	DeltaRotation.Yaw = DeltaTime * RotationSpeed;
	AddActorLocalRotation(DeltaRotation, true);
}

