#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "BPI_Executable.generated.h"

UINTERFACE(BlueprintType)
class FALLOUTSOULS_API UBPI_Executable : public UInterface
{
	GENERATED_BODY()
};

class FALLOUTSOULS_API IBPI_Executable
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Execution")
	void OnExecutionStarted();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Execution")
	void OnExecuted(FGameplayTag ExecutionTag);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Execution")
	void OnBackstabbed(FGameplayTag ExecutionTag);
};
