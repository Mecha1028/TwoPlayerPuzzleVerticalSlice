// Copyright Epic Games, Inc. All Rights Reserved.

#include "VerticalSliceProjectGameMode.h"
#include "EngineUtils.h"

AVerticalSliceProjectGameMode::AVerticalSliceProjectGameMode()
{

}

void AVerticalSliceProjectGameMode::BeginPlay()
{
	Super::BeginPlay();
	UWorld* World = GetWorld();
	
	if (World)
	{
		for (TActorIterator<APlayerStart> i(World); i; ++i)
		{
			UE_LOG(LogTemp, Warning, TEXT("PLAYERSTART",i));
		}
	}
}