#pragma once

#include "CoreMinimal.h"
#include "B_Action.h"
#include "B_Action_ThrowProjectile.generated.h"

UCLASS(Blueprintable, BlueprintType)
class FALLOUTSOULS_API UB_Action_ThrowProjectile : public UB_Action
{
	GENERATED_BODY()
public:
	UB_Action_ThrowProjectile();
	virtual void ExecuteAction_Implementation() override;
};
