#ifndef UE4SS_SDK_FurnaceUpperUI_HPP
#define UE4SS_SDK_FurnaceUpperUI_HPP

class UFurnaceUpperUI_C : public UUserWidget
{
    class UImage* Image;
    class UImage* Image_79;
    class UImage* Image_239;
    class UTextBlock* Name;
    class UTextBlock* Name_1;
    class UScaleBox* ScaleBox_Iron;
    class UScaleBox* ScaleBox_OR;
    class UScaleBox* ScaleBox_Sand;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TextBlock_1;
    class UTextBlock* TextBlock_3;
    class UTextBlock* TextBlock_Amount;
    class UTextBlock* TextBlock_Heat;
    class UTextBlock* TextBlock_Progress;
    class UWidgetSwitcher* WidgetSwitcher_0;

    void SetMeltType(bool Iron, bool Sand, int32 Amount);
    void UpdateNumbers(int32 items, float Progress, float Heat);
};

#endif
