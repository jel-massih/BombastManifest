// Copyright 2021 Jason El-Massih. All Rights Reserved.

#pragma once
#include "BManifest.h"

#include "BManifestSubsystem.generated.h"

UCLASS()
class BOMBASTMANIFEST_API UBManifestSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UBManifestSubsystem();

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	UFUNCTION()
	void LoadManifest();

protected:
	struct FBManifest Manifest;	

};