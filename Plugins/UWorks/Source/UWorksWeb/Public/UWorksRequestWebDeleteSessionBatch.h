#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "DeleteSessionBatchDelegateDelegate.h"
#include "DeleteSessionBatchMinimalDelegateDelegate.h"
#include "UWorksRequestWebDeleteSessionBatch.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebDeleteSessionBatch : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDeleteSessionBatchDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDeleteSessionBatchMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebDeleteSessionBatch();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& SessionId, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

