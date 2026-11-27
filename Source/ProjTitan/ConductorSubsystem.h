// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ConductorSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class PROJTITAN_API UConductorSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	virtual void Deinitialize() override;

	UFUNCTION(BlueprintCallable, Category = "Conductor")
	void SayHello();

	UFUNCTION(BlueprintPure, Category = "Conductor")
	double GetSongTime() const;
	
};
