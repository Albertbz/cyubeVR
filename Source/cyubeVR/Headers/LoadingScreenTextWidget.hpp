#ifndef UE4SS_SDK_LoadingScreenTextWidget_HPP
#define UE4SS_SDK_LoadingScreenTextWidget_HPP

class ULoadingScreenTextWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* TextBlock_17;
    TArray<FString> TextToChoose;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_LoadingScreenTextWidget(int32 EntryPoint);
};

#endif
