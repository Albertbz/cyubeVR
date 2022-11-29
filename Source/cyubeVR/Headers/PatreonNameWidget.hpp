#ifndef UE4SS_SDK_PatreonNameWidget_HPP
#define UE4SS_SDK_PatreonNameWidget_HPP

class UPatreonNameWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* TextBlock_26;
    FString Name;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_PatreonNameWidget(int32 EntryPoint);
};

#endif
