#pragma once

#include "CoreMinimal.h"
#include "Enums/E_StatCategory.h"
#include "Enums/E_StatScaling.h"
#include "FEquipmentWeaponStatInfo.generated.h"

USTRUCT(BlueprintType)
struct FALLOUTSOULS_API FEquipmentWeaponStatInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Equipment")
	bool bHasStatScaling = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Equipment")
	TMap<E_StatCategory, E_StatScaling> ScalingInfo;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Equipment")
	bool bHasStatRequirement = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Equipment")
	TMap<E_StatCategory, double> StatRequirementInfo;
};
