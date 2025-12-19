#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlueprintBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTT_GetCurrentLocation.generated.h"

UCLASS()
class FALLOUTSOULS_API UBTT_GetCurrentLocation : public UBTTask_BlueprintBase
{
	GENERATED_BODY()

public:
	UBTT_GetCurrentLocation();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Blackboard")
	FBlackboardKeySelector LocationKey;

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
