#ifndef UE4SS_SDK_ItemList_New_HPP
#define UE4SS_SDK_ItemList_New_HPP

class UItemList_New_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_1;
    class UDeleteStuff_C* DeleteStuff;
    class UCanvasPanel* DragPanel;
    class UUniformGridPanel* GridPanel;
    class UImage* Image_0;
    class UImage* Image_4;
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
    class UItem_C* ItemHolder1;
    class UItem_C* ItemHolder2;
    class UItem_C* ItemHolder3;
    class UItem_C* ItemHolder4;
    class UItem_C* ItemHolder5;
    class UItem_C* ItemHolder6;
    class UItem_C* ItemHolder7;
    class UItem_C* ItemHolder8;
    class UItem_C* ItemHolderShoulderLeft;
    class UItem_C* ItemHolderShoulderRight;
    class UItemTypeHolder_C* ItemTypeHolder;
    class UItemTypeHolder_C* ItemTypeHolder_0;
    class UItemTypeHolder_C* ItemTypeHolder_1;
    class UItemTypeHolder_C* ItemTypeHolder_2;
    class USizeBox* SizeBox_2;
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
    void UpdateDataQuickBar();
    void UpdateDataRegular();
    void CreateItemList();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void SetTextAtTop(FText Text);
    void AddDragWidget(class UItemDrag_C* Widget);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ItemList_New(int32 EntryPoint);
};

#endif
