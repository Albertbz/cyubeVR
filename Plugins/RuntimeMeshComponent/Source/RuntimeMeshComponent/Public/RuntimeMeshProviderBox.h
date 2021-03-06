#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshProvider.h"
#include "UObject/NoExportTypes.h"
#include "RuntimeMeshProviderBox.generated.h"

class UMaterialInterface;

UCLASS()
class RUNTIMEMESHCOMPONENT_API URuntimeMeshProviderBox : public URuntimeMeshProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoxRadius;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
public:
    URuntimeMeshProviderBox();
    UFUNCTION(BlueprintCallable)
    void SetBoxRadius(const FVector& InRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetBoxMaterial(UMaterialInterface* InMaterial);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBoxRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetBoxMaterial() const;
    
};

