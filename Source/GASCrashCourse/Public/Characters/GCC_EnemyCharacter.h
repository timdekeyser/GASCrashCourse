// Copyright AAAAAA

#pragma once

#include "CoreMinimal.h"
#include "GCC_BaseCharacter.h"
#include "GCC_EnemyCharacter.generated.h"

class UAttributeSet;
class UGCC_AbilitySystemComponent;

UCLASS()
class GASCRASHCOURSE_API AGCC_EnemyCharacter : public AGCC_BaseCharacter
{
	GENERATED_BODY()

public:
	AGCC_EnemyCharacter();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	virtual UAttributeSet* GetAttributeSet() const override;

protected:
	virtual void BeginPlay() override;

private:

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UGCC_AbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;

};
