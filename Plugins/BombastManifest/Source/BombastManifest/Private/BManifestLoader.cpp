#include "BManifestLoader.h"

#include "BManifest.h"

//#include "Runtime/JsonUtilities/Public/JsonObjectConverter.h"

FBManifestLoader::FBManifestLoader()
{
}

FBManifestLoader::~FBManifestLoader()
{
}

FManifestPtr FBManifestLoader::LoadManifestFromDisc()
{
	FArchive* ManifestFileReader = IFileManager::Get().CreateFileReader(*GetManifestFilePath());
	
	if (ManifestFileReader != nullptr)
	{
		const FManifestPtr LoadedManifest = LoadManifest(*ManifestFileReader);

		if (LoadedManifest.IsValid())
		{
			return LoadedManifest;
		}

		delete ManifestFileReader;
	}

	return nullptr;
}

FManifestPtr FBManifestLoader::LoadManifest(FArchive& ManifestStream)
{
	/*TSharedPtr<FJsonObject> JsonManifest;
	const TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(&ManifestStream);
	if(!FJsonSerializer::Deserialize(JsonReader, JsonManifest))
	{
		return nullptr;
	}

	FBManifest* NewManifest = new FBManifest();*/

	/*if(FJsonObjectConverter::JsonObjectToUStruct(JsonManifest.ToSharedRef(), NewManifest, 0, 0))
	{
		return MakeShareable(NewManifest);
	}*/

	//delete NewManifest;
	return nullptr;	
}
