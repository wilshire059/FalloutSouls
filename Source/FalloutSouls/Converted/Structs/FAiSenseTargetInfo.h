#pragma once

#include "CoreMinimal.h"
#include "FAiSenseTargetInfo.generated.h"

USTRUCT(BlueprintType)
struct FALLOUTSOULS_API FAiSenseTargetInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Sense")
	TObjectPtr<AActor> SensedTarget;
};
