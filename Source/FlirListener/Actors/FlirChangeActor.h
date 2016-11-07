// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "FlirModeListener.h"
#include "FlirChangeActor.generated.h"

UCLASS()
class FLIRLISTENER_API AFlirChangeActor : public AActor, public IFlirModeListener
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFlirChangeActor();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	USphereComponent* SphereComponent;
	
};
