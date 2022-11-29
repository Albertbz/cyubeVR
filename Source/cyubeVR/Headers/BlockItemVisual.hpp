#ifndef UE4SS_SDK_BlockItemVisual_HPP
#define UE4SS_SDK_BlockItemVisual_HPP

class ABlockItemVisual_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class UStaticMeshComponent* Cube;
    float GetSmaller_1_51609EB34AF01E9B1477099685074680;
    TEnumAsByte<ETimelineDirection::Type> GetSmaller__Direction_51609EB34AF01E9B1477099685074680;
    class UTimelineComponent* GetSmaller;
    class ACharacter* Target;
    class UMaterialInstanceDynamic* Material;
    EBlockTypeBP BlockType;
    class UMaterialInstanceDynamic* MaterialInstanceDynamic;
    bool Turn;
    bool AttachedToCraftRoom ;
    class ACraftRoom_C* AttachedCraftRoom;
    TEnumAsByte<ItemType> ItemType;

    void IsCorrectGravityGloveComponent(class UPrimitiveComponent* Component, bool& Correct);
    void SetGravityGloveTargetIndicatorActive(bool Active, bool Left, bool& _);
    void GetRealWorldLocation(FVector& Location);
    void DeactivateTelekinesis(class UStaticMeshComponent*& Return);
    void ActivateTelekinesis(TEnumAsByte<hand> hand, bool GravityGlove, class UPrimitiveComponent*& SimulatingComponent);
    void CanTelekinesis(bool LineOfSight, bool& Can, class AActor*& ActorToGrab);
    void Release(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component, bool& success);
    void Grab(class AFirstPersonCharacterVR_C* Player, class UBoxComponent* HandComponent, class UMeshComponent* HandMesh, class USphereComponent* HandOverlap, class UBoxComponent* OtherHandComponent, class UMeshComponent* OtherHandParentComponent, TEnumAsByte<hand> hand, bool IsDistanceGrab, bool AfterSpawn, class AActor*& GrabbedActorMain, class AActor*& GrabbedActorDirect);
    void ChangeType(TEnumAsByte<ItemType> ItemType);
    void UpdateItemType(uint8 BlockType);
    void GetSmaller__FinishedFunc();
    void GetSmaller__UpdateFunc();
    void BndEvt__Cube_K2Node_ComponentBoundEvent_281_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Cube_K2Node_ComponentBoundEvent_330_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Destroy();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void SetObjectRotation(class AVRHandFingersBP_C* hand, float Percent);
    void AttachedToOverlap(EControllerHand Side, class ACraftRoom_C* Room);
    void MarkOverlapOnPlayer(EControllerHand Side);
    void Release_1(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component);
    void ExecuteUbergraph_BlockItemVisual(int32 EntryPoint);
};

#endif
