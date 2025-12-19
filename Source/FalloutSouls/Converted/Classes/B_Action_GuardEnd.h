#pragma once

#include "CoreMinimal.h"
#include "B_Action.h"
#include "B_Action_GuardEnd.generated.h"

UCLASS(Blueprintable, BlueprintType)
class FALLOUTSOULS_API UB_Action_GuardEnd : public UB_Action
{
	GENERATED_BODY()

public:
	UB_Action_GuardEnd();
	virtual void ExecuteAction_Implementation() override;
};
