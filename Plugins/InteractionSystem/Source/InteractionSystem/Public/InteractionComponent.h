// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "CoreMinimal.h"
#include "InteractionComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class INTERACTIONSYSTEM_API UInteractionComponent : public UActorComponent {
  GENERATED_BODY()

 public:
  // Sets default values for this component's properties
  UInteractionComponent();

 protected:
  // Called when the game starts
  virtual void BeginPlay() override;

 public:
  // Called every frame
  virtual void TickComponent(
      float DeltaTime, ELevelTick TickType,
      FActorComponentTickFunction* ThisTickFunction) override;

 private:
  TObjectPtr<AActor> CurrentBestInteractableActor;

  TArray<TObjectPtr<AActor>> NearbyInteractableActors;

  UFUNCTION()
  void OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp,
                         AActor* OtherActor, UPrimitiveComponent* OtherComp,
                         int32 OtherBodyIndex, bool bFromSweep,
                         const FHitResult& SweepResult);

  UFUNCTION()
  void OnBoxEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
                       UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
