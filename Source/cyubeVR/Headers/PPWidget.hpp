#ifndef UE4SS_SDK_PPWidget_HPP
#define UE4SS_SDK_PPWidget_HPP

class UPPWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeOutt;
    class UBorder* BG;

    void SetOpacity(float A);
    void FadeOut();
    void ExecuteUbergraph_PPWidget(int32 EntryPoint);
};

#endif
