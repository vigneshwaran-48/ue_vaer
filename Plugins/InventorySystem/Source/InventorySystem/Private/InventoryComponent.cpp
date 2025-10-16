// Fill out your copyright notice in the Description page of Project Settings.

#include "InventoryComponent.h"

#include "Log/VaerLoggingUtil.h"
#include "VaerGameInstance.h"

const FName UInventoryComponent::InventoryDataKey = TEXT("InventoryItems");

UInventoryComponent::UInventoryComponent() {
  PrimaryComponentTick.bCanEverTick = false;
}

void UInventoryComponent::BeginPlay() {
  Super::BeginPlay();

  if (UWorld* World = GetWorld()) {
    if (auto* GI = Cast<UVaerGameInstance>(World->GetGameInstance())) {
      if (!InventoryDataTable.IsNull()) {
        GI->RegisterDataTable(InventoryDataKey, InventoryDataTable);
        LOG_SCREEN("Inventory DataTable registered in GameInstance",
                   FColor::Yellow);
      } else {
        LOG_SCREEN("Inventory DataTable soft reference not set", FColor::Red);
      }
    } else {
      LOG_SCREEN("VaerGameInstance is not available in the world!",
                 FColor::Red);
    }
  }
}

void UInventoryComponent::EndPlay(const EEndPlayReason::Type EndPlayReason) {
  if (UWorld* World = GetWorld()) {
    if (auto* GI = Cast<UVaerGameInstance>(World->GetGameInstance())) {
      GI->UnloadDataTable(InventoryDataKey);
      LOG_SCREEN("Inventory DataTable unregistered from GameInstance",
                 FColor::Yellow);
    }
  }

  Super::EndPlay(EndPlayReason);
}