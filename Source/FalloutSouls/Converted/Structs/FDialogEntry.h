#pragma once

#include "CoreMinimal.h"
#include "Structs/FDialogGameplayEvent.h"
#include "FDialogEntry.generated.h"

USTRUCT(BlueprintType)
struct FALLOUTSOULS_API FDialogEntry : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialog")
	FText Entry;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialog")
	TArray<FDialogGameplayEvent> GameplayEvents;
};
