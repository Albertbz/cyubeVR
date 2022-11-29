#ifndef UE4SS_SDK_BowActorBP_HPP
#define UE4SS_SDK_BowActorBP_HPP

class ABowActorBP_C : public AReceiveLightActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UArrowComponent* Arrow3;
    class UAudioComponent* Audio1;
    class UAudioComponent* Audio;
    class UArrowComponent* Arrow2;
    class USpringArmComponent* SpringArm;
    class USkeletalMeshComponent* BowMesh;
    class USceneComponent* DefaultSceneRoot;
    float Timeline_1_Float_6FAA2A284440C33F25489FA8F6E884A7;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_6FAA2A284440C33F25489FA8F6E884A7;
    class UTimelineComponent* Timeline_1;
    float Timeline_0_Float_21421F6B4A308727060ECABF68CC9E63;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_21421F6B4A308727060ECABF68CC9E63;
    class UTimelineComponent* Timeline_0;
    class USceneComponent* BowHand;
    class USceneComponent* ArrowHand;
    float MaxStringDistance;
    float HandStringLocation;
    float HandStringLocationLastVib;
    bool StretchActive;
    class UStaticMeshComponent* ArrowMesh;
    bool Locked;
    float TImelineValue;
    bool LerpToNewRunning;
    FRotator OldRotation;
    bool LerpToOldRunning;
    bool Enabled;
    FTimerHandle StopSoundTimer;
    bool HMDIsRift;
    bool FeedbackActive;
    bool IsArrowVisible;
    class UGripMotionControllerComponent* GrippedByGrip;
    FBowActorBP_CAttachedArrow AttachedArrow;
    void AttachedArrow();
    class UCurveFloat* ArrowRotationCurve;
    bool bIsRightSideBow;
    FTimerHandle NotYetShotTimer;
    bool HaveGrabbedArrowAlreadyThisSession;

    void ShowHintText();
    void DisableGrip(bool bIsRightSide);
    void EnableArrowDrawGrip();
    void EnableGrip(bool bIsRightSide);
    void SetEnabled(bool Enabled, bool bIsRightSide);
    void Init(class USceneComponent* BowHand, class USceneComponent* ArrowHand, class UStaticMeshComponent* ArrowMesh, bool HMDIsRift);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Shoot();
    void ReceiveBeginPlay();
    void AttachArrowToHand();
    void StopPlayingSound();
    void AttachArrowToBow();
    void ReceiveTick(float DeltaSeconds);
    void ArrowHandTriggerPressed();
    void DrawDebugRotation(FVector Loc, FRotator rot, float Thickness);
    void PlayVib_CLonk();
    void LerpToNew();
    void LerpToOld();
    void StopLerpNew();
    void StopLerpOld();
    void UpdateLerpOld();
    void UpdateArrowRotation();
    void PlayVib();
    void ExecuteUbergraph_BowActorBP(int32 EntryPoint);
    void AttachedArrow__DelegateSignature();
};

#endif
