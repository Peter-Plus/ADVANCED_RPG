// Vince Petrelli All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DataAsset_StartUpDataBase.generated.h"

class UWarriorGameplayAbility;
class UWarriorAbilitySystemComponent;
class UGameplayEffect;
/**
 * 角色GA资产：分为持续型和触发型
 * 玩家——DA_Hero
 */
UCLASS()
class WARRIOR_API UDataAsset_StartUpDataBase : public UDataAsset
{
	GENERATED_BODY()

public:
	// 将DA里的GA加到ASC上
	virtual void GiveToAbilitySystemComponent(UWarriorAbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1);


protected:
	UPROPERTY(EditDefaultsOnly, Category = "StartUpData")
	TArray<TSubclassOf <UWarriorGameplayAbility>> ActivateOnGivenAbilities;

	UPROPERTY(EditDefaultsOnly, Category = "StartUpData")
	TArray<TSubclassOf <UWarriorGameplayAbility>> ReactiveAbilities;
	
	UPROPERTY(EditDefaultsOnly, Category = "StartUpData")
	TArray<TSubclassOf <UGameplayEffect>> StartUpGameplayEffects;

	void GrantAbilities(const TArray<TSubclassOf <UWarriorGameplayAbility>>& InAbilitiesToGive, UWarriorAbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1);
};
