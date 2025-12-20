#pragma once

#include "CoreMinimal.h"
#include "FFloat.generated.h"

USTRUCT(BlueprintType)
struct FALLOUTSOULS_API FFloat
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	double Float = 0.0;
};
