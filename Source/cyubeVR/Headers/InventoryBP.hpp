#ifndef UE4SS_SDK_InventoryBP_HPP
#define UE4SS_SDK_InventoryBP_HPP

class AInventoryBP_C : public AInventory
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class UItemList_New_C* UI_ItemList;
    class UItemList_Loot_C* UI_LootableInventory;
    FInventoryBP_CMarkParentForSave MarkParentForSave;
    void MarkParentForSave();

    void AddItemFromChestBP(int32 FromChestIndex, class AChestInternals* OtherChest, EBlockTypeBP Type);
    void FindAmountFreeBP(EBlockTypeBP ToAdd, int32 UniqueId, int32& Free);
    void DoesItemFitBP();
    void DropOnDeleteBP(int32 From, bool FromToolHolder);
    void MoveInsideBP(int32 From, EBlockTypeBP Type, int32 UniqueId, bool FromToolSlot);
    void MoveOutsideBP(int32 From, bool FromToolHolder);
    void RemoveItemBP(EBlockTypeBP ToRemove, int32 ToRemoveUniqueID, int32 RemoveAmount, bool& success);
    void AddItemsBP(EBlockTypeBP ToAdd, int32 Amount, int32 UniqueId);
    void ShowItemWidget(EBlockTypeBP Type, int32 UniqueId, int32 Amount, bool BehindBack);
    void DropOnToolsQuickBarBP(bool FromToolBar, int32 From, int32 To, class AInventory* FromInventory, EBlockTypeBP Type, bool& DropSuccess);
    void DropBP(bool FromToolBar, int32 From, int32 To, class AInventory* FromInventory, EBlockTypeBP Type, bool& DropSuccess);
    void DropOnQuickBarBP(int32 From, int32 To);
    void UpdateUI(bool OnlyQuick, bool NoBucketUpdate, int32 DroppedFromSlot, int32 DroppedOnSlot);
    void AddItemBP(EBlockTypeBP ToAdd, int32 UniqueId, FColor CrystalColor, float ChargeState);
    void UpdateUIEvent();
    void UpdateReference();
    void ReceiveBeginPlay();
    void AddDefaultItems();
    void ExecuteUbergraph_InventoryBP(int32 EntryPoint);
    void MarkParentForSave__DelegateSignature();
};

#endif
