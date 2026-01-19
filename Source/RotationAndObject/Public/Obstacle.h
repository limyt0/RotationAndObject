#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obstacle.generated.h"

UCLASS()
class ROTATIONANDOBJECT_API AObstacle : public AActor
{
	GENERATED_BODY()
public:	
	AObstacle();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	float MoveSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	float MaxRange;
	
protected:
	virtual void BeginPlay() override;

	float offset;
	bool isplus;
	FVector StartLocation;
public:	
	virtual void Tick(float DeltaTime) override;
};
