// Copyright AAAAAA

#pragma once

#include "CoreMinimal.h"
#include "GCC_BaseCharacter.h"
#include "GCC_PlayerCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class GASCRASHCOURSE_API AGCC_PlayerCharacter : public AGCC_BaseCharacter
{
	GENERATED_BODY()

public:
	AGCC_PlayerCharacter();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

private:

	UPROPERTY(EditAnywhere, Category = "Camera")
	TObjectPtr<USpringArmComponent> CameraBoom;

	UPROPERTY(EditAnywhere, Category = "Camera")
	TObjectPtr<UCameraComponent> FollowCamera;
	
};
