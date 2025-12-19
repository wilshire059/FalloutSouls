#pragma once

#include "CoreMinimal.h"
#include "FAffectedStat.generated.h"

class UPDA_Calculations;

USTRUCT(BlueprintType)
struct FALLOUTSOULS_API FAffectedStat
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	int32 FromLevel = 0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	int32 UntilLevel = 0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	bool bAffectMaxValue = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	double Modifier = 0.0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	TObjectPtr<UPDA_Calculations> Calculation;
};
