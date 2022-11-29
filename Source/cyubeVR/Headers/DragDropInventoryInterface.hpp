#ifndef UE4SS_SDK_DragDropInventoryInterface_HPP
#define UE4SS_SDK_DragDropInventoryInterface_HPP

class IDragDropInventoryInterface_C : public IInterface
{

    void GetInventory(class AInventoryBP_C*& Inventory);
    void Drop(class UItem_C* PayloadItemWidget, class UItem_C* DroppedOnItemWidget, EBlockTypeBP Type, bool& success);
    void SetTextAtTop(FText Text);
    void AddDragWidget(class UItemDrag_C* Widget);
};

#endif
