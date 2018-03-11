// Fill out your copyright notice in the Description page of Project Settings.

#include "InfiniteTerrainGameMode.h"
#include "AI/Navigation/NavMeshBoundsVolume.h"
#include "EngineUtils.h"
#include "Engine/World.h"
#include "ActorPool.h"



AInfiniteTerrainGameMode::AInfiniteTerrainGameMode() {
	NavMeshBoundsVolumePool = CreateDefaultSubobject<UActorPool>(FName("Nav Mesh Bounds Volume Pool"));
}


void AInfiniteTerrainGameMode::PopulateBoundsVolumePool() {

	TActorIterator<ANavMeshBoundsVolume> VolumeIterator = TActorIterator<ANavMeshBoundsVolume>(GetWorld());
	while (VolumeIterator) {
		AddToPool(*VolumeIterator);
		++VolumeIterator;
	}
}



void AInfiniteTerrainGameMode::AddToPool(ANavMeshBoundsVolume * VolumeToAdd)
{
	NavMeshBoundsVolumePool->Add(VolumeToAdd);
}
