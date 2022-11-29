#ifndef UE4SS_SDK_EasterEggBP_HPP
#define UE4SS_SDK_EasterEggBP_HPP

class AEasterEggBP_C : public AEasterEgg
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Mesh;
    FVector Timeline_0_ItemScale_E046B3294F9A250C59017ABB8D02F17C;
    float Timeline_0_EggScale_E046B3294F9A250C59017ABB8D02F17C;
    float Timeline_0_ItemRotation_E046B3294F9A250C59017ABB8D02F17C;
    float Timeline_0_Amount_E046B3294F9A250C59017ABB8D02F17C;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_E046B3294F9A250C59017ABB8D02F17C;
    class UTimelineComponent* Timeline_0;
    TEnumAsByte<hand> CurrentSelectedHand;
    class ABlockItemVR_C* SpawnedBlockItem;
    bool ReadyForDestroy;
    TArray<class UMaterialInterface*> DifferentMats;
    TArray<class UMaterialInterface*> DifferentMatsChristmas;
    bool IsChristmasGift;

    void IsCorrectGravityGloveComponent(class UPrimitiveComponent* Component, bool& Correct);
    void SetGravityGloveTargetIndicatorActive(bool Active, bool Left, bool& _);
    void GetRealWorldLocation(FVector& Location);
    void DeactivateTelekinesis(class UStaticMeshComponent*& Return);
    void ActivateTelekinesis(TEnumAsByte<hand> hand, bool GravityGlove, class UPrimitiveComponent*& SimulatingComponent);
    void CanTelekinesis(bool LineOfSight, bool& Can, class AActor*& ActorToGrab);
    void Grab(class AFirstPersonCharacterVR_C* Player, class UBoxComponent* HandComponent, class UMeshComponent* HandMesh, class USphereComponent* HandOverlap, class UBoxComponent* OtherHandComponent, class UMeshComponent* OtherHandParentComponent, TEnumAsByte<hand> hand, bool IsDistanceGrab, bool AfterSpawn, class AActor*& GrabbedActorMain, class AActor*& GrabbedActorDirect);
    void Release(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component, bool& success);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void SetObjectRotation(class AVRHandFingersBP_C* hand, float Percent);
    void ReceiveBeginPlay();
    void Disintegrate();
    void BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_EasterEggBP(int32 EntryPoint);
};

#endif
