#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AN_PlayCameraSequence.generated.h"

UCLASS()
class FALLOUTSOULS_API UAN_PlayCameraSequence : public UAnimNotify
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sequence")
	TSoftObjectPtr<UObject> CameraSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sequence")
	float PlayRate = 1.0f;

	virtual FString GetNotifyName_Implementation() const override;
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
};
