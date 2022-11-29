#ifndef UE4SS_SDK_GrabRotateComponent_HPP
#define UE4SS_SDK_GrabRotateComponent_HPP

class UGrabRotateComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class UStaticMeshComponent*> OverlapComponents;
    class AVRHandFingersBP_C* LockCurrentlyOverlappingHand;
    TEnumAsByte<hand> HandGrabbingSide;
    bool HandGrabbing;
    class AVRHandFingersBP_C* HandGrabbingActor;
    FVector StartingGrabLocation;
    float TopStartRotation;
    FGrabRotateComponent_CStartedGrab StartedGrab;
    void StartedGrab();
    FGrabRotateComponent_CEndedGrab EndedGrab;
    void EndedGrab();
    class USceneComponent* RotationPoint;
    TArray<class AVRHandFingersBP_C*> CurrentlyOverlappingHand;
    TArray<class UAudioComponent*> SpawnedSounds;
    float MinAngle;
    float MaxAngle;
    FGrabRotateComponent_CWasRotated WasRotated;
    void WasRotated();
    float SoundLastPlayed;
    float RotationBefore;
    FGrabRotateComponent_CUpdateAngleLimitsNowIfRequired UpdateAngleLimitsNowIfRequired;
    void UpdateAngleLimitsNowIfRequired();
    FRotator RotationYZ;
    bool GrabAllowed;

    void OnComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void GrabTopStarted(TEnumAsByte<hand> hand, class AFirstPersonCharacterVR_C* Character, class AVRHandFingersBP_C* HandActor);
    void GrabTopEndedd(TEnumAsByte<hand> hand, class AFirstPersonCharacterVR_C* Character, class AVRHandFingersBP_C* HandActor);
    void Init(const TArray<class UStaticMeshComponent*>& OverlapComponents, class USceneComponent* RotationPoint, float MinAngle, float MaxAngle, FRotator RotationYZ);
    void OnComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void UpdateAngleLimits(float MinAngle, float MaxAngle);
    void ExecuteUbergraph_GrabRotateComponent(int32 EntryPoint);
    void UpdateAngleLimitsNowIfRequired__DelegateSignature();
    void WasRotated__DelegateSignature();
    void EndedGrab__DelegateSignature();
    void StartedGrab__DelegateSignature();
};

#endif
