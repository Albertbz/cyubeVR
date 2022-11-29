#ifndef UE4SS_SDK_LootableInventoryBP_HPP
#define UE4SS_SDK_LootableInventoryBP_HPP

class ALootableInventoryBP_C : public ALootableInventory
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UChildActorComponent* InventoryChildActor;
    class UWidgetComponent* Widget;
    class UStaticMeshComponent* Sphere;
    class USceneComponent* DefaultSceneRoot;
    float DestroyTimeline_NewTrack_0_8DA21CE044BD0932654193A8DA0386D7;
    TEnumAsByte<ETimelineDirection::Type> DestroyTimeline__Direction_8DA21CE044BD0932654193A8DA0386D7;
    class UTimelineComponent* DestroyTimeline;
    class AInventoryBP_C* InventoryBP;
    float LastFullCollect;

    void CollectFullLoot();
    void UserConstructionScript();
    void DestroyTimeline__FinishedFunc();
    void DestroyTimeline__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void AddItems();
    void Setup(FLinearColor Sphere Color);
    void UpdateVisuals();
    void MarkForSaveBP();
    void DestroyEvent();
    void ExecuteUbergraph_LootableInventoryBP(int32 EntryPoint);
};

#endif
