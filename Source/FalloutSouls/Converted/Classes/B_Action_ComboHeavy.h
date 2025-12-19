#pragma once

#include "CoreMinimal.h"
#include "B_Action.h"
#include "B_Action_ComboHeavy.generated.h"

UCLASS(Blueprintable, BlueprintType)
class FALLOUTSOULS_API UB_Action_ComboHeavy : public UB_Action
{
	GENERATED_BODY()

public:
	UB_Action_ComboHeavy();

	virtual void ExecuteAction_Implementation() override;
};
