#ifndef UE4SS_SDK_CraftingOverview_New_HPP
#define UE4SS_SDK_CraftingOverview_New_HPP

class UCraftingOverview_New_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCraftingList_New_C* CraftingList_New;
    FVector2D Size;

    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_CraftingOverview_New(int32 EntryPoint);
};

#endif
