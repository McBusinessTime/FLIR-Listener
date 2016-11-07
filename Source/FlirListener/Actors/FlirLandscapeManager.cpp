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
	_dynMaterialInstances = TArray<UMaterialInstanceDynamic*>();

	for (TActorIterator<ALandscape> Itr(GetWorld()); Itr; ++Itr)
	{
		land = *Itr;
		FString landscape_name = land->GetName();
		UE_LOG(FlirListenerLog, Log, TEXT("%s"), *landscape_name);
		if (landscape_name.Equals("FlirLandscape"))
		{
			UE_LOG(FlirListenerLog, Log, TEXT("Big ol' booty!"));
			_flirLandscape = land;
			TArray<ULandscapeComponent*> landscapeComponents = land->LandscapeComponents;
			for (auto& landComp : landscapeComponents)
			{
				
				UMaterialInstanceDynamic* dynMat =  landComp->CreateDynamicMaterialInstance(0, landComp->GetMaterial(0));
				_dynMaterialInstances.Add(dynMat);
				//UMaterialInstanceDynamic* dynMat = UMaterialInstanceDynamic::Create(landComp->GetMaterial(0), null);
				UE_LOG(FlirListenerLog, Log, TEXT("%s"), *(dynMat->GetFName().ToString()));
			}
			//UMaterialInterface* landscapeMaterial = land->LandscapeMaterial;
			//ALandscape* scape = land->GetLandscapeActor();
			//UMaterialInstanceDynamic* dynMat = UMaterialInstanceDynamic::Create(landscapeMaterial, (ALandscapeProxy*)scape);
			UE_LOG(FlirListenerLog, Log, TEXT("Big ol' booty 2!"));
		}
	}
}

//
void AFlirLandscapeManager::ToggleFlirLandscape()
{
	UE_LOG(FlirListenerLog, Log, TEXT("Toggle FLIR Landscape!"));

	for (auto& dynMat : _dynMaterialInstances)
	{
		dynMat->set
	}
}
