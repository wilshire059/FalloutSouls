#pragma once

#include "CoreMinimal.h"
#include "FAiSenseLocationInfo.generated.h"

USTRUCT(BlueprintType)
struct FALLOUTSOULS_API FAiSenseLocationInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Sense")
	FVector SenseLocation = FVector::ZeroVector;
};
