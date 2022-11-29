#ifndef UE4SS_SDK_ChestInternalsBP_HPP
#define UE4SS_SDK_ChestInternalsBP_HPP

class AChestInternalsBP_C : public AChestInternals
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    FVector Amount;
    float Scale;
    FVector DistanceV;
    TArray<FVector> Locations;
    TArray<FVector> LocationsWorld;
    TArray<class UStaticMeshComponent*> OverlapComponents;
    TArray<class ABlockItemVR_C*> AttachedItems;
    bool IsActive;
    bool CurrentlyOverlappingDragOutItem;
    int32 CurrentOverlapIndex;
    bool CurrentVisibility;
    bool AlwaysUpdateSlotVisibilityNextTime;

    void AddItemToChest(class AActor*& DragOutItem, class UItemDrag_C* DragWidget, bool OneDirect, bool& success);
    void DoesItemOverlap(class ABlockItemVR_C* Item, bool& Result, int32& Index);
    void CheckClosePlayer();
    void UpdateVisuals();
    void SetSlotVisibility(bool NewVisibility);
    void InitializeBP();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void AddItemBP(class AActor* DragOutItem, class UItemDrag_C* DragWidget);
    void SetActive(bool IsActive, bool Always);
    void ReceiveBeginPlay();
    void UpdateVisualsEvent(bool MarkForSave);
    void AttachItemCorrectly(class ABlockItemVR_C* Item, int32 Index);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_ChestInternalsBP(int32 EntryPoint);
};

#endif
