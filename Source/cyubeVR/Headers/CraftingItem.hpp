#ifndef UE4SS_SDK_CraftingItem_HPP
#define UE4SS_SDK_CraftingItem_HPP

class UCraftingItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_0;
    class UButton* Button_0;
    class UImage* Image_0;
    class UInvalidationBox* InvalidationBoxMain;
    int32 Amount;
    EBlockTypeBP Type;
    int32 Index;
    bool Dragging;
    bool IsToolHolder;
    bool CanDrag;
    FLinearColor Color;
    class UCraftingList_New_C* Parent;
    bool IsClicked;
    bool Unlocked;

    void UpdateLookEmpty();
    void UpdateLook();
    void SetData(EBlockTypeBP Type, bool Unlocked);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void SetDescriptionTextToThis();
    void MouseLeave();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_CraftingItem(int32 EntryPoint);
};

#endif
