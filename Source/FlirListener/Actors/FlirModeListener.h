// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "FlirModeListener.generated.h"

// This class does not need to be modified.
UINTERFACE(BlueprintType)
class UFlirModeListener : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

/**
 * 
 */
class FLIRLISTENER_API IFlirModeListener
{
	GENERATED_IINTERFACE_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	
	//classes using this interface may implement ToggleFLIRMode
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "FLIR Mode")
		bool ToggleFLIRMode();
};
