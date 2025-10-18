#include "Interactables/BaseInteractable.h"

#include "Components/BoxComponent.h"

ABaseInteractable::ABaseInteractable() {
  SceneRoot =
      AActor::CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
  RootComponent = SceneRoot;

  StaticMesh =
      AActor::CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
  StaticMesh->SetupAttachment(SceneRoot);

  InteractionBox =
      AActor::CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionBox"));
  InteractionBox->SetupAttachment(StaticMesh);

  InteractionBox->InitBoxExtent(FVector(50.f, 50.f, 50.f));
}

void ABaseInteractable::BeginPlay() { Super::BeginPlay(); }

void ABaseInteractable::Highlight_Implementation(bool highlight) {
  StaticMesh->SetRenderCustomDepth(highlight);
}
