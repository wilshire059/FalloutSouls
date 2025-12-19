#pragma once

#include "CoreMinimal.h"
#include "FAffectedStat.h"
#include "FAffectedStats.generated.h"

USTRUCT(BlueprintType)
struct FALLOUTSOULS_API FAffectedStats
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	TArray<FAffectedStat> SoftcapData;
};
