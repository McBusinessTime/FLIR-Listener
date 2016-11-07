// Fill out your copyright notice in the Description page of Project Settings.

#include "FlirListener.h"
#include "FlirChangeActor.h"


// Sets default values
AFlirChangeActor::AFlirChangeActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
	RootComponent = SphereComponent;

	//UE_LOG(FlirListenerLog, Log, TEXT("Shit!"));
}

// Called when the game starts or when spawned
void AFlirChangeActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(FlirListenerLog, Log, TEXT("what the fuck!"));
	
}

// Called every frame
void AFlirChangeActor::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

