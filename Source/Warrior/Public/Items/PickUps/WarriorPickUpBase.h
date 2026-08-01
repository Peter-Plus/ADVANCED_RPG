// Vince Petrelli All Rights Reserved

#pragma once

class USphereComponent;
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WarriorPickUpBase.generated.h"

UCLASS()
class WARRIOR_API AWarriorPickUpBase : public AActor
{
	GENERATED_BODY()
	
public:	
	AWarriorPickUpBase();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pick UP Interaction")
	USphereComponent* PickUpCollisionSphere;

	UFUNCTION()
	virtual void OnPickUpCollisionSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
