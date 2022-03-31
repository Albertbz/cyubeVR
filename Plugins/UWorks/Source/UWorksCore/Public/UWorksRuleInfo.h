#pragma once
#include "CoreMinimal.h"
#include "UWorksRuleInfo.generated.h"

USTRUCT(BlueprintType)
struct UWORKSCORE_API FUWorksRuleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Value;
    
    FUWorksRuleInfo();
};

