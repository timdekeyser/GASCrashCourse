// Copyright AAAAAA

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GCC_Abilities.generated.h"

UCLASS()
class GASCRASHCOURSE_API UGCC_Abilities : public UGameplayAbility
{
	GENERATED_BODY()
public:

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Crash|Debug")
	bool bDrawDebugs = false;
};
