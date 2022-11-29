#ifndef UE4SS_SDK_ItemDrag_HPP
#define UE4SS_SDK_ItemDrag_HPP

class UItemDrag_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCustomBlockPreviewWidget1_C* CustomBlockPreviewWidget1;
    class UImage* Image_0;
    class UImage* Image_4;
    class USizeBox* SizeBox_0;
    class UTextBlock* TextAmount;
    int32 Amount;
    EBlockTypeBP Type;
    class UCanvasPanelSlot* MySlot;
    int32 SourceIndex;
    bool FromToolHolder;
    int32 UniqueId;
    FLinearColor CrystalColor;
    float ChargeState;
    class UUserWidget* OriginalParentWidget;
    class UUserWidget* CurrentParentWidget;
    bool HasLeftItsSourceUIAlready;
    bool EndedWithSuccessfullDrop;

    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void UpdateLook();
    void SetData(TEnumAsByte<OLD2_BlockType> Type, int32 Amount);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_ItemDrag(int32 EntryPoint);
};

#endif
