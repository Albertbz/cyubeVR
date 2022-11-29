#ifndef UE4SS_SDK_LoadingProgressWidget_HPP
#define UE4SS_SDK_LoadingProgressWidget_HPP

class ULoadingProgressWidget_C : public UUserWidget
{
    class UTextBlock* TextBlock;
    class UTextBlock* TextBlock_27;

    void SetPercentage(float Percentage, float LoadingScreenEndBegan);
};

#endif
