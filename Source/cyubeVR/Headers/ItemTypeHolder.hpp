#ifndef UE4SS_SDK_ItemTypeHolder_HPP
#define UE4SS_SDK_ItemTypeHolder_HPP

class UItemTypeHolder_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_0;
    class UCustomBlockPreviewWidget1_C* CustomBlockPreviewWidget1;
    class UImage* Image_0;
    class UOverlay* Overlay_0;
    int32 Amount;
    EBlockTypeBP Type;
    int32 Index;
    bool IsToolType;
    int32 UniqueId;
    FString BlockName;
    bool IsReal;

    void UpdateLookEmpty();
    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void UpdateLook();
    void SetData(EBlockTypeBP Type, int32 Index, int32 UniqueId, bool IsReal);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void SetDescriptionTextToThis();
    void MouseLeave();
    void ExecuteUbergraph_ItemTypeHolder(int32 EntryPoint);
};

#endif
