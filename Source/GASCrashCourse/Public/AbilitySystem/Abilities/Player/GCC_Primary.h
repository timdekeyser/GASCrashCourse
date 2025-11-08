// Copyright AAAAAA

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/GCC_Abilities.h"
#include "GCC_Primary.generated.h"

UCLASS()
class GASCRASHCOURSE_API UGCC_Primary : public UGCC_Abilities
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Crash|Abilities")
	TArray<AActor*> HitBoxOverlapTest();

	UFUNCTION(BlueprintCallable, Category = "Crash|Abilities")
	void SendHitReactEventToActors(const TArray<AActor*>& ActorsHit);

private:

	void DrawHitBoxOverlapDebugs(const TArray<FOverlapResult>& OverlapResults, const FVector& HitBoxLocation) const;

	UPROPERTY(EditDefaultsOnly, Category = "Crash|Abilities")
	float HitBoxRadius = 100.f;

	UPROPERTY(EditDefaultsOnly, Category = "Crash|Abilities")
	float HitBoxForwardOffset = 200.f;

	UPROPERTY(EditDefaultsOnly, Category = "Crash|Abilities")
	float HitBoxElevationOffset = 20.f;

	
};
