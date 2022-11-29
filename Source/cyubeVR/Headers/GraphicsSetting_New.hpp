#ifndef UE4SS_SDK_GraphicsSetting_New_HPP
#define UE4SS_SDK_GraphicsSetting_New_HPP

class UGraphicsSetting_New_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_2;
    class UButton* Button_0;
    class UButton* Button_123;
    class UGraphicsSettingButton_C* GraphicsSettingButton;
    class UGraphicsSettingButton_C* GraphicsSettingButton_0;
    class UGraphicsSettingButton_C* GraphicsSettingButton_C_0;
    class UHorizontalBox* HorizontalBox_64;
    class UHorizontalBox* OptionHolder;
    class USettingName_C* SettingNameWidget;
    FString SettingName;
    TArray<FString> OptionNames;
    TArray<class UGraphicsSettingButton_C*> OptionWidgets;
    class AChunkManagerBP_C* ChunkManager;
    class USettingsUI_New_C* ParentWidget;
    FString WhenSetToThis;
    class UGraphicsSetting_New_C* SetThis;
    FString ToThis;
    FString DefaultValue;
    TArray<class UGraphicsSetting_New_C*> MakeInvisible;
    bool HasHoverInfo;
    FString HoverInfoText;

    void SetEnabledCustom(bool Enabled);
    void Construct();
    void OptionClicked(FString Option);
    void Init(class AChunkManagerBP_C* ChunkManager, class USettingsUI_New_C* ParentWidget);
    void SetGOSelected(FString Option);
    void PreConstruct(bool IsDesignTime);
    void CheckSpecialDependency(FString Option);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void SetDefaultValue(FString DefaultValue);
    void Re-Init();
    void BndEvt__Button_123_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_123_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_GraphicsSetting_New(int32 EntryPoint);
};

#endif
