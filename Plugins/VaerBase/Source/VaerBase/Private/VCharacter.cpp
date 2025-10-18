// Fill out your copyright notice in the Description page of Project Settings.

#include "VCharacter.h"

#include "AbilitySystemComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Input/PlayerGameplayAbilitiesDataAsset.h"

AVCharacter::AVCharacter() {
  AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(
      TEXT("AbilitySystemComponent"));
}

void AVCharacter::InitAbilitySystem() {
  if (PlayerGameplayAbilitiesDataAsset) {
    const TSet<FGameplayInputAbilityInfo>& InputAbilities =
        PlayerGameplayAbilitiesDataAsset->GetInputAbilities();
    constexpr int32 AbilityLevel = 1;

    for (const auto& It : InputAbilities) {
      if (It.IsValid()) {
        const FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(
            It.GameplayAbilityClass, AbilityLevel, It.InputID);
        AbilitySystemComponent->GiveAbility(AbilitySpec);
      }
    }
  }

  // For abilities not mapped to input
  for (TSubclassOf<UGameplayAbility> AbilityClass : DefaultAbilities) {
    if (AbilityClass) {
      AbilitySystemComponent->GiveAbility(
          FGameplayAbilitySpec(AbilityClass, 1, INDEX_NONE, this));
    }
  }
}

void AVCharacter::OnAbilityInputPressed(int32 InputID) {
  if (AbilitySystemComponent) {
    AbilitySystemComponent->AbilityLocalInputPressed(InputID);
  }
}

void AVCharacter::OnAbilityInputReleased(int32 InputID) {
  if (AbilitySystemComponent) {
    AbilitySystemComponent->AbilityLocalInputReleased(InputID);
  }
}

void AVCharacter::SetupPlayerInputComponent(
    UInputComponent* PlayerInputComponent) {
  if (UEnhancedInputComponent* EnhancedInputComponent =
          Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
    if (PlayerGameplayAbilitiesDataAsset) {
      const TSet<FGameplayInputAbilityInfo>& InputAbilities =
          PlayerGameplayAbilitiesDataAsset->GetInputAbilities();
      for (const auto& It : InputAbilities) {
        if (It.IsValid()) {
          const UInputAction* InputAction = It.InputAction;
          const int32 InputID = It.InputID;

          EnhancedInputComponent->BindAction(
              InputAction, ETriggerEvent::Started, this,
              &AVCharacter::OnAbilityInputPressed, InputID);
          EnhancedInputComponent->BindAction(
              InputAction, ETriggerEvent::Completed, this,
              &AVCharacter::OnAbilityInputReleased, InputID);
        }
      }
    }
  }
}

void AVCharacter::BeginPlay() {
  InitAbilitySystem();
  Super::BeginPlay();
}

UAbilitySystemComponent* AVCharacter::GetAbilitySystemComponent() const {
  return AbilitySystemComponent;
}