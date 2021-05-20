#pragma once
#include "BMItem.h"
#include "BMItemType.h"

#include "BManifest.generated.h"

USTRUCT()
struct BOMBASTMANIFEST_API FBManifest
{
	GENERATED_BODY()
	
public:
	FBManifest() {}
	virtual ~FBManifest() {}

private:
	TArray<FBMItem> Items;
	TArray<FBMItemType> ItemTypes;
};
