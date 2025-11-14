// Copyright AAAAAA

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "Components/WidgetComponent.h"
#include "GCC_WidgetComponent.generated.h"

class UAbilitySystemComponent;
class UAttributeSet;
class UGCC_AttributeSet;
class AGCC_BaseCharacter;
class UGCC_AbilitySystemComponent;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class GASCRASHCOURSE_API UGCC_WidgetComponent : public UWidgetComponent
{
	GENERATED_BODY()

public:
	

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	TMap<FGameplayAttribute, FGameplayAttribute> AttributeMap;

private:
	TWeakObjectPtr<AGCC_BaseCharacter> CrashCharacter;
	TWeakObjectPtr<UGCC_AbilitySystemComponent> AbilitySystemComponent;
	TWeakObjectPtr<UGCC_AttributeSet> AttributeSet;
 
	void InitAbilitySystemData();
	bool IsASCInitialized() const;
	void InitializeAttributesDelegate();
	void BindWidgetToAttributeChange(UWidget* WidgetObject, const TTuple<FGameplayAttribute, FGameplayAttribute>& Pair) const;

	UFUNCTION()
	void OnASCInitialized(UAbilitySystemComponent* ASC, UAttributeSet* AS);

	UFUNCTION()
	void BindToAttributeChanges();
};
