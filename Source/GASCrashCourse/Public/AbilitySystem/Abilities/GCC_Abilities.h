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

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Crash|Debug")
	bool bDrawDebugs = false;
};
