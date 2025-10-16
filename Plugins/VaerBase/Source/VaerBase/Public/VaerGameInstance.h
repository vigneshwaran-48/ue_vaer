// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "VaerGameInstance.generated.h"

USTRUCT()
struct FVaerDataTableEntry {
  GENERATED_BODY()

  UPROPERTY(EditAnywhere, Category = "Vaer|Data")
  FName Key;

  UPROPERTY(EditAnywhere, Category = "Vaer|Data")
  TSoftObjectPtr<UDataTable> DataTable;

  FVaerDataTableEntry() {}
  FVaerDataTableEntry(FName InKey, TSoftObjectPtr<UDataTable> InTable)
      : Key(InKey), DataTable(InTable) {}
};

UCLASS()
class VAERBASE_API UVaerGameInstance : public UGameInstance {
  GENERATED_BODY()

 public:
  virtual void Init() override;
  virtual void Shutdown() override;

  /** Register a soft reference DataTable with a key (can be done by each
   * plugin) */
  UFUNCTION(BlueprintCallable, Category = "Vaer|Data")
  void RegisterDataTable(FName Key, TSoftObjectPtr<UDataTable> TableRef);

  /** Get the DataTable synchronously (loads on demand) */
  UFUNCTION(BlueprintCallable, Category = "Vaer|Data")
  UDataTable* GetDataTable(FName Key);

  /** Unload a DataTable to free memory */
  UFUNCTION(BlueprintCallable, Category = "Vaer|Data")
  void UnloadDataTable(FName Key);

  /** Clear all cached DataTables */
  UFUNCTION(BlueprintCallable, Category = "Vaer|Data")
  void ClearAllDataTables();

 protected:
  /** Soft references to registered DataTables */
  UPROPERTY()
  TMap<FName, TSoftObjectPtr<UDataTable>> RegisteredTables;

  /** Loaded DataTables cached in memory */
  UPROPERTY(Transient)
  TMap<FName, TWeakObjectPtr<UDataTable>> LoadedTables;
};
