#ifndef UE4SS_SDK_LogItemBP_HPP
#define UE4SS_SDK_LogItemBP_HPP

class ALogItemBP_C : public ALogItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UArrowComponent* SliceLoca;
    class USceneComponent* Scene;
    float Timeline_1_1_899BD08A47E2300E7937A6A355BC06E6;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_899BD08A47E2300E7937A6A355BC06E6;
    class UTimelineComponent* Timeline_1;
    float Timeline_0_1_D81D65094A8C1B21E89DAA903DCF11F4;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_D81D65094A8C1B21E89DAA903DCF11F4;
    class UTimelineComponent* Timeline_0;
    bool First;
    class URuntimeMeshComponent* LogRMC;
    class UProceduralMeshComponent* LogPMC;
    bool BeginPlayActive;
    TEnumAsByte<hand> CurrentSelectedHand;
    FVector CustomCenter;
    int32 AmountOfWood;
    class UMaterialInterface* LogMaterial;
    bool CanSplitAgain;
    bool L_BehindBack;

    void IsCorrectGravityGloveComponent(class UPrimitiveComponent* Component, bool& Correct);
    void SetGravityGloveTargetIndicatorActive(bool Active, bool Left, bool& _);
    void GetRealWorldLocation(FVector& Location);
    void DeactivateTelekinesis(class UStaticMeshComponent*& Return);
    void ActivateTelekinesis(TEnumAsByte<hand> hand, bool GravityGlove, class UPrimitiveComponent*& SimulatingComponent);
    void CanTelekinesis(bool LineOfSight, bool& Can, class AActor*& ActorToGrab);
    void Release(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component, bool& success);
    void Grab(class AFirstPersonCharacterVR_C* Player, class UBoxComponent* HandComponent, class UMeshComponent* HandMesh, class USphereComponent* HandOverlap, class UBoxComponent* OtherHandComponent, class UMeshComponent* OtherHandParentComponent, TEnumAsByte<hand> hand, bool IsDistanceGrab, bool AfterSpawn, class AActor*& GrabbedActorMain, class AActor*& GrabbedActorDirect);
    void Check Release Behind Back(class AFirstPersonCharacterVR_C* Player, EControllerHand hand, bool& Result);
    void GetCapMat(class UMaterialInterface*& Material);
    void UpdateType();
    void SetScaleTo(float Scale);
    void UpdateWorldLocationToFitCenter();
    void CheckMass(bool& Fine);
    void SetSelected(bool Selected, TEnumAsByte<hand> hand);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveBeginPlay();
    void Overlaps(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void SetObjectRotation(class AVRHandFingersBP_C* hand, float Percent);
    void Slice(FVector PlanePosition, FVector PlaneNormal);
    void SlicePMC(FVector PlanePosition, FVector PlaneNormal);
    void OnHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void Hit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void HitByTool(class AToolBP_C* Tool);
    void SetActive(ETreeType _Type);
    void OnComponentBeginOverlap_Event_0(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void AssignOverlaps();
    void OnComponentEndOverlap_Event_0(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void SetPMC(class UProceduralMeshComponent* LogRMC_);
    void SetCustomCenter();
    void SetupPMC(class UProceduralMeshComponent* RMC);
    void AddToBucket(bool BehindBack);
    void SlowlyDestroy();
    void Release_1(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component);
    void SetupRMC(class URuntimeMeshComponent* RMC);
    void SetRMC(class URuntimeMeshComponent* LogRMC_);
    void ExecuteUbergraph_LogItemBP(int32 EntryPoint);
};

#endif
