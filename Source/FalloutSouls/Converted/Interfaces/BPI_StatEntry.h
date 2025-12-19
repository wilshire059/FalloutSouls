#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BPI_StatEntry.generated.h"

class UW_StatEntry;

UINTERFACE(MinimalAPI, BlueprintType)
class UBPI_StatEntry : public UInterface
{
	GENERATED_BODY()
};

class FALLOUTSOULS_API IBPI_StatEntry
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Stat Entry")
	UW_StatEntry* GetStatEntry();
};
