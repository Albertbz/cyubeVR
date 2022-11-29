#ifndef UE4SS_SDK_SettingName_HPP
#define UE4SS_SDK_SettingName_HPP

class USettingName_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Name;
    FText Text;

    void PreConstruct(bool IsDesignTime);
    void SetText(FText InText);
    void ExecuteUbergraph_SettingName(int32 EntryPoint);
};

#endif
