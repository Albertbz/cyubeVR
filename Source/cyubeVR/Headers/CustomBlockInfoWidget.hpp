#ifndef UE4SS_SDK_CustomBlockInfoWidget_HPP
#define UE4SS_SDK_CustomBlockInfoWidget_HPP

class UCustomBlockInfoWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCustomBlockPreviewWidget2_C* CustomBlockPreviewWidget2_75;
    class UImage* Image_2;
    class UImage* Image_108;
    class UTextBlock* NameOfBlock;
    class UButton* PublishButton;
    class UTextBlock* PublishButtonText;
    class UTextBlock* TextBlock_CreatorName;
    FSteamUGCUpdateHandle updateHandle;
    class UManageModsWidget_C* ParentWidget;
    int32 UniqueId;
    FString Name;
    bool DoingUpdate;
    FString Path;
    bool AlreadyUploaded;
    FSteamUGCItemId WorkshopID;
    FSteamWorkshopUpdateDetails ItemDetailsToUpload;
    FSteamUGCItemId WorkshopIDToUpdate;
    bool IsFromWorkshop;
    FString CreatorName;
    bool IsAnimated;
    bool IsGlowing;

    void GetTags(TArray<FString>& tags);
    void SetData(int32 UniqueId, FString Name, FString Path, bool AlreadyUploaded, FSteamUGCItemId WorkshopID, bool IsFromWorkshop, FString CreatorName, bool IsAnimated, bool IsGlowing);
    void OnSteamInitFailure_112E250A48172439C6098D8FA228E1DF(FCreateWorkshopItemResult Result);
    void OnFailure_112E250A48172439C6098D8FA228E1DF(FCreateWorkshopItemResult Result);
    void OnSuccess_112E250A48172439C6098D8FA228E1DF(FCreateWorkshopItemResult Result);
    void OnSteamInitFailure_8F52D5E4433B2AA53D1DE8A8CD9676D6(FUpdateWorkshopItemResult Result);
    void OnFailure_8F52D5E4433B2AA53D1DE8A8CD9676D6(FUpdateWorkshopItemResult Result);
    void OnUpdateComplete_8F52D5E4433B2AA53D1DE8A8CD9676D6(FUpdateWorkshopItemResult Result);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void onUpdateStarted(FSteamUGCUpdateHandle updateHandle);
    void BndEvt__PublishButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void Construct();
    void PublishNewItem();
    void UpdateExistingItem();
    void FinalSubmitData();
    void ExecuteUbergraph_CustomBlockInfoWidget(int32 EntryPoint);
};

#endif
