#pragma once

#include "CoreMinimal.h"
#include "B_Action.h"
#include "B_Action_Dodge.generated.h"

UCLASS(Blueprintable, BlueprintType)
class FALLOUTSOULS_API UB_Action_Dodge : public UB_Action
{
	GENERATED_BODY()

public:
	UB_Action_Dodge();

	virtual void ExecuteAction_Implementation() override;
};
