#ifndef UE4SS_SDK_GravityGloveActor_HPP
#define UE4SS_SDK_GravityGloveActor_HPP

class AGravityGloveActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Cone;
    class UParticleSystemComponent* GravityGloveTargetParticle;
    class UStaticMeshComponent* TargetSphere;
    class UArrowComponent* EndLocation;
    class UArrowComponent* StartLocation;
    class USplineMeshComponent* SplineMesh;
    class USceneComponent* DefaultSceneRoot;
    float FadeTargetAnimIndicator_NewTrack_0_F43B8C9E4565B4E3F979D192AA87B762;
    TEnumAsByte<ETimelineDirection::Type> FadeTargetAnimIndicator__Direction_F43B8C9E4565B4E3F979D192AA87B762;
    class UTimelineComponent* FadeTargetAnimIndicator;
    EHand hand;
    class AFirstPersonCharacterVR_C* ParentCharacter;
    bool CurrentlyActive;
    bool CurrentlyGrabbingObject;
    class AActor* CurrentTarget;
    class UPrimitiveComponent* TargetSimulatingComponent;
    float MaxTelekinesisDistance;
    bool CurrentlyTriggerActiveOnTarget;
    bool CurrentlyTriggerActive;
    float VisibilityTarget;
    float VisibilityFadeSpeed;
    float VisibilityNow;
    FTimerHandle ReleaseTimer;
    float HandToObjectDistance;
    FVector HandTipLocation;
    bool LastFrameActive;
    float LastJumpTime;
    bool TargetFlyingToHand;
    FVector FlyDirection;
    class AVRHandFingersBP_C* HandRef;
    class AActor* CurrentFlyingTarget;
    class UCurveFloat* ImpulseCurve;
    bool FlybyCooldown;
    float LastHapticClosePlayed;
    class UPrimitiveComponent* CurrentTargetComponent;
    class AActor* HitActor;

    void CheckLineOfSight(class UPrimitiveComponent* Component, bool& HasLineOfSight);
    void MoveActiveObject();
    void Rebuild();
    void DoTrace(bool& HasTarget);
    void UserConstructionScript();
    void FadeTargetAnimIndicator__FinishedFunc();
    void FadeTargetAnimIndicator__UpdateFunc();
    void ReceiveBeginPlay();
    void AquireTarget();
    void ReleaseTarget();
    void SetVisibilityFade(bool Visible);
    void ReleaseTargetDelay();
    void CheckHandFlick();
    void Init(EHand hand, class AFirstPersonCharacterVR_C* ParentCharacter);
    void AddTickPhysicsMovementToTarget();
    void UpdateLocation();
    void Grabbed();
    void NotDoAnything();
    void PlayHapticWhenCloseEnough();
    void ReceiveTick(float DeltaSeconds);
    void PlayFadeAtTarget();
    void DisableIndicatorAtTarget();
    void Activate();
    void Deactivate();
    void ExecuteUbergraph_GravityGloveActor(int32 EntryPoint);
};

#endif
