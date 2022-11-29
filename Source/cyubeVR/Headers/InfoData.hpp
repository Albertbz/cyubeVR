#ifndef UE4SS_SDK_InfoData_HPP
#define UE4SS_SDK_InfoData_HPP

class UInfoData_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* HMDName;
    class UTextBlock* TextBlock_3;
    FText Text;
    int32 FontSize;
    FMargin TextPadding;

    void SetValue(FText InText);
    void PreConstruct(bool IsDesignTime);
    void SetFontSize(int32 FontSize);
    void InitPadding();
    void ExecuteUbergraph_InfoData(int32 EntryPoint);
};

#endif
