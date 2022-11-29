#ifndef UE4SS_SDK_Item_HPP
#define UE4SS_SDK_Item_HPP

class UItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_0;
    class UBorder* Border_ToolHolder;
    class UBorder* Border_WithBackground;
    class UCustomBlockPreviewWidget1_C* CustomBlockPreviewWidget1;
    class UCustomBlockPreviewWidget1_C* CustomBlockPreviewWidget1_1;
    class UProgressBar* HealthBar;
    class UHorizontalBox* HorizontalBox_RegularItem;
    class UImage* Image_0;
    class UImage* Image_ToolHolder;
    class UInvalidationBox* InvalidationBoxMain;
    class UVerticalBox* ProgressBarOverlay;
    class UTextBlock* Text_Amount;
    int32 Amount;
    EBlockTypeBP Type;
    int32 Index;
    bool Dragging;
    bool IsToolHolder;
    bool CanDrag;
    bool IsStackable;
    FLinearColor Color;
    int32 UniqueId;
    FString BlockName;
    FColor CrystalColor;
    float ChargeState;
    class UUserWidget* ParentWidget;
    bool IsReal;

    void UpdateLookEmpty();
    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void UpdateLook();
    void SetData(EBlockTypeBP Type, int32 Amount, int32 Index, int32 UniqueId, FColor CrystalColor, float ChargeState, bool IsReal);
    void SetDescriptionTextToThis();
    void OnDragCancelled(const FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
    void MouseLeave();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_Item(int32 EntryPoint);
};

#endif
