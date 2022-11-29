#ifndef UE4SS_SDK_VRHandFingersBP_HPP
#define UE4SS_SDK_VRHandFingersBP_HPP

class AVRHandFingersBP_C : public AReceiveLightActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* LeftThumbCone;
    class UArrowComponent* RadialMenuLocation;
    class UStaticMeshComponent* HealthIndicator;
    class USphereComponent* Controller_OverlapBehindBackAdd;
    class USphereComponent* SliderOverlap;
    class USteamVRTrackingReferences* SteamVRTrackingReferences;
    class UArrowComponent* TempArrow;
    class UArrowComponent* ArrowBowDrawLocation;
    class UArrowComponent* Arrow;
    class UBoxComponent* SimulatePhysicsBox;
    class USphereComponent* Controller_Overlap;
    class USkeletalMeshComponent* HandMesh;
    class USceneComponent* Scene;
    class AFirstPersonCharacterVR_C* ParentCharacter;
    TEnumAsByte<hand> Side;
    FVector OriginalOffset;
    FRotator OriginalOffsetRot;
    class USkeletalMesh* LeftHandMesh;
    class USkeletalMesh* RightHandMesh;
    TSubclassOf<class UAnimInstance> LeftHandAnimBP;
    TSubclassOf<class UAnimInstance> RightHandAnimBP;
    bool DoConstantCheckForWMR;
    bool IsGrabSomething;
    bool bCanGrabSomething;
    float NoCollisionFeedbackUntil;
    FVector LastCollisionWorldLocation;

    void CollisionHaptics();
    void SetGlowIndicatorActive(bool Active);
    void SetHandSize(float Percentage);
    void EnableWMROffset(TEnumAsByte<hand> Side);
    void SetVisible(bool Visible);
    void SetAlternativeModeActive(bool Active);
    void Init(class AFirstPersonCharacterVR_C* Parent, TEnumAsByte<hand> Side);
    void SetSide(TEnumAsByte<hand> Side);
    void UserConstructionScript();
    void SetWorldScale(FVector Scale);
    void OnTrackedDeviceActivated(int32 DeviceID, FName DeviceClass, FString DeviceModel);
    void SetVisibility(bool Visible);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void NoLongerGrip();
    void GrabSomething(TEnumAsByte<HandPoseEnum> Type, bool PlaySound);
    void CanGrabSomething(TEnumAsByte<HandPoseEnum> Type);
    void IfCanGrabOpen();
    void ExecuteUbergraph_VRHandFingersBP(int32 EntryPoint);
};

#endif
