#ifndef UE4SS_SDK_ManageModsWidget_HPP
#define UE4SS_SDK_ManageModsWidget_HPP

class UManageModsWidget_C : public UManageModsWidgetParent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCircularThrobber* CircularThrobber_81;
    class UButton* Error_Button;
    class UBackgroundBlur* Error_Overlay;
    class UButton* OK_Success;
    class UTextBlock* OpenWorkshopButtonText;
    class UTextBlock* OpenWorkshopButtonText_1;
    class UBackgroundBlur* ProcessingOverlay;
    class UButton* PublishButton;
    class UButton* PublishButton_1;
    class UBackgroundBlur* Success_Overlay;
    class UTextBlock* Success_Text;
    class UTextBlock* Text_LocalModsCustomBlocks;
    class UTextBlock* Text_LocalModsMods;
    class UTextBlock* Text_NoLocalMods;
    class UTextBlock* Text_NoWorkshopMods;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TextBlock_4;
    class UTextBlock* TextBlock_Workshop;
    class UBackgroundBlur* UpdateSuccess_Overlay;
    class UButton* UpdateSuccessButton;
    class UVerticalBox* VerticalBox_LocalModsBlocks;
    class UVerticalBox* VerticalBox_LocalModsMods;
    class UVerticalBox* VerticalBox_WorkshopSubribed;
    class ABlockPreviewRenderActor_C* BlockPreviewRenderActor;
    TArray<FSteamWorkshopItemDetails> AllItemsFromCurrentUser;
    int32 PageToGet;
    TMap<int32, FSteamUGCItemId> UniqueIDToWorkshopID;

    void CreateList_Workshop();
    void CreateList_Local();
    void OnSteamInitFailure_4EC72D6C4BD6C580308B3FB91F6D2841(FQueryWorkshopForUserItemsResult Result);
    void OnFailure_4EC72D6C4BD6C580308B3FB91F6D2841(FQueryWorkshopForUserItemsResult Result);
    void OnSuccess_4EC72D6C4BD6C580308B3FB91F6D2841(FQueryWorkshopForUserItemsResult Result);
    void Construct();
    void CustomBeginPlay();
    void SetProcessing(bool Enabled, bool success, bool WasUpdate);
    void BndEvt__OK_Success_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Error_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void QueryAllOwnWorkshopItems();
    void BndEvt__UpdateSuccessButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void CreateLists();
    void BndEvt__PublishButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__ManageModsWidget_PublishButton_1_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_ManageModsWidget(int32 EntryPoint);
};

#endif
