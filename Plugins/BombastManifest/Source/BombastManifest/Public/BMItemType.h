#pragma once


#include "BMItemType.generated.h"


USTRUCT()
struct FBMItemType
{
	GENERATED_BODY()

	FName ItemTypeName;

	TArray<FName> Tags;
	TArray<FName> ParentTags;
};
