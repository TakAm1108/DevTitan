// Fill out your copyright notice in the Description page of Project Settings.


#include "ConductorSubsystem.h"

void UConductorSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	UE_LOG(LogTemp, Warning, TEXT("Conductor: Initialize"));
}

void UConductorSubsystem::Deinitialize()
{
	UE_LOG(LogTemp, Warning, TEXT("Conductor: Deinitialize"));
	Super::Deinitialize();
}

void UConductorSubsystem::SayHello()
{
	UE_LOG(LogTemp, Warning, TEXT("Conductor: Hello"));
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Green, TEXT("Conductor: Hello"));
	}
}

double UConductorSubsystem::GetSongTime() const
{
	return 0.0;
}