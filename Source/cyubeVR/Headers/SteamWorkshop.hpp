#ifndef UE4SS_SDK_SteamWorkshop_HPP
#define UE4SS_SDK_SteamWorkshop_HPP

#include "SteamWorkshop_enums.hpp"

struct FSteamResult
{
    EResultBP Result;

};

struct FGeneralWorkshopItemResult : public FSteamResult
{
    FSteamUGCItemId workshopItemID;

};

struct FUserFavoriteItemChangedResult : public FGeneralWorkshopItemResult
{
    bool bWasAddRequest;

};

class UCallbackProxyAddRemoveWorkshopItemFavorite : public UOnlineBlueprintCallProxyBase
{
    FCallbackProxyAddRemoveWorkshopItemFavoriteOnSuccess OnSuccess;
    void SteamDelegateOnAddRemoveWorkshopItemFavorite(FUserFavoriteItemChangedResult Result);
    FCallbackProxyAddRemoveWorkshopItemFavoriteOnFailure OnFailure;
    void SteamDelegateOnAddRemoveWorkshopItemFavorite(FUserFavoriteItemChangedResult Result);
    FCallbackProxyAddRemoveWorkshopItemFavoriteOnSteamInitFailure OnSteamInitFailure;
    void SteamDelegateOnAddRemoveWorkshopItemFavorite(FUserFavoriteItemChangedResult Result);

    class UCallbackProxyAddRemoveWorkshopItemFavorite* SteamWorkshop_AddRemoveItemFavorite(const FSteamUGCItemId& ItemId, bool bAddToFavourites);
};

struct FSteamWorkshopUpdateDetails
{
    FString Title;
    FString Description;
    FString updateNotice;
    ESteamSupportedLanguages updateLanguage;
    FString MetaData;
    ESteamItemVisibility Visibility;
    TArray<FString> tags;
    TArray<FSteamKeyValuePair> keyValueTags;
    FString contentDirectory;
    FString previewImage;
    TArray<FString> additionalImages;
    TArray<FString> youtubeVideoIDs;
    TArray<FString> keysOfKeyValueTagsToRemove;
    TArray<int32> indexOfPreviewToRemove;

};

struct FUpdateWorkshopItemResult : public FGeneralWorkshopItemResult
{
    bool bUserNeedsToAcceptWorkshopLegalAgreement;

};

struct FCreateWorkshopItemResult : public FUpdateWorkshopItemResult
{
    FSteamWorkshopUpdateDetails itemDetails;

};

class UCallbackProxyCreateWorkshopItem : public UOnlineBlueprintCallProxyBase
{
    FCallbackProxyCreateWorkshopItemOnSuccess OnSuccess;
    void SteamDelegateOnCreateWorkshopItem(FCreateWorkshopItemResult Result);
    FCallbackProxyCreateWorkshopItemOnFailure OnFailure;
    void SteamDelegateOnCreateWorkshopItem(FCreateWorkshopItemResult Result);
    FCallbackProxyCreateWorkshopItemOnSteamInitFailure OnSteamInitFailure;
    void SteamDelegateOnCreateWorkshopItem(FCreateWorkshopItemResult Result);

    class UCallbackProxyCreateWorkshopItem* SteamWorkshop_CreateItem(const FSteamWorkshopUpdateDetails& itemDetails);
};

struct FGetUserVoteOnWorkshopItemResult : public FGeneralWorkshopItemResult
{
    EVoteType userVoteType;

};

class UCallbackProxyGetUserVoteOnWorkshopItem : public UOnlineBlueprintCallProxyBase
{
    FCallbackProxyGetUserVoteOnWorkshopItemOnSuccess OnSuccess;
    void SteamDelegateOnGetUserVoteOnWorkshopItem(FGetUserVoteOnWorkshopItemResult Result);
    FCallbackProxyGetUserVoteOnWorkshopItemOnFailure OnFailure;
    void SteamDelegateOnGetUserVoteOnWorkshopItem(FGetUserVoteOnWorkshopItemResult Result);
    FCallbackProxyGetUserVoteOnWorkshopItemOnSteamInitFailure OnSteamInitFailure;
    void SteamDelegateOnGetUserVoteOnWorkshopItem(FGetUserVoteOnWorkshopItemResult Result);

    class UCallbackProxyGetUserVoteOnWorkshopItem* SteamWorkshop_GetUserVoteOnItem(const FSteamUGCItemId& ItemId);
};

struct FSteamUGCQueryParameterAllUserDetails
{
    int32 pageId;
    ESteamSupportedLanguages Language;
    int32 allowedCacheResponseTime;
    int32 numDaysPlaytime;
    uint8 bReturnPreviewUrl;
    uint8 bReturnKeyValueTags;
    uint8 bReturnFullDescription;
    uint8 bReturnMetaData;
    uint8 bReturnChildIds;
    uint8 bReturnAdditionalPreviews;

};

struct FSteamUGCQueryParameterTagsAllUserDetails
{
    TArray<FSteamKeyValuePair> requiredKeyValueTags;

};

struct FSteamUGCQueryParameterTagsAllUser : public FSteamUGCQueryParameterTagsAllUserDetails
{
    TArray<FString> requiredTags;
    TArray<FString> excludedTags;

};

struct FSteamUGCQueryParameterAllUser : public FSteamUGCQueryParameterAllUserDetails
{
    FSteamUGCQueryParameterTagsAllUser tagParameter;
    bool bReturnTotalOnly;
    bool bReturnIdsOnly;

};

struct FSteamUGCQueryParameterAll : public FSteamUGCQueryParameterAllUser
{
    FString searchText;
    int32 rankedByTrendDays;
    bool bMatchAnyTag;
    EUGCQueryBP queryType;
    EUGCMatchingUGCTypeBP fileType;

};

struct FItemPreviewDetails
{
    FString urlOrVideoId;
    FString originalFileName;
    EItemPreviewTypeBP ItemType;

};

struct FSteamWorkshopItemDetails
{
    EResultBP Result;
    FSteamUGCItemId workshopItemID;
    EWorkshopFileTypeBP fileType;
    FSteamAppId appIdCreatingApp;
    FSteamAppId appIdUsingApp;
    FString Title;
    FString Description;
    FUInt64 userIdItemCreator;
    FDateTime timeStampCreated;
    FDateTime timeStampUpdated;
    FDateTime timeStampAddedToUserList;
    ESteamItemVisibility Visibility;
    bool bItemIsBanned;
    bool bItemWasAcceptedByDevelopers;
    bool bTagsTruncated;
    TArray<FString> tags;
    FSteamUGCHandle primaryFileHandle;
    FSteamUGCHandle previewImageHandle;
    FString primaryFileCloudFilename;
    int32 primaryFileSize;
    int32 previewImageSize;
    FString websiteURL;
    int32 votesUp;
    int32 votesDown;
    float score;
    FUInt32 numChildren;
    FString previewUrl;
    TArray<FItemPreviewDetails> additionalPreviews;
    TArray<FSteamUGCItemId> childItemIds;
    TArray<FSteamKeyValuePair> keyValueTags;
    FString MetaData;

};

struct FQueryWorkshopForItemsResult : public FSteamResult
{
    FSteamUGCQueryHandle queryHandle;
    FUInt32 numResultsReturned;
    FUInt32 numMatchingResults;
    bool bHasMorePages;
    bool bRetrievedDataWasCached;
    TArray<FSteamWorkshopItemDetails> items;

};

struct FQueryWorkshopForAllItemsResult : public FQueryWorkshopForItemsResult
{
    FSteamUGCQueryParameterAll queryParams;

};

class UCallbackProxyQueryWorkshopForAllItems : public UOnlineBlueprintCallProxyBase
{
    FCallbackProxyQueryWorkshopForAllItemsOnSuccess OnSuccess;
    void SteamDelegateOnQueryWorkshopForAllItems(FQueryWorkshopForAllItemsResult Result);
    FCallbackProxyQueryWorkshopForAllItemsOnFailure OnFailure;
    void SteamDelegateOnQueryWorkshopForAllItems(FQueryWorkshopForAllItemsResult Result);
    FCallbackProxyQueryWorkshopForAllItemsOnSteamInitFailure OnSteamInitFailure;
    void SteamDelegateOnQueryWorkshopForAllItems(FQueryWorkshopForAllItemsResult Result);

    class UCallbackProxyQueryWorkshopForAllItems* SteamWorkshop_QueryForAllItems(const FSteamUGCQueryParameterAll& Parameter);
};

struct FSteamUGCQueryParameterDetails : public FSteamUGCQueryParameterAllUserDetails
{
    FSteamUGCQueryParameterTagsAllUserDetails tagParameter;
    TArray<FSteamUGCItemId> workshopItemIds;

};

struct FQueryWorkshopForItemDetailsResult : public FQueryWorkshopForItemsResult
{
    FSteamUGCQueryParameterDetails queryParams;

};

class UCallbackProxyQueryWorkshopForItemDetails : public UOnlineBlueprintCallProxyBase
{
    FCallbackProxyQueryWorkshopForItemDetailsOnSuccess OnSuccess;
    void SteamDelegateOnQueryWorkshopForItemDetails(FQueryWorkshopForItemDetailsResult Result);
    FCallbackProxyQueryWorkshopForItemDetailsOnFailure OnFailure;
    void SteamDelegateOnQueryWorkshopForItemDetails(FQueryWorkshopForItemDetailsResult Result);
    FCallbackProxyQueryWorkshopForItemDetailsOnSteamInitFailure OnSteamInitFailure;
    void SteamDelegateOnQueryWorkshopForItemDetails(FQueryWorkshopForItemDetailsResult Result);

    class UCallbackProxyQueryWorkshopForItemDetails* SteamWorkshop_QueryForItemDetails(const FSteamUGCQueryParameterDetails& Parameter);
};

struct FSteamUGCQueryParameterUser : public FSteamUGCQueryParameterAllUser
{
    FString filenameFilter;
    EUserUGCListBP list;
    EUGCMatchingUGCTypeBP Type;
    EUserUGCListSortOrderBP sortOrder;

};

struct FQueryWorkshopForUserItemsResult : public FQueryWorkshopForItemsResult
{
    FSteamUGCQueryParameterUser queryParams;

};

class UCallbackProxyQueryWorkshopForUserItems : public UOnlineBlueprintCallProxyBase
{
    FCallbackProxyQueryWorkshopForUserItemsOnSuccess OnSuccess;
    void SteamDelegateOnQueryWorkshopForUserItems(FQueryWorkshopForUserItemsResult Result);
    FCallbackProxyQueryWorkshopForUserItemsOnFailure OnFailure;
    void SteamDelegateOnQueryWorkshopForUserItems(FQueryWorkshopForUserItemsResult Result);
    FCallbackProxyQueryWorkshopForUserItemsOnSteamInitFailure OnSteamInitFailure;
    void SteamDelegateOnQueryWorkshopForUserItems(FQueryWorkshopForUserItemsResult Result);

    class UCallbackProxyQueryWorkshopForUserItems* SteamWorkshop_QueryForUserItems(const FSteamUGCQueryParameterUser& Parameter);
};

struct FSetUserVoteOnWorkshopItemResult : public FGeneralWorkshopItemResult
{
    bool bVoteUp;

};

class UCallbackProxySetUserVoteOnWorkshopItem : public UOnlineBlueprintCallProxyBase
{
    FCallbackProxySetUserVoteOnWorkshopItemOnSuccess OnSuccess;
    void SteamDelegateOnSetUserVoteOnWorkshopItem(FSetUserVoteOnWorkshopItemResult Result);
    FCallbackProxySetUserVoteOnWorkshopItemOnFailure OnFailure;
    void SteamDelegateOnSetUserVoteOnWorkshopItem(FSetUserVoteOnWorkshopItemResult Result);
    FCallbackProxySetUserVoteOnWorkshopItemOnSteamInitFailure OnSteamInitFailure;
    void SteamDelegateOnSetUserVoteOnWorkshopItem(FSetUserVoteOnWorkshopItemResult Result);

    class UCallbackProxySetUserVoteOnWorkshopItem* SteamWorkshop_SetUserVoteOnItem(const FSteamUGCItemId& ItemId, bool bVoteUp);
};

class UCallbackProxyStartStopWorkshopItemsPlaytimeTracking : public UOnlineBlueprintCallProxyBase
{
    FCallbackProxyStartStopWorkshopItemsPlaytimeTrackingOnSuccess OnSuccess;
    void SteamDelegateOnStartStopWorkshopItemsPlaytimeTracking(FSteamResult Result);
    FCallbackProxyStartStopWorkshopItemsPlaytimeTrackingOnFailure OnFailure;
    void SteamDelegateOnStartStopWorkshopItemsPlaytimeTracking(FSteamResult Result);
    FCallbackProxyStartStopWorkshopItemsPlaytimeTrackingOnSteamInitFailure OnSteamInitFailure;
    void SteamDelegateOnStartStopWorkshopItemsPlaytimeTracking(FSteamResult Result);

    class UCallbackProxyStartStopWorkshopItemsPlaytimeTracking* SteamWorkshop_StartStopItemsPlaytimeTracking(const TArray<FSteamUGCItemId>& itemIds, bool bStartPlaytimeTracking);
};

class UCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems : public UOnlineBlueprintCallProxyBase
{
    FCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItemsOnSuccess OnSuccess;
    void SteamDelegateOnStopWorkshopPlaytimeTrackingAllItems(FSteamResult Result);
    FCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItemsOnFailure OnFailure;
    void SteamDelegateOnStopWorkshopPlaytimeTrackingAllItems(FSteamResult Result);
    FCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItemsOnSteamInitFailure OnSteamInitFailure;
    void SteamDelegateOnStopWorkshopPlaytimeTrackingAllItems(FSteamResult Result);

    class UCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems* SteamWorkshop_StopPlaytimeTrackingAllItems();
};

class UCallbackProxySubscribeUnsubscribeWorkshopItem : public UOnlineBlueprintCallProxyBase
{
    FCallbackProxySubscribeUnsubscribeWorkshopItemOnSuccess OnSuccess;
    void SteamDelegateOnSubscribeUnsubscribeWorkshopItem(FGeneralWorkshopItemResult Result);
    FCallbackProxySubscribeUnsubscribeWorkshopItemOnFailure OnFailure;
    void SteamDelegateOnSubscribeUnsubscribeWorkshopItem(FGeneralWorkshopItemResult Result);
    FCallbackProxySubscribeUnsubscribeWorkshopItemOnSteamInitFailure OnSteamInitFailure;
    void SteamDelegateOnSubscribeUnsubscribeWorkshopItem(FGeneralWorkshopItemResult Result);

    class UCallbackProxySubscribeUnsubscribeWorkshopItem* SteamWorkshop_SubscribeUnsubscribeItem(const FSteamUGCItemId& ItemId, bool bSubscribe);
};

class UCallbackProxyUpdateWorkshopItem : public UOnlineBlueprintCallProxyBase
{
    FCallbackProxyUpdateWorkshopItemOnUpdateComplete OnUpdateComplete;
    void SteamDelegateOnUpdateWorkshopItem(FUpdateWorkshopItemResult Result);
    FCallbackProxyUpdateWorkshopItemOnFailure OnFailure;
    void SteamDelegateOnUpdateWorkshopItem(FUpdateWorkshopItemResult Result);
    FCallbackProxyUpdateWorkshopItemOnSteamInitFailure OnSteamInitFailure;
    void SteamDelegateOnUpdateWorkshopItem(FUpdateWorkshopItemResult Result);

    class UCallbackProxyUpdateWorkshopItem* SteamWorkshop_UpdateItem(const FSteamUGCItemId& ItemId, const FSteamWorkshopUpdateDetails& updateDetails, const FSteamWorkshop_UpdateItemOnUpdateStarted& onUpdateStarted);
};

struct FWorkshopItemDownloadInfo
{
    FUInt64 bytesCurrent;
    FUInt64 bytesTotal;
    int32 megaBytesCurrent;
    int32 megaBytesTotal;
    float percentageFinished;

};

struct FWorkshopItemUpdateInfo : public FWorkshopItemDownloadInfo
{
    EItemUpdateStatusBP status;

};

struct FSteamWorkshopItemInstallInfo
{
    FUInt64 sizeOnDiskBytes;
    int32 sizeOnDiskMBytes;
    FString Directory;
    FDateTime timeStampLastUpdate;

};

class USteamWorkshopLibrary : public UBlueprintFunctionLibrary
{

    int32 SteamWorkshop_UpdateTitleLengthMin_FromConfig();
    int32 SteamWorkshop_UpdateDescriptionLengthMin_FromConfig();
    void SteamWorkshop_SuspendResumeDownloads(const bool bDoSuspend);
    EResultBP SteamWorkshop_SetServerDownloadDirectory(const FSteamDepotId& serverDepotId, FString Directory);
    void SteamWorkshop_GetSubscribedItems(const int32 maxNumItemsToReturn, TArray<FSteamUGCItemId>& outItems);
    int32 SteamWorkshop_GetNumSubscribedItems();
    void SteamWorkshop_GetItemUpdateProgress(const FSteamUGCUpdateHandle& updateHandle, FWorkshopItemUpdateInfo& Info);
    bool SteamWorkshop_GetItemStateFlag(const FSteamUGCItemId& ItemId, const EItemStateBP flagToQuery);
    TArray<EItemStateBP> SteamWorkshop_GetItemState(const FSteamUGCItemId& ItemId);
    bool SteamWorkshop_GetItemQueryStatistic(const FSteamUGCQueryHandle& queryHandle, const int32 ItemIndex, const TEnumAsByte<EItemStatisticBP> statToRetrieve, FUInt64& StatValue);
    EResultBP SteamWorkshop_GetItemInstallInfo(const FSteamUGCItemId& ItemId, FSteamWorkshopItemInstallInfo& Info);
    EResultBP SteamWorkshop_GetItemDownloadInfo(const FSteamUGCItemId& ItemId, FWorkshopItemDownloadInfo& downloadInfo);
    EResultBP SteamWorkshop_DownloadItem(const FSteamUGCItemId& ItemId, bool bHighPriority);
    void SteamWorkshop_ActivateGameOverlayToWorkshopItem(const FSteamUGCItemId& ItemId);
    bool SteamDelegate_OnWorkshopItemDownloaded_Unbind(FSteamDelegate_OnWorkshopItemDownloaded_UnbindDelegateToCall delegateToCall);
    bool SteamDelegate_OnWorkshopItemDownloaded_Bind(FSteamDelegate_OnWorkshopItemDownloaded_BindDelegateToCall delegateToCall);
    void PrintWorkshopItemDetails(const FSteamWorkshopItemDetails& itemDetails, float DisplayTime, FLinearColor Color, bool bPrintToScreen, bool bPrintToLog);
    FSteamWorkshopUpdateDetails MakeSteamWorkshopUpdateDetails(const FString Title, const FString Description, const FString updateNotice, const FString MetaData, const TArray<FString>& tags, const TArray<FSteamKeyValuePair>& keyValueTags, const FString contentDirectory, const FString previewImage, const TArray<FString>& additionalImages, const TArray<FString>& youtubeVideoIDs, const TArray<FString>& keysOfKeyValueTagsToRemove, const TArray<int32>& indexOfPreviewToRemove, const ESteamSupportedLanguages updateLanguage, const ESteamItemVisibility Visibility);
    FSteamUGCQueryParameterTagsAllUserDetails MakeSteamUGCQueryParameterTagsAllUserDetails(const TArray<FSteamKeyValuePair>& requiredKeyValueTags);
    FSteamUGCQueryParameterTagsAllUser MakeSteamUGCQueryParameterTagsAllUser(const TArray<FString>& requiredTags, const TArray<FString>& excludedTags, const TArray<FSteamKeyValuePair>& requiredKeyValueTags);
};

struct FDownloadItemResult : public FGeneralWorkshopItemResult
{
    FUInt32 AppID;

};

struct FGetAppdependencyResult : public FGeneralWorkshopItemResult
{
    TArray<FSteamAppId> dependencyApps;
    bool bAllAppDependenciesReturned;

};

struct FAddRemoveItemDependencyResult : public FGeneralWorkshopItemResult
{
    FSteamUGCItemId dependendItemId;
    bool bAddDependency;

};

struct FAddRemoveAppDependencyResult : public FDownloadItemResult
{
    bool bAddDependency;

};

#endif
