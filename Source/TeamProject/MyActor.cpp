// MyActor.cpp


#include "MyActor.h"

AMyActor::AMyActor()
{
 	PrimaryActorTick.bCanEverTick = false;
}

void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Written by me!!!."));
}
