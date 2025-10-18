// Fill out your copyright notice in the Description page of Project Settings.

#include "GAS/Abilities/InteractAbility.h"

#include "GAS/Tags/InteractionTags.h"
#include "GameFramework/Character.h"
#include "InteractableInterface.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Log/VaerLoggingUtil.h"

UInteractAbility::UInteractAbility() {
  InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;

  FGameplayTagContainer AssetTags;
  AssetTags.AddTag(Ability_Interact);
  SetAssetTags(AssetTags);

  // Activation Blocked Tags
  ActivationBlockedTags.AddTag(
      State_Interacting);  // State_Interacting will be used if both hands are
                           // used in a action.
}

void UInteractAbility::ActivateAbility(
    const FGameplayAbilitySpecHandle Handle,
    const FGameplayAbilityActorInfo* ActorInfo,
    const FGameplayAbilityActivationInfo ActivationInfo,
    const FGameplayEventData* TriggerEventData) {
  if (!CommitAbility(Handle, ActorInfo, ActivationInfo)) {
    LOG_SCREEN("Interact Ability not able to commit", FColor::Red);
    EndAbility(Handle, ActorInfo, ActivationInfo, false, false);
    return;
  }
  LOG_SCREEN("Interact Ability Activated", FColor::Green);
  TObjectPtr<AActor> InteractableActor = TryGetInteractableInSight();
  if (InteractableActor) {
    LOG_SCREEN("Found interactable: " + InteractableActor->GetName(),
               FColor::Green);
  } else {
    LOG_SCREEN("No interactable in sight", FColor::Red);
  }
  EndAbility(Handle, ActorInfo, ActivationInfo, false, false);
}

void UInteractAbility::EndAbility(
    const FGameplayAbilitySpecHandle Handle,
    const FGameplayAbilityActorInfo* ActorInfo,
    const FGameplayAbilityActivationInfo ActivationInfo,
    bool bReplicateEndAbility, bool bWasCancelled) {
  LOG_SCREEN("Interact Ability Ended", FColor::Green);
  Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility,
                    bWasCancelled);
}

TObjectPtr<AActor> UInteractAbility::TryGetInteractableInSight() {
  AActor* AvatarActor = GetAvatarActorFromActorInfo();
  if (!AvatarActor) {
    LOG_SCREEN("No Avatar Actor", FColor::Red);
    return nullptr;
  }
  FVector CameraLocation;
  FRotator CameraRotation;
  ACharacter* AvatarCharacter = Cast<ACharacter>(AvatarActor);
  if (!AvatarCharacter) {
    LOG_SCREEN("Avatar actor is not a charcter", FColor::Red);
    return nullptr;
  }
  if (APlayerController* PC =
          Cast<APlayerController>(AvatarCharacter->GetController())) {
    PC->GetPlayerViewPoint(CameraLocation, CameraRotation);
  } else {
    LOG_SCREEN("Unable to get player controller from the avatar", FColor::Red);
    return nullptr;
  }
  FVector Start = CameraLocation;
  FVector ForwardVector = CameraRotation.Vector();

  FVector End = Start + ForwardVector * InteractDistance;

  FHitResult HitResult;
  TArray<AActor*> ActorsToIgnore;
  ActorsToIgnore.Add(AvatarActor);

  bool bHit = UKismetSystemLibrary::SphereTraceSingle(
      GetWorld(), Start, End, InteractRadius,
      UEngineTypes::ConvertToTraceType(ECC_Visibility),
      false,  // TraceComplex
      ActorsToIgnore, EDrawDebugTrace::ForDuration, HitResult,
      true  // ignore self
  );

  if (bHit) {
    if (HitResult.GetActor() != nullptr &&
        HitResult.GetActor()->Implements<UInteractableInterface>()) {
      return HitResult.GetActor();
    }
  }

  return nullptr;
}
