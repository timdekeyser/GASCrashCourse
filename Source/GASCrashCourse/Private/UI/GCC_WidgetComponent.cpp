// Copyright AAAAAA


#include "UI/GCC_WidgetComponent.h"

#include "AbilitySystem/GCC_AttributeSet.h"
#include"AbilitySystem/GCC_AbilitySystemComponent.h"
#include "Characters/GCC_BaseCharacter.h"


void UGCC_WidgetComponent::BeginPlay()
{
	Super::BeginPlay();

	InitAbilitySystemData();

	if (!IsASCInitialized())
	{
		CrashCharacter->OnASCInitialized.AddDynamic(this, &ThisClass::OnASCInitialized);
		return;
	}

	InitializeAttributesDelegate();
}

void UGCC_WidgetComponent::InitAbilitySystemData()
{
	CrashCharacter = Cast<AGCC_BaseCharacter>(GetOwner());
	AttributeSet = Cast<UGCC_AttributeSet>(CrashCharacter->GetAttributeSet());
	AbilitySystemComponent = Cast<UGCC_AbilitySystemComponent>(CrashCharacter->GetAbilitySystemComponent());
}

bool UGCC_WidgetComponent::IsASCInitialized() const
{
	return AbilitySystemComponent.IsValid() && AttributeSet.IsValid();
}

void UGCC_WidgetComponent::InitializeAttributesDelegate()
{
	if (!AttributeSet->bAttributeInitialized)
	{
		AttributeSet->OnAttributeInitialized.AddDynamic(this, &ThisClass::BindToAttributeChanges);
	}
	else
	{
		BindToAttributeChanges();
	}
}

void UGCC_WidgetComponent::OnASCInitialized(UAbilitySystemComponent* ASC, UAttributeSet* AS)
{
	AbilitySystemComponent = Cast<UGCC_AbilitySystemComponent>(ASC);
	AttributeSet = Cast<UGCC_AttributeSet>(AS);

	if (!IsASCInitialized()) return;
	InitializeAttributesDelegate();

	
}

void UGCC_WidgetComponent::BindToAttributeChanges()
{
	
}



