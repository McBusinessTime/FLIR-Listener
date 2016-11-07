// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Runtime/Landscape/Classes/LandscapeComponent.h"
#include "Runtime/Landscape/Classes/Landscape.h"
#include "FlirLandscapeManager.generated.h"

UCLASS()
class FLIRLISTENER_API AFlirLandscapeManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFlirLandscapeManager();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UFUNCTION(BlueprintCallable, Category = "FLIR Mode")
		void ChangeMaterialToDynamic();

	UFUNCTION(BlueprintCallable, Category = "FLIR Mode")
		void ToggleFlirLandscape();

private:

	ALandscape* _flirLandscape;

	TArray<UMaterialInstanceDynamic*> _dynMaterialInstances;
};
