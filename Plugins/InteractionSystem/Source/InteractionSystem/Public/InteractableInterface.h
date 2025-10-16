#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractableInterface.generated.h"

UINTERFACE(MinimalAPI)
class UInteractableInterface : public UInterface {
  GENERATED_BODY()
};

class INTERACTIONSYSTEM_API IInteractableInterface {
  GENERATED_BODY()

 public:
  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
  void Highlight(bool highlight);
};
