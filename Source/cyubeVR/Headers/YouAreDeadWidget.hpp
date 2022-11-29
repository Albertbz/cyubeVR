#ifndef UE4SS_SDK_YouAreDeadWidget_HPP
#define UE4SS_SDK_YouAreDeadWidget_HPP

class UYouAreDeadWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* MainAnim;
    class UBorder* Border_0;
    class UBorder* Border_1;
    class UBorder* Border_2;
    class UBorder* Border_3;
    class UBorder* Border_5;
    class UProgressBar* ProgressBar_48;
    class UTextBlock* TextBlock;
    class UTextBlock* TextBlock_1;
    class UTextBlock* TextBlock_3;
    class UTextBlock* TextBlock_4;
    class UTextBlock* TextBlock_16;
    class UWidgetSwitcher* WidgetSwitcher_0;

    void Reset();
    void StartAnimation();
    void SetFoundRespawnTorch(bool FoundOne);
    void ExecuteUbergraph_YouAreDeadWidget(int32 EntryPoint);
};

#endif
