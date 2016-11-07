// Fill out your copyright notice in the Description page of Project Settings.

#include "FlirListener.h"
#include "FlirLandscapeManager.h"


// Sets default values
AFlirLandscapeManager::AFlirLandscapeManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFlirLandscapeManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFlirLandscapeManager::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

//
void AFlirLandscapeManager::ChangeMaterialToDynamic()
{
	UE_LOG(FlirListenerLog, Log, TEXT("Changing Material Interface!"));
	ALandscape* land = nullptr;

	for (TActorIterator<ALandscape> Itr(GetWorld()); Itr; ++Itr)
	{
		land = *Itr;
		FString landscape_name = land->GetName();
		UE_LOG(FlirListenerLog, Log, TEXT("%s"), *landscape_name);
		if (landscape_name.Equals("FlirLandscape"))
		{
			UE_LOG(FlirListenerLog, Log, TEXT("Big ol' booty!"));
			_flirLandscape = land;
			//TArray<ULandscapeComponent*> landscapeComponents = land->LandscapeComponents;
			//UMaterialInterface* landscapeMaterial = land->LandscapeMaterial;
			//ALandscape* scape = land->GetLandscapeActor();
			//UMaterialInstanceDynamic* dynMat = UMaterialInstanceDynamic::Create(landscapeMaterial, (ALandscapeProxy*)scape);
			//FName name = landscapeMaterial->GetFName();
		}
	}
}

//
void AFlirLandscapeManager::ToggleFlirLandscape()
{
	UE_LOG(FlirListenerLog, Log, TEXT("Toggle FLIR Landscape!"));
}
