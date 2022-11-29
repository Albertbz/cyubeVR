#ifndef UE4SS_SDK_CraftingItemModBlock_HPP
#define UE4SS_SDK_CraftingItemModBlock_HPP

class UCraftingItemModBlock_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_0;
    class UButton* Button_0;
    class UCustomBlockPreviewWidget_C* CustomBlockPreviewWidget;
    class UImage* Image_70;
    class UInvalidationBox* InvalidationBoxMain;
    bool Dragging;
    bool CanDrag;
    FLinearColor Color;
    class UCraftingList_New_C* Parent;
    bool IsClicked;
    FString BlockName;
    int32 UniqueId;
    class UTexture2D* RecipePreviewTexture;
    FString CreatorName;
    bool TickActive;

    void UpdateLookEmpty();
    void UpdateLook();
    void SetData(int32 UniqueId, FString BlockName, class UTexture2D* RecipePreviewTexture, FString CreatorName);
    void SetDescriptionTextToThis();
    void MouseLeave();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void UpdateVisibility();
    void MakeVisible();
    void ExecuteUbergraph_CraftingItemModBlock(int32 EntryPoint);
};

#endif
