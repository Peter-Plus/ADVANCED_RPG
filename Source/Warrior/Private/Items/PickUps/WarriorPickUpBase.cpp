// Vince Petrelli All Rights Reserved


#include "Items/PickUps/WarriorPickUpBase.h"

// Sets default values
AWarriorPickUpBase::AWarriorPickUpBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWarriorPickUpBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWarriorPickUpBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

