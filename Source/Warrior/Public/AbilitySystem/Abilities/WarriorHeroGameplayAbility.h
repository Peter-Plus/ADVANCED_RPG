// Vince Petrelli All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/WarriorGameplayAbility.h"
#include "WarriorHeroGameplayAbility.generated.h"

class AWarriorHeroCharacter;
class AWarriorHeroController;
/**
 * 
 */
UCLASS()
class WARRIOR_API UWarriorHeroGameplayAbility : public UWarriorGameplayAbility
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure,Category = "Warrior|Abilitiy")
	AWarriorHeroCharacter* GetHeroCharacterFromActorInfo();
	
	UFUNCTION(BlueprintPure,Category = "Warrior|Abilitiy")
	AWarriorHeroController* GetHeroControllerFromActorInfo();
	
	UFUNCTION(BlueprintPure,Category = "Warrior|Abilitiy")
	UHeroCombatComponent* GetHeroCombatComponentFromActorInfo();
	
	UFUNCTION(BlueprintPure,Category = "Warrior|Abilitiy")
	FGameplayEffectSpecHandle MakeHeroDamageEffectSpecHandle(TSubclassOf<UGameplayEffect> EffectClass,
		float InWeaponBaseDamage,FGameplayTag InCurrentAttackTypeTag,int32 InUsedComboCount);
	
	
private:
	TWeakObjectPtr<AWarriorHeroCharacter> CachedWarriorHeroCharacter;
	TWeakObjectPtr<AWarriorHeroController> CachedWarriorHeroController;
};
