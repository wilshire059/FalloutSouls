#pragma once

#include "CoreMinimal.h"
#include "B_StatusEffect.h"
#include "B_StatusEffect_Madness.generated.h"

UCLASS(Blueprintable, BlueprintType)
class FALLOUTSOULS_API UB_StatusEffect_Madness : public UB_StatusEffect
{
	GENERATED_BODY()

public:
	UB_StatusEffect_Madness();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Madness")
	float MadnessDamagePercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Madness")
	float FPDamagePercent;

	virtual void OnTriggered_Implementation() override;
};
