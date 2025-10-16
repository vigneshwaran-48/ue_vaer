// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AbilitySystemInterface.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "VCharacter.generated.h"

class UAbilitySystemComponent;
class UInputMappingContext;
class UPlayerGameplayAbilitiesDataAsset;

UCLASS()
class VAERBASE_API AVCharacter : public ACharacter,
                                 public IAbilitySystemInterface {
  GENERATED_BODY()

 public:
  AVCharacter();

 protected:
  virtual void BeginPlay() override;

 public:
  virtual void SetupPlayerInputComponent(
      class UInputComponent* PlayerInputComponent) override;

  virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

 private:

  UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AbilitySystem",
            meta = (AllowPrivateAccess = "true"))
  TObjectPtr<UPlayerGameplayAbilitiesDataAsset>
      PlayerGameplayAbilitiesDataAsset;

  TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

  void InitAbilitySystem();
  void OnAbilityInputPressed(int32 InputID);
  void OnAbilityInputReleased(int32 InputID);
};
