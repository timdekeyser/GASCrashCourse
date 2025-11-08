

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "GCC_PlayerState.generated.h"


class UAttributeSet;
class UGCC_AbilitySystemComponent;

UCLASS()
class GASCRASHCOURSE_API AGCC_PlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:
	AGCC_PlayerState();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetAttributeSet() const { return AttributeSet; };
private:

	UPROPERTY(VisibleAnywhere, Category = "Crash|Abilities")
	TObjectPtr<UGCC_AbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;
};
