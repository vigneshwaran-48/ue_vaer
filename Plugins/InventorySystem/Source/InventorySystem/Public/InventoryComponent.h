// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "CoreMinimal.h"
#include "InventoryComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class INVENTORYSYSTEM_API UInventoryComponent : public UActorComponent {
  GENERATED_BODY()

 public:
  UInventoryComponent();

 protected:
  virtual void BeginPlay() override;

  virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

  static const FName InventoryDataKey;

  UPROPERTY(EditDefaultsOnly, Category = "Vaer|Inventory")
  TSoftObjectPtr<UDataTable> InventoryDataTable;
};
