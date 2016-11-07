// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameMode.h"
#include "FlirListenerGameMode.generated.h"

/**
 * 
 */
UCLASS()
class FLIRLISTENER_API AFlirListenerGameMode : public AGameMode
{
	GENERATED_BODY()
	
	// Called when the game starts
	virtual void StartPlay() override;
	
	
};
