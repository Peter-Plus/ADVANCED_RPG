// Vince Petrelli All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/WarriorHeroGameplayAbility.h"
#include "HeroGameplayAbility_TargetLock.generated.h"

class UWarriorWidgetBase;
class UInputMappingContext;
/**
 * 
 */
UCLASS()
class WARRIOR_API UHeroGameplayAbility_TargetLock : public UWarriorHeroGameplayAbility
{
	GENERATED_BODY()
	
protected:
	//~ Begin UGameplayAbility Interface
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	//~ End UGameplayAbility Interface
	
	UFUNCTION(BlueprintCallable)
	void OnTargetLockTick(float DeltaTime);
	
	UFUNCTION(BlueprintCallable)
	void SwitchTarget(const FGameplayTag& InSwitchDirectionTag);
	
private:
	bool TryLockOnTarget();
	// 获取视野内的目标缓存到AvailableActorsToLock
	void GetAvailableActorsToLock();
	// 找到最近的目标
	AActor* GetNearestTargetFromAvailableActors(const TArray<AActor*>& InAvailableActors);
	// 找到当前目标左右的目标集合
	void GetAvailableActorsAroundTarget(TArray<AActor*>& OutActorsOnLeft,TArray<AActor*>& OutActorsOnRight);
	// 绘制索敌UI
	void DrawTargetLockWidget();
	// 设置索敌UI屏幕坐标
	void SetTargetLockWidgetPosition();
	
	void InitTargetLockMovement();
	void ResetTargetLockMovement();
	
	void InitTargetLockMappingContext();
	void ResetTargetLockMappingContext();
	
	void CancelTargetLockAbility();
	void CleanUp();
	
	UPROPERTY(EditDefaultsOnly, Category = "Target Lock")
	float BoxTraceDistance = 5000.f;

	UPROPERTY(EditDefaultsOnly, Category = "Target Lock")
	FVector TraceBoxSize = FVector(5000.f,5000.f,300.f);

	UPROPERTY(EditDefaultsOnly, Category = "Target Lock")
	TArray< TEnumAsByte < EObjectTypeQuery > > BoxTraceChannel;

	UPROPERTY(EditDefaultsOnly, Category = "Target Lock")
	bool bShowPersistentDebugShape = false;
	
	UPROPERTY(EditDefaultsOnly, Category = "Target Lock")
	TSubclassOf<UWarriorWidgetBase> TargetLockWidgetClass;
	
	UPROPERTY(EditDefaultsOnly, Category = "Target Lock")
	float TargetLockRotationInterpSpeed = 5.f;
	
	UPROPERTY(EditDefaultsOnly, Category = "Target Lock")
	float TargetLockMaxWalkSpeed = 150.f;
	
	UPROPERTY(EditDefaultsOnly, Category = "Target Lock")
	UInputMappingContext* TargetLockMappingContext;
	
	UPROPERTY(EditDefaultsOnly, Category = "Target Lock")
	float TargetLockCameraOffsetDistance = 20.f;
	
	UPROPERTY()
	float CachedDefaultMaxWalkSpeed = 0.f;

	UPROPERTY()
	TArray<AActor*> AvailableActorsToLock;
	
	UPROPERTY()
	AActor* CurrentLockedActor;
	
	UPROPERTY()
	UWarriorWidgetBase* DrawnTargetLockWidget;
	
	UPROPERTY()
	FVector2D TargetLockWidgetSize = FVector2D::ZeroVector;
};
