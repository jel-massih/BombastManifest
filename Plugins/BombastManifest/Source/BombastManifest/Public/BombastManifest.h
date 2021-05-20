// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "BManifestSettings.h"
#include "Modules/ModuleManager.h"

class FBombastManifestModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	static inline FBombastManifestModule& Get()
	{
		return FModuleManager::LoadModuleChecked<FBombastManifestModule>("BombastManifest");
	}

	UBManifestSettings* GetSettings() const;

private:
	UBManifestSettings* BManifestSettings = nullptr;
};
