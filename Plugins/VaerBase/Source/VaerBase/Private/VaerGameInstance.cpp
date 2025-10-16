// Fill out your copyright notice in the Description page of Project Settings.

#include "VaerGameInstance.h"

#include "Engine/AssetManager.h"
#include "Log/VaerLoggingUtil.h"

void UVaerGameInstance::Init() {
  Super::Init();
  LOG_SCREEN("VaerGameInstance (DataTable Manager) initialized",
             FColor::Yellow);
}

void UVaerGameInstance::Shutdown() {
  ClearAllDataTables();
  Super::Shutdown();
}

void UVaerGameInstance::RegisterDataTable(FName Key,
                                          TSoftObjectPtr<UDataTable> TableRef) {
  if (Key.IsNone() || TableRef.IsNull()) {
    LOG_SCREEN("Invalid registration in RegisterDataTable", FColor::Red);
    return;
  }

  RegisteredTables.Add(Key, TableRef);
  LOG_SCREEN(FString::Printf(TEXT("Registered DataTable: %s"), *Key.ToString()),
             FColor::Yellow);
}

UDataTable* UVaerGameInstance::GetDataTable(FName Key) {
  // Check cache first
  if (TWeakObjectPtr<UDataTable>* Cached = LoadedTables.Find(Key)) {
    if (Cached->IsValid()) return Cached->Get();
  }

  // Find soft reference
  TSoftObjectPtr<UDataTable>* Found = RegisteredTables.Find(Key);
  if (!Found) {
    LOG_SCREEN(FString::Printf(TEXT("No DataTable registered for key: %s"),
                               *Key.ToString()),
               FColor::Red);
    return nullptr;
  }

  // Load it synchronously
  FStreamableManager& Streamable = UAssetManager::GetStreamableManager();
  UDataTable* Loaded =
      Cast<UDataTable>(Streamable.LoadSynchronous(Found->ToSoftObjectPath()));

  if (Loaded) {
    LoadedTables.Add(Key, Loaded);
    LOG_SCREEN(
        FString::Printf(TEXT("Loaded DataTable for key: %s"), *Key.ToString()),
        FColor::Yellow);
    return Loaded;
  }

  LOG_SCREEN(FString::Printf(TEXT("Failed to load DataTable for key: %s"),
                             *Key.ToString()),
             FColor::Red);
  return nullptr;
}

void UVaerGameInstance::UnloadDataTable(FName Key) {
  if (LoadedTables.Contains(Key)) {
    LoadedTables.Remove(Key);
    LOG_SCREEN(FString::Printf(TEXT("Unloaded DataTable: %s"), *Key.ToString()),
               FColor::Yellow);
  }
}

void UVaerGameInstance::ClearAllDataTables() {
  LoadedTables.Empty();
  RegisteredTables.Empty();
  LOG_SCREEN("Cleared all registered and cached DataTables", FColor::Yellow);
}
