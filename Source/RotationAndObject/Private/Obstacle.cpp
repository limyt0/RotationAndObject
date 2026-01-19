#include "Obstacle.h"

AObstacle::AObstacle()
{
 	PrimaryActorTick.bCanEverTick = true;
	offset = 0;
}

void AObstacle::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetActorLocation();
}

void AObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (isplus) {
		if (offset <= MaxRange) {
			offset += DeltaTime * MoveSpeed;
		}
		else {
			isplus = false;
		}
	}
	else {
		if (offset >= 0) {
			offset -= DeltaTime * MoveSpeed;
		}
		else {
			isplus = true;
		}
	}


	FVector fvector = FVector(StartLocation.X+ offset, StartLocation.Y, StartLocation.Z);
	//AddActorLocalTransform();
	SetActorLocation(fvector, true);
}

