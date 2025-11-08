// Copyright AAAAAA

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/GCC_Abilities.h"
#include "GCC_HitReact.generated.h"

UCLASS()
class GASCRASHCOURSE_API UGCC_HitReact : public UGCC_Abilities
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Crash|Abilities" )
	void CacheHitDirectionVectors(AActor* Instigator);
	
	UPROPERTY(BlueprintReadOnly, Category = "Crash|Abilities")
	FVector AvatarForward;
	
	UPROPERTY(BlueprintReadOnly, Category = "Crash|Abilities")
	FVector ToInstigator;
};
	
	