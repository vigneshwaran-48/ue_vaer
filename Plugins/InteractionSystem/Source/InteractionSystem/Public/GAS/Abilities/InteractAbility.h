// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Abilities/GameplayAbility.h"
#include "CoreMinimal.h"
#include "InteractAbility.generated.h"

UCLASS()
class INTERACTIONSYSTEM_API UInteractAbility : public UGameplayAbility {
  GENERATED_BODY()

 public:
  UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
  float InteractDistance = 500.f;

  UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
  float InteractRadius = 20.0f;

 protected:
  UInteractAbility();

  virtual void ActivateAbility(
      const FGameplayAbilitySpecHandle Handle,
      const FGameplayAbilityActorInfo* ActorInfo,
      const FGameplayAbilityActivationInfo ActivationInfo,
      const FGameplayEventData* TriggerEventData) override;

  // When ability ends (manual or automatic)
  virtual void EndAbility(const FGameplayAbilitySpecHandle Handle,
                          const FGameplayAbilityActorInfo* ActorInfo,
                          const FGameplayAbilityActivationInfo ActivationInfo,
                          bool bReplicateEndAbility,
                          bool bWasCancelled) override;

 private:
  TObjectPtr<AActor> TryGetInteractableInSight();
};
