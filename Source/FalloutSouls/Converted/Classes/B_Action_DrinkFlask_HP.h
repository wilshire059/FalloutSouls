#pragma once

#include "CoreMinimal.h"
#include "B_Action.h"
#include "B_Action_DrinkFlask_HP.generated.h"

UCLASS(Blueprintable, BlueprintType)
class FALLOUTSOULS_API UB_Action_DrinkFlask_HP : public UB_Action
{
	GENERATED_BODY()

public:
	UB_Action_DrinkFlask_HP();

	virtual void ExecuteAction_Implementation() override;
};
