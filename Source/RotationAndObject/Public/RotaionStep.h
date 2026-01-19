#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotaionStep.generated.h"

UCLASS()
class ROTATIONANDOBJECT_API ARotaionStep : public AActor
{
	GENERATED_BODY()
public:	
	ARotaionStep();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	float RotationSpeed;

protected:
	virtual void BeginPlay() override;
public:	
	virtual void Tick(float DeltaTime) override;
};
