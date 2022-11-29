#ifndef UE4SS_SDK_ItemList_Loot_HPP
#define UE4SS_SDK_ItemList_Loot_HPP

class UItemList_Loot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* DragPanel;
    class UUniformGridPanel* GridPanel;
    class UItem_C* Item;
    class UItem_C* Item_0;
    class UItem_C* Item_1;
    class UItem_C* Item_C_0;
    class UItem_C* Item_C_1;
    class UItem_C* Item_C_2;
    class UItem_C* Item_C_12;
    class UItem_C* Item_C_34;
    class UItem_C* Item_C_39;
    class UItem_C* Item_C_40;
    class USizeBox* SizeBox_2;
    class UTextBlock* TextAtTop;
    TArray<class UItem_C*> ItemWidgets;
    class AInventoryBP_C* Inventory;
    bool Initialized;
    FVector2D Size;
    TArray<class UItemTypeHolder_C*> ItemHolderWidgets;
    TArray<class UItem_C*> ToolHolderWidgets;
    class UToolSelectionVisualizer_C* ToolSelectionVisualizer;
    class UToolSelectionVisualizer_C* BlockSelectionVisualizer;

    void Drop(class UItem_C* PayloadItemWidget, class UItem_C* DroppedOnItemWidget, EBlockTypeBP Type, bool& success);
    void GetInventory(class AInventoryBP_C*& Inventory);
    void UpdateItemList();
    void UpdateDataRegular();
    void CreateItemList();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void AddDragWidget(class UItemDrag_C* Widget);
    void SetTextAtTop(FText Text);
    void Drop_1_1(class UItem_C* PayloadItemWidget, class UItem_C* DroppedOnItemWidget, EBlockTypeBP Type);
    void ExecuteUbergraph_ItemList_Loot(int32 EntryPoint);
};

#endif
