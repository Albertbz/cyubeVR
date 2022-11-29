#ifndef UE4SS_SDK_ItemAmountHorizontal_HPP
#define UE4SS_SDK_ItemAmountHorizontal_HPP

class UItemAmountHorizontal_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_0;
    class UTextBlock* TextBlock_0;
    EBlockTypeBP Type;
    int32 Amount;
    FText DescriptionBefore;
    bool IsCustomBlock;

    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void Construct();
    void ExecuteUbergraph_ItemAmountHorizontal(int32 EntryPoint);
};

#endif
