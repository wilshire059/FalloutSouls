#pragma once

#include "CoreMinimal.h"
#include "FStatusEffectApplication.generated.h"

USTRUCT(BlueprintType)
struct FALLOUTSOULS_API FStatusEffectApplication
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Status Effect")
	int32 Rank = 0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Status Effect")
	double BuildupAmount = 0.0;
};
