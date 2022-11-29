#ifndef UE4SS_SDK_WorldInfoWidget_HPP
#define UE4SS_SDK_WorldInfoWidget_HPP

class UWorldInfoWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* TextBlock_69;
    FString TextToDisplay;

    void SetFontSizeMultiplier(float Multiplier);
    void SetText(FString inString);
    void ExecuteUbergraph_WorldInfoWidget(int32 EntryPoint);
};

#endif
