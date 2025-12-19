#pragma once

#include "CoreMinimal.h"
#include "B_Action.h"
#include "B_Action_ComboLight_L.generated.h"

UCLASS(Blueprintable, BlueprintType)
class FALLOUTSOULS_API UB_Action_ComboLight_L : public UB_Action
{
	GENERATED_BODY()

public:
	UB_Action_ComboLight_L();

	virtual void ExecuteAction_Implementation() override;
};
