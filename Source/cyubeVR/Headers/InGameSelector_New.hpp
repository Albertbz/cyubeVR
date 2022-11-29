#ifndef UE4SS_SDK_InGameSelector_New_HPP
#define UE4SS_SDK_InGameSelector_New_HPP

class UInGameSelector_New_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UItemList_New_C* ItemList_New;
    FVector2D Size;

    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_InGameSelector_New(int32 EntryPoint);
};

#endif
