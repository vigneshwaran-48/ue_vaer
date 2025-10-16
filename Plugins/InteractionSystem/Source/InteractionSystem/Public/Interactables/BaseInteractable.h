// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableInterface.h"
#include "BaseInteractable.generated.h"

UCLASS()
class INTERACTIONSYSTEM_API ABaseInteractable : public AActor,
                                                public IInteractableInterface {
  GENERATED_BODY()

 public:
  ABaseInteractable();

 protected:
  UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Interaction System")
  USceneComponent* SceneRoot;

  UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Interaction System")
  UStaticMeshComponent* StaticMesh;

  UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Interaction System")
  class UBoxComponent* InteractionBox;

  virtual void BeginPlay() override;

  virtual void Highlight_Implementation(bool highlight) override;
};
