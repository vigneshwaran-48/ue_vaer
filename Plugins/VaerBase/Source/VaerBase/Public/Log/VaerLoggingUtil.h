// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VaerLoggingUtil.generated.h"

#define LOG_SCREEN(Message, Color) UVaerLoggingUtil::LogToScreen(Message, Color)
#define LOG_OUT(Message) UVaerLoggingUtil::LogToOutput(Message)

UCLASS()
class VAERBASE_API UVaerLoggingUtil : public UBlueprintFunctionLibrary {
  GENERATED_BODY()
 public:
  UFUNCTION(BlueprintCallable, Category = "Vaer|Debug")
  static void LogToScreen(const FString& Message, FColor Color = FColor::White,
                          float Duration = 2.0f);

  UFUNCTION(BlueprintCallable, Category = "Vaer|Debug")
  static void LogToOutput(const FString& Message);
};
