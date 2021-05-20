// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BManifestSettings.generated.h"

/**
 * 
 */
UCLASS(config = Engine, defaultconfig)
class BOMBASTMANIFEST_API UBManifestSettings : public UObject
{
	GENERATED_BODY()

public:
	UBManifestSettings();

	UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "Bombast Manifest Settings")
	FString ManifestFileName;
};
