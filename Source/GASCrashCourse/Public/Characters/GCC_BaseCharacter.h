// Copyright AAAAAA

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "GCC_BaseCharacter.generated.h"

class UGameplayAbility;

UCLASS(Abstract)
class GASCRASHCOURSE_API AGCC_BaseCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	AGCC_BaseCharacter();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	
protected:
	void GiveStartupAbilities();
	
private:

	UPROPERTY(EditDefaultsOnly, Category = "Crash|Abilities")
	TArray<TSubclassOf<UGameplayAbility>> StartupAbilities;
	
	
};
