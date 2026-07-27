// Vince Petrelli All Rights Reserved


#include "Items/WarriorProjectileBase.h"

// Sets default values
AWarriorProjectileBase::AWarriorProjectileBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWarriorProjectileBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWarriorProjectileBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

