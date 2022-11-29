#ifndef UE4SS_SDK_OtherModInfoWidget_HPP
#define UE4SS_SDK_OtherModInfoWidget_HPP

class UOtherModInfoWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HorizontalBox_89;
    class UHorizontalBox* HorizontalBox_96;
    class UImage* Image_2;
    class UImage* Image_179;
    class UTextBlock* NameOfBlock;
    class UTextBlock* NameOfBlock_1;
    class UOneModTag_C* OneModTag_Audio;
    class UOneModTag_C* OneModTag_Creative;
    class UOneModTag_C* OneModTag_Framework;
    class UOneModTag_C* OneModTag_Graphics;
    class UOneModTag_C* OneModTag_SmallLight;
    class UOneModTag_C* OneModTag_Survival;
    class UButton* PublishButton;
    class UTextBlock* PublishButtonText;
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
    FString Preview Image Path;
    FString InternalName;
    TArray<FString> tags;

    void UpdateAlreadyUploaded();
    void GetAllTags(TArray<FString>& tags);
    void SetData(FString DisplayName, FString InternalName, FString Path, FString PreviewImagePath, bool AlreadyUploaded, FSteamUGCItemId WorkshopID, bool IsFromWorkshop, bool HasValidProperties, TArray<FString>& tags);
    void OnSteamInitFailure_E385C199455B3CC561982DA2E62390F3(FCreateWorkshopItemResult Result);
    void OnFailure_E385C199455B3CC561982DA2E62390F3(FCreateWorkshopItemResult Result);
    void OnSuccess_E385C199455B3CC561982DA2E62390F3(FCreateWorkshopItemResult Result);
    void OnSteamInitFailure_55005B674749F57658A05CB687CE4E30(FUpdateWorkshopItemResult Result);
    void OnFailure_55005B674749F57658A05CB687CE4E30(FUpdateWorkshopItemResult Result);
    void OnUpdateComplete_55005B674749F57658A05CB687CE4E30(FUpdateWorkshopItemResult Result);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void onUpdateStarted(FSteamUGCUpdateHandle updateHandle);
    void BndEvt__PublishButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void Construct();
    void PublishNewItem();
    void UpdateExistingItem();
    void FinalSubmitData();
    void InitializeExistingTags();
    void ExecuteUbergraph_OtherModInfoWidget(int32 EntryPoint);
};

#endif
