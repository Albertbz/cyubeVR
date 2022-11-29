#ifndef UE4SS_SDK_UWorksWeb_HPP
#define UE4SS_SDK_UWorksWeb_HPP

#include "UWorksWeb_enums.hpp"

class UUWorksInterfaceWeb : public UUWorksInterface
{
};

class UUWorksInterfaceWebApps : public UUWorksInterfaceWeb
{

    void UpToDateCheckMinimal(int32 AppID, int32 Version, const FUpToDateCheckMinimalDelegate& Delegate);
    class UUWorksRequestWebUpToDateCheck* UpToDateCheck();
    void SetAppBuildLiveMinimal(FString Key, int32 AppID, int32 BuildID, FString BetaKey, FString Description, const FSetAppBuildLiveMinimalDelegate& Delegate);
    class UUWorksRequestWebSetAppBuildLive* SetAppBuildLive();
    void GetServersAtAddressMinimal(FString Addr, const FGetServersAtAddressMinimalDelegate& Delegate);
    class UUWorksRequestWebGetServersAtAddress* GetServersAtAddress();
    void GetServerListMinimal(FString Key, FString Filter, int32 Limit, const FGetServerListMinimalDelegate& Delegate);
    class UUWorksRequestWebGetServerList* GetServerList();
    void GetPlayersBannedMinimal(FString Key, int32 AppID, const FGetPlayersBannedMinimalDelegate& Delegate);
    class UUWorksRequestWebGetPlayersBanned* GetPlayersBanned();
    void GetCheatingReportsListMinimal(FString Key, int32 AppID, int32 TimeBegin, int32 TimeEnd, bool bIncludeReports, bool bIncludeBans, FString ReportIDMin, const FGetCheatingReportsListMinimalDelegate& Delegate);
    class UUWorksRequestWebGetCheatingReportsList* GetCheatingReportsList();
    void GetAppListMinimal(const FGetAppListMinimalDelegate& Delegate);
    class UUWorksRequestWebGetAppList* GetAppList();
    void GetAppDepotVersionsMinimal(FString Key, int32 AppID, const FGetAppDepotVersionsMinimalDelegate& Delegate);
    class UUWorksRequestWebGetAppDepotVersions* GetAppDepotVersions();
    void GetAppBuildsMinimal(FString Key, int32 AppID, int32 Count, const FGetAppBuildsMinimalDelegate& Delegate);
    class UUWorksRequestWebGetAppBuilds* GetAppBuilds();
    void GetAppBetasMinimal(FString Key, int32 AppID, const FGetAppBetasMinimalDelegate& Delegate);
    class UUWorksRequestWebGetAppBetas* GetAppBetas();
};

class UUWorksInterfaceWebBroadcast : public UUWorksInterfaceWeb
{

    void PostGameDataFrameMinimal(FString Key, int32 AppID, FUWorksSteamID SteamID, FString BroadcastID, FString FrameData, const FPostGameDataFrameMinimalDelegate& Delegate);
    class UUWorksRequestWebPostGameDataFrame* PostGameDataFrame();
};

class UUWorksInterfaceWebCheatReporting : public UUWorksInterfaceWeb
{

    void StartSecureMultiplayerSessionMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, const FStartSecureMultiplayerSessionMinimalDelegate& Delegate);
    class UUWorksRequestWebStartSecureMultiplayerSession* StartSecureMultiplayerSession();
    void RequestVacStatusForUserMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, FString SessionId, const FRequestVacStatusForUserMinimalDelegate& Delegate);
    class UUWorksRequestWebRequestVacStatusForUser* RequestVacStatusForUser();
    void RequestPlayerGameBanMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, FUWorksSteamID ReportID, FString CheatDescription, int32 Duration, bool bDelayBan, const FRequestPlayerGameBanMinimalDelegate& Delegate);
    class UUWorksRequestWebRequestPlayerGameBan* RequestPlayerGameBan();
    void ReportPlayerCheatingMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, FUWorksSteamID SteamIDReporter, int32 AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32 GameMode, int32 SuspicionStartTime, int32 Severity, const FReportPlayerCheatingMinimalDelegate& Delegate);
    class UUWorksRequestWebReportPlayerCheating* ReportPlayerCheating();
    void ReportCheatDataMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, FString PathAndFileName, FString WebCheatURL, FString TimeNow, FString TimeStarted, FString TimeStopped, FString CheatName, int32 GameProcessID, int32 CheatProcessID, FString CheatParamA, FString CheatParamB, const FReportCheatDataMinimalDelegate& Delegate);
    class UUWorksRequestWebReportCheatData* ReportCheatData();
    void RemovePlayerGameBanMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, const FRemovePlayerGameBanMinimalDelegate& Delegate);
    class UUWorksRequestWebRemovePlayerGameBan* RemovePlayerGameBan();
    void GetCheatingReportsMinimal(FString Key, int32 AppID, int32 TimeEnd, int32 TimeBegin, FString ReportIDMin, bool bIncludeReports, bool bIncludeBans, FUWorksSteamID SteamID, const FGetCheatingReportsMinimalDelegate& Delegate);
    class UUWorksRequestWebGetCheatingReports* GetCheatingReports();
    void EndSecureMultiplayerSessionMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, FString SessionId, const FEndSecureMultiplayerSessionMinimalDelegate& Delegate);
    class UUWorksRequestWebEndSecureMultiplayerSession* EndSecureMultiplayerSession();
};

class UUWorksInterfaceWebCommunity : public UUWorksInterfaceWeb
{

    void ReportAbuseMinimal(FString Key, FUWorksSteamID SteamIDActor, FUWorksSteamID SteamIDTarget, int32 AppID, uint8 AbuseType, uint8 ContentType, FString Description, FString GID, const FReportAbuseMinimalDelegate& Delegate);
    class UUWorksRequestWebReportAbuse* ReportAbuse();
};

class UUWorksInterfaceWebEcon : public UUWorksInterfaceWeb
{

    void GetTradeOffersSummaryMinimal(FString Key, int32 TimeLastVisit, const FGetTradeOffersSummaryMinimalDelegate& Delegate);
    class UUWorksRequestWebGetTradeOffersSummary* GetTradeOffersSummary();
    void GetTradeOffersMinimal(FString Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescription, FString Language, bool bActiveOnly, bool bHistoricalOnly, int32 TimeHistoricalCutoff, const FGetTradeOffersMinimalDelegate& Delegate);
    class UUWorksRequestWebGetTradeOffers* GetTradeOffers();
    void GetTradeOfferMinimal(FString Key, FString TradeOfferID, FString Language, const FGetTradeOfferMinimalDelegate& Delegate);
    class UUWorksRequestWebGetTradeOffer* GetTradeOffer();
    void GetTradeHistoryMinimal(FString Key, int32 MaxTrades, int32 StartAfterTime, FString StartAfterTradeID, bool bNavigatingBack, bool bGetDescription, FString Language, bool bIncludeFailed, bool bIncludeTotal, const FGetTradeHistoryMinimalDelegate& Delegate);
    class UUWorksRequestWebGetTradeHistory* GetTradeHistory();
    void FlushInventoryCacheMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, FString ContextID, const FFlushInventoryCacheMinimalDelegate& Delegate);
    class UUWorksRequestWebFlushInventoryCache* FlushInventoryCache();
    void FlushContextCacheMinimal(FString Key, int32 AppID, const FFlushContextCacheMinimalDelegate& Delegate);
    class UUWorksRequestWebFlushContextCache* FlushContextCache();
    void FlushAssetAppearanceCacheMinimal(FString Key, int32 AppID, const FFlushAssetAppearanceCacheMinimalDelegate& Delegate);
    class UUWorksRequestWebFlushAssetAppearanceCache* FlushAssetAppearanceCache();
    void DeclineTradeOfferMinimal(FString Key, FString TradeOfferID, const FDeclineTradeOfferMinimalDelegate& Delegate);
    class UUWorksRequestWebDeclineTradeOffer* DeclineTradeOffer();
    void CancelTradeOfferMinimal(FString Key, FString TradeOfferID, const FCancelTradeOfferMinimalDelegate& Delegate);
    class UUWorksRequestWebCancelTradeOffer* CancelTradeOffer();
};

class UUWorksInterfaceWebEconMarket : public UUWorksInterfaceWeb
{

    void GetPopularMinimal(FString Key, FString Language, int32 Rows, int32 Start, int32 FilterAppID, int32 ECurrency, const FGetPopularMinimalDelegate& Delegate);
    class UUWorksRequestWebGetPopular* GetPopular();
    void GetMarketEligibilityMinimal(FString Key, FUWorksSteamID SteamID, const FGetMarketEligibilityMinimalDelegate& Delegate);
    class UUWorksRequestWebGetMarketEligibility* GetMarketEligibility();
    void GetAssetIDMinimal(FString Key, int32 AppID, FString ListingID, const FGetAssetIDMinimalDelegate& Delegate);
    class UUWorksRequestWebGetAssetID* GetAssetID();
    void CancelAppListingsForUserMinimal(FString Key, int32 AppID, FUWorksSteamID SteamID, bool bSynchronous, const FCancelAppListingsForUserMinimalDelegate& Delegate);
    class UUWorksRequestWebCancelAppListingsForUser* CancelAppListingsForUser();
};

class UUWorksInterfaceWebEconomy : public UUWorksInterfaceWeb
{

    void StartTradeMinimal(FString Key, int32 AppID, FUWorksSteamID PartyA, FUWorksSteamID PartyB, const FStartTradeMinimalDelegate& Delegate);
    class UUWorksRequestWebStartTrade* StartTrade();
    void StartAssetTransactionMinimal(FString Key, int32 AppID, FUWorksSteamID SteamID, FString AssetID0, int32 AssetQuantity0, FString Currency, FString Language, FString IPAddress, FString Referrer, bool bClientAuth, const FStartAssetTransactionMinimalDelegate& Delegate);
    class UUWorksRequestWebStartAssetTransaction* StartAssetTransaction();
    void GetMarketPricesMinimal(FString Key, int32 AppID, const FGetMarketPricesMinimalDelegate& Delegate);
    class UUWorksRequestWebGetMarketPrices* GetMarketPrices();
    void GetExportedAssetsForUserMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, FString ContextID, const FGetExportedAssetsForUserMinimalDelegate& Delegate);
    class UUWorksRequestWebGetExportedAssetsForUser* GetExportedAssetsForUser();
    void GetAssetPricesMinimal(FString Key, int32 AppID, FString Currency, FString Language, const FGetAssetPricesMinimalDelegate& Delegate);
    class UUWorksRequestWebGetAssetPrices* GetAssetPrices();
    void GetAssetClassInfoMinimal(FString Key, int32 AppID, int32 ClassCount, FString ClassID0, FString Language, FString InstanceID0, const FGetAssetClassInfoMinimalDelegate& Delegate);
    class UUWorksRequestWebGetAssetClassInfo* GetAssetClassInfo();
    void FinalizeAssetTransactionMinimal(FString Key, int32 AppID, FUWorksSteamID SteamID, FString TxnID, FString Language, const FFinalizeAssetTransactionMinimalDelegate& Delegate);
    class UUWorksRequestWebFinalizeAssetTransaction* FinalizeAssetTransaction();
    void CanTradeMinimal(FString Key, int32 AppID, FUWorksSteamID SteamID, FUWorksSteamID TargetId, const FCanTradeMinimalDelegate& Delegate);
    class UUWorksRequestWebCanTrade* CanTrade();
};

class UUWorksInterfaceWebGameInventory : public UUWorksInterfaceWeb
{

    void SupportGetAssetHistoryMinimal(FString Key, int32 AppID, FString AssetID, FString ContextID, const FSupportGetAssetHistoryMinimalDelegate& Delegate);
    class UUWorksRequestWebSupportGetAssetHistory* SupportGetAssetHistory();
    void HistoryExecuteCommandsMinimal(FString Key, int32 AppID, FUWorksSteamID SteamID, FString ContextID, FString ActorId, const FHistoryExecuteCommandsMinimalDelegate& Delegate);
    class UUWorksRequestWebHistoryExecuteCommands* HistoryExecuteCommands();
    void GetUserHistoryMinimal(FString Key, int32 AppID, FUWorksSteamID SteamID, FString ContextID, int32 StartTime, int32 EndTime, const FGetUserHistoryMinimalDelegate& Delegate);
    class UUWorksRequestWebGetUserHistory* GetUserHistory();
    void GetHistoryCommandDetailsMinimal(FString Key, int32 AppID, FUWorksSteamID SteamID, FString Command, FString ContextID, FString Arguments, const FGetHistoryCommandDetailsMinimalDelegate& Delegate);
    class UUWorksRequestWebGetHistoryCommandDetails* GetHistoryCommandDetails();
};

struct FUWorksTitle
{
};

struct FUWorksUsers
{
};

struct FUWorksSessions
{
};

class UUWorksInterfaceWebGameNotifications : public UUWorksInterfaceWeb
{

    void UpdateSessionMinimal(FString Key, FString SessionId, int32 AppID, FUWorksTitle Title, FUWorksUsers Users, FUWorksSteamID SteamID, const FUpdateSessionMinimalDelegate& Delegate);
    class UUWorksRequestWebUpdateSession* UpdateSession();
    void RequestNotificationsMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, const FRequestNotificationsMinimalDelegate& Delegate);
    class UUWorksRequestWebRequestNotifications* RequestNotifications();
    void GetSessionDetailsForAppMinimal(FString Key, FUWorksSessions Sessions, int32 AppID, FString Language, const FGetSessionDetailsForAppMinimalDelegate& Delegate);
    class UUWorksRequestWebGetSessionDetailsForApp* GetSessionDetailsForApp();
    void EnumerateSessionsForAppMinimal(FString Key, int32 AppID, FUWorksSteamID SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, FString Language, const FEnumerateSessionsForAppMinimalDelegate& Delegate);
    class UUWorksRequestWebEnumerateSessionsForApp* EnumerateSessionsForApp();
    void DeleteSessionMinimal(FString Key, FString SessionId, int32 AppID, FUWorksSteamID SteamID, const FDeleteSessionMinimalDelegate& Delegate);
    void DeleteSessionBatchMinimal(FString Key, FString SessionId, int32 AppID, const FDeleteSessionBatchMinimalDelegate& Delegate);
    class UUWorksRequestWebDeleteSessionBatch* DeleteSessionBatch();
    class UUWorksRequestWebDeleteSession* DeleteSession();
    void CreateSessionMinimal(FString Key, int32 AppID, FString Context, FUWorksTitle Title, FUWorksUsers Users, FUWorksSteamID SteamID, const FCreateSessionMinimalDelegate& Delegate);
    class UUWorksRequestWebCreateSession* CreateSession();
};

class UUWorksInterfaceWebGameServers : public UUWorksInterfaceWeb
{

    void SetMemoMinimal(FString Key, FUWorksSteamID SteamID, FString Memo, const FSetMemoMinimalDelegate& Delegate);
    class UUWorksRequestWebSetMemo* SetMemo();
    void SetBanStatusMinimal(FString Key, FUWorksSteamID SteamID, bool bBanned, int32 BanSeconds, const FSetBanStatusMinimalDelegate& Delegate);
    class UUWorksRequestWebSetBanStatus* SetBanStatus();
    void ResetLoginTokenMinimal(FString Key, FUWorksSteamID SteamID, const FResetLoginTokenMinimalDelegate& Delegate);
    class UUWorksRequestWebResetLoginToken* ResetLoginToken();
    void QueryLoginTokenMinimal(FString Key, FString LoginToken, const FQueryLoginTokenMinimalDelegate& Delegate);
    class UUWorksRequestWebQueryLoginToken* QueryLoginToken();
    void GetServerSteamIDsByIPMinimal(FString Key, FString ServerIPs, const FGetServerSteamIDsByIPMinimalDelegate& Delegate);
    class UUWorksRequestWebGetServerSteamIDsByIP* GetServerSteamIDsByIP();
    void GetServerIPsBySteamIDMinimal(FString Key, FUWorksSteamID ServerSteamID, const FGetServerIPsBySteamIDMinimalDelegate& Delegate);
    class UUWorksRequestWebGetServerIPsBySteamID* GetServerIPsBySteamID();
    void GetAccountPublicInfoMinimal(FString Key, FUWorksSteamID SteamID, const FGetAccountPublicInfoMinimalDelegate& Delegate);
    class UUWorksRequestWebGetAccountPublicInfo* GetAccountPublicInfo();
    void GetAccountListMinimal(FString Key, const FGetAccountListMinimalDelegate& Delegate);
    class UUWorksRequestWebGetAccountList* GetAccountList();
    void DeleteAccountMinimal(FString Key, FUWorksSteamID SteamID, const FDeleteAccountMinimalDelegate& Delegate);
    class UUWorksRequestWebDeleteAccount* DeleteAccount();
    void CreateAccountMinimal(FString Key, int32 AppID, FString Memo, const FCreateAccountMinimalDelegate& Delegate);
    class UUWorksRequestWebCreateAccount* CreateAccount();
};

class UUWorksInterfaceWebGameServerStats : public UUWorksInterfaceWeb
{

    void GetGameServerPlayerStatsForGameMinimal(FString Key, FUWorksGameID GameID, int32 AppID, FString RangeStart, FString RangeEnd, int32 MaxResults, const FGetGameServerPlayerStatsForGameMinimalDelegate& Delegate);
    class UUWorksRequestWebGetGameServerPlayerStatsForGame* GetGameServerPlayerStatsForGame();
};

class UUWorksInterfaceWebInventory : public UUWorksInterfaceWeb
{

    void GetQuantityMinimal(FString Key, int32 AppID, FUWorksSteamID SteamID, FUWorksSteamItemDef ItemDefID, bool bForce, const FGetQuantityMinimalDelegate& Delegate);
    class UUWorksRequestWebGetQuantity* GetQuantity();
    void GetPriceSheetMinimal(FString Key, int32 ECurrency, const FGetPriceSheetMinimalDelegate& Delegate);
    class UUWorksRequestWebGetPriceSheet* GetPriceSheet();
    void GetItemDefsMinimal(FString Key, int32 AppID, FString ModifiedSince, TArray<FUWorksSteamItemDef> ItemDefIDs, TArray<FUWorksSteamItemDef> WorkshopIDs, int32 CacheMaxAgeSeconds, const FGetItemDefsMinimalDelegate& Delegate);
    class UUWorksRequestWebGetItemDefs* GetItemDefs();
    void GetInventoryMinimal(FString Key, int32 AppID, FUWorksSteamID SteamID, const FGetInventoryMinimalDelegate& Delegate);
    class UUWorksRequestWebGetInventory* GetInventory();
    void ExchangeItemMinimal(FString Key, int32 AppID, FUWorksSteamID SteamID, TArray<FUWorksSteamItemInstanceID> MaterialsItemID, TArray<int32> MaterialsQuantity, FUWorksSteamItemDef OutputItemDefID, const FExchangeItemMinimalDelegate& Delegate);
    class UUWorksRequestWebExchangeItem* ExchangeItem();
    void ConsumeItemMinimal(FString Key, int32 AppID, FUWorksSteamItemInstanceID ItemId, int32 Quantity, FUWorksSteamID SteamID, FString requestID, const FConsumeItemMinimalDelegate& Delegate);
    class UUWorksRequestWebConsumeItem* ConsumeItem();
    void ConsolidateMinimal(FString Key, int32 AppID, FUWorksSteamID SteamID, TArray<FUWorksSteamItemDef> ItemDefID, bool bForce, const FConsolidateMinimalDelegate& Delegate);
    class UUWorksRequestWebConsolidate* Consolidate();
    void AddPromoItemMinimal(FString Key, int32 AppID, FUWorksSteamItemDef ItemDefID, FString ItemPropsJSON, FUWorksSteamID SteamID, bool bNotify, FString requestID, const FAddPromoItemMinimalDelegate& Delegate);
    class UUWorksRequestWebAddPromoItem* AddPromoItem();
    void AddItemMinimal(FString Key, int32 AppID, TArray<FUWorksSteamItemDef> ItemDefID, FString ItemPropsJSON, FUWorksSteamID SteamID, bool bNotify, FString requestID, const FAddItemMinimalDelegate& Delegate);
    class UUWorksRequestWebAddItem* AddItem();
};

class UUWorksInterfaceWebLeaderboards : public UUWorksInterfaceWeb
{

    void SetLeaderboardScoreMinimal(FString Key, int32 AppID, int32 LeaderboardID, FUWorksSteamID SteamID, int32 score, FString ScoreMethod, TArray<uint8> Details, const FSetLeaderboardScoreMinimalDelegate& Delegate);
    class UUWorksRequestWebSetLeaderboardScore* SetLeaderboardScore();
    void ResetLeaderboardMinimal(FString Key, int32 AppID, int32 LeaderboardID, const FResetLeaderboardMinimalDelegate& Delegate);
    class UUWorksRequestWebResetLeaderboard* ResetLeaderboard();
    void GetLeaderboardsForGameMinimal(FString Key, int32 AppID, const FGetLeaderboardsForGameMinimalDelegate& Delegate);
    class UUWorksRequestWebGetLeaderboardsForGame* GetLeaderboardsForGame();
    void GetLeaderboardEntriesMinimal(FString Key, int32 AppID, int32 RangeStart, int32 RangeEnd, int32 LeaderboardID, int32 DataRequest, FUWorksSteamID SteamID, const FGetLeaderboardEntriesMinimalDelegate& Delegate);
    class UUWorksRequestWebGetLeaderboardEntries* GetLeaderboardEntries();
    void FindOrCreateLeaderboardMinimal(FString Key, int32 AppID, FString Name, FString SortMethod, FString DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads, const FFindOrCreateLeaderboardMinimalDelegate& Delegate);
    class UUWorksRequestWebFindOrCreateLeaderboard* FindOrCreateLeaderboard();
    void DeleteLeaderboardMinimal(FString Key, int32 AppID, FString Name, const FDeleteLeaderboardMinimalDelegate& Delegate);
    class UUWorksRequestWebDeleteLeaderboard* DeleteLeaderboard();
};

class UUWorksInterfaceWebMicroTxn : public UUWorksInterfaceWeb
{

    void RefundTxnMinimal(FString Key, FString OrderID, int32 AppID, const FRefundTxnMinimalDelegate& Delegate);
    class UUWorksRequestWebRefundTxn* RefundTxn();
    void QueryTxnMinimal(FString Key, int32 AppID, FString OrderID, FString TransID, const FQueryTxnMinimalDelegate& Delegate);
    class UUWorksRequestWebQueryTxn* QueryTxn();
    void ProcessAgreementMinimal(FString Key, FString OrderID, FUWorksSteamID SteamID, FString AgreementID, int32 AppID, int32 Amount, FString Currency, const FProcessAgreementMinimalDelegate& Delegate);
    class UUWorksRequestWebProcessAgreement* ProcessAgreement();
    void InitTxnMinimal(FString Key, FString OrderID, FUWorksSteamID SteamID, int32 AppID, int32 ItemCount, FString Language, FString Currency, TArray<FUWorksSteamItemDef> itemIds, TArray<int32> Quantities, TArray<int32> Amounts, TArray<FString> Descriptions, TArray<FString> Categories, TArray<int32> AssociatedBundles, TArray<FString> BillingTypes, TArray<FString> StartDates, TArray<FString> EndDates, TArray<FString> Periods, TArray<int32> Frequencies, TArray<FString> RecurringAmounts, int32 BundleCount, TArray<int32> BundleIDs, TArray<int32> BundleQuantities, TArray<FString> BundleDescriptions, TArray<FString> BundleCategories, EUWorksUserSession UserSession, FString IPAddress, const FInitTxnMinimalDelegate& Delegate);
    class UUWorksRequestWebInitTxn* InitTxn();
    void GetUserInfoMinimal(FString Key, FUWorksSteamID SteamID, FString IPAddress, const FGetUserInfoMinimalDelegate& Delegate);
    class UUWorksRequestWebGetUserInfo* GetUserInfo();
    void GetUserAgreementInfoMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, const FGetUserAgreementInfoMinimalDelegate& Delegate);
    class UUWorksRequestWebGetUserAgreementInfo* GetUserAgreementInfo();
    void GetReportMinimal(FString Key, int32 AppID, FString Time, EUWorksReportType Type, int32 MaxResults, const FGetReportMinimalDelegate& Delegate);
    class UUWorksRequestWebGetReport* GetReport();
    void FinalizeTxnMinimal(FString Key, FString OrderID, int32 AppID, const FFinalizeTxnMinimalDelegate& Delegate);
    class UUWorksRequestWebFinalizeTxn* FinalizeTxn();
    void CancelAgreementMinimal(FString Key, FUWorksSteamID SteamID, FString AgreementID, int32 AppID, const FCancelAgreementMinimalDelegate& Delegate);
    class UUWorksRequestWebCancelAgreement* CancelAgreement();
    void AdjustAgreementMinimal(FString Key, FUWorksSteamID SteamID, FString AgreementID, int32 AppID, FString NextProcessDate, const FAdjustAgreementMinimalDelegate& Delegate);
    class UUWorksRequestWebAdjustAgreement* AdjustAgreement();
};

class UUWorksInterfaceWebNews : public UUWorksInterfaceWeb
{

    void GetNewsForAppMinimal(int32 AppID, int32 MaxLength, int32 EndDate, int32 Count, FString Feeds, const FGetNewsForAppMinimalDelegate& Delegate);
    void GetNewsForAppAuthedMinimal(FString Key, int32 AppID, int32 MaxLength, int32 EndDate, int32 Count, FString Feeds, const FGetNewsForAppAuthedMinimalDelegate& Delegate);
    class UUWorksRequestWebGetNewsForAppAuthed* GetNewsForAppAuthed();
    class UUWorksRequestWebGetNewsForApp* GetNewsForApp();
};

struct FUWorksPlaySessions
{
};

class UUWorksInterfaceWebPlayer : public UUWorksInterfaceWeb
{

    void RecordOfflinePlaytimeMinimal(FUWorksSteamID SteamID, FString Ticket, FUWorksPlaySessions PlaySessions, const FRecordOfflinePlaytimeMinimalDelegate& Delegate);
    class UUWorksRequestWebRecordOfflinePlaytime* RecordOfflinePlaytime();
    void IsPlayingSharedGameMinimal(FString Key, FUWorksSteamID SteamID, int32 AppIDPlaying, const FIsPlayingSharedGameMinimalDelegate& Delegate);
    class UUWorksRequestWebIsPlayingSharedGame* IsPlayingSharedGame();
    void GetSteamLevelMinimal(FString Key, FUWorksSteamID SteamID, const FGetSteamLevelMinimalDelegate& Delegate);
    class UUWorksRequestWebGetSteamLevel* GetSteamLevel();
    void GetRecentlyPlayedGamesMinimal(FString Key, FUWorksSteamID SteamID, int32 Count, const FGetRecentlyPlayedGamesMinimalDelegate& Delegate);
    class UUWorksRequestWebGetRecentlyPlayedGames* GetRecentlyPlayedGames();
    void GetOwnedGamesMinimal(FString Key, FUWorksSteamID SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32> AppIDsFilter, const FGetOwnedGamesMinimalDelegate& Delegate);
    class UUWorksRequestWebGetOwnedGames* GetOwnedGames();
    void GetCommunityBadgeProgressMinimal(FString Key, FUWorksSteamID SteamID, int32 BadgeID, const FGetCommunityBadgeProgressMinimalDelegate& Delegate);
    class UUWorksRequestWebGetCommunityBadgeProgress* GetCommunityBadgeProgress();
    void GetBadgesMinimal(FString Key, FUWorksSteamID SteamID, const FGetBadgesMinimalDelegate& Delegate);
    class UUWorksRequestWebGetBadges* GetBadges();
};

struct FUWorksRequiredKVTags
{
};

class UUWorksInterfaceWebPublishedFile : public UUWorksInterfaceWeb
{

    void UpdateTagsMinimal(FString Key, FUWorksPublishedFileID PublishedFileID, int32 AppID, TArray<FString> AddTags, TArray<FString> RemoveTags, const FUpdateTagsMinimalDelegate& Delegate);
    class UUWorksRequestWebUpdateTags* UpdateTags();
    void SetDeveloperMetadataMinimal(FString Key, FUWorksPublishedFileID PublishedFileID, int32 AppID, FString MetaData, const FSetDeveloperMetadataMinimalDelegate& Delegate);
    class UUWorksRequestWebSetDeveloperMetadata* SetDeveloperMetadata();
    void QueryFilesMinimal(FString Key, uint8 queryType, int32 Page, int32 CreatorAppID, int32 AppID, TArray<FString> requiredTags, TArray<FString> excludedTags, TArray<FString> RequiredFlags, TArray<FString> OmittedFlags, FString searchText, uint8 fileType, FUWorksPublishedFileID ChildPublishedFileID, int32 Days, bool bIncludeRecentVotesOnly, FUWorksRequiredKVTags RequiredKVTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKVTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, int32 ReturnPlaytimeStats, int32 NumPerPage, bool bMatchAllTags, int32 CacheMaxAgeSeconds, int32 Language, bool bReturnMetaData, const FQueryFilesMinimalDelegate& Delegate);
    class UUWorksRequestWebQueryFiles* QueryFiles();
};

class UUWorksInterfaceWebPublishedItemSearch : public UUWorksInterfaceWeb
{

    void ResultSetSummaryMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags, const FResultSetSummaryMinimalDelegate& Delegate);
    class UUWorksRequestWebResultSetSummary* ResultSetSummary();
    void RankedByVoteMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags, const FRankedByVoteMinimalDelegate& Delegate);
    class UUWorksRequestWebRankedByVote* RankedByVote();
    void RankedByTrendMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, int32 Days, TArray<FString> tags, TArray<FString> UserTags, const FRankedByTrendMinimalDelegate& Delegate);
    class UUWorksRequestWebRankedByTrend* RankedByTrend();
    void RankedByPublicationOrderMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags, const FRankedByPublicationOrderMinimalDelegate& Delegate);
    class UUWorksRequestWebRankedByPublicationOrder* RankedByPublicationOrder();
};

class UUWorksInterfaceWebPublishedItemVoting : public UUWorksInterfaceWeb
{

    void UserVoteSummaryMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<int32> PublishedFileIDs, const FUserVoteSummaryMinimalDelegate& Delegate);
    class UUWorksRequestWebUserVoteSummary* UserVoteSummary();
    void ItemVoteSummaryMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<int32> PublishedFileIDs, const FItemVoteSummaryMinimalDelegate& Delegate);
    class UUWorksRequestWebItemVoteSummary* ItemVoteSummary();
};

class UUWorksInterfaceWebRemoteStorage : public UUWorksInterfaceWeb
{

    void UnsubscribePublishedFileMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 PublishedFileID, const FUnsubscribePublishedFileMinimalDelegate& Delegate);
    class UUWorksRequestWebUnsubscribePublishedFile* UnsubscribePublishedFile();
    void SubscribePublishedFileMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 PublishedFileID, const FSubscribePublishedFileMinimalDelegate& Delegate);
    class UUWorksRequestWebSubscribePublishedFile* SubscribePublishedFile();
    void SetUGCUsedByGCMinimal(FString Key, FUWorksSteamID SteamID, int32 UGCID, int32 AppID, bool bUsed, const FSetUGCUsedByGCMinimalDelegate& Delegate);
    class UUWorksRequestWebSetUGCUsedByGC* SetUGCUsedByGC();
    void GetUGCFileDetailsMinimal(FString Key, FUWorksSteamID SteamID, int32 UGCID, int32 AppID, const FGetUGCFileDetailsMinimalDelegate& Delegate);
    class UUWorksRequestWebGetUGCFileDetails* GetUGCFileDetails();
    void GetPublishedFileDetailsMinimal(int32 ItemCount, TArray<int32> PublishedFileIDs, const FGetPublishedFileDetailsMinimalDelegate& Delegate);
    class UUWorksRequestWebGetPublishedFileDetails* GetPublishedFileDetails();
    void GetCollectionDetailsMinimal(int32 CollectionCount, TArray<int32> PublishedFileIDs, const FGetCollectionDetailsMinimalDelegate& Delegate);
    class UUWorksRequestWebGetCollectionDetails* GetCollectionDetails();
    void EnumerateUserSubscribedFilesMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 ListType, const FEnumerateUserSubscribedFilesMinimalDelegate& Delegate);
    class UUWorksRequestWebEnumerateUserSubscribedFiles* EnumerateUserSubscribedFiles();
    void EnumerateUserPublishedFilesMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, const FEnumerateUserPublishedFilesMinimalDelegate& Delegate);
    class UUWorksRequestWebEnumerateUserPublishedFiles* EnumerateUserPublishedFiles();
};

class UUWorksInterfaceWebUser : public UUWorksInterfaceWeb
{

    void ResolveVanityURLMinimal(FString Key, FString VanityURL, uint8 URLType, const FResolveVanityURLMinimalDelegate& Delegate);
    class UUWorksRequestWebResolveVanityURL* ResolveVanityURL();
    void GrantPackageMinimal(FString Key, FUWorksSteamID SteamID, int32 PackageID, FString IPAddress, FString ThirdPartyKey, int32 ThirdPartyAppID, const FGrantPackageMinimalDelegate& Delegate);
    class UUWorksRequestWebGrantPackage* GrantPackage();
    void GetUserGroupListMinimal(FString Key, FUWorksSteamID SteamID, const FGetUserGroupListMinimalDelegate& Delegate);
    class UUWorksRequestWebGetUserGroupList* GetUserGroupList();
    void GetPublisherAppOwnershipMinimal(FString Key, FUWorksSteamID SteamID, const FGetPublisherAppOwnershipMinimalDelegate& Delegate);
    void GetPublisherAppOwnershipChangesMinimal(FString Key, FString PackageRowVersion, FString CDKeyRowVersion, const FGetPublisherAppOwnershipChangesMinimalDelegate& Delegate);
    class UUWorksRequestWebGetPublisherAppOwnershipChanges* GetPublisherAppOwnershipChanges();
    class UUWorksRequestWebGetPublisherAppOwnership* GetPublisherAppOwnership();
    void GetPlayerSummariesMinimal(FString Key, FString SteamIDs, const FGetPlayerSummariesMinimalDelegate& Delegate);
    class UUWorksRequestWebGetPlayerSummaries* GetPlayerSummaries();
    void GetPlayerBansMinimal(FString Key, FString SteamIDs, const FGetPlayerBansMinimalDelegate& Delegate);
    class UUWorksRequestWebGetPlayerBans* GetPlayerBans();
    void GetFriendListMinimal(FString Key, FUWorksSteamID SteamID, FString Relationship, const FGetFriendListMinimalDelegate& Delegate);
    class UUWorksRequestWebGetFriendList* GetFriendList();
    void GetAppPriceInfoMinimal(FString Key, FUWorksSteamID SteamID, FString AppIDs, const FGetAppPriceInfoMinimalDelegate& Delegate);
    class UUWorksRequestWebGetAppPriceInfo* GetAppPriceInfo();
    void CheckAppOwnershipMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, const FCheckAppOwnershipMinimalDelegate& Delegate);
    class UUWorksRequestWebCheckAppOwnership* CheckAppOwnership();
};

class UUWorksInterfaceWebUserAuth : public UUWorksInterfaceWeb
{

    void AuthenticateUserTicketMinimal(FString Key, int32 AppID, FString Ticket, const FAuthenticateUserTicketMinimalDelegate& Delegate);
    class UUWorksRequestWebAuthenticateUserTicket* AuthenticateUserTicket();
    void AuthenticateUserMinimal(FUWorksSteamID SteamID, TArray<uint8> SessionKey, TArray<uint8> EncryptedLoginKey, const FAuthenticateUserMinimalDelegate& Delegate);
    class UUWorksRequestWebAuthenticateUser* AuthenticateUser();
};

class UUWorksInterfaceWebUserStats : public UUWorksInterfaceWeb
{

    void SetUserStatsForGameMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<FString> Name, TArray<int32> Value, const FSetUserStatsForGameMinimalDelegate& Delegate);
    class UUWorksRequestWebSetUserStatsForGame* SetUserStatsForGame();
    void GetUserStatsForGameMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, const FGetUserStatsForGameMinimalDelegate& Delegate);
    class UUWorksRequestWebGetUserStatsForGame* GetUserStatsForGame();
    void GetSchemaForGameMinimal(FString Key, int32 AppID, FString Language, const FGetSchemaForGameMinimalDelegate& Delegate);
    class UUWorksRequestWebGetSchemaForGame* GetSchemaForGame();
    void GetPlayerAchievementsMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, FString Language, const FGetPlayerAchievementsMinimalDelegate& Delegate);
    class UUWorksRequestWebGetPlayerAchievements* GetPlayerAchievements();
    void GetNumberOfCurrentPlayersMinimal(int32 AppID, const FGetNumberOfCurrentPlayersMinimalDelegate& Delegate);
    class UUWorksRequestWebGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayers();
    void GetGlobalStatsForGameMinimal(int32 AppID, int32 Count, TArray<FString> Name, int32 StartDate, int32 EndDate, const FGetGlobalStatsForGameMinimalDelegate& Delegate);
    class UUWorksRequestWebGetGlobalStatsForGame* GetGlobalStatsForGame();
    void GetGlobalAchievementPercentagesForAppMinimal(FUWorksGameID GameID, const FGetGlobalAchievementPercentagesForAppMinimalDelegate& Delegate);
    class UUWorksRequestWebGetGlobalAchievementPercentagesForApp* GetGlobalAchievementPercentagesForApp();
};

struct FUWorksAssociatedWorkshopFiles
{
};

struct FUWorksPartnerAccounts
{
};

struct FUWorksLanguages
{
};

class UUWorksInterfaceWebWorkshop : public UUWorksInterfaceWeb
{

    void SetItemPaymentRulesMinimal(FString Key, int32 AppID, int32 GameItemID, FUWorksAssociatedWorkshopFiles AssociatedWorkshopFiles, FUWorksPartnerAccounts PartnerAccounts, bool bMakeWorkshopFilesSubscribable, bool bValidateOnly, const FSetItemPaymentRulesMinimalDelegate& Delegate);
    class UUWorksRequestWebSetItemPaymentRules* SetItemPaymentRules();
    void PopulateItemDescriptionsMinimal(FString Key, int32 AppID, FUWorksLanguages Languages, const FPopulateItemDescriptionsMinimalDelegate& Delegate);
    class UUWorksRequestWebPopulateItemDescriptions* PopulateItemDescriptions();
    void GetItemDailyRevenueMinimal(FString Key, int32 AppID, FString ItemId, int32 DateStart, int32 DateEnd, const FGetItemDailyRevenueMinimalDelegate& Delegate);
    class UUWorksRequestWebGetItemDailyRevenue* GetItemDailyRevenue();
    void GetFinalizedContributorsMinimal(FString Key, int32 AppID, int32 GameItemID, const FGetFinalizedContributorsMinimalDelegate& Delegate);
    class UUWorksRequestWebGetFinalizedContributors* GetFinalizedContributors();
};

class UUWorksRequestWeb : public UUWorksRequest
{

    bool IsActive();
    FString GetStatus();
    void Deactivate();
    void Activate();
};

class UUWorksRequestWebGetAppBetas : public UUWorksRequestWeb
{
    FUWorksRequestWebGetAppBetasOnRequestCompleted OnRequestCompleted;
    void GetAppBetasDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetAppBetasOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetAppBetasMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetAppBuilds : public UUWorksRequestWeb
{
    FUWorksRequestWebGetAppBuildsOnRequestCompleted OnRequestCompleted;
    void GetAppBuildsDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetAppBuildsOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetAppBuildsMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, int32 Count);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetAppDepotVersions : public UUWorksRequestWeb
{
    FUWorksRequestWebGetAppDepotVersionsOnRequestCompleted OnRequestCompleted;
    void GetAppDepotVersionsDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetAppDepotVersionsOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetAppDepotVersionsMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetAppList : public UUWorksRequestWeb
{
    FUWorksRequestWebGetAppListOnRequestCompleted OnRequestCompleted;
    void GetAppListDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetAppListOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetAppListMinimalDelegate(bool bSuccessful, FString Content);

    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetCheatingReportsList : public UUWorksRequestWeb
{
    FUWorksRequestWebGetCheatingReportsListOnRequestCompleted OnRequestCompleted;
    void GetCheatingReportsListDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetCheatingReportsListOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetCheatingReportsListMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, int32 TimeBegin, int32 TimeEnd, bool bIncludeReports, bool bIncludeBans, FString ReportIDMin);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetPlayersBanned : public UUWorksRequestWeb
{
    FUWorksRequestWebGetPlayersBannedOnRequestCompleted OnRequestCompleted;
    void GetPlayersBannedDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetPlayersBannedOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetPlayersBannedMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetServerList : public UUWorksRequestWeb
{
    FUWorksRequestWebGetServerListOnRequestCompleted OnRequestCompleted;
    void GetServerListDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetServerListOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetServerListMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString Filter, int32 Limit);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetServersAtAddress : public UUWorksRequestWeb
{
    FUWorksRequestWebGetServersAtAddressOnRequestCompleted OnRequestCompleted;
    void GetServersAtAddressDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetServersAtAddressOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetServersAtAddressMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Addr);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebSetAppBuildLive : public UUWorksRequestWeb
{
    FUWorksRequestWebSetAppBuildLiveOnRequestCompleted OnRequestCompleted;
    void SetAppBuildLiveDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebSetAppBuildLiveOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void SetAppBuildLiveMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, int32 BuildID, FString BetaKey, FString Description);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebUpToDateCheck : public UUWorksRequestWeb
{
    FUWorksRequestWebUpToDateCheckOnRequestCompleted OnRequestCompleted;
    void UpToDateCheckDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebUpToDateCheckOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void UpToDateCheckMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(int32 AppID, int32 VersionToCheck);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebPostGameDataFrame : public UUWorksRequestWeb
{
    FUWorksRequestWebPostGameDataFrameOnRequestCompleted OnRequestCompleted;
    void PostGameDataFrameDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebPostGameDataFrameOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void PostGameDataFrameMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamID SteamID, FString BroadcastID, FString FrameData);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebReportPlayerCheating : public UUWorksRequestWeb
{
    FUWorksRequestWebReportPlayerCheatingOnRequestCompleted OnRequestCompleted;
    void ReportPlayerCheatingDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebReportPlayerCheatingOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void ReportPlayerCheatingMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, FUWorksSteamID SteamIDReporter, int32 AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32 GameMode, int32 SuspicionStartTime, int32 Severity);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebRequestPlayerGameBan : public UUWorksRequestWeb
{
    FUWorksRequestWebRequestPlayerGameBanOnRequestCompleted OnRequestCompleted;
    void RequestPlayerGameBanDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebRequestPlayerGameBanOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void RequestPlayerGameBanMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, FUWorksSteamID ReportID, FString CheatDescription, int32 Duration, bool bDelayBan);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebRemovePlayerGameBan : public UUWorksRequestWeb
{
    FUWorksRequestWebRemovePlayerGameBanOnRequestCompleted OnRequestCompleted;
    void RemovePlayerGameBanDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebRemovePlayerGameBanOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void RemovePlayerGameBanMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetCheatingReports : public UUWorksRequestWeb
{
    FUWorksRequestWebGetCheatingReportsOnRequestCompleted OnRequestCompleted;
    void GetCheatingReportsDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetCheatingReportsOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetCheatingReportsMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, int32 TimeEnd, int32 TimeBegin, FString ReportIDMin, bool bIncludeReports, bool bIncludeBans, FUWorksSteamID SteamID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebRequestVacStatusForUser : public UUWorksRequestWeb
{
    FUWorksRequestWebRequestVacStatusForUserOnRequestCompleted OnRequestCompleted;
    void RequestVacStatusForUserDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebRequestVacStatusForUserOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void RequestVacStatusForUserMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, FString SessionId);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebStartSecureMultiplayerSession : public UUWorksRequestWeb
{
    FUWorksRequestWebStartSecureMultiplayerSessionOnRequestCompleted OnRequestCompleted;
    void StartSecureMultiplayerSessionDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebStartSecureMultiplayerSessionOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void StartSecureMultiplayerSessionMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebEndSecureMultiplayerSession : public UUWorksRequestWeb
{
    FUWorksRequestWebEndSecureMultiplayerSessionOnRequestCompleted OnRequestCompleted;
    void EndSecureMultiplayerSessionDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebEndSecureMultiplayerSessionOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void EndSecureMultiplayerSessionMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, FString SessionId);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebReportCheatData : public UUWorksRequestWeb
{
    FUWorksRequestWebReportCheatDataOnRequestCompleted OnRequestCompleted;
    void ReportCheatDataDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebReportCheatDataOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void ReportCheatDataMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, FString PathAndFileName, FString WebCheatURL, FString TimeNow, FString TimeStarted, FString TimeStopped, FString CheatName, int32 GameProcessID, int32 CheatProcessID, FString CheatParamA, FString CheatParamB);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebReportAbuse : public UUWorksRequestWeb
{
    FUWorksRequestWebReportAbuseOnRequestCompleted OnRequestCompleted;
    void ReportAbuseDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebReportAbuseOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void ReportAbuseMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamIDActor, FUWorksSteamID SteamIDTarget, int32 AppID, uint8 AbuseType, uint8 ContentType, FString Description, FString GID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetTradeHistory : public UUWorksRequestWeb
{
    FUWorksRequestWebGetTradeHistoryOnRequestCompleted OnRequestCompleted;
    void GetTradeHistoryDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetTradeHistoryOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetTradeHistoryMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 MaxTrades, int32 StartAfterTime, FString StartAfterTradeID, bool bNavigatingBack, bool bGetDescription, FString Language, bool bIncludeFailed, bool bIncludeTotal);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebFlushInventoryCache : public UUWorksRequestWeb
{
    FUWorksRequestWebFlushInventoryCacheOnRequestCompleted OnRequestCompleted;
    void FlushInventoryCacheDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebFlushInventoryCacheOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void FlushInventoryCacheMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, FString ContextID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebFlushAssetAppearanceCache : public UUWorksRequestWeb
{
    FUWorksRequestWebFlushAssetAppearanceCacheOnRequestCompleted OnRequestCompleted;
    void FlushAssetAppearanceCacheDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebFlushAssetAppearanceCacheOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void FlushAssetAppearanceCacheMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebFlushContextCache : public UUWorksRequestWeb
{
    FUWorksRequestWebFlushContextCacheOnRequestCompleted OnRequestCompleted;
    void FlushContextCacheDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebFlushContextCacheOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void FlushContextCacheMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetTradeOffers : public UUWorksRequestWeb
{
    FUWorksRequestWebGetTradeOffersOnRequestCompleted OnRequestCompleted;
    void GetTradeOffersDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetTradeOffersOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetTradeOffersMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescription, FString Language, bool bActiveOnly, bool bHistoricalOnly, int32 TimeHistoricalCutoff);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetTradeOffer : public UUWorksRequestWeb
{
    FUWorksRequestWebGetTradeOfferOnRequestCompleted OnRequestCompleted;
    void GetTradeOfferDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetTradeOfferOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetTradeOfferMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString TradeOfferID, FString Language);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetTradeOffersSummary : public UUWorksRequestWeb
{
    FUWorksRequestWebGetTradeOffersSummaryOnRequestCompleted OnRequestCompleted;
    void GetTradeOffersSummaryDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetTradeOffersSummaryOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetTradeOffersSummaryMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 TimeLastVisit);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebDeclineTradeOffer : public UUWorksRequestWeb
{
    FUWorksRequestWebDeclineTradeOfferOnRequestCompleted OnRequestCompleted;
    void DeclineTradeOfferDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebDeclineTradeOfferOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void DeclineTradeOfferMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString TradeOfferID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebCancelTradeOffer : public UUWorksRequestWeb
{
    FUWorksRequestWebCancelTradeOfferOnRequestCompleted OnRequestCompleted;
    void CancelTradeOfferDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebCancelTradeOfferOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void CancelTradeOfferMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString TradeOfferID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetMarketEligibility : public UUWorksRequestWeb
{
    FUWorksRequestWebGetMarketEligibilityOnRequestCompleted OnRequestCompleted;
    void GetMarketEligibilityDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetMarketEligibilityOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetMarketEligibilityMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebCancelAppListingsForUser : public UUWorksRequestWeb
{
    FUWorksRequestWebCancelAppListingsForUserOnRequestCompleted OnRequestCompleted;
    void CancelAppListingsForUserDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebCancelAppListingsForUserOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void CancelAppListingsForUserMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamID SteamID, bool bSynchronous);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetAssetID : public UUWorksRequestWeb
{
    FUWorksRequestWebGetAssetIDOnRequestCompleted OnRequestCompleted;
    void GetAssetIDDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetAssetIDOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetAssetIDMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FString ListingID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetPopular : public UUWorksRequestWeb
{
    FUWorksRequestWebGetPopularOnRequestCompleted OnRequestCompleted;
    void GetPopularDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetPopularOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetPopularMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString Language, int32 Rows, int32 Start, int32 FilterAppID, int32 ECurrency);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebCanTrade : public UUWorksRequestWeb
{
    FUWorksRequestWebCanTradeOnRequestCompleted OnRequestCompleted;
    void CanTradeDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebCanTradeOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void CanTradeMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamID SteamID, FUWorksSteamID TargetId);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebFinalizeAssetTransaction : public UUWorksRequestWeb
{
    FUWorksRequestWebFinalizeAssetTransactionOnRequestCompleted OnRequestCompleted;
    void FinalizeAssetTransactionDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebFinalizeAssetTransactionOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void FinalizeAssetTransactionMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamID SteamID, FString TxnID, FString Language);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetAssetClassInfo : public UUWorksRequestWeb
{
    FUWorksRequestWebGetAssetClassInfoOnRequestCompleted OnRequestCompleted;
    void GetAssetClassInfoDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetAssetClassInfoOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetAssetClassInfoMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, int32 ClassCount, FString ClassID, FString Language, FString InstanceID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetAssetPrices : public UUWorksRequestWeb
{
    FUWorksRequestWebGetAssetPricesOnRequestCompleted OnRequestCompleted;
    void GetAssetPricesDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetAssetPricesOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetAssetPricesMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FString Currency, FString Language);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetExportedAssetsForUser : public UUWorksRequestWeb
{
    FUWorksRequestWebGetExportedAssetsForUserOnRequestCompleted OnRequestCompleted;
    void GetExportedAssetsForUserDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetExportedAssetsForUserOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetExportedAssetsForUserMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, FString ContextID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetMarketPrices : public UUWorksRequestWeb
{
    FUWorksRequestWebGetMarketPricesOnRequestCompleted OnRequestCompleted;
    void GetMarketPricesDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetMarketPricesOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetMarketPricesMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebStartAssetTransaction : public UUWorksRequestWeb
{
    FUWorksRequestWebStartAssetTransactionOnRequestCompleted OnRequestCompleted;
    void StartAssetTransactionDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebStartAssetTransactionOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void StartAssetTransactionMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamID SteamID, FString AssetID, int32 AssetQuantity, FString Currency, FString Language, FString IPAddress, FString Referrer, bool bClientAuth);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebStartTrade : public UUWorksRequestWeb
{
    FUWorksRequestWebStartTradeOnRequestCompleted OnRequestCompleted;
    void StartTradeDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebStartTradeOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void StartTradeMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamID PartyA, FUWorksSteamID PartyB);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetHistoryCommandDetails : public UUWorksRequestWeb
{
    FUWorksRequestWebGetHistoryCommandDetailsOnRequestCompleted OnRequestCompleted;
    void GetHistoryCommandDetailsDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetHistoryCommandDetailsOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetHistoryCommandDetailsMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamID SteamID, FString Command, FString ContextID, FString Arguments);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetUserHistory : public UUWorksRequestWeb
{
    FUWorksRequestWebGetUserHistoryOnRequestCompleted OnRequestCompleted;
    void GetUserHistoryDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetUserHistoryOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetUserHistoryMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamID SteamID, FString ContextID, int32 StartTime, int32 EndTime);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebHistoryExecuteCommands : public UUWorksRequestWeb
{
    FUWorksRequestWebHistoryExecuteCommandsOnRequestCompleted OnRequestCompleted;
    void HistoryExecuteCommandsDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebHistoryExecuteCommandsOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void HistoryExecuteCommandsMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamID SteamID, FString ContextID, FString ActorId);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebSupportGetAssetHistory : public UUWorksRequestWeb
{
    FUWorksRequestWebSupportGetAssetHistoryOnRequestCompleted OnRequestCompleted;
    void SupportGetAssetHistoryDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebSupportGetAssetHistoryOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void SupportGetAssetHistoryMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FString AssetID, FString ContextID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebCreateSession : public UUWorksRequestWeb
{
    FUWorksRequestWebCreateSessionOnRequestCompleted OnRequestCompleted;
    void CreateSessionDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebCreateSessionOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void CreateSessionMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FString Context, FUWorksTitle Title, FUWorksUsers Users, FUWorksSteamID SteamID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebUpdateSession : public UUWorksRequestWeb
{
    FUWorksRequestWebUpdateSessionOnRequestCompleted OnRequestCompleted;
    void UpdateSessionDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebUpdateSessionOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void UpdateSessionMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString SessionId, int32 AppID, FUWorksTitle Title, FUWorksUsers Users, FUWorksSteamID SteamID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebEnumerateSessionsForApp : public UUWorksRequestWeb
{
    FUWorksRequestWebEnumerateSessionsForAppOnRequestCompleted OnRequestCompleted;
    void EnumerateSessionsForAppDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebEnumerateSessionsForAppOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void EnumerateSessionsForAppMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamID SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, FString Language);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetSessionDetailsForApp : public UUWorksRequestWeb
{
    FUWorksRequestWebGetSessionDetailsForAppOnRequestCompleted OnRequestCompleted;
    void GetSessionDetailsForAppDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetSessionDetailsForAppOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetSessionDetailsForAppMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSessions Sessions, int32 AppID, FString Language);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebRequestNotifications : public UUWorksRequestWeb
{
    FUWorksRequestWebRequestNotificationsOnRequestCompleted OnRequestCompleted;
    void RequestNotificationsDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebRequestNotificationsOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void RequestNotificationsMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebDeleteSession : public UUWorksRequestWeb
{
    FUWorksRequestWebDeleteSessionOnRequestCompleted OnRequestCompleted;
    void DeleteSessionDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebDeleteSessionOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void DeleteSessionMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString SessionId, int32 AppID, FUWorksSteamID SteamID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebDeleteSessionBatch : public UUWorksRequestWeb
{
    FUWorksRequestWebDeleteSessionBatchOnRequestCompleted OnRequestCompleted;
    void DeleteSessionBatchDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebDeleteSessionBatchOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void DeleteSessionBatchMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString SessionId, int32 AppID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetAccountList : public UUWorksRequestWeb
{
    FUWorksRequestWebGetAccountListOnRequestCompleted OnRequestCompleted;
    void GetAccountListDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetAccountListOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetAccountListMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebCreateAccount : public UUWorksRequestWeb
{
    FUWorksRequestWebCreateAccountOnRequestCompleted OnRequestCompleted;
    void CreateAccountDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebCreateAccountOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void CreateAccountMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FString Memo);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebSetMemo : public UUWorksRequestWeb
{
    FUWorksRequestWebSetMemoOnRequestCompleted OnRequestCompleted;
    void SetMemoDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebSetMemoOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void SetMemoMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, FString Memo);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebResetLoginToken : public UUWorksRequestWeb
{
    FUWorksRequestWebResetLoginTokenOnRequestCompleted OnRequestCompleted;
    void ResetLoginTokenDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebResetLoginTokenOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void ResetLoginTokenMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebDeleteAccount : public UUWorksRequestWeb
{
    FUWorksRequestWebDeleteAccountOnRequestCompleted OnRequestCompleted;
    void DeleteAccountDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebDeleteAccountOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void DeleteAccountMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetAccountPublicInfo : public UUWorksRequestWeb
{
    FUWorksRequestWebGetAccountPublicInfoOnRequestCompleted OnRequestCompleted;
    void GetAccountPublicInfoDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetAccountPublicInfoOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetAccountPublicInfoMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebQueryLoginToken : public UUWorksRequestWeb
{
    FUWorksRequestWebQueryLoginTokenOnRequestCompleted OnRequestCompleted;
    void QueryLoginTokenDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebQueryLoginTokenOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void QueryLoginTokenMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString LoginToken);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebSetBanStatus : public UUWorksRequestWeb
{
    FUWorksRequestWebSetBanStatusOnRequestCompleted OnRequestCompleted;
    void SetBanStatusDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebSetBanStatusOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void SetBanStatusMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, bool bBanned, int32 BanSeconds);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetServerSteamIDsByIP : public UUWorksRequestWeb
{
    FUWorksRequestWebGetServerSteamIDsByIPOnRequestCompleted OnRequestCompleted;
    void GetServerSteamIDsByIPDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetServerSteamIDsByIPOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetServerSteamIDsByIPMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString ServerIPs);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetServerIPsBySteamID : public UUWorksRequestWeb
{
    FUWorksRequestWebGetServerIPsBySteamIDOnRequestCompleted OnRequestCompleted;
    void GetServerIPsBySteamIDDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetServerIPsBySteamIDOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetServerIPsBySteamIDMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID ServerSteamID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetGameServerPlayerStatsForGame : public UUWorksRequestWeb
{
    FUWorksRequestWebGetGameServerPlayerStatsForGameOnRequestCompleted OnRequestCompleted;
    void GetGameServerPlayerStatsForGameDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetGameServerPlayerStatsForGameOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetGameServerPlayerStatsForGameMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksGameID GameID, int32 AppID, FString RangeStart, FString RangeEnd, int32 MaxResults);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebAddItem : public UUWorksRequestWeb
{
    FUWorksRequestWebAddItemOnRequestCompleted OnRequestCompleted;
    void AddItemDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebAddItemOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void AddItemMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, TArray<FUWorksSteamItemDef> ItemDefID, FString ItemPropsJSON, FUWorksSteamID SteamID, bool bNotify, FString requestID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebAddPromoItem : public UUWorksRequestWeb
{
    FUWorksRequestWebAddPromoItemOnRequestCompleted OnRequestCompleted;
    void AddPromoItemDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebAddPromoItemOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void AddPromoItemMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamItemDef ItemDefID, FString ItemPropsJSON, FUWorksSteamID SteamID, bool bNotify, FString requestID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebConsumeItem : public UUWorksRequestWeb
{
    FUWorksRequestWebConsumeItemOnRequestCompleted OnRequestCompleted;
    void ConsumeItemDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebConsumeItemOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void ConsumeItemMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamItemInstanceID ItemId, int32 Quantity, FUWorksSteamID SteamID, FString requestID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebExchangeItem : public UUWorksRequestWeb
{
    FUWorksRequestWebExchangeItemOnRequestCompleted OnRequestCompleted;
    void ExchangeItemDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebExchangeItemOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void ExchangeItemMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamID SteamID, TArray<FUWorksSteamItemInstanceID> MaterialsItemID, TArray<int32> MaterialsQuantity, FUWorksSteamItemDef OutputItemDefID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetInventory : public UUWorksRequestWeb
{
    FUWorksRequestWebGetInventoryOnRequestCompleted OnRequestCompleted;
    void GetInventoryDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetInventoryOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetInventoryMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamID SteamID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetItemDefs : public UUWorksRequestWeb
{
    FUWorksRequestWebGetItemDefsOnRequestCompleted OnRequestCompleted;
    void GetItemDefsDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetItemDefsOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetItemDefsMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FString ModifiedSince, TArray<FUWorksSteamItemDef> ItemDefIDs, TArray<FUWorksSteamItemDef> WorkshopIDs, int32 CacheMaxAgeSeconds);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetPriceSheet : public UUWorksRequestWeb
{
    FUWorksRequestWebGetPriceSheetOnRequestCompleted OnRequestCompleted;
    void GetPriceSheetDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetPriceSheetOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetPriceSheetMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 ECurrency);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebConsolidate : public UUWorksRequestWeb
{
    FUWorksRequestWebConsolidateOnRequestCompleted OnRequestCompleted;
    void ConsolidateDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebConsolidateOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void ConsolidateMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamID SteamID, TArray<FUWorksSteamItemDef> ItemDefID, bool bForce);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetQuantity : public UUWorksRequestWeb
{
    FUWorksRequestWebGetQuantityOnRequestCompleted OnRequestCompleted;
    void GetQuantityDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetQuantityOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetQuantityMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamID SteamID, FUWorksSteamItemDef ItemDefID, bool bForce);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebDeleteLeaderboard : public UUWorksRequestWeb
{
    FUWorksRequestWebDeleteLeaderboardOnRequestCompleted OnRequestCompleted;
    void DeleteLeaderboardDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebDeleteLeaderboardOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void DeleteLeaderboardMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FString Name);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebFindOrCreateLeaderboard : public UUWorksRequestWeb
{
    FUWorksRequestWebFindOrCreateLeaderboardOnRequestCompleted OnRequestCompleted;
    void FindOrCreateLeaderboardDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebFindOrCreateLeaderboardOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void FindOrCreateLeaderboardMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FString Name, FString SortMethod, FString DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetLeaderboardEntries : public UUWorksRequestWeb
{
    FUWorksRequestWebGetLeaderboardEntriesOnRequestCompleted OnRequestCompleted;
    void GetLeaderboardEntriesDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetLeaderboardEntriesOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetLeaderboardEntriesMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, int32 RangeStart, int32 RangeEnd, int32 LeaderboardID, int32 DataRequest, FUWorksSteamID SteamID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetLeaderboardsForGame : public UUWorksRequestWeb
{
    FUWorksRequestWebGetLeaderboardsForGameOnRequestCompleted OnRequestCompleted;
    void GetLeaderboardsForGameDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetLeaderboardsForGameOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetLeaderboardsForGameMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebResetLeaderboard : public UUWorksRequestWeb
{
    FUWorksRequestWebResetLeaderboardOnRequestCompleted OnRequestCompleted;
    void ResetLeaderboardDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebResetLeaderboardOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void ResetLeaderboardMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, int32 LeaderboardID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebSetLeaderboardScore : public UUWorksRequestWeb
{
    FUWorksRequestWebSetLeaderboardScoreOnRequestCompleted OnRequestCompleted;
    void SetLeaderboardScoreDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebSetLeaderboardScoreOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void SetLeaderboardScoreMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, int32 LeaderboardID, FUWorksSteamID SteamID, int32 score, FString ScoreMethod, TArray<uint8> Details);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebAdjustAgreement : public UUWorksRequestWeb
{
    FUWorksRequestWebAdjustAgreementOnRequestCompleted OnRequestCompleted;
    void AdjustAgreementDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebAdjustAgreementOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void AdjustAgreementMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, FString AgreementID, int32 AppID, FString NextProcessDate);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebCancelAgreement : public UUWorksRequestWeb
{
    FUWorksRequestWebCancelAgreementOnRequestCompleted OnRequestCompleted;
    void CancelAgreementDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebCancelAgreementOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void CancelAgreementMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, FString AgreementID, int32 AppID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebFinalizeTxn : public UUWorksRequestWeb
{
    FUWorksRequestWebFinalizeTxnOnRequestCompleted OnRequestCompleted;
    void FinalizeTxnDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebFinalizeTxnOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void FinalizeTxnMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString OrderID, int32 AppID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetReport : public UUWorksRequestWeb
{
    FUWorksRequestWebGetReportOnRequestCompleted OnRequestCompleted;
    void GetReportDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetReportOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetReportMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FString Time, EUWorksReportType Type, int32 MaxResults);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetUserAgreementInfo : public UUWorksRequestWeb
{
    FUWorksRequestWebGetUserAgreementInfoOnRequestCompleted OnRequestCompleted;
    void GetUserAgreementInfoDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetUserAgreementInfoOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetUserAgreementInfoMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetUserInfo : public UUWorksRequestWeb
{
    FUWorksRequestWebGetUserInfoOnRequestCompleted OnRequestCompleted;
    void GetUserInfoDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetUserInfoOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetUserInfoMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, FString IPAddress);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebInitTxn : public UUWorksRequestWeb
{
    FUWorksRequestWebInitTxnOnRequestCompleted OnRequestCompleted;
    void InitTxnDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebInitTxnOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void InitTxnMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString OrderID, FUWorksSteamID SteamID, int32 AppID, int32 ItemCount, FString Language, FString Currency, TArray<FUWorksSteamItemDef> itemIds, TArray<int32> Quantities, TArray<int32> Amounts, TArray<FString> Descriptions, TArray<FString> Categories, TArray<int32> AssociatedBundles, TArray<FString> BillingTypes, TArray<FString> StartDates, TArray<FString> EndDates, TArray<FString> Periods, TArray<int32> Frequencies, TArray<FString> RecurringAmounts, int32 BundleCount, TArray<int32> BundleIDs, TArray<int32> BundleQuantities, TArray<FString> BundleDescriptions, TArray<FString> BundleCategories, EUWorksUserSession UserSession, FString IPAddress);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebProcessAgreement : public UUWorksRequestWeb
{
    FUWorksRequestWebProcessAgreementOnRequestCompleted OnRequestCompleted;
    void ProcessAgreementDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebProcessAgreementOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void ProcessAgreementMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString OrderID, FUWorksSteamID SteamID, FString AgreementID, int32 AppID, int32 Amount, FString Currency);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebQueryTxn : public UUWorksRequestWeb
{
    FUWorksRequestWebQueryTxnOnRequestCompleted OnRequestCompleted;
    void QueryTxnDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebQueryTxnOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void QueryTxnMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FString OrderID, FString TransID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebRefundTxn : public UUWorksRequestWeb
{
    FUWorksRequestWebRefundTxnOnRequestCompleted OnRequestCompleted;
    void RefundTxnDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebRefundTxnOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void RefundTxnMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString OrderID, int32 AppID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetNewsForApp : public UUWorksRequestWeb
{
    FUWorksRequestWebGetNewsForAppOnRequestCompleted OnRequestCompleted;
    void GetNewsForAppDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetNewsForAppOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetNewsForAppMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(int32 AppID, int32 MaxLength, int32 EndDate, int32 Count, FString Feeds);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetNewsForAppAuthed : public UUWorksRequestWeb
{
    FUWorksRequestWebGetNewsForAppAuthedOnRequestCompleted OnRequestCompleted;
    void GetNewsForAppAuthedDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetNewsForAppAuthedOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetNewsForAppAuthedMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, int32 MaxLength, int32 EndDate, int32 Count, FString Feeds);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebRecordOfflinePlaytime : public UUWorksRequestWeb
{
    FUWorksRequestWebRecordOfflinePlaytimeOnRequestCompleted OnRequestCompleted;
    void RecordOfflinePlaytimeDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebRecordOfflinePlaytimeOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void RecordOfflinePlaytimeMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FUWorksSteamID SteamID, FString Ticket, FUWorksPlaySessions PlaySessions);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetRecentlyPlayedGames : public UUWorksRequestWeb
{
    FUWorksRequestWebGetRecentlyPlayedGamesOnRequestCompleted OnRequestCompleted;
    void GetRecentlyPlayedGamesDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetRecentlyPlayedGamesOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetRecentlyPlayedGamesMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 Count);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetOwnedGames : public UUWorksRequestWeb
{
    FUWorksRequestWebGetOwnedGamesOnRequestCompleted OnRequestCompleted;
    void GetOwnedGamesDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetOwnedGamesOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetOwnedGamesMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32> AppIDsFilter);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetSteamLevel : public UUWorksRequestWeb
{
    FUWorksRequestWebGetSteamLevelOnRequestCompleted OnRequestCompleted;
    void GetSteamLevelDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetSteamLevelOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetSteamLevelMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetBadges : public UUWorksRequestWeb
{
    FUWorksRequestWebGetBadgesOnRequestCompleted OnRequestCompleted;
    void GetBadgesDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetBadgesOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetBadgesMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetCommunityBadgeProgress : public UUWorksRequestWeb
{
    FUWorksRequestWebGetCommunityBadgeProgressOnRequestCompleted OnRequestCompleted;
    void GetCommunityBadgeProgressDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetCommunityBadgeProgressOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetCommunityBadgeProgressMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 BadgeID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebIsPlayingSharedGame : public UUWorksRequestWeb
{
    FUWorksRequestWebIsPlayingSharedGameOnRequestCompleted OnRequestCompleted;
    void IsPlayingSharedGameDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebIsPlayingSharedGameOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void IsPlayingSharedGameMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppIDPlaying);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebQueryFiles : public UUWorksRequestWeb
{
    FUWorksRequestWebQueryFilesOnRequestCompleted OnRequestCompleted;
    void QueryFilesDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebQueryFilesOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void QueryFilesMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, uint8 queryType, int32 Page, int32 CreatorAppID, int32 AppID, TArray<FString> requiredTags, TArray<FString> excludedTags, TArray<FString> RequiredFlags, TArray<FString> OmittedFlags, FString searchText, uint8 fileType, FUWorksPublishedFileID ChildPublishedFileID, int32 Days, bool bIncludeRecentVotesOnly, FUWorksRequiredKVTags RequiredKVTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKVTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, int32 ReturnPlaytimeStats, int32 NumPerPage, bool bMatchAllTags, int32 CacheMaxAgeSeconds, int32 Language, bool bReturnMetaData);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebSetDeveloperMetadata : public UUWorksRequestWeb
{
    FUWorksRequestWebSetDeveloperMetadataOnRequestCompleted OnRequestCompleted;
    void SetDeveloperMetadataDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebSetDeveloperMetadataOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void SetDeveloperMetadataMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksPublishedFileID PublishedFileID, int32 AppID, FString MetaData);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebUpdateTags : public UUWorksRequestWeb
{
    FUWorksRequestWebUpdateTagsOnRequestCompleted OnRequestCompleted;
    void UpdateTagsDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebUpdateTagsOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void UpdateTagsMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksPublishedFileID PublishedFileID, int32 AppID, TArray<FString> AddTags, TArray<FString> RemoveTags);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebRankedByPublicationOrder : public UUWorksRequestWeb
{
    FUWorksRequestWebRankedByPublicationOrderOnRequestCompleted OnRequestCompleted;
    void RankedByPublicationOrderDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebRankedByPublicationOrderOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void RankedByPublicationOrderMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebRankedByTrend : public UUWorksRequestWeb
{
    FUWorksRequestWebRankedByTrendOnRequestCompleted OnRequestCompleted;
    void RankedByTrendDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebRankedByTrendOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void RankedByTrendMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, int32 Days, TArray<FString> tags, TArray<FString> UserTags);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebRankedByVote : public UUWorksRequestWeb
{
    FUWorksRequestWebRankedByVoteOnRequestCompleted OnRequestCompleted;
    void RankedByVoteDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebRankedByVoteOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void RankedByVoteMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebResultSetSummary : public UUWorksRequestWeb
{
    FUWorksRequestWebResultSetSummaryOnRequestCompleted OnRequestCompleted;
    void ResultSetSummaryDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebResultSetSummaryOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void ResultSetSummaryMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebItemVoteSummary : public UUWorksRequestWeb
{
    FUWorksRequestWebItemVoteSummaryOnRequestCompleted OnRequestCompleted;
    void ItemVoteSummaryDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebItemVoteSummaryOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void ItemVoteSummaryMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<int32> PublishedFileIDs);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebUserVoteSummary : public UUWorksRequestWeb
{
    FUWorksRequestWebUserVoteSummaryOnRequestCompleted OnRequestCompleted;
    void UserVoteSummaryDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebUserVoteSummaryOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void UserVoteSummaryMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<int32> PublishedFileIDs);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebEnumerateUserPublishedFiles : public UUWorksRequestWeb
{
    FUWorksRequestWebEnumerateUserPublishedFilesOnRequestCompleted OnRequestCompleted;
    void EnumerateUserPublishedFilesDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebEnumerateUserPublishedFilesOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void EnumerateUserPublishedFilesMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebEnumerateUserSubscribedFiles : public UUWorksRequestWeb
{
    FUWorksRequestWebEnumerateUserSubscribedFilesOnRequestCompleted OnRequestCompleted;
    void EnumerateUserSubscribedFilesDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebEnumerateUserSubscribedFilesOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void EnumerateUserSubscribedFilesMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 ListType);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetCollectionDetails : public UUWorksRequestWeb
{
    FUWorksRequestWebGetCollectionDetailsOnRequestCompleted OnRequestCompleted;
    void GetCollectionDetailsDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetCollectionDetailsOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetCollectionDetailsMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(int32 CollectionCount, TArray<int32> PublishedFileIDs);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetPublishedFileDetails : public UUWorksRequestWeb
{
    FUWorksRequestWebGetPublishedFileDetailsOnRequestCompleted OnRequestCompleted;
    void GetPublishedFileDetailsDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetPublishedFileDetailsOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetPublishedFileDetailsMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(int32 ItemCount, TArray<int32> PublishedFileIDs);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetUGCFileDetails : public UUWorksRequestWeb
{
    FUWorksRequestWebGetUGCFileDetailsOnRequestCompleted OnRequestCompleted;
    void GetUGCFileDetailsDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetUGCFileDetailsOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetUGCFileDetailsMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 UGCID, int32 AppID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebSetUGCUsedByGC : public UUWorksRequestWeb
{
    FUWorksRequestWebSetUGCUsedByGCOnRequestCompleted OnRequestCompleted;
    void SetUGCUsedByGCDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebSetUGCUsedByGCOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void SetUGCUsedByGCMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 UGCID, int32 AppID, bool bUsed);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebSubscribePublishedFile : public UUWorksRequestWeb
{
    FUWorksRequestWebSubscribePublishedFileOnRequestCompleted OnRequestCompleted;
    void SubscribePublishedFileDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebSubscribePublishedFileOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void SubscribePublishedFileMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 PublishedFileID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebUnsubscribePublishedFile : public UUWorksRequestWeb
{
    FUWorksRequestWebUnsubscribePublishedFileOnRequestCompleted OnRequestCompleted;
    void UnsubscribePublishedFileDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebUnsubscribePublishedFileOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void UnsubscribePublishedFileMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 PublishedFileID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebCheckAppOwnership : public UUWorksRequestWeb
{
    FUWorksRequestWebCheckAppOwnershipOnRequestCompleted OnRequestCompleted;
    void CheckAppOwnershipDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebCheckAppOwnershipOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void CheckAppOwnershipMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetAppPriceInfo : public UUWorksRequestWeb
{
    FUWorksRequestWebGetAppPriceInfoOnRequestCompleted OnRequestCompleted;
    void GetAppPriceInfoDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetAppPriceInfoOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetAppPriceInfoMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, FString AppIDs);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetFriendList : public UUWorksRequestWeb
{
    FUWorksRequestWebGetFriendListOnRequestCompleted OnRequestCompleted;
    void GetFriendListDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetFriendListOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetFriendListMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, FString Relationship);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetPlayerBans : public UUWorksRequestWeb
{
    FUWorksRequestWebGetPlayerBansOnRequestCompleted OnRequestCompleted;
    void GetPlayerBansDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetPlayerBansOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetPlayerBansMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString SteamIDs);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetPlayerSummaries : public UUWorksRequestWeb
{
    FUWorksRequestWebGetPlayerSummariesOnRequestCompleted OnRequestCompleted;
    void GetPlayerSummariesDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetPlayerSummariesOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetPlayerSummariesMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString SteamIDs);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetPublisherAppOwnership : public UUWorksRequestWeb
{
    FUWorksRequestWebGetPublisherAppOwnershipOnRequestCompleted OnRequestCompleted;
    void GetPublisherAppOwnershipDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetPublisherAppOwnershipOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetPublisherAppOwnershipMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetPublisherAppOwnershipChanges : public UUWorksRequestWeb
{
    FUWorksRequestWebGetPublisherAppOwnershipChangesOnRequestCompleted OnRequestCompleted;
    void GetPublisherAppOwnershipChangesDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetPublisherAppOwnershipChangesOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetPublisherAppOwnershipChangesMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString PackageRowVersion, FString CDKeyRowVersion);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetUserGroupList : public UUWorksRequestWeb
{
    FUWorksRequestWebGetUserGroupListOnRequestCompleted OnRequestCompleted;
    void GetUserGroupListDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetUserGroupListOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetUserGroupListMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGrantPackage : public UUWorksRequestWeb
{
    FUWorksRequestWebGrantPackageOnRequestCompleted OnRequestCompleted;
    void GrantPackageDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGrantPackageOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GrantPackageMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 PackageID, FString IPAddress, FString ThirdPartyKey, int32 ThirdPartyAppID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebResolveVanityURL : public UUWorksRequestWeb
{
    FUWorksRequestWebResolveVanityURLOnRequestCompleted OnRequestCompleted;
    void ResolveVanityURLDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebResolveVanityURLOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void ResolveVanityURLMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString VanityURL, uint8 URLType);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebAuthenticateUser : public UUWorksRequestWeb
{
    FUWorksRequestWebAuthenticateUserOnRequestCompleted OnRequestCompleted;
    void AuthenticateUserDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebAuthenticateUserOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void AuthenticateUserMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FUWorksSteamID SteamID, TArray<uint8> SessionKey, TArray<uint8> EncryptedLoginKey);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebAuthenticateUserTicket : public UUWorksRequestWeb
{
    FUWorksRequestWebAuthenticateUserTicketOnRequestCompleted OnRequestCompleted;
    void AuthenticateUserTicketDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebAuthenticateUserTicketOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void AuthenticateUserTicketMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FString Ticket);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetGlobalAchievementPercentagesForApp : public UUWorksRequestWeb
{
    FUWorksRequestWebGetGlobalAchievementPercentagesForAppOnRequestCompleted OnRequestCompleted;
    void GetGlobalAchievementPercentagesForAppDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetGlobalAchievementPercentagesForAppOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetGlobalAchievementPercentagesForAppMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FUWorksGameID GameID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetGlobalStatsForGame : public UUWorksRequestWeb
{
    FUWorksRequestWebGetGlobalStatsForGameOnRequestCompleted OnRequestCompleted;
    void GetGlobalStatsForGameDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetGlobalStatsForGameOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetGlobalStatsForGameMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(int32 AppID, int32 Count, TArray<FString> Name, int32 StartDate, int32 EndDate);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetNumberOfCurrentPlayers : public UUWorksRequestWeb
{
    FUWorksRequestWebGetNumberOfCurrentPlayersOnRequestCompleted OnRequestCompleted;
    void GetNumberOfCurrentPlayersDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetNumberOfCurrentPlayersOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetNumberOfCurrentPlayersMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(int32 AppID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetPlayerAchievements : public UUWorksRequestWeb
{
    FUWorksRequestWebGetPlayerAchievementsOnRequestCompleted OnRequestCompleted;
    void GetPlayerAchievementsDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetPlayerAchievementsOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetPlayerAchievementsMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, FString Language);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetSchemaForGame : public UUWorksRequestWeb
{
    FUWorksRequestWebGetSchemaForGameOnRequestCompleted OnRequestCompleted;
    void GetSchemaForGameDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetSchemaForGameOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetSchemaForGameMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FString Language);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetUserStatsForGame : public UUWorksRequestWeb
{
    FUWorksRequestWebGetUserStatsForGameOnRequestCompleted OnRequestCompleted;
    void GetUserStatsForGameDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetUserStatsForGameOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetUserStatsForGameMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebSetUserStatsForGame : public UUWorksRequestWeb
{
    FUWorksRequestWebSetUserStatsForGameOnRequestCompleted OnRequestCompleted;
    void SetUserStatsForGameDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebSetUserStatsForGameOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void SetUserStatsForGameMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<FString> Name, TArray<int32> Value);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebSetItemPaymentRules : public UUWorksRequestWeb
{
    FUWorksRequestWebSetItemPaymentRulesOnRequestCompleted OnRequestCompleted;
    void SetItemPaymentRulesDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebSetItemPaymentRulesOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void SetItemPaymentRulesMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, int32 GameItemID, FUWorksAssociatedWorkshopFiles AssociatedWorkshopFiles, FUWorksPartnerAccounts PartnerAccounts, bool bMakeWorkshopFilesSubscribable, bool bValidateOnly);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetFinalizedContributors : public UUWorksRequestWeb
{
    FUWorksRequestWebGetFinalizedContributorsOnRequestCompleted OnRequestCompleted;
    void GetFinalizedContributorsDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetFinalizedContributorsOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetFinalizedContributorsMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, int32 GameItemID);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebGetItemDailyRevenue : public UUWorksRequestWeb
{
    FUWorksRequestWebGetItemDailyRevenueOnRequestCompleted OnRequestCompleted;
    void GetItemDailyRevenueDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetItemDailyRevenueOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetItemDailyRevenueMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FString ItemId, int32 DateStart, int32 DateEnd);
    void GetOutput(FString& Content);
};

class UUWorksRequestWebPopulateItemDescriptions : public UUWorksRequestWeb
{
    FUWorksRequestWebPopulateItemDescriptionsOnRequestCompleted OnRequestCompleted;
    void PopulateItemDescriptionsDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebPopulateItemDescriptionsOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void PopulateItemDescriptionsMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksLanguages Languages);
    void GetOutput(FString& Content);
};

class UGetAppBetasNode : public UBlueprintAsyncActionBase
{
    FGetAppBetasNodeCompleted Completed;
    void GetAppBetasDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetAppBetasNode* GetAppBetasNode(FString Key, int32 AppID);
};

class UGetAppBuildsNode : public UBlueprintAsyncActionBase
{
    FGetAppBuildsNodeCompleted Completed;
    void GetAppBuildsDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetAppBuildsNode* GetAppBuildsNode(FString Key, int32 AppID, int32 Count);
};

class UGetAppDepotVersionsNode : public UBlueprintAsyncActionBase
{
    FGetAppDepotVersionsNodeCompleted Completed;
    void GetAppDepotVersionsDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetAppDepotVersionsNode* GetAppDepotVersionsNode(FString Key, int32 AppID);
};

class UGetAppListNode : public UBlueprintAsyncActionBase
{
    FGetAppListNodeCompleted Completed;
    void GetAppListDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetAppListNode* GetAppListNode();
};

class UGetCheatingReportsListNode : public UBlueprintAsyncActionBase
{
    FGetCheatingReportsListNodeCompleted Completed;
    void GetCheatingReportsListDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetCheatingReportsListNode* GetCheatingReportsListNode(FString Key, int32 AppID, int32 TimeBegin, int32 TimeEnd, bool bIncludeReports, bool bIncludeBans, FString ReportIDMin);
};

class UGetPlayersBannedNode : public UBlueprintAsyncActionBase
{
    FGetPlayersBannedNodeCompleted Completed;
    void GetPlayersBannedDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetPlayersBannedNode* GetPlayersBannedNode(FString Key, int32 AppID);
};

class UGetServerListNode : public UBlueprintAsyncActionBase
{
    FGetServerListNodeCompleted Completed;
    void GetServerListDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetServerListNode* GetServerListNode(FString Key, FString Filter, int32 Limit);
};

class UGetServersAtAddressNode : public UBlueprintAsyncActionBase
{
    FGetServersAtAddressNodeCompleted Completed;
    void GetServersAtAddressDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetServersAtAddressNode* GetServersAtAddressNode(FString Addr);
};

class USetAppBuildLiveNode : public UBlueprintAsyncActionBase
{
    FSetAppBuildLiveNodeCompleted Completed;
    void SetAppBuildLiveDelegate(bool bSuccessful, FString Content);

    class USetAppBuildLiveNode* SetAppBuildLiveNode(FString Key, int32 AppID, int32 BuildID, FString BetaKey, FString Description);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class UUpToDateCheckNode : public UBlueprintAsyncActionBase
{
    FUpToDateCheckNodeCompleted Completed;
    void UpToDateCheckDelegate(bool bSuccessful, FString Content);

    class UUpToDateCheckNode* UpToDateCheckNode(int32 AppID, int32 Version);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class UPostGameDataFrameNode : public UBlueprintAsyncActionBase
{
    FPostGameDataFrameNodeCompleted Completed;
    void PostGameDataFrameDelegate(bool bSuccessful, FString Content);

    class UPostGameDataFrameNode* PostGameDataFrameNode(FString Key, int32 AppID, FUWorksSteamID SteamID, FString BroadcastID, FString FrameData);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class UReportPlayerCheatingNode : public UBlueprintAsyncActionBase
{
    FReportPlayerCheatingNodeCompleted Completed;
    void ReportPlayerCheatingDelegate(bool bSuccessful, FString Content);

    class UReportPlayerCheatingNode* ReportPlayerCheatingNode(FString Key, FUWorksSteamID SteamID, int32 AppID, FUWorksSteamID SteamIDReporter, int32 AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32 GameMode, int32 SuspicionStartTime, int32 Severity);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class URequestPlayerGameBanNode : public UBlueprintAsyncActionBase
{
    FRequestPlayerGameBanNodeCompleted Completed;
    void RequestPlayerGameBanDelegate(bool bSuccessful, FString Content);

    class URequestPlayerGameBanNode* RequestPlayerGameBanNode(FString Key, FUWorksSteamID SteamID, int32 AppID, FUWorksSteamID ReportID, FString CheatDescription, int32 Duration, bool bDelayBan);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class URemovePlayerGameBanNode : public UBlueprintAsyncActionBase
{
    FRemovePlayerGameBanNodeCompleted Completed;
    void RemovePlayerGameBanDelegate(bool bSuccessful, FString Content);

    class URemovePlayerGameBanNode* RemovePlayerGameBanNode(FString Key, FUWorksSteamID SteamID, int32 AppID);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class UGetCheatingReportsNode : public UBlueprintAsyncActionBase
{
    FGetCheatingReportsNodeCompleted Completed;
    void GetCheatingReportsDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetCheatingReportsNode* GetCheatingReportsNode(FString Key, int32 AppID, int32 TimeEnd, int32 TimeBegin, FString ReportIDMin, bool bIncludeReports, bool bIncludeBans, FUWorksSteamID SteamID);
};

class URequestVacStatusForUserNode : public UBlueprintAsyncActionBase
{
    FRequestVacStatusForUserNodeCompleted Completed;
    void RequestVacStatusForUserDelegate(bool bSuccessful, FString Content);

    class URequestVacStatusForUserNode* RequestVacStatusForUserNode(FString Key, FUWorksSteamID SteamID, int32 AppID, FString SessionId);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class UStartSecureMultiplayerSessionNode : public UBlueprintAsyncActionBase
{
    FStartSecureMultiplayerSessionNodeCompleted Completed;
    void StartSecureMultiplayerSessionDelegate(bool bSuccessful, FString Content);

    class UStartSecureMultiplayerSessionNode* StartSecureMultiplayerSessionNode(FString Key, FUWorksSteamID SteamID, int32 AppID);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class UEndSecureMultiplayerSessionNode : public UBlueprintAsyncActionBase
{
    FEndSecureMultiplayerSessionNodeCompleted Completed;
    void EndSecureMultiplayerSessionDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UEndSecureMultiplayerSessionNode* EndSecureMultiplayerSessionNode(FString Key, FUWorksSteamID SteamID, int32 AppID, FString SessionId);
};

class UReportCheatDataNode : public UBlueprintAsyncActionBase
{
    FReportCheatDataNodeCompleted Completed;
    void ReportCheatDataDelegate(bool bSuccessful, FString Content);

    class UReportCheatDataNode* ReportCheatDataNode(FString Key, FUWorksSteamID SteamID, int32 AppID, FString PathAndFileName, FString WebCheatURL, FString TimeNow, FString TimeStarted, FString TimeStopped, FString CheatName, int32 GameProcessID, int32 CheatProcessID, FString CheatParamA, FString CheatParamB);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class UReportAbuseNode : public UBlueprintAsyncActionBase
{
    FReportAbuseNodeCompleted Completed;
    void ReportAbuseDelegate(bool bSuccessful, FString Content);

    class UReportAbuseNode* ReportAbuseNode(FString Key, FUWorksSteamID SteamIDActor, FUWorksSteamID SteamIDTarget, int32 AppID, uint8 AbuseType, uint8 ContentType, FString Description, FString GID);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class UGetTradeHistoryNode : public UBlueprintAsyncActionBase
{
    FGetTradeHistoryNodeCompleted Completed;
    void GetTradeHistoryDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetTradeHistoryNode* GetTradeHistoryNode(FString Key, int32 MaxTrades, int32 StartAfterTime, FString StartAfterTradeID, bool bNavigatingBack, bool bGetDescription, FString Language, bool bIncludeFailed, bool bIncludeTotal);
};

class UFlushInventoryCacheNode : public UBlueprintAsyncActionBase
{
    FFlushInventoryCacheNodeCompleted Completed;
    void FlushInventoryCacheDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UFlushInventoryCacheNode* FlushInventoryCacheNode(FString Key, FUWorksSteamID SteamID, int32 AppID, FString ContextID);
};

class UFlushAssetAppearanceCacheNode : public UBlueprintAsyncActionBase
{
    FFlushAssetAppearanceCacheNodeCompleted Completed;
    void FlushAssetAppearanceCacheDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UFlushAssetAppearanceCacheNode* FlushAssetAppearanceCacheNode(FString Key, int32 AppID);
};

class UFlushContextCacheNode : public UBlueprintAsyncActionBase
{
    FFlushContextCacheNodeCompleted Completed;
    void FlushContextCacheDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UFlushContextCacheNode* FlushContextCacheNode(FString Key, int32 AppID);
};

class UGetTradeOffersNode : public UBlueprintAsyncActionBase
{
    FGetTradeOffersNodeCompleted Completed;
    void GetTradeOffersDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetTradeOffersNode* GetTradeOffersNode(FString Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescription, FString Language, bool bActiveOnly, bool bHistoricalOnly, int32 TimeHistoricalCutoff);
};

class UGetTradeOfferNode : public UBlueprintAsyncActionBase
{
    FGetTradeOfferNodeCompleted Completed;
    void GetTradeOfferDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetTradeOfferNode* GetTradeOfferNode(FString Key, FString TradeOfferID, FString Language);
};

class UGetTradeOffersSummaryNode : public UBlueprintAsyncActionBase
{
    FGetTradeOffersSummaryNodeCompleted Completed;
    void GetTradeOffersSummaryDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetTradeOffersSummaryNode* GetTradeOffersSummaryNode(FString Key, int32 TimeLastVisit);
};

class UDeclineTradeOfferNode : public UBlueprintAsyncActionBase
{
    FDeclineTradeOfferNodeCompleted Completed;
    void DeclineTradeOfferDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UDeclineTradeOfferNode* DeclineTradeOfferNode(FString Key, FString TradeOfferID);
};

class UCancelTradeOfferNode : public UBlueprintAsyncActionBase
{
    FCancelTradeOfferNodeCompleted Completed;
    void CancelTradeOfferDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UCancelTradeOfferNode* CancelTradeOfferNode(FString Key, FString TradeOfferID);
};

class UGetMarketEligibilityNode : public UBlueprintAsyncActionBase
{
    FGetMarketEligibilityNodeCompleted Completed;
    void GetMarketEligibilityDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetMarketEligibilityNode* GetMarketEligibilityNode(FString Key, FUWorksSteamID SteamID);
};

class UCancelAppListingsForUserNode : public UBlueprintAsyncActionBase
{
    FCancelAppListingsForUserNodeCompleted Completed;
    void CancelAppListingsForUserDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UCancelAppListingsForUserNode* CancelAppListingsForUserNode(FString Key, int32 AppID, FUWorksSteamID SteamID, bool bSynchronous);
};

class UGetAssetIDNode : public UBlueprintAsyncActionBase
{
    FGetAssetIDNodeCompleted Completed;
    void GetAssetIDDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetAssetIDNode* GetAssetIDNode(FString Key, int32 AppID, FString ListingID);
};

class UGetPopularNode : public UBlueprintAsyncActionBase
{
    FGetPopularNodeCompleted Completed;
    void GetPopularDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetPopularNode* GetPopularNode(FString Key, FString Language, int32 Rows, int32 Start, int32 FilterAppID, int32 ECurrency);
};

class UCanTradeNode : public UBlueprintAsyncActionBase
{
    FCanTradeNodeCompleted Completed;
    void CanTradeDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UCanTradeNode* CanTradeNode(FString Key, int32 AppID, FUWorksSteamID SteamID, FUWorksSteamID TargetId);
};

class UFinalizeAssetTransactionNode : public UBlueprintAsyncActionBase
{
    FFinalizeAssetTransactionNodeCompleted Completed;
    void FinalizeAssetTransactionDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UFinalizeAssetTransactionNode* FinalizeAssetTransactionNode(FString Key, int32 AppID, FUWorksSteamID SteamID, FString TxnID, FString Language);
};

class UGetAssetClassInfoNode : public UBlueprintAsyncActionBase
{
    FGetAssetClassInfoNodeCompleted Completed;
    void GetAssetClassInfoDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetAssetClassInfoNode* GetAssetClassInfoNode(FString Key, int32 AppID, int32 ClassCount, FString ClassID0, FString Language, FString InstanceID0);
};

class UGetAssetPricesNode : public UBlueprintAsyncActionBase
{
    FGetAssetPricesNodeCompleted Completed;
    void GetAssetPricesDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetAssetPricesNode* GetAssetPricesNode(FString Key, int32 AppID, FString Currency, FString Language);
};

class UGetExportedAssetsForUserNode : public UBlueprintAsyncActionBase
{
    FGetExportedAssetsForUserNodeCompleted Completed;
    void GetExportedAssetsForUserDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetExportedAssetsForUserNode* GetExportedAssetsForUserNode(FString Key, FUWorksSteamID SteamID, int32 AppID, FString ContextID);
};

class UGetMarketPricesNode : public UBlueprintAsyncActionBase
{
    FGetMarketPricesNodeCompleted Completed;
    void GetMarketPricesDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetMarketPricesNode* GetMarketPricesNode(FString Key, int32 AppID);
};

class UStartAssetTransactionNode : public UBlueprintAsyncActionBase
{
    FStartAssetTransactionNodeCompleted Completed;
    void StartAssetTransactionDelegate(bool bSuccessful, FString Content);

    class UStartAssetTransactionNode* StartAssetTransactionNode(FString Key, int32 AppID, FUWorksSteamID SteamID, FString AssetID0, int32 AssetQuantity0, FString Currency, FString Language, FString IPAddress, FString Referrer, bool bClientAuth);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class UStartTradeNode : public UBlueprintAsyncActionBase
{
    FStartTradeNodeCompleted Completed;
    void StartTradeDelegate(bool bSuccessful, FString Content);

    class UStartTradeNode* StartTradeNode(FString Key, int32 AppID, FUWorksSteamID PartyA, FUWorksSteamID PartyB);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class UGetHistoryCommandDetailsNode : public UBlueprintAsyncActionBase
{
    FGetHistoryCommandDetailsNodeCompleted Completed;
    void GetHistoryCommandDetailsDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetHistoryCommandDetailsNode* GetHistoryCommandDetailsNode(FString Key, int32 AppID, FUWorksSteamID SteamID, FString Command, FString ContextID, FString Arguments);
};

class UGetUserHistoryNode : public UBlueprintAsyncActionBase
{
    FGetUserHistoryNodeCompleted Completed;
    void GetUserHistoryDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetUserHistoryNode* GetUserHistoryNode(FString Key, int32 AppID, FUWorksSteamID SteamID, FString ContextID, int32 StartTime, int32 EndTime);
};

class UHistoryExecuteCommandsNode : public UBlueprintAsyncActionBase
{
    FHistoryExecuteCommandsNodeCompleted Completed;
    void HistoryExecuteCommandsDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UHistoryExecuteCommandsNode* HistoryExecuteCommandsNode(FString Key, int32 AppID, FUWorksSteamID SteamID, FString ContextID, FString ActorId);
};

class USupportGetAssetHistoryNode : public UBlueprintAsyncActionBase
{
    FSupportGetAssetHistoryNodeCompleted Completed;
    void SupportGetAssetHistoryDelegate(bool bSuccessful, FString Content);

    class USupportGetAssetHistoryNode* SupportGetAssetHistoryNode(FString Key, int32 AppID, FString AssetID, FString ContextID);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class UCreateSessionNode : public UBlueprintAsyncActionBase
{
    FCreateSessionNodeCompleted Completed;
    void CreateSessionDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UCreateSessionNode* CreateSessionNode(FString Key, int32 AppID, FString Context, FUWorksTitle Title, FUWorksUsers Users, FUWorksSteamID SteamID);
};

class UUpdateSessionNode : public UBlueprintAsyncActionBase
{
    FUpdateSessionNodeCompleted Completed;
    void UpdateSessionDelegate(bool bSuccessful, FString Content);

    class UUpdateSessionNode* UpdateSessionNode(FString Key, FString SessionId, int32 AppID, FUWorksTitle Title, FUWorksUsers Users, FUWorksSteamID SteamID);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class UEnumerateSessionsForAppNode : public UBlueprintAsyncActionBase
{
    FEnumerateSessionsForAppNodeCompleted Completed;
    void EnumerateSessionsForAppDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UEnumerateSessionsForAppNode* EnumerateSessionsForAppNode(FString Key, int32 AppID, FUWorksSteamID SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, FString Language);
};

class UGetSessionDetailsForAppNode : public UBlueprintAsyncActionBase
{
    FGetSessionDetailsForAppNodeCompleted Completed;
    void GetSessionDetailsForAppDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetSessionDetailsForAppNode* GetSessionDetailsForAppNode(FString Key, FUWorksSessions Sessions, int32 AppID, FString Language);
};

class URequestNotificationsNode : public UBlueprintAsyncActionBase
{
    FRequestNotificationsNodeCompleted Completed;
    void RequestNotificationsDelegate(bool bSuccessful, FString Content);

    class URequestNotificationsNode* RequestNotificationsNode(FString Key, FUWorksSteamID SteamID, int32 AppID);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class UDeleteSessionNode : public UBlueprintAsyncActionBase
{
    FDeleteSessionNodeCompleted Completed;
    void DeleteSessionDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UDeleteSessionNode* DeleteSessionNode(FString Key, FString SessionId, int32 AppID, FUWorksSteamID SteamID);
};

class UDeleteSessionBatchNode : public UBlueprintAsyncActionBase
{
    FDeleteSessionBatchNodeCompleted Completed;
    void DeleteSessionBatchDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UDeleteSessionBatchNode* DeleteSessionBatchNode(FString Key, FString SessionId, int32 AppID);
};

class UGetAccountListNode : public UBlueprintAsyncActionBase
{
    FGetAccountListNodeCompleted Completed;
    void GetAccountListDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetAccountListNode* GetAccountListNode(FString Key);
};

class UCreateAccountNode : public UBlueprintAsyncActionBase
{
    FCreateAccountNodeCompleted Completed;
    void CreateAccountDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UCreateAccountNode* CreateAccountNode(FString Key, int32 AppID, FString Memo);
};

class USetMemoNode : public UBlueprintAsyncActionBase
{
    FSetMemoNodeCompleted Completed;
    void SetMemoDelegate(bool bSuccessful, FString Content);

    class USetMemoNode* SetMemoNode(FString Key, FUWorksSteamID SteamID, FString Memo);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class UResetLoginTokenNode : public UBlueprintAsyncActionBase
{
    FResetLoginTokenNodeCompleted Completed;
    void ResetLoginTokenDelegate(bool bSuccessful, FString Content);

    class UResetLoginTokenNode* ResetLoginTokenNode(FString Key, FUWorksSteamID SteamID);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class UDeleteAccountNode : public UBlueprintAsyncActionBase
{
    FDeleteAccountNodeCompleted Completed;
    void DeleteAccountDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UDeleteAccountNode* DeleteAccountNode(FString Key, FUWorksSteamID SteamID);
};

class UGetAccountPublicInfoNode : public UBlueprintAsyncActionBase
{
    FGetAccountPublicInfoNodeCompleted Completed;
    void GetAccountPublicInfoDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetAccountPublicInfoNode* GetAccountPublicInfoNode(FString Key, FUWorksSteamID SteamID);
};

class UQueryLoginTokenNode : public UBlueprintAsyncActionBase
{
    FQueryLoginTokenNodeCompleted Completed;
    void QueryLoginTokenDelegate(bool bSuccessful, FString Content);

    class UQueryLoginTokenNode* QueryLoginTokenNode(FString Key, FString LoginToken);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class USetBanStatusNode : public UBlueprintAsyncActionBase
{
    FSetBanStatusNodeCompleted Completed;
    void SetBanStatusDelegate(bool bSuccessful, FString Content);

    class USetBanStatusNode* SetBanStatusNode(FString Key, FUWorksSteamID SteamID, bool bBanned, int32 BanSeconds);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class UGetServerSteamIDsByIPNode : public UBlueprintAsyncActionBase
{
    FGetServerSteamIDsByIPNodeCompleted Completed;
    void GetServerSteamIDsByIPDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetServerSteamIDsByIPNode* GetServerSteamIDsByIPNode(FString Key, FString ServerIPs);
};

class UGetServerIPsBySteamIDNode : public UBlueprintAsyncActionBase
{
    FGetServerIPsBySteamIDNodeCompleted Completed;
    void GetServerIPsBySteamIDDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetServerIPsBySteamIDNode* GetServerIPsBySteamIDNode(FString Key, FUWorksSteamID ServerSteamID);
};

class UGetGameServerPlayerStatsForGameNode : public UBlueprintAsyncActionBase
{
    FGetGameServerPlayerStatsForGameNodeCompleted Completed;
    void GetGameServerPlayerStatsForGameDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetGameServerPlayerStatsForGameNode* GetGameServerPlayerStatsForGameNode(FString Key, FUWorksGameID GameID, int32 AppID, FString RangeStart, FString RangeEnd, int32 MaxResults);
};

class UAddItemNode : public UBlueprintAsyncActionBase
{
    FAddItemNodeCompleted Completed;
    void AddItemDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UAddItemNode* AddItemNode(FString Key, int32 AppID, TArray<FUWorksSteamItemDef> ItemDefID, FString ItemPropsJSON, FUWorksSteamID SteamID, bool bNotify, FString requestID);
};

class UAddPromoItemNode : public UBlueprintAsyncActionBase
{
    FAddPromoItemNodeCompleted Completed;
    void AddPromoItemDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UAddPromoItemNode* AddPromoItemNode(FString Key, int32 AppID, FUWorksSteamItemDef ItemDefID, FString ItemPropsJSON, FUWorksSteamID SteamID, bool bNotify, FString requestID);
};

class UConsumeItemNode : public UBlueprintAsyncActionBase
{
    FConsumeItemNodeCompleted Completed;
    void ConsumeItemDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UConsumeItemNode* ConsumeItemNode(FString Key, int32 AppID, FUWorksSteamItemInstanceID ItemId, int32 Quantity, FUWorksSteamID SteamID, FString requestID);
};

class UExchangeItemNode : public UBlueprintAsyncActionBase
{
    FExchangeItemNodeCompleted Completed;
    void ExchangeItemDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UExchangeItemNode* ExchangeItemNode(FString Key, int32 AppID, FUWorksSteamID SteamID, TArray<FUWorksSteamItemInstanceID> MaterialsItemID, TArray<int32> MaterialsQuantity, FUWorksSteamItemDef OutputItemDefID);
};

class UGetInventoryNode : public UBlueprintAsyncActionBase
{
    FGetInventoryNodeCompleted Completed;
    void GetInventoryDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetInventoryNode* GetInventoryNode(FString Key, int32 AppID, FUWorksSteamID SteamID);
};

class UGetItemDefsNode : public UBlueprintAsyncActionBase
{
    FGetItemDefsNodeCompleted Completed;
    void GetItemDefsDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetItemDefsNode* GetItemDefsNode(FString Key, int32 AppID, FString ModifiedSince, TArray<FUWorksSteamItemDef> ItemDefIDs, TArray<FUWorksSteamItemDef> WorkshopIDs, int32 CacheMaxAgeSeconds);
};

class UGetPriceSheetNode : public UBlueprintAsyncActionBase
{
    FGetPriceSheetNodeCompleted Completed;
    void GetPriceSheetDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetPriceSheetNode* GetPriceSheetNode(FString Key, int32 ECurrency);
};

class UConsolidateNode : public UBlueprintAsyncActionBase
{
    FConsolidateNodeCompleted Completed;
    void ConsolidateDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UConsolidateNode* ConsolidateNode(FString Key, int32 AppID, FUWorksSteamID SteamID, TArray<FUWorksSteamItemDef> ItemDefID, bool bForce);
};

class UGetQuantityNode : public UBlueprintAsyncActionBase
{
    FGetQuantityNodeCompleted Completed;
    void GetQuantityDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetQuantityNode* GetQuantityNode(FString Key, int32 AppID, FUWorksSteamID SteamID, FUWorksSteamItemDef ItemDefID, bool bForce);
};

class UDeleteLeaderboardNode : public UBlueprintAsyncActionBase
{
    FDeleteLeaderboardNodeCompleted Completed;
    void DeleteLeaderboardDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UDeleteLeaderboardNode* DeleteLeaderboardNode(FString Key, int32 AppID, FString Name);
};

class UFindOrCreateLeaderboardNode : public UBlueprintAsyncActionBase
{
    FFindOrCreateLeaderboardNodeCompleted Completed;
    void FindOrCreateLeaderboardDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UFindOrCreateLeaderboardNode* FindOrCreateLeaderboardNode(FString Key, int32 AppID, FString Name, FString SortMethod, FString DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads);
};

class UGetLeaderboardEntriesNode : public UBlueprintAsyncActionBase
{
    FGetLeaderboardEntriesNodeCompleted Completed;
    void GetLeaderboardEntriesDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetLeaderboardEntriesNode* GetLeaderboardEntriesNode(FString Key, int32 AppID, int32 RangeStart, int32 RangeEnd, int32 LeaderboardID, int32 DataRequest, FUWorksSteamID SteamID);
};

class UGetLeaderboardsForGameNode : public UBlueprintAsyncActionBase
{
    FGetLeaderboardsForGameNodeCompleted Completed;
    void GetLeaderboardsForGameDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetLeaderboardsForGameNode* GetLeaderboardsForGameNode(FString Key, int32 AppID);
};

class UResetLeaderboardNode : public UBlueprintAsyncActionBase
{
    FResetLeaderboardNodeCompleted Completed;
    void ResetLeaderboardDelegate(bool bSuccessful, FString Content);

    class UResetLeaderboardNode* ResetLeaderboardNode(FString Key, int32 AppID, int32 LeaderboardID);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class USetLeaderboardScoreNode : public UBlueprintAsyncActionBase
{
    FSetLeaderboardScoreNodeCompleted Completed;
    void SetLeaderboardScoreDelegate(bool bSuccessful, FString Content);

    class USetLeaderboardScoreNode* SetLeaderboardScoreNode(FString Key, int32 AppID, int32 LeaderboardID, FUWorksSteamID SteamID, int32 score, FString ScoreMethod, TArray<uint8> Details);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class UAdjustAgreementNode : public UBlueprintAsyncActionBase
{
    FAdjustAgreementNodeCompleted Completed;
    void AdjustAgreementDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UAdjustAgreementNode* AdjustAgreementNode(FString Key, FUWorksSteamID SteamID, FString AgreementID, int32 AppID, FString NextProcessDate);
};

class UCancelAgreementNode : public UBlueprintAsyncActionBase
{
    FCancelAgreementNodeCompleted Completed;
    void CancelAgreementDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UCancelAgreementNode* CancelAgreementNode(FString Key, FUWorksSteamID SteamID, FString AgreementID, int32 AppID);
};

class UFinalizeTxnNode : public UBlueprintAsyncActionBase
{
    FFinalizeTxnNodeCompleted Completed;
    void FinalizeTxnDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UFinalizeTxnNode* FinalizeTxnNode(FString Key, FString OrderID, int32 AppID);
};

class UGetReportNode : public UBlueprintAsyncActionBase
{
    FGetReportNodeCompleted Completed;
    void GetReportDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetReportNode* GetReportNode(FString Key, int32 AppID, FString Time, EUWorksReportType Type, int32 MaxResults);
};

class UGetUserAgreementInfoNode : public UBlueprintAsyncActionBase
{
    FGetUserAgreementInfoNodeCompleted Completed;
    void GetUserAgreementInfoDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetUserAgreementInfoNode* GetUserAgreementInfoNode(FString Key, FUWorksSteamID SteamID, int32 AppID);
};

class UGetUserInfoNode : public UBlueprintAsyncActionBase
{
    FGetUserInfoNodeCompleted Completed;
    void GetUserInfoDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetUserInfoNode* GetUserInfoNode(FString Key, FUWorksSteamID SteamID, FString IPAddress);
};

class UInitTxnNode : public UBlueprintAsyncActionBase
{
    FInitTxnNodeCompleted Completed;
    void InitTxnDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UInitTxnNode* InitTxnNode(FString Key, FString OrderID, FUWorksSteamID SteamID, int32 AppID, int32 ItemCount, FString Language, FString Currency, TArray<FUWorksSteamItemDef> itemIds, TArray<int32> Quantities, TArray<int32> Amounts, TArray<FString> Descriptions, TArray<FString> Categories, TArray<int32> AssociatedBundles, TArray<FString> BillingTypes, TArray<FString> StartDates, TArray<FString> EndDates, TArray<FString> Periods, TArray<int32> Frequencies, TArray<FString> RecurringAmounts, int32 BundleCount, TArray<int32> BundleIDs, TArray<int32> BundleQuantities, TArray<FString> BundleDescriptions, TArray<FString> BundleCategories, EUWorksUserSession UserSession, FString IPAddress);
};

class UProcessAgreementNode : public UBlueprintAsyncActionBase
{
    FProcessAgreementNodeCompleted Completed;
    void ProcessAgreementDelegate(bool bSuccessful, FString Content);

    class UProcessAgreementNode* ProcessAgreementNode(FString Key, FString OrderID, FUWorksSteamID SteamID, FString AgreementID, int32 AppID, int32 Amount, FString Currency);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class UQueryTxnNode : public UBlueprintAsyncActionBase
{
    FQueryTxnNodeCompleted Completed;
    void QueryTxnDelegate(bool bSuccessful, FString Content);

    class UQueryTxnNode* QueryTxnNode(FString Key, int32 AppID, FString OrderID, FString TransID);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class URefundTxnNode : public UBlueprintAsyncActionBase
{
    FRefundTxnNodeCompleted Completed;
    void RefundTxnDelegate(bool bSuccessful, FString Content);

    class URefundTxnNode* RefundTxnNode(FString Key, FString OrderID, int32 AppID);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class UGetNewsForAppNode : public UBlueprintAsyncActionBase
{
    FGetNewsForAppNodeCompleted Completed;
    void GetNewsForAppDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetNewsForAppNode* GetNewsForAppNode(int32 AppID, int32 MaxLength, int32 EndDate, int32 Count, FString Feeds);
};

class UGetNewsForAppAuthedNode : public UBlueprintAsyncActionBase
{
    FGetNewsForAppAuthedNodeCompleted Completed;
    void GetNewsForAppAuthedDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetNewsForAppAuthedNode* GetNewsForAppAuthedNode(FString Key, int32 AppID, int32 MaxLength, int32 EndDate, int32 Count, FString Feeds);
};

class URecordOfflinePlaytimeNode : public UBlueprintAsyncActionBase
{
    FRecordOfflinePlaytimeNodeCompleted Completed;
    void RecordOfflinePlaytimeDelegate(bool bSuccessful, FString Content);

    class URecordOfflinePlaytimeNode* RecordOfflinePlaytimeNode(FUWorksSteamID SteamID, FString Ticket, FUWorksPlaySessions PlaySessions);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class UGetRecentlyPlayedGamesNode : public UBlueprintAsyncActionBase
{
    FGetRecentlyPlayedGamesNodeCompleted Completed;
    void GetRecentlyPlayedGamesDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetRecentlyPlayedGamesNode* GetRecentlyPlayedGamesNode(FString Key, FUWorksSteamID SteamID, int32 Count);
};

class UGetOwnedGamesNode : public UBlueprintAsyncActionBase
{
    FGetOwnedGamesNodeCompleted Completed;
    void GetOwnedGamesDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetOwnedGamesNode* GetOwnedGamesNode(FString Key, FUWorksSteamID SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32> AppIDsFilter);
};

class UGetSteamLevelNode : public UBlueprintAsyncActionBase
{
    FGetSteamLevelNodeCompleted Completed;
    void GetSteamLevelDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetSteamLevelNode* GetSteamLevelNode(FString Key, FUWorksSteamID SteamID);
};

class UGetBadgesNode : public UBlueprintAsyncActionBase
{
    FGetBadgesNodeCompleted Completed;
    void GetBadgesDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetBadgesNode* GetBadgesNode(FString Key, FUWorksSteamID SteamID);
};

class UGetCommunityBadgeProgressNode : public UBlueprintAsyncActionBase
{
    FGetCommunityBadgeProgressNodeCompleted Completed;
    void GetCommunityBadgeProgressDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetCommunityBadgeProgressNode* GetCommunityBadgeProgressNode(FString Key, FUWorksSteamID SteamID, int32 BadgeID);
};

class UIsPlayingSharedGameNode : public UBlueprintAsyncActionBase
{
    FIsPlayingSharedGameNodeCompleted Completed;
    void IsPlayingSharedGameDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UIsPlayingSharedGameNode* IsPlayingSharedGameNode(FString Key, FUWorksSteamID SteamID, int32 AppIDPlaying);
};

class UQueryFilesNode : public UBlueprintAsyncActionBase
{
    FQueryFilesNodeCompleted Completed;
    void QueryFilesDelegate(bool bSuccessful, FString Content);

    class UQueryFilesNode* QueryFilesNode(FString Key, uint8 queryType, int32 Page, int32 CreatorAppID, int32 AppID, TArray<FString> requiredTags, TArray<FString> excludedTags, TArray<FString> RequiredFlags, TArray<FString> OmittedFlags, FString searchText, uint8 fileType, FUWorksPublishedFileID ChildPublishedFileID, int32 Days, bool bIncludeRecentVotesOnly, FUWorksRequiredKVTags RequiredKVTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKVTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, int32 ReturnPlaytimeStats, int32 NumPerPage, bool bMatchAllTags, int32 CacheMaxAgeSeconds, int32 Language, bool bReturnMetaData);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class USetDeveloperMetadataNode : public UBlueprintAsyncActionBase
{
    FSetDeveloperMetadataNodeCompleted Completed;
    void SetDeveloperMetadataDelegate(bool bSuccessful, FString Content);

    class USetDeveloperMetadataNode* SetDeveloperMetadataNode(FString Key, FUWorksPublishedFileID PublishedFileID, int32 AppID, FString MetaData);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class UUpdateTagsNode : public UBlueprintAsyncActionBase
{
    FUpdateTagsNodeCompleted Completed;
    void UpdateTagsDelegate(bool bSuccessful, FString Content);

    class UUpdateTagsNode* UpdateTagsNode(FString Key, FUWorksPublishedFileID PublishedFileID, int32 AppID, TArray<FString> AddTags, TArray<FString> RemoveTags);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class URankedByPublicationOrderNode : public UBlueprintAsyncActionBase
{
    FRankedByPublicationOrderNodeCompleted Completed;
    void RankedByPublicationOrderDelegate(bool bSuccessful, FString Content);

    class URankedByPublicationOrderNode* RankedByPublicationOrderNode(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class URankedByTrendNode : public UBlueprintAsyncActionBase
{
    FRankedByTrendNodeCompleted Completed;
    void RankedByTrendDelegate(bool bSuccessful, FString Content);

    class URankedByTrendNode* RankedByTrendNode(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, int32 Days, TArray<FString> tags, TArray<FString> UserTags);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class URankedByVoteNode : public UBlueprintAsyncActionBase
{
    FRankedByVoteNodeCompleted Completed;
    void RankedByVoteDelegate(bool bSuccessful, FString Content);

    class URankedByVoteNode* RankedByVoteNode(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class UResultSetSummaryNode : public UBlueprintAsyncActionBase
{
    FResultSetSummaryNodeCompleted Completed;
    void ResultSetSummaryDelegate(bool bSuccessful, FString Content);

    class UResultSetSummaryNode* ResultSetSummaryNode(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class UItemVoteSummaryNode : public UBlueprintAsyncActionBase
{
    FItemVoteSummaryNodeCompleted Completed;
    void ItemVoteSummaryDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UItemVoteSummaryNode* ItemVoteSummaryNode(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<int32> PublishedFileIDs);
};

class UUserVoteSummaryNode : public UBlueprintAsyncActionBase
{
    FUserVoteSummaryNodeCompleted Completed;
    void UserVoteSummaryDelegate(bool bSuccessful, FString Content);

    class UUserVoteSummaryNode* UserVoteSummaryNode(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<int32> PublishedFileIDs);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class UEnumerateUserPublishedFilesNode : public UBlueprintAsyncActionBase
{
    FEnumerateUserPublishedFilesNodeCompleted Completed;
    void EnumerateUserPublishedFilesDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UEnumerateUserPublishedFilesNode* EnumerateUserPublishedFilesNode(FString Key, FUWorksSteamID SteamID, int32 AppID);
};

class UEnumerateUserSubscribedFilesNode : public UBlueprintAsyncActionBase
{
    FEnumerateUserSubscribedFilesNodeCompleted Completed;
    void EnumerateUserSubscribedFilesDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UEnumerateUserSubscribedFilesNode* EnumerateUserSubscribedFilesNode(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 ListType);
};

class UGetCollectionDetailsNode : public UBlueprintAsyncActionBase
{
    FGetCollectionDetailsNodeCompleted Completed;
    void GetCollectionDetailsDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetCollectionDetailsNode* GetCollectionDetailsNode(int32 CollectionCount, TArray<int32> PublishedFileIDs);
};

class UGetPublishedFileDetailsNode : public UBlueprintAsyncActionBase
{
    FGetPublishedFileDetailsNodeCompleted Completed;
    void GetPublishedFileDetailsDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetPublishedFileDetailsNode* GetPublishedFileDetailsNode(int32 ItemCount, TArray<int32> PublishedFileIDs);
};

class UGetUGCFileDetailsNode : public UBlueprintAsyncActionBase
{
    FGetUGCFileDetailsNodeCompleted Completed;
    void GetUGCFileDetailsDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetUGCFileDetailsNode* GetUGCFileDetailsNode(FString Key, FUWorksSteamID SteamID, int32 UGCID, int32 AppID);
};

class USetUGCUsedByGCNode : public UBlueprintAsyncActionBase
{
    FSetUGCUsedByGCNodeCompleted Completed;
    void SetUGCUsedByGCDelegate(bool bSuccessful, FString Content);

    class USetUGCUsedByGCNode* SetUGCUsedByGCNode(FString Key, FUWorksSteamID SteamID, int32 UGCID, int32 AppID, bool bUsed);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class USubscribePublishedFileNode : public UBlueprintAsyncActionBase
{
    FSubscribePublishedFileNodeCompleted Completed;
    void SubscribePublishedFileDelegate(bool bSuccessful, FString Content);

    class USubscribePublishedFileNode* SubscribePublishedFileNode(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 PublishedFileID);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class UUnsubscribePublishedFileNode : public UBlueprintAsyncActionBase
{
    FUnsubscribePublishedFileNodeCompleted Completed;
    void UnsubscribePublishedFileDelegate(bool bSuccessful, FString Content);

    class UUnsubscribePublishedFileNode* UnsubscribePublishedFileNode(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 PublishedFileID);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class UCheckAppOwnershipNode : public UBlueprintAsyncActionBase
{
    FCheckAppOwnershipNodeCompleted Completed;
    void CheckAppOwnershipDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UCheckAppOwnershipNode* CheckAppOwnershipNode(FString Key, FUWorksSteamID SteamID, int32 AppID);
};

class UGetAppPriceInfoNode : public UBlueprintAsyncActionBase
{
    FGetAppPriceInfoNodeCompleted Completed;
    void GetAppPriceInfoDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetAppPriceInfoNode* GetAppPriceInfoNode(FString Key, FUWorksSteamID SteamID, FString AppIDs);
};

class UGetFriendListNode : public UBlueprintAsyncActionBase
{
    FGetFriendListNodeCompleted Completed;
    void GetFriendListDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetFriendListNode* GetFriendListNode(FString Key, FUWorksSteamID SteamID, FString Relationship);
};

class UGetPlayerBansNode : public UBlueprintAsyncActionBase
{
    FGetPlayerBansNodeCompleted Completed;
    void GetPlayerBansDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetPlayerBansNode* GetPlayerBansNode(FString Key, FString SteamIDs);
};

class UGetPlayerSummariesNode : public UBlueprintAsyncActionBase
{
    FGetPlayerSummariesNodeCompleted Completed;
    void GetPlayerSummariesDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetPlayerSummariesNode* GetPlayerSummariesNode(FString Key, FString SteamIDs);
};

class UGetPublisherAppOwnershipNode : public UBlueprintAsyncActionBase
{
    FGetPublisherAppOwnershipNodeCompleted Completed;
    void GetPublisherAppOwnershipDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetPublisherAppOwnershipNode* GetPublisherAppOwnershipNode(FString Key, FUWorksSteamID SteamID);
};

class UGetPublisherAppOwnershipChangesNode : public UBlueprintAsyncActionBase
{
    FGetPublisherAppOwnershipChangesNodeCompleted Completed;
    void GetPublisherAppOwnershipChangesDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetPublisherAppOwnershipChangesNode* GetPublisherAppOwnershipChangesNode(FString Key, FString PackageRowVersion, FString CDKeyRowVersion);
};

class UGetUserGroupListNode : public UBlueprintAsyncActionBase
{
    FGetUserGroupListNodeCompleted Completed;
    void GetUserGroupListDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetUserGroupListNode* GetUserGroupListNode(FString Key, FUWorksSteamID SteamID);
};

class UGrantPackageNode : public UBlueprintAsyncActionBase
{
    FGrantPackageNodeCompleted Completed;
    void GrantPackageDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGrantPackageNode* GrantPackageNode(FString Key, FUWorksSteamID SteamID, int32 PackageID, FString IPAddress, FString ThirdPartyKey, int32 ThirdPartyAppID);
};

class UResolveVanityURLNode : public UBlueprintAsyncActionBase
{
    FResolveVanityURLNodeCompleted Completed;
    void ResolveVanityURLDelegate(bool bSuccessful, FString Content);

    class UResolveVanityURLNode* ResolveVanityURLNode(FString Key, FString VanityURL, uint8 URLType);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class UAuthenticateUserNode : public UBlueprintAsyncActionBase
{
    FAuthenticateUserNodeCompleted Completed;
    void AuthenticateUserDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UAuthenticateUserNode* AuthenticateUserNode(FUWorksSteamID SteamID, TArray<uint8> SessionKey, TArray<uint8> EncryptedLoginKey);
};

class UAuthenticateUserTicketNode : public UBlueprintAsyncActionBase
{
    FAuthenticateUserTicketNodeCompleted Completed;
    void AuthenticateUserTicketDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UAuthenticateUserTicketNode* AuthenticateUserTicketNode(FString Key, int32 AppID, FString Ticket);
};

class UGetGlobalAchievementPercentagesForAppNode : public UBlueprintAsyncActionBase
{
    FGetGlobalAchievementPercentagesForAppNodeCompleted Completed;
    void GetGlobalAchievementPercentagesForAppDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetGlobalAchievementPercentagesForAppNode* GetGlobalAchievementPercentagesForAppNode(FUWorksGameID GameID);
};

class UGetGlobalStatsForGameNode : public UBlueprintAsyncActionBase
{
    FGetGlobalStatsForGameNodeCompleted Completed;
    void GetGlobalStatsForGameDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetGlobalStatsForGameNode* GetGlobalStatsForGameNode(int32 AppID, int32 Count, TArray<FString> Name, int32 StartDate, int32 EndDate);
};

class UGetNumberOfCurrentPlayersNode : public UBlueprintAsyncActionBase
{
    FGetNumberOfCurrentPlayersNodeCompleted Completed;
    void GetNumberOfCurrentPlayersDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetNumberOfCurrentPlayersNode* GetNumberOfCurrentPlayersNode(int32 AppID);
};

class UGetPlayerAchievementsNode : public UBlueprintAsyncActionBase
{
    FGetPlayerAchievementsNodeCompleted Completed;
    void GetPlayerAchievementsDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetPlayerAchievementsNode* GetPlayerAchievementsNode(FString Key, FUWorksSteamID SteamID, int32 AppID, FString Language);
};

class UGetSchemaForGameNode : public UBlueprintAsyncActionBase
{
    FGetSchemaForGameNodeCompleted Completed;
    void GetSchemaForGameDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetSchemaForGameNode* GetSchemaForGameNode(FString Key, int32 AppID, FString Language);
};

class UGetUserStatsForGameNode : public UBlueprintAsyncActionBase
{
    FGetUserStatsForGameNodeCompleted Completed;
    void GetUserStatsForGameDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetUserStatsForGameNode* GetUserStatsForGameNode(FString Key, FUWorksSteamID SteamID, int32 AppID);
};

class USetUserStatsForGameNode : public UBlueprintAsyncActionBase
{
    FSetUserStatsForGameNodeCompleted Completed;
    void SetUserStatsForGameDelegate(bool bSuccessful, FString Content);

    class USetUserStatsForGameNode* SetUserStatsForGameNode(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<FString> Name, TArray<int32> Value);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class USetItemPaymentRulesNode : public UBlueprintAsyncActionBase
{
    FSetItemPaymentRulesNodeCompleted Completed;
    void SetItemPaymentRulesDelegate(bool bSuccessful, FString Content);

    class USetItemPaymentRulesNode* SetItemPaymentRulesNode(FString Key, int32 AppID, int32 GameItemID, FUWorksAssociatedWorkshopFiles AssociatedWorkshopFiles, FUWorksPartnerAccounts PartnerAccounts, bool bMakeWorkshopFilesSubscribable, bool bValidateOnly);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

class UGetFinalizedContributorsNode : public UBlueprintAsyncActionBase
{
    FGetFinalizedContributorsNodeCompleted Completed;
    void GetFinalizedContributorsDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetFinalizedContributorsNode* GetFinalizedContributorsNode(FString Key, int32 AppID, int32 GameItemID);
};

class UGetItemDailyRevenueNode : public UBlueprintAsyncActionBase
{
    FGetItemDailyRevenueNodeCompleted Completed;
    void GetItemDailyRevenueDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetItemDailyRevenueNode* GetItemDailyRevenueNode(FString Key, int32 AppID, FString ItemId, int32 DateStart, int32 DateEnd);
};

class UPopulateItemDescriptionsNode : public UBlueprintAsyncActionBase
{
    FPopulateItemDescriptionsNodeCompleted Completed;
    void PopulateItemDescriptionsDelegate(bool bSuccessful, FString Content);

    class UPopulateItemDescriptionsNode* PopulateItemDescriptionsNode(FString Key, int32 AppID, FUWorksLanguages Languages);
    void OnRequestCompleted(bool bSuccessful, FString Content);
};

struct FUWorksAnnexWebApps
{
};

struct FUWorksAnnexWebBroadcast
{
};

struct FUWorksAnnexWebCheatReporting
{
};

struct FUWorksAnnexWebCommunity
{
};

struct FUWorksAnnexWebEcon
{
};

struct FUWorksAnnexWebEconMarket
{
};

struct FUWorksAnnexWebEconomy
{
};

struct FUWorksAnnexWebGameInventory
{
};

struct FUWorksAnnexWebGameNotifications
{
};

struct FUWorksAnnexWebGameServers
{
};

struct FUWorksAnnexWebGameServerStats
{
};

struct FUWorksAnnexWebInventory
{
};

struct FUWorksAnnexWebLeaderboards
{
};

struct FUWorksAnnexWebMicroTxn
{
};

struct FUWorksAnnexWebNews
{
};

struct FUWorksAnnexWebPlayer
{
};

struct FUWorksAnnexWebPublishedFile
{
};

struct FUWorksAnnexWebPublishedItemSearch
{
};

struct FUWorksAnnexWebPublishedItemVoting
{
};

struct FUWorksAnnexWebRemoteStorage
{
};

struct FUWorksAnnexWebUser
{
};

struct FUWorksAnnexWebUserAuth
{
};

struct FUWorksAnnexWebUserStats
{
};

struct FUWorksAnnexWebWorkshop
{
};

#endif
