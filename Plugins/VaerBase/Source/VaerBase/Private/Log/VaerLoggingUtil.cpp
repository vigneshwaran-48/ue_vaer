#include "Log/VaerLoggingUtil.h"

void UVaerLoggingUtil::LogToScreen(const FString& Message, FColor Color,
                                   float Duration) {
#if !(UE_BUILD_SHIPPING)
  if (GEngine) {
    GEngine->AddOnScreenDebugMessage(-1, Duration, Color, Message);
  }
#endif
}

void UVaerLoggingUtil::LogToOutput(const FString& Message) {
  UE_LOG(LogTemp, Log, TEXT("%s"), *Message);
}