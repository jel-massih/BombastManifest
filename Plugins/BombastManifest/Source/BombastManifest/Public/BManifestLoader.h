#pragma once

#include "CoreMinimal.h"

#include "BombastManifest.h"

typedef TSharedPtr<struct FBMManifest> FManifestPtr;

class FBManifestLoader
{
public:
	FBManifestLoader();

	virtual ~FBManifestLoader();

	//Load Manifest From Disc
	static FManifestPtr LoadManifestFromDisc();

protected:

	//Create new Manifest and loads with data from archive
	static FManifestPtr LoadManifest(FArchive& ManifestStream);
	
	/**
	* Gets the file in which manifest is stored.
	*
	* @return The manifest file path.
	*/
	static FString GetManifestFilePath()
	{
		return FPaths::ProjectConfigDir() / FBombastManifestModule::Get().GetSettings()->ManifestFileName;
	}
};
