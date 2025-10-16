// Fill out your copyright notice in the Description page of Project Settings.

#include "InteractionComponent.h"

#include "Components/BoxComponent.h"
#include "InteractableInterface.h"
#include "Log/VaerLoggingUtil.h"

UInteractionComponent::UInteractionComponent() {
  PrimaryComponentTick.bCanEverTick = true;
}

void UInteractionComponent::BeginPlay() {
  Super::BeginPlay();

  UActorComponent* interactionComp =
      GetOwner()->GetComponentByClass(UBoxComponent::StaticClass());
  if (interactionComp == nullptr ||
      !interactionComp->ComponentHasTag("InteractionCollision")) {
    LOG_SCREEN(
        "InteractionComponent requires a BoxComponent with tag "
        "'InteractionCollision'",
        FColor::Red);
    return;
  }
  UBoxComponent* interactionCollision = Cast<UBoxComponent>(interactionComp);
  interactionCollision->OnComponentBeginOverlap.AddDynamic(
      this, &UInteractionComponent::OnBoxBeginOverlap);
  interactionCollision->OnComponentEndOverlap.AddDynamic(
      this, &UInteractionComponent::OnBoxEndOverlap);
}

void UInteractionComponent::TickComponent(
    float DeltaTime, ELevelTick TickType,
    FActorComponentTickFunction* ThisTickFunction) {
  Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UInteractionComponent::OnBoxBeginOverlap(
    UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
    const FHitResult& SweepResult) {
  if (OtherActor != nullptr && OtherActor->GetClass()->ImplementsInterface(
                                   UInteractableInterface::StaticClass())) {
    LOG_SCREEN("Overlap with " + OtherActor->GetName(), FColor::Green);
    NearbyInteractableActors.AddUnique(OtherActor);
    IInteractableInterface::Execute_Highlight(OtherActor, true);
  }
}

void UInteractionComponent::OnBoxEndOverlap(UPrimitiveComponent* OverlappedComp,
                                            AActor* OtherActor,
                                            UPrimitiveComponent* OtherComp,
                                            int32 OtherBodyIndex) {
  if (OtherActor != nullptr && OtherActor->GetClass()->ImplementsInterface(
                                   UInteractableInterface::StaticClass())) {
    LOG_SCREEN("End overlap with " + OtherActor->GetName(), FColor::Red);
    NearbyInteractableActors.Remove(OtherActor);
    IInteractableInterface::Execute_Highlight(OtherActor, false);
  }
}
