#pragma once
#include "CoreMinimal.h"
#include "EHTTPWebComFileBytesToFileActionType.generated.h"

UENUM()
enum class EHTTPWebComFileBytesToFileActionType : uint8 {
    E_OVERWRITE,
    E_NOT_OVERWRITE,
    E_MAX UMETA(Hidden),
};

