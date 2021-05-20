// Copyright Epic Games, Inc. All Rights Reserved.

#include "BombastManifest.h"

#include "BManifestDefines.h"
#include "ISettingsModule.h"

#define LOCTEXT_NAMESPACE "FBombastManifestModule"

void FBombastManifestModule::StartupModule()
{
	BManifestSettings = NewObject<UBManifestSettings>(GetTransientPackage(), "BombastManifestSettings", RF_Standalone);
	BManifestSettings->AddToRoot();

	if(ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->RegisterSettings("Project", "Plugins", "BombastManifest",
			LOCTEXT("RuntimeSettingsName", "Bombast Manifest"),
			LOCTEXT("RuntimeSettingsDescription", "Configure Bombast manifest"),
			BManifestSettings);
	}
	
	UE_LOG(LogBombastManifest, Log, TEXT("BombastManifest module started"));
}

void FBombastManifestModule::ShutdownModule()
{
	if(ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->UnregisterSettings("Project", "Plugins", "BombastManifest");
	}

	if(!GExitPurge)
	{
		BManifestSettings->RemoveFromRoot();
	}
	else
	{
		BManifestSettings = nullptr;
	}
}

UBManifestSettings* FBombastManifestModule::GetSettings() const
{
	check(BManifestSettings);
	return BManifestSettings;
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FBombastManifestModule, BombastManifest)

DEFINE_LOG_CATEGORY(LogBombastManifest);