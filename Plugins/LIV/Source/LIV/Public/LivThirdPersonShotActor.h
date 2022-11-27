#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LivThirdPersonShotActor.generated.h"

class ULivShotComponent;
class ULivSpringArmComponent;
class ALivCameraController;
class ULivCaptureBase;

UCLASS(Blueprintable)
class LIV_API ALivThirdPersonShotActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULivSpringArmComponent* SpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULivShotComponent* ShotComponent;
    
    ALivThirdPersonShotActor();
    UFUNCTION(BlueprintCallable)
    void TickSpringArm(ALivCameraController* Controller, ULivCaptureBase* CaptureComponent, float ShotTime, float DeltaTime);
    
};

