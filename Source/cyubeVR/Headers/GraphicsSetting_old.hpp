#ifndef UE4SS_SDK_GraphicsSetting_old_HPP
#define UE4SS_SDK_GraphicsSetting_old_HPP

class UGraphicsSetting_old_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UGraphicsSettingButton_C* GraphicsSettingButton;
    class UGraphicsSettingButton_C* GraphicsSettingButton_0;
    class UTextBlock* Name;
    class UHorizontalBox* OptionHolder;
    FString SettingName;
    TArray<FString> OptionNames;
    TArray<class UGraphicsSettingButton_C*> OptionWidgets;
    class AChunkManagerBP_C* ChunkManager;
    class USettingsUI_New_C* ParentWidget;

    void Construct();
    void OptionClicked(FString Option);
    void Init(class AChunkManagerBP_C* ChunkManager, class USettingsUI_New_C* ParentWidget);
    void SetGOSelected(FString Option);
    void ExecuteUbergraph_GraphicsSetting_old(int32 EntryPoint);
};

#endif
