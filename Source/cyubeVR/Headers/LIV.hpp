#ifndef UE4SS_SDK_LIV_HPP
#define UE4SS_SDK_LIV_HPP

#include "LIV_enums.hpp"

class ULivBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    void OffsetCameraPoseForEye(ELivEye Eye, const FVector& CameraLocation, const FRotator& CameraRotation, FVector& EyeLocation, FRotator& EyeRotation);
    class UTextureRenderTarget2D* CreateRenderTarget2D(class UObject* WorldContextObject, int32 Width, int32 Height, bool bForceLinearGamma, FName Name, TEnumAsByte<ETextureRenderTargetFormat> Format, FLinearColor ClearColor, float TargetGamma);
};

class ALivCameraController : public AActor
{
    class ULivShotComponent* CurrentShot;
    float CurrentShotTime;

    void TickCurrentShot(float DeltaTime);
    void SetCurrentShot(class ULivShotComponent* ShotComponent);
    class ULivShotComponent* GetCurrentShot();
};

class ALivCaptureActor : public AActor
{
    class USceneCaptureComponent2D* PrimaryCaptureComponent;

};

struct FLivInputFrame
{
    FVector CameraLocation;
    FQuat CameraRotation;
    FIntPoint Dimensions;
    float HorizontalFieldOfView;
    FMatrix CameraClipPlaneMatrix;
    FMatrix FloorClipPlaneMatrix;
    uint8 bFloorClipPlaneEnabled;

};

class ULivCaptureBase : public USceneCaptureComponent2D
{
    FLivCaptureBaseOnLivCaptureActivated OnLivCaptureActivated;
    void LivActivationDelegate();
    FLivCaptureBaseOnLivCaptureDeactivated OnLivCaptureDeactivated;
    void LivActivationDelegate();
    uint8 bOverrideCameraPose;
    uint8 bOverrideCameraFOV;
    FLivInputFrame InputFrame;

    bool IsLivCapturing();
};

class ULivCaptureCombo : public ULivCaptureBase
{
    class USceneCaptureComponent2D* SceneCaptureComponent;
    class UTextureRenderTarget2D* BackgroundRenderTarget;
    class UTextureRenderTarget2D* ForegroundRenderTarget;
    class UTextureRenderTarget2D* ForegroundOutputRenderTarget;

};

class ULivCaptureGlobalClipPlaneNoPostProcess : public ULivCaptureBase
{
    class UTextureRenderTarget2D* BackgroundRenderTarget;
    class UTextureRenderTarget2D* ForegroundRenderTarget;
    class UTextureRenderTarget2D* ForegroundMaskedRenderTarget;

};

class ULivCaptureGlobalClipPlanePostProcess : public ULivCaptureBase
{
    class USceneCaptureComponent2D* SceneCaptureComponent;
    class UTextureRenderTarget2D* PostProcessedBackgroundRenderTarget;
    class UTextureRenderTarget2D* PostProcessedForegroundRenderTarget;
    class UTextureRenderTarget2D* ForegroundInverseOpacityRenderTarget;
    class UTextureRenderTarget2D* ForegroundOutputRenderTarget;

};

class ULivCaptureMeshClipPlaneNoPostProcess : public ULivCaptureBase
{
    class ULivClipPlane* CameraClipPlane;
    class ULivClipPlane* FloorClipPlane;
    class UTextureRenderTarget2D* BackgroundRenderTarget;
    class UTextureRenderTarget2D* ForegroundRenderTarget;
    class UTextureRenderTarget2D* BackgroundOutputRenderTarget;
    class UTextureRenderTarget2D* ForegroundOutputRenderTarget;

};

class ULivCaptureMeshClipPlanePostProcess : public ULivCaptureBase
{
    class USceneCaptureComponent2D* SceneCaptureComponent;
    class ULivClipPlane* CameraClipPlane;
    class ULivClipPlane* FloorClipPlane;
    class UTextureRenderTarget2D* PostProcessedSceneRenderTarget;
    class UTextureRenderTarget2D* BackgroundDepthRenderTarget;
    class UTextureRenderTarget2D* ForegroundDepthRenderTarget;
    class UTextureRenderTarget2D* BackgroundOutputRenderTarget;
    class UTextureRenderTarget2D* ForegroundOutputRenderTarget;

};

class ULivCaptureMulti : public ULivCaptureBase
{
    class USceneCaptureComponent2D* SceneCaptureComponent;
    class UTextureRenderTarget2D* BackgroundRenderTarget;
    class UTextureRenderTarget2D* BackgroundOutputRenderTarget;
    class UTextureRenderTarget2D* ForegroundRenderTarget;
    class UTextureRenderTarget2D* ForegroundOutputRenderTarget;
    class UTextureRenderTarget2D* EyeAdaptionRenderTarget;
    class UTextureRenderTarget2D* BloomRenderTarget;
    class ULivCustomClipPlane* CameraClipPlane;

};

class ULivCaptureSingle : public ULivCaptureBase
{
    class ULivCustomClipPlane* CameraClipPlane;
    class ULivCustomClipPlane* FloorClipPlane;
    class UTextureRenderTarget2D* BackgroundOutputRenderTarget;

};

class ULivClipPlane : public UStaticMeshComponent
{
    class UMaterialInterface* ClipPlaneMaterial;
    class UMaterialInterface* ClipPlaneDebugMaterial;

    void SetDebugEnabled(bool bDebugEnabled);
    bool GetDebugEnabled();
};

class ULivCustomClipPlane : public UStaticMeshComponent
{
    class UMaterialInterface* ClipPlaneMaterial;

};

class ALivDirector : public ALivCameraController
{
    TArray<class ULivShotComponent*> Shots;
    float MaxShotLength;

    void FindShots();
    void Cut();
};

class ALivImagePlaneTest : public AActor
{
    bool bDrawSphere;
    ELivEye Eye;
    FVector RayStart;
    FVector RayEnd;

};

struct FLivCaptureContext
{
    TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenComponents;
    TArray<TWeakObjectPtr<AActor>> HiddenActors;

};

class ULivLocalPlayerSubsystem : public ULocalPlayerSubsystem
{
    FLivLocalPlayerSubsystemOnCaptureActivated OnCaptureActivated;
    void LivLocalPlayerActivationDelegate();
    FLivLocalPlayerSubsystemOnCaptureDeactivated OnCaptureDeactivated;
    void LivLocalPlayerActivationDelegate();
    FLivCaptureContext CaptureContext;

    void ShowComponent(class UPrimitiveComponent* InComponent);
    void ShowActor(class AActor* InActor);
    void ResetCapture();
    bool IsCaptureActive();
    void HideComponent(class UPrimitiveComponent* InComponent);
    void HideActor(class AActor* InActor);
    class ULocalPlayer* GetLocalPlayerBP();
    class ULivWorldSubsystem* GetLivWorldSubsystem();
    FLivCaptureContext GetCaptureContext();
    TSubclassOf<class ULivCaptureBase> GetCaptureComponentClass();
    void ClearHiddenComponents();
    void ClearHiddenActors();
};

class ULivPluginSettings : public UObject
{
    TSubclassOf<class ULivCaptureBase> CaptureMethod;
    bool bBackgroundOnly;
    bool bTransparency;
    FPostProcessSettings PostProcessSettings;
    float PreExposure;
    bool bUseDebugCamera;
    FVector DebugCameraWorldLocation;
    FRotator DebugCameraWorldRotation;
    float DebugCameraHorizontalFOV;
    bool bUseDebugCameraClipPlane;
    FTransform DebugCameraClipPlaneTransform;
    bool bUseDebugFloorClipPlane;
    FTransform DebugFloorClipPlaneTransform;
    TSoftClassPtr<ALivCameraController> CameraControllerClass;
    TEnumAsByte<ESceneCaptureSource> CaptureSource;
    ELivSceneViewExtensionCaptureStage SceneViewExtensionCaptureStage;
    FString TrackingId;

};

class ALivProjectionMatrixTest : public AActor
{
    class ASceneCapture2D* SceneCaptureActor;
    class USceneCaptureComponent2D* CaptureComponent;
    FMatrix ProjectionMatrix;
    FVector4 ProjectionMatrixRow0;
    FVector4 ProjectionMatrixRow1;
    FVector4 ProjectionMatrixRow2;
    FVector4 ProjectionMatrixRow3;
    FVector4 LivProjectionMatrixRow0;
    FVector4 LivProjectionMatrixRow1;
    FVector4 LivProjectionMatrixRow2;
    FVector4 LivProjectionMatrixRow3;
    FVector4 ManualProjectionMatrixRow0;
    FVector4 ManualProjectionMatrixRow1;
    FVector4 ManualProjectionMatrixRow2;
    FVector4 ManualProjectionMatrixRow3;

};

class ALivShotActor : public AActor
{
    class USceneComponent* SceneComponent;
    class ULivShotComponent* ShotComponent;

};

class ULivShotComponent : public USceneComponent
{
    float score;
    float FOVAngle;
    uint8 bOverrideCamera;
    FLivShotComponentTickShotEvent TickShotEvent;
    void LivShotTickDelegate(class ALivCameraController* Controller, class ULivCaptureBase* CaptureComponent, float ShotTime, float DeltaTime);
    FLivShotComponentCutToEvent CutToEvent;
    void LivShotCutDelegate(class ALivCameraController* Controller);
    FLivShotComponentCutFromEvent CutFromEvent;
    void LivShotCutDelegate(class ALivCameraController* Controller);

    void TickShot(class ALivCameraController* Controller, class ULivCaptureBase* CaptureComponent, float ShotTime, float DeltaTime);
    void OnCutTo(class ALivCameraController* Controller);
    void OnCutFrom(class ALivCameraController* Controller);
};

class ULivSpringArmComponent : public USpringArmComponent
{
    bool bClampPitch;
    float MinPitch;
    float MaxPitch;
    float YawDeltaThreshold;
    float MaxYawDelta;
    float MinInterpolationSpeed;
    float MaxInterpolationSpeed;

    void UpdatePoseForCamera(class UCameraComponent* Camera, float DeltaTime);
};

class ALivTestActor : public AActor
{
};

class ALivThirdPersonShotActor : public AActor
{
    class ULivSpringArmComponent* SpringArm;
    class ULivShotComponent* ShotComponent;

    void TickSpringArm(class ALivCameraController* Controller, class ULivCaptureBase* CaptureComponent, float ShotTime, float DeltaTime);
};

class ULivWorldSubsystem : public UWorldSubsystem
{
    class USceneComponent* CameraRoot;
    class ULivCaptureBase* CaptureComponent;
    class USceneComponent* TrackingOriginComponent;
    class ALivCameraController* CameraController;

    FTransform GetTrackingOriginTransform();
    class USceneComponent* GetPlayerCameraParent();
    class UCameraComponent* GetPlayerCamera();
    TSubclassOf<class ULivCaptureBase> GetCaptureComponentClass();
    class ULivCaptureBase* GetCaptureComponent();
    class USceneComponent* GetCameraRoot();
};

struct FLivIdentifier
{
    FString EngineName;
    FString EngineVersion;
    FString ClientVersion;
    FString NativeClientVersion;

};

#endif
