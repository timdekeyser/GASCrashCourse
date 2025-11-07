// Copyright AAAAAA


#include "GASCrashCourse/Public/Characters/GCC_BaseCharacter.h"

#include "AbilitySystemComponent.h"
#include "GameplayAbilitySpec.h"


AGCC_BaseCharacter::AGCC_BaseCharacter()
{
	PrimaryActorTick.bCanEverTick = false;

	// Tick and refresh bone transform whether rendered or not - for bone updates on a dedicated server
	GetMesh()->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones; 
}

UAbilitySystemComponent* AGCC_BaseCharacter::GetAbilitySystemComponent() const
{
	return nullptr;
}

void AGCC_BaseCharacter::GiveStartupAbilities()
{
	if (!IsValid(GetAbilitySystemComponent())) return;
	
	for (const auto& Ability : StartupAbilities)
	{
		FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(Ability);
		GetAbilitySystemComponent()->GiveAbility(AbilitySpec);
	}
}


