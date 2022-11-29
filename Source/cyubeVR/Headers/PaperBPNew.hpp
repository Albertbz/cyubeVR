#ifndef UE4SS_SDK_PaperBPNew_HPP
#define UE4SS_SDK_PaperBPNew_HPP

class APaperBPNew_C : public ADraftUnlockingPaper
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Sound;
    class UParticleSystemComponent* P_Loot_Idle_Loop;
    class UParticleSystemComponent* P_levelUp_Detail2;
    class UStaticMeshComponent* PaperE;
    class USceneComponent* Scene;
    class UBoxComponent* Box;
    float Timeline_0_Amount_17986A02463FACAAF3572DAA849A810E;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_17986A02463FACAAF3572DAA849A810E;
    class UTimelineComponent* Timeline_0;
    float Dissolve_Amount_DFB4F0014398027AD02C47849C81CA16;
    TEnumAsByte<ETimelineDirection::Type> Dissolve__Direction_DFB4F0014398027AD02C47849C81CA16;
    class UTimelineComponent* Dissolve;
    TEnumAsByte<hand> CurrentSelectedHand;
    class UMaterialInstanceDynamic* MaterialInstance;
    bool IsDissolving;
    TMap<class EBlockTypeBP, class UTexture*> SpecialTextureTypes;

    void IsCorrectGravityGloveComponent(class UPrimitiveComponent* Component, bool& Correct);
    void SetGravityGloveTargetIndicatorActive(bool Active, bool Left, bool& _);
    void GetRealWorldLocation(FVector& Location);
    void DeactivateTelekinesis(class UStaticMeshComponent*& Return);
    void ActivateTelekinesis(TEnumAsByte<hand> hand, bool GravityGlove, class UPrimitiveComponent*& SimulatingComponent);
    void CanTelekinesis(bool LineOfSight, bool& Can, class AActor*& ActorToGrab);
    void Release(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component, bool& success);
    void Grab(class AFirstPersonCharacterVR_C* Player, class UBoxComponent* HandComponent, class UMeshComponent* HandMesh, class USphereComponent* HandOverlap, class UBoxComponent* OtherHandComponent, class UMeshComponent* OtherHandParentComponent, TEnumAsByte<hand> hand, bool IsDistanceGrab, bool AfterSpawn, class AActor*& GrabbedActorMain, class AActor*& GrabbedActorDirect);
    void SetType(EBlockTypeBP Type);
    void SetSelected(bool Selected, TEnumAsByte<hand> hand);
    void UserConstructionScript();
    void Dissolve__FinishedFunc();
    void Dissolve__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BndEvt__Box_K2Node_ComponentBoundEvent_25_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_32_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void SetObjectRotation(class AVRHandFingersBP_C* hand, float Percent);
    void StartDissolveBP(bool bWithType);
    void UnlockItem();
    void StartDissolve(bool bWithType);
    void Release_1(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component);
    void ReceiveTick(float DeltaSeconds);
    void ShowType();
    void ExecuteUbergraph_PaperBPNew(int32 EntryPoint);
};

#endif
