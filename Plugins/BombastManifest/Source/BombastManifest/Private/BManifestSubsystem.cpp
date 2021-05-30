#include "BManifestSubsystem.h"

#include "BManifestDefines.h"
#include "BManifestLoader.h"

UBManifestSubsystem::UBManifestSubsystem()
{
}

void UBManifestSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	
	UE_LOG(LogBombastManifest, Log, TEXT("Bombast Manifest subsystem initialized"));
}

void UBManifestSubsystem::Deinitialize()
{
	Super::Deinitialize();
}

void UBManifestSubsystem::LoadManifest()
{
	FBManifestLoader::LoadManifestFromDisc();
}
