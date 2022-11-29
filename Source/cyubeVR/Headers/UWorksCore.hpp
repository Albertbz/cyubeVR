#ifndef UE4SS_SDK_UWorksCore_HPP
#define UE4SS_SDK_UWorksCore_HPP

#include "UWorksCore_enums.hpp"

class UUWorksInterfaceCore : public UUWorksInterface
{
};

class UUWorksRequestCore : public UUWorksRequest
{
};

class UUWorksInterfaceCoreAppList : public UUWorksInterfaceCore
{
    FUWorksInterfaceCoreAppListSteamAppInstalled SteamAppInstalled;
    void SteamAppInstalledDelegate(int32 AppID);
    FUWorksInterfaceCoreAppListSteamAppUninstalled SteamAppUninstalled;
    void SteamAppUninstalledDelegate(int32 AppID);

    int32 GetNumInstalledApps();
    int32 GetInstalledApps(TArray<int32>& AppIDs, int32 MaxAppIDs);
    int32 GetAppName(int32 AppID, FString& Name, int32 NameMaxLength);
    class UUWorksInterfaceCoreAppList* GetAppList();
    int32 GetAppInstallDir(int32 AppID, FString& Directory, int32 DirectoryMaxLength);
    int32 GetAppBuildId(int32 AppID);
};

class UUWorksInterfaceCoreApps : public UUWorksInterfaceCore
{
    FUWorksInterfaceCoreAppsDlcInstalled DlcInstalled;
    void DlcInstalledDelegate(int32 AppID);
    FUWorksInterfaceCoreAppsNewUrlLaunchParameters NewUrlLaunchParameters;
    void NewUrlLaunchParametersDelegate();

    void UninstallDLC(int32 AppID);
    bool MarkContentCorrupt(bool bMissingFilesOnly);
    void InstallDLC(int32 AppID);
    FString GetLaunchQueryParam(FString Key);
    int32 GetInstalledDepots(int32 AppID, TArray<int32>& Depots, int32 MaxDepots);
    void GetFileDetailsMinimal(const FGetFileDetailsMinimalCompleted& Completed, FString Filename);
    class UUWorksRequestCoreGetFileDetails* GetFileDetails();
    int32 GetEarliestPurchaseUnixTime(int32 AppID);
    bool GetDlcDownloadProgress(int32 AppID, int32& BytesDownloaded, int32& bytesTotal);
    int32 GetDLCCount();
    FString GetCurrentGameLanguage();
    bool GetCurrentBetaName(FString& Name, int32 NameMaxLength);
    FString GetAvailableGameLanguages();
    class UUWorksInterfaceCoreApps* GetApps();
    FUWorksSteamID GetAppOwner();
    int32 GetAppInstallDir(int32 AppID, FString& Path, int32 PathMaxLength);
    int32 GetAppBuildId();
    bool BIsVACBanned();
    bool BIsSubscribedFromFreeWeekend();
    bool BIsSubscribedApp(int32 AppID);
    bool BIsSubscribed();
    bool BIsLowViolence();
    bool BIsDlcInstalled(int32 AppID);
    bool BIsCybercafe();
    bool BIsAppInstalled(int32 AppID);
    bool BGetDLCDataByIndex(int32 DLC, int32& AppID, bool& bAvailable, FString& Name, int32 NameMaxLength);
};

struct FUWorksControllerHandle
{
};

struct FUWorksControllerAnalogActionHandle
{
};

struct FUWorksControllerMotionData
{
    float RotQuatX;
    float RotQuatY;
    float RotQuatZ;
    float RotQuatW;
    float PosAccelX;
    float PosAccelY;
    float PosAccelZ;
    float RotVelX;
    float RotVelY;
    float RotVelZ;

};

struct FUWorksControllerActionSetHandle
{
};

struct FUWorksControllerDigitalActionHandle
{
};

struct FUWorksControllerDigitalActionData
{
    bool bState;
    bool bActive;

};

struct FUWorksControllerAnalogActionData
{
    EUWorksControllerSourceMode Mode;
    float X;
    float Y;
    bool bActive;

};

class UUWorksInterfaceCoreController : public UUWorksInterfaceCore
{

    void TriggerVibration(FUWorksControllerHandle ControllerHandle, int32 LeftSpeed, int32 RightSpeed);
    void TriggerRepeatedHapticPulse(FUWorksControllerHandle ControllerHandle, EUWorksSteamControllerPad TargetPad, int32 DurationMicroSec, int32 OffMicroSec, int32 Repeat, int32 Flags);
    void TriggerHapticPulse(FUWorksControllerHandle ControllerHandle, EUWorksSteamControllerPad TargetPad, int32 DurationMicroSec);
    void StopAnalogActionMomentum(FUWorksControllerHandle ControllerHandle, FUWorksControllerAnalogActionHandle Action);
    bool Shutdown();
    bool ShowBindingPanel(FUWorksControllerHandle ControllerHandle);
    void SetLEDColor(FUWorksControllerHandle ControllerHandle, uint8 ColorR, uint8 ColorG, uint8 ColorB, TArray<EUWorksSteamControllerLEDFlag> Flags);
    void RunFrame();
    bool Init();
    FString GetStringForActionOrigin(EUWorksControllerActionOrigin Origin);
    FUWorksControllerMotionData GetMotionData(FUWorksControllerHandle ControllerHandle);
    FString GetGlyphForActionOrigin(EUWorksControllerActionOrigin Origin);
    int32 GetGamepadIndexForController(FUWorksControllerHandle ControllerHandle);
    int32 GetDigitalActionOrigins(FUWorksControllerHandle ControllerHandle, FUWorksControllerActionSetHandle ActionSetHandle, FUWorksControllerDigitalActionHandle DigitalActionHandle, TArray<EUWorksControllerActionOrigin>& OriginsOut);
    FUWorksControllerDigitalActionHandle GetDigitalActionHandle(FString ActionName);
    FUWorksControllerDigitalActionData GetDigitalActionData(FUWorksControllerHandle ControllerHandle, FUWorksControllerDigitalActionHandle DigitalActionHandle);
    FUWorksControllerActionSetHandle GetCurrentActionSet(FUWorksControllerHandle ControllerHandle);
    FUWorksControllerHandle GetControllerForGamepadIndex(int32 Index);
    class UUWorksInterfaceCoreController* GetController();
    int32 GetConnectedControllers(TArray<FUWorksControllerHandle>& HandlesOut);
    int32 GetAnalogActionOrigins(FUWorksControllerHandle ControllerHandle, FUWorksControllerActionSetHandle ActionSetHandle, FUWorksControllerAnalogActionHandle AnalogActionHandle, TArray<EUWorksControllerActionOrigin>& OriginsOut);
    FUWorksControllerAnalogActionHandle GetAnalogActionHandle(FString ActionName);
    FUWorksControllerAnalogActionData GetAnalogActionData(FUWorksControllerHandle ControllerHandle, FUWorksControllerAnalogActionHandle AnalogActionHandle);
    FUWorksControllerActionSetHandle GetActionSetHandle(FString ActionSetName);
    void ActivateActionSet(FUWorksControllerHandle ControllerHandle, FUWorksControllerActionSetHandle ActionSetHandle);
};

struct FUWorksFriendsGroupID
{
};

class UUWorksInterfaceCoreFriends : public UUWorksInterfaceCore
{
    FUWorksInterfaceCoreFriendsPersonaStateChange PersonaStateChange;
    void PersonaStateChangeDelegate(FUWorksSteamID SteamID, const TArray<EUWorksPersonaChange>& ChangeFlags);
    FUWorksInterfaceCoreFriendsGameOverlayActivated GameOverlayActivated;
    void GameOverlayActivatedDelegate(bool bActive);
    FUWorksInterfaceCoreFriendsGameServerChangeRequested GameServerChangeRequested;
    void GameServerChangeRequestedDelegate(FString Server, FString Password);
    FUWorksInterfaceCoreFriendsGameLobbyJoinRequested GameLobbyJoinRequested;
    void GameLobbyJoinRequestedDelegate(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDFriend);
    FUWorksInterfaceCoreFriendsAvatarImageLoaded AvatarImageLoaded;
    void AvatarImageLoadedDelegate(FUWorksSteamID SteamID, class UTexture2D* Image);
    FUWorksInterfaceCoreFriendsFriendRichPresenceUpdate FriendRichPresenceUpdate;
    void FriendRichPresenceUpdateDelegate(FUWorksSteamID SteamIDFriend, int32 AppID);
    FUWorksInterfaceCoreFriendsGameRichPresenceJoinRequested GameRichPresenceJoinRequested;
    void GameRichPresenceJoinRequestedDelegate(FUWorksSteamID SteamIDFriend, FString Connect);
    FUWorksInterfaceCoreFriendsGameConnectedClanChatMsg GameConnectedClanChatMsg;
    void GameConnectedClanChatMsgDelegate(FUWorksSteamID SteamIDClanChat, FUWorksSteamID SteamIDUser, int32 MessageID);
    FUWorksInterfaceCoreFriendsGameConnectedChatJoin GameConnectedChatJoin;
    void GameConnectedChatJoinDelegate(FUWorksSteamID SteamIDClanChat, FUWorksSteamID SteamIDUser);
    FUWorksInterfaceCoreFriendsGameConnectedChatLeave GameConnectedChatLeave;
    void GameConnectedChatLeaveDelegate(FUWorksSteamID SteamIDClanChat, FUWorksSteamID SteamIDUser, bool bKicked, bool bDropped);
    FUWorksInterfaceCoreFriendsGameConnectedFriendChatMsg GameConnectedFriendChatMsg;
    void GameConnectedFriendChatMsgDelegate(FUWorksSteamID SteamIDUser, int32 MessageID);

    bool SetRichPresence(FString Key, FString Value);
    void SetPlayedWith(FUWorksSteamID SteamIDUserPlayedWith);
    void SetPersonaNameMinimal(const FSetPersonaNameMinimalCompleted& Completed, FString Name);
    class UUWorksRequestCoreSetPersonaName* SetPersonaName();
    bool SetListenForFriendsMessages(bool bInterceptEnabled);
    void SetInGameVoiceSpeaking(FUWorksSteamID SteamIDUser, bool bSpeaking);
    bool SendClanChatMessage(FUWorksSteamID SteamIDClanChat, FString Text);
    bool RequestUserInformation(FUWorksSteamID SteamIDUser, bool bRequireNameOnly);
    void RequestFriendRichPresence(FUWorksSteamID SteamIDFriend);
    void RequestClanOfficerListMinimal(const FRequestClanOfficerListMinimalCompleted& Completed, FUWorksSteamID SteamID);
    class UUWorksRequestCoreRequestClanOfficerList* RequestClanOfficerList();
    bool ReplyToFriendMessage(FUWorksSteamID SteamIDFriend, FString MessageToSend);
    bool OpenClanChatWindowInSteam(FUWorksSteamID SteamIDClanChat);
    bool LeaveClanChatRoom(FUWorksSteamID SteamIDClan);
    void JoinClanChatRoomMinimal(const FJoinClanChatRoomMinimalCompleted& Completed, FUWorksSteamID SteamIDClan);
    class UUWorksRequestCoreJoinClanChatRoom* JoinClanChatRoom();
    bool IsUserInSource(FUWorksSteamID SteamIDUser, FUWorksSteamID SteamIDSource);
    void IsFollowingMinimal(const FIsFollowingMinimalCompleted& Completed, FUWorksSteamID SteamID);
    class UUWorksRequestCoreIsFollowing* IsFollowing();
    bool IsClanChatWindowOpenInSteam(FUWorksSteamID SteamIDClanChat);
    bool IsClanChatAdmin(FUWorksSteamID SteamIDClanChat, FUWorksSteamID SteamIDUser);
    bool InviteUserToGame(FUWorksSteamID SteamIDFriend, FString ConnectString);
    bool HasFriend(FUWorksSteamID SteamIDFriend, TArray<EUWorksFriendFlags> FriendFlags);
    TArray<EUWorksUserRestriction> GetUserRestrictions();
    class UTexture2D* GetSmallFriendAvatar(FUWorksSteamID SteamIDFriend);
    FString GetPlayerNickname(FUWorksSteamID SteamIDPlayer);
    EUWorksPersonaState GetPersonaState();
    FString GetPersonaName();
    class UTexture2D* GetMediumFriendAvatar(FUWorksSteamID SteamIDFriend);
    class UTexture2D* GetLargeFriendAvatar(FUWorksSteamID SteamIDFriend);
    int32 GetFriendSteamLevel(FUWorksSteamID SteamIDFriend);
    FString GetFriendsGroupName(FUWorksFriendsGroupID FriendsGroupID);
    void GetFriendsGroupMembersList(FUWorksFriendsGroupID FriendsGroupID, TArray<FUWorksSteamID>& SteamIDMembers, int32 MembersCount);
    int32 GetFriendsGroupMembersCount(FUWorksFriendsGroupID FriendsGroupID);
    FUWorksFriendsGroupID GetFriendsGroupIDByIndex(int32 FriendGroup);
    int32 GetFriendsGroupCount();
    class UUWorksInterfaceCoreFriends* GetFriends();
    int32 GetFriendRichPresenceKeyCount(FUWorksSteamID SteamIDFriend);
    FString GetFriendRichPresenceKeyByIndex(FUWorksSteamID SteamIDFriend, int32 Key);
    FString GetFriendRichPresence(FUWorksSteamID SteamIDFriend, FString Key);
    EUWorksFriendRelationship GetFriendRelationship(FUWorksSteamID SteamIDFriend);
    EUWorksPersonaState GetFriendPersonaState(FUWorksSteamID SteamIDFriend);
    FString GetFriendPersonaNameHistory(FUWorksSteamID SteamIDFriend, int32 PersonaName);
    FString GetFriendPersonaName(FUWorksSteamID SteamIDFriend);
    int32 GetFriendMessage(FUWorksSteamID SteamIDFriend, int32 MessageID, FString& Text, int32 TextMaxLength, EUWorksChatEntryType& ChatEntryType);
    bool GetFriendGamePlayed(FUWorksSteamID SteamIDFriend, FUWorksGameID& GameID, FString& GameIP, int32& ConnectionPort, int32& QueryPort, FUWorksSteamID& SteamIDLobby);
    FUWorksSteamID GetFriendFromSourceByIndex(FUWorksSteamID SteamIDSource, int32 Friend);
    int32 GetFriendCountFromSource(FUWorksSteamID SteamIDSource);
    int32 GetFriendCount(TArray<EUWorksFriendFlags> FriendFlags);
    int32 GetFriendCoplayTime(FUWorksSteamID SteamIDFriend);
    int32 GetFriendCoplayGame(FUWorksSteamID SteamIDFriend);
    FUWorksSteamID GetFriendByIndex(int32 Friend, TArray<EUWorksFriendFlags> FriendFlags);
    void GetFollowerCountMinimal(const FGetFollowerCountMinimalCompleted& Completed, FUWorksSteamID SteamID);
    class UUWorksRequestCoreGetFollowerCount* GetFollowerCount();
    int32 GetCoplayFriendCount();
    FUWorksSteamID GetCoplayFriend(int32 CoplayFriend);
    FString GetClanTag(FUWorksSteamID SteamIDClan);
    FUWorksSteamID GetClanOwner(FUWorksSteamID SteamIDClan);
    int32 GetClanOfficerCount(FUWorksSteamID SteamIDClan);
    FUWorksSteamID GetClanOfficerByIndex(FUWorksSteamID SteamIDClan, int32 Officer);
    FString GetClanName(FUWorksSteamID SteamIDClan);
    int32 GetClanCount();
    int32 GetClanChatMessage(FUWorksSteamID SteamIDClanChat, int32 MessageID, FString& Text, int32 TextMax, EUWorksChatEntryType& ChatEntryType, FUWorksSteamID& SteamIDChatter);
    int32 GetClanChatMemberCount(FUWorksSteamID SteamIDClan);
    FUWorksSteamID GetClanByIndex(int32 Clan);
    bool GetClanActivityCounts(FUWorksSteamID SteamIDClan, int32& Online, int32& InGame, int32& Chatting);
    FUWorksSteamID GetChatMemberByIndex(FUWorksSteamID SteamIDClan, int32 User);
    void EnumerateFollowingListMinimal(const FEnumerateFollowingListMinimalCompleted& Completed, int32 StartIndex);
    class UUWorksRequestCoreEnumerateFollowingList* EnumerateFollowingList();
    void DownloadClanActivityCountsMinimal(const FDownloadClanActivityCountsMinimalCompleted& Completed, TArray<FUWorksSteamID> SteamIDClans);
    class UUWorksRequestCoreDownloadClanActivityCounts* DownloadClanActivityCounts();
    bool CloseClanChatWindowInSteam(FUWorksSteamID SteamIDClanChat);
    void ClearRichPresence();
    void ActivateGameOverlayToWebPage(FString URL);
    void ActivateGameOverlayToUser(EUWorksOverlaySpecific Dialog, FUWorksSteamID SteamID);
    void ActivateGameOverlayToStore(int32 AppID, EUWorksOverlayToStoreFlag Flag);
    void ActivateGameOverlayInviteDialog(FUWorksSteamID SteamIDLobby);
    void ActivateGameOverlay(EUWorksOverlayGeneric Dialog);
};

struct FUWorksTicketHandle
{
};

class UUWorksInterfaceCoreGameServer : public UUWorksInterfaceCore
{
    FUWorksInterfaceCoreGameServerGSPolicyResponse GSPolicyResponse;
    void GSPolicyResponseDelegate(int32 Secure);
    FUWorksInterfaceCoreGameServerGSClientGroupStatus GSClientGroupStatus;
    void GSClientGroupStatusDelegate(FUWorksSteamID SteamIDUser, FUWorksSteamID SteamIDGroup, bool bMember, bool bOfficer);
    FUWorksInterfaceCoreGameServerGSValidateAuthTicketResponse GSValidateAuthTicketResponse;
    void GSValidateAuthTicketResponseDelegate(FUWorksSteamID SteamID, EUWorksAuthSessionResponse AuthSessionResponse, FUWorksSteamID OwnerSteamID);

    bool WasRestartRequested();
    EUWorksUserHasLicenseForAppResult UserHasLicenseForApp(FUWorksSteamID SteamID, int32 AppID);
    void SetServerName(FString ServerName);
    void SetRegion(FString Region);
    void SetPasswordProtected(bool bPasswordProtected);
    void SetMaxPlayerCount(int32 PlayersMax);
    void SetMapName(FString MapName);
    void SetKeyValue(FString Key, FString Value);
    void SetHeartbeatInterval(int32 HeartbeatInterval);
    void SetGameTags(FString GameTags);
    void SetGameData(FString GameData);
    void SetBotPlayerCount(int32 BotPlayers);
    bool RequestUserGroupStatus(FUWorksSteamID SteamIDUser, FUWorksSteamID SteamIDGroup);
    FUWorksSteamID GetSteamID();
    class UUWorksInterfaceCoreGameServer* GetGameServer();
    FUWorksTicketHandle GetAuthSessionTicket(TArray<uint8>& Ticket);
    void ForceHeartbeat();
    void EndAuthSession(FUWorksSteamID SteamID);
    void EnableHeartbeats(bool bActive);
    void ComputeNewPlayerCompatibilityMinimal(const FComputeNewPlayerCompatibilityMinimalCompleted& Completed, FUWorksSteamID SteamIDNewPlayer);
    class UUWorksRequestCoreComputeNewPlayerCompatibility* ComputeNewPlayerCompatibility();
    void ClearAllKeyValues();
    void CancelAuthTicket(FUWorksTicketHandle TicketHandle);
    bool BSecure();
    bool BLoggedOn();
    EUWorksBeginAuthSessionResult BeginAuthSession(TArray<uint8> Ticket, FUWorksSteamID SteamID);
    void AssociateWithClanMinimal(const FAssociateWithClanMinimalCompleted& Completed, FUWorksSteamID SteamIDClan);
    class UUWorksRequestCoreAssociateWithClan* AssociateWithClan();
};

class UUWorksInterfaceCoreGameServerStats : public UUWorksInterfaceCore
{
    FUWorksInterfaceCoreGameServerStatsGSStatsUnloaded GSStatsUnloaded;
    void GSStatsUnloadedDelegate(FUWorksSteamID SteamIDUser);

    bool UpdateUserAvgRateStat(FUWorksSteamID SteamIDUser, FString Name, float CountThisSession, float SessionLength);
    void StoreUserStatsMinimal(const FStoreUserStatsMinimalCompleted& Completed, FUWorksSteamID SteamIDUser);
    class UUWorksRequestCoreStoreUserStats* StoreUserStats();
    bool SetUserStatFromInteger(FUWorksSteamID SteamIDUser, FString Name, int32 Data);
    bool SetUserStatFromFloat(FUWorksSteamID SteamIDUser, FString Name, float Data);
    bool SetUserAchievement(FUWorksSteamID SteamIDUser, FString Name);
    void RequestUserStatsMinimal(const FRequestUserStatsMinimalCompleted& Completed, FUWorksSteamID SteamIDUser);
    class UUWorksRequestCoreRequestUserStatsGS* RequestUserStats();
    bool GetUserStatAsInteger(FUWorksSteamID SteamIDUser, FString Name, int32& Data);
    bool GetUserStatAsFloat(FUWorksSteamID SteamIDUser, FString Name, float& Data);
    bool GetUserAchievement(FUWorksSteamID SteamIDUser, FString Name, bool& bAchieved);
    class UUWorksInterfaceCoreGameServerStats* GetGameServerStats();
    bool ClearUserAchievement(FUWorksSteamID SteamIDUser, FString Name);
};

struct FUWorksSteamInventoryResult
{
};

struct FUWorksSteamItemDetails
{
    FUWorksSteamItemInstanceID InstanceID;
    FUWorksSteamItemDef Definition;
    int32 Quantity;
    TArray<EUWorksSteamItemFlags> Flags;

};

class UUWorksInterfaceCoreInventory : public UUWorksInterfaceCore
{
    FUWorksInterfaceCoreInventorySteamInventoryResultReady SteamInventoryResultReady;
    void SteamInventoryResultReadyDelegate(FUWorksSteamInventoryResult Handle, EUWorksResult Result);
    FUWorksInterfaceCoreInventorySteamInventoryFullUpdate SteamInventoryFullUpdate;
    void SteamInventoryFullUpdateDelegate(FUWorksSteamInventoryResult Handle);
    FUWorksInterfaceCoreInventorySteamInventoryDefinitionUpdate SteamInventoryDefinitionUpdate;
    void SteamInventoryDefinitionUpdateDelegate();

    bool TriggerItemDrop(FUWorksSteamInventoryResult& Handle, FUWorksSteamItemDef ItemDefinition);
    bool TransferItemQuantity(FUWorksSteamInventoryResult& Handle, FUWorksSteamItemInstanceID ItemSourceInstanceID, int32 ItemSourceQuantity, FUWorksSteamItemInstanceID ItemDestinationInstanceID);
    bool TradeItems(FUWorksSteamInventoryResult& Handle, FUWorksSteamID SteamIDTradePartner, TArray<FUWorksSteamItemInstanceID> ItemsGiven, TArray<int32> ItemsGivenQuantities, TArray<FUWorksSteamItemInstanceID> ItemsReceived, TArray<int32> ItemsReceivedQuantities);
    bool SerializeResult(FUWorksSteamInventoryResult Handle, TArray<uint8>& Buffer);
    void RequestEligiblePromoItemDefinitionsIDsMinimal(const FRequestEligiblePromoItemDefinitionsIDsMinimalCompleted& Completed, FUWorksSteamID SteamID);
    class UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs* RequestEligiblePromoItemDefinitionsIDs();
    bool LoadItemDefinitions();
    bool GrantPromoItems(FUWorksSteamInventoryResult& Handle);
    int32 GetResultTimestamp(FUWorksSteamInventoryResult Handle);
    EUWorksResult GetResultStatus(FUWorksSteamInventoryResult Handle);
    bool GetResultItems(FUWorksSteamInventoryResult Handle, TArray<FUWorksSteamItemDetails>& items);
    bool GetItemsByID(FUWorksSteamInventoryResult& Handle, TArray<FUWorksSteamItemInstanceID> InstanceIDs);
    bool GetItemDefinitionPropertyValue(FUWorksSteamItemDef ItemDefinition, FString PropertyName, FString& PropertyValue);
    bool GetItemDefinitionPropertiesNames(FUWorksSteamItemDef ItemDefinition, TArray<FString>& PropertiesNames);
    bool GetItemDefinitionIDs(TArray<FUWorksSteamItemDef>& ItemDefinitions);
    class UUWorksInterfaceCoreInventory* GetInventory();
    bool GetEligiblePromoItemDefinitionIDs(FUWorksSteamID SteamID, TArray<FUWorksSteamItemDef>& ItemDefinitions);
    bool GetAllItems(FUWorksSteamInventoryResult& Handle);
    bool GenerateItems(FUWorksSteamInventoryResult& Handle, TArray<FUWorksSteamItemDef> ItemDefinitions, TArray<int32> ItemQuantities);
    bool ExchangeItems(FUWorksSteamInventoryResult& Handle, TArray<FUWorksSteamItemDef> ItemsGenerated, TArray<int32> ItemsGeneratedQuantities, TArray<FUWorksSteamItemInstanceID> ItemsDestroyed, TArray<int32> ItemsDestroyedQuantities);
    void DestroyResult(FUWorksSteamInventoryResult Handle);
    bool DeserializeResult(FUWorksSteamInventoryResult& Handle, TArray<uint8> Buffer, bool bReservedMustBeFalse);
    bool ConsumeItem(FUWorksSteamInventoryResult& Handle, FUWorksSteamItemInstanceID ItemInstanceID, int32 ItemQuantity);
    bool CheckResultSteamID(FUWorksSteamInventoryResult Handle, FUWorksSteamID SteamID);
    bool AddPromoItems(FUWorksSteamInventoryResult& Handle, TArray<FUWorksSteamItemDef> ItemDefinitions);
    bool AddPromoItem(FUWorksSteamInventoryResult& Handle, FUWorksSteamItemDef ItemDefinition);
};

class UUWorksInterfaceCoreMatchmaking : public UUWorksInterfaceCore
{
    FUWorksInterfaceCoreMatchmakingFavoritesListChanged FavoritesListChanged;
    void FavoritesListChangedDelegate(FString IP, int32 QueryPort, int32 ConnectionPort, int32 AppID, const TArray<EUWorksFavoriteFlags>& Flags, bool bAdd, FUWorksSteamID SteamID);
    FUWorksInterfaceCoreMatchmakingLobbyInvite LobbyInvite;
    void LobbyInviteDelegate(FUWorksSteamID SteamIDUser, FUWorksSteamID SteamIDLobby, FUWorksGameID GameID);
    FUWorksInterfaceCoreMatchmakingLobbyDataUpdate LobbyDataUpdate;
    void LobbyDataUpdateDelegate(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDMember, bool bSuccess);
    FUWorksInterfaceCoreMatchmakingLobbyEnter LobbyEnter;
    void LobbyEnterDelegate(FUWorksSteamID SteamIDLobby, bool bLocked, EUWorksChatRoomEnterResponse ChatRoomEnterResponse);
    FUWorksInterfaceCoreMatchmakingLobbyChatUpdate LobbyChatUpdate;
    void LobbyChatUpdateDelegate(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDUserChanged, FUWorksSteamID SteamIDMakingChange, const TArray<EUWorksChatMemberStateChange>& ChatMemberStateChange);
    FUWorksInterfaceCoreMatchmakingLobbyChatMsg LobbyChatMsg;
    void LobbyChatMsgDelegate(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDUser, EUWorksChatEntryType ChatEntryType, int32 ChatID);
    FUWorksInterfaceCoreMatchmakingLobbyGameCreated LobbyGameCreated;
    void LobbyGameCreatedDelegate(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDGameServer, FString IP, int32 Port);
    FUWorksInterfaceCoreMatchmakingLobbyKicked LobbyKicked;
    void LobbyKickedDelegate(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDAdmin, bool bKickedDueToDisconnect);
    FUWorksInterfaceCoreMatchmakingFavoritesListAccountsUpdated FavoritesListAccountsUpdated;
    void FavoritesListAccountsUpdatedDelegate(EUWorksResult Result);

    bool SetLobbyType(FUWorksSteamID SteamIDLobby, EUWorksLobbyType LobbyType);
    bool SetLobbyOwner(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDNewOwner);
    bool SetLobbyMemberLimit(FUWorksSteamID SteamIDLobby, int32 MaxMembers);
    void SetLobbyMemberData(FUWorksSteamID SteamIDLobby, FString Key, FString Value);
    bool SetLobbyJoinable(FUWorksSteamID SteamIDLobby, bool bLobbyJoinable);
    void SetLobbyGameServer(FUWorksSteamID SteamIDLobby, FString GameServerIP, int32 GameServerPort, FUWorksSteamID SteamIDGameServer);
    bool SetLobbyData(FUWorksSteamID SteamIDLobby, FString Key, FString Value);
    bool SetLinkedLobby(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDLobbyDependent);
    bool SendLobbyChatMsg(FUWorksSteamID SteamIDLobby, FString Message);
    void RequestLobbyListMinimal(const FRequestLobbyListMinimalCompleted& Completed);
    class UUWorksRequestCoreRequestLobbyList* RequestLobbyList();
    bool RequestLobbyData(FUWorksSteamID SteamIDLobby);
    bool RemoveFavoriteGame(int32 AppID, FString IP, int32 ConnectionPort, int32 QueryPort, TArray<EUWorksFavoriteFlags> Flags);
    void LeaveLobby(FUWorksSteamID SteamIDLobby);
    void JoinLobbyMinimal(const FJoinLobbyMinimalCompleted& Completed, FUWorksSteamID SteamIDLobby);
    class UUWorksRequestCoreJoinLobby* JoinLobby();
    bool InviteUserToLobby(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDInvitee);
    int32 GetNumLobbyMembers(FUWorksSteamID SteamIDLobby);
    class UUWorksInterfaceCoreMatchmaking* GetMatchmaking();
    FUWorksSteamID GetLobbyOwner(FUWorksSteamID SteamIDLobby);
    int32 GetLobbyMemberLimit(FUWorksSteamID SteamIDLobby);
    FString GetLobbyMemberData(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDUser, FString Key);
    FUWorksSteamID GetLobbyMemberByIndex(FUWorksSteamID SteamIDLobby, int32 Member);
    bool GetLobbyGameServer(FUWorksSteamID SteamIDLobby, FString& GameServerIP, int32& GameServerPort, FUWorksSteamID& SteamIDGameServer);
    int32 GetLobbyDataCount(FUWorksSteamID SteamIDLobby);
    bool GetLobbyDataByIndex(FUWorksSteamID SteamIDLobby, int32 LobbyData, FString& Key, int32 KeyMaxLength, FString& Value, int32 ValueMaxLength);
    FString GetLobbyData(FUWorksSteamID SteamIDLobby, FString Key);
    int32 GetLobbyChatEntry(FUWorksSteamID SteamIDLobby, int32 MessageID, FUWorksSteamID& SteamIDUser, FString& Message, int32 MessageMaxLength, EUWorksChatEntryType& ChatEntryType);
    FUWorksSteamID GetLobbyByIndex(int32 Lobby);
    int32 GetFavoriteGameCount();
    bool GetFavoriteGame(int32 Game, int32& AppID, FString& IP, int32& ConnectionPort, int32& QueryPort, TArray<EUWorksFavoriteFlags>& Flags, int32& TimeLastPlayedOnServer);
    bool DeleteLobbyData(FUWorksSteamID SteamIDLobby, FString Key);
    void CreateLobbyMinimal(const FCreateLobbyMinimalCompleted& Completed, EUWorksLobbyType LobbyType, int32 MaxMembers);
    class UUWorksRequestCoreCreateLobby* CreateLobby();
    void AddRequestLobbyListStringFilter(FString KeyToMatch, FString ValueToMatch, EUWorksLobbyComparison ComparisonType);
    void AddRequestLobbyListResultCountFilter(int32 MaxResults);
    void AddRequestLobbyListNumericalFilter(FString KeyToMatch, int32 ValueToMatch, EUWorksLobbyComparison ComparisonType);
    void AddRequestLobbyListNearValueFilter(FString KeyToMatch, int32 ValueToBeCloseTo);
    void AddRequestLobbyListFilterSlotsAvailable(int32 SlotsAvailable);
    void AddRequestLobbyListDistanceFilter(EUWorksLobbyDistanceFilter LobbyDistanceFilter);
    void AddRequestLobbyListCompatibleMembersFilter(FUWorksSteamID SteamIDLobby);
    int32 AddFavoriteGame(int32 AppID, FString IP, int32 ConnectionPort, int32 QueryPort, TArray<EUWorksFavoriteFlags> Flags, int32 TimeLastPlayedOnServer);
};

class UUWorksInterfaceCoreMatchmakingServers : public UUWorksInterfaceCore
{

    void ServerListMinimal(const FServerListMinimalCompleted& Completed, const FServerListMinimalUpdated& Updated, int32 AppID, EUWorksServerQueryType queryType);
    class UUWorksRequestCoreServerList* ServerList();
    void RulesMinimal(const FRulesMinimalCompleted& Completed, const FRulesMinimalUpdated& Updated, FString IP, int32 Port);
    class UUWorksRequestCoreRules* Rules();
    void PlayersMinimal(const FPlayersMinimalCompleted& Completed, const FPlayersMinimalUpdated& Updated, FString IP, int32 Port);
    class UUWorksRequestCorePlayers* Players();
    void PingMinimal(const FPingMinimalCompleted& Completed, FString IP, int32 Port);
    class UUWorksRequestCorePing* Ping();
    class UUWorksInterfaceCoreMatchmakingServers* GetMatchmakingServers();
};

class UUWorksInterfaceCoreMusic : public UUWorksInterfaceCore
{
    FUWorksInterfaceCoreMusicPlaybackStatusHasChanged PlaybackStatusHasChanged;
    void PlaybackStatusHasChangedDelegate();
    FUWorksInterfaceCoreMusicVolumeHasChanged VolumeHasChanged;
    void VolumeHasChangedDelegate(float NewVolume);

    void SetVolume(float Volume);
    void PlayPrevious();
    void PlayNext();
    void Play();
    void Pause();
    float GetVolume();
    EUWorksAudioPlaybackStatus GetPlaybackStatus();
    class UUWorksInterfaceCoreMusic* GetMusic();
    bool BIsPlaying();
    bool BIsEnabled();
};

struct FUWorksP2PSessionState
{
    bool bConnectionActive;
    bool bConnecting;
    EUWorksP2PSessionError P2PSessionError;
    bool bUsingRelay;
    int32 BytesQueuedForSend;
    int32 PacketsQueuedForSend;

};

class UUWorksInterfaceCoreNetworking : public UUWorksInterfaceCore
{
    FUWorksInterfaceCoreNetworkingP2PSessionRequest P2PSessionRequest;
    void P2PSessionRequestDelegate(FUWorksSteamID SteamIDRemote);
    FUWorksInterfaceCoreNetworkingP2PSessionConnectFail P2PSessionConnectFail;
    void P2PSessionConnectFailDelegate(FUWorksSteamID SteamIDRemote, EUWorksP2PSessionError P2PSessionError);

    bool SendP2PPacket(FUWorksSteamID SteamIDRemote, TArray<uint8> Data, EUWorksP2PSend P2PSendType, int32 Channel);
    bool SendP2PMessage(FUWorksSteamID SteamIDRemote, FString Data, EUWorksP2PSend P2PSendType, int32 Channel);
    bool ReadP2PPacket(TArray<uint8>& Data, int32 DataMax, FUWorksSteamID& SteamIDRemote, int32 Channel);
    bool ReadP2PMessage(FString& Data, int32 DataMax, FUWorksSteamID& SteamIDRemote, int32 Channel);
    bool IsP2PPacketAvailable(int32& DataSize, int32 Channel);
    bool GetP2PSessionState(FUWorksSteamID SteamIDRemote, FUWorksP2PSessionState& ConnectionState);
    class UUWorksInterfaceCoreNetworking* GetNetworking();
    bool CloseP2PSessionWithUser(FUWorksSteamID SteamIDRemote);
    bool CloseP2PChannelWithUser(FUWorksSteamID SteamIDRemote, int32 Channel);
    bool AllowP2PPacketRelay(bool bAllow);
    bool AcceptP2PSessionWithUser(FUWorksSteamID SteamIDRemote);
};

struct FUWorksUGCFileWriteStreamHandle
{
};

class UUWorksInterfaceCoreRemoteStorage : public UUWorksInterfaceCore
{

    bool SetSyncPlatforms(FString File, EUWorksRemoteStoragePlatform RemoteStoragePlatform);
    void SetCloudEnabledForApp(bool bEnabled);
    bool IsCloudEnabledForApp();
    bool IsCloudEnabledForAccount();
    EUWorksRemoteStoragePlatform GetSyncPlatforms(FString File);
    class UUWorksInterfaceCoreRemoteStorage* GetRemoteStorage();
    bool GetQuota(FString& TotalBytes, FString& AvailableBytes);
    int32 GetFileTimestamp(FString File);
    int32 GetFileSize(FString File);
    FString GetFileNameAndSize(int32 File, int32& fileSizeInBytes);
    int32 GetFileCount();
    bool FileWriteStreamWriteChunk(FUWorksUGCFileWriteStreamHandle Handle, TArray<uint8> Buffer);
    FUWorksUGCFileWriteStreamHandle FileWriteStreamOpen(FString File);
    bool FileWriteStreamClose(FUWorksUGCFileWriteStreamHandle Handle);
    bool FileWriteStreamCancel(FUWorksUGCFileWriteStreamHandle Handle);
    void FileWriteAsyncMinimal(const FFileWriteAsyncMinimalCompleted& Completed, FString File, TArray<uint8> Buffer);
    class UUWorksRequestCoreFileWriteAsync* FileWriteAsync();
    bool FileWrite(FString File, TArray<uint8> Buffer);
    void FileReadAsyncMinimal(const FFileReadAsyncMinimalCompleted& Completed, FString File, int32 Offset, int32 BytesToRead);
    class UUWorksRequestCoreFileReadAsync* FileReadAsync();
    int32 FileRead(FString File, TArray<uint8>& Buffer, int32 BufferSize);
    bool FilePersisted(FString File);
    bool FileForget(FString File);
    bool FileExists(FString File);
    bool FileDelete(FString File);
};

struct FUWorksScreenshotHandle
{
};

class UUWorksInterfaceCoreScreenshots : public UUWorksInterfaceCore
{
    FUWorksInterfaceCoreScreenshotsScreenshotReady ScreenshotReady;
    void ScreenshotReadyDelegate(FUWorksScreenshotHandle Handle, EUWorksResult Result);
    FUWorksInterfaceCoreScreenshotsScreenshotRequested ScreenshotRequested;
    void ScreenshotRequestedDelegate();

    FUWorksScreenshotHandle WriteScreenshot(class UTexture2D* Image);
    void TriggerScreenshot();
    bool TagUser(FUWorksScreenshotHandle Screenshot, FUWorksSteamID SteamID);
    bool TagPublishedFile(FUWorksScreenshotHandle Screenshot, FUWorksPublishedFileID PublishedFileID);
    bool SetLocation(FUWorksScreenshotHandle Screenshot, FString Location);
    bool IsScreenshotsHooked();
    void HookScreenshots(bool bHook);
    class UUWorksInterfaceCoreScreenshots* GetScreenshots();
    FUWorksScreenshotHandle AddVRScreenshotToLibrary(EUWorksVRScreenshotType Type, FString Filename, FString VRFileName);
    FUWorksScreenshotHandle AddScreenshotToLibrary(FString FileMame, FString ThumbnailFileName, int32 Width, int32 Height);
};

struct FUWorksUGCUpdateHandle
{
};

struct FUWorksUGCQueryHandle
{
};

struct FUWorksUGCHandle
{
};

struct FUWorksSteamUGCDetails
{
    FUWorksPublishedFileID PublishedFileID;
    EUWorksResult Result;
    EUWorksWorkshopFileType fileType;
    int32 CreatorAppID;
    int32 ConsumerAppID;
    FString Title;
    FString Description;
    FUWorksSteamID SteamIDOwner;
    int32 TimeCreated;
    int32 TimeUpdated;
    int32 TimeAddedToUserList;
    EUWorksRemoteStoragePublishedFileVisibility Visibility;
    bool bBanned;
    bool bAcceptedForUse;
    bool bTagsTruncated;
    TArray<FString> tags;
    FUWorksUGCHandle File;
    FUWorksUGCHandle PreviewFile;
    FString Filename;
    int32 fileSize;
    int32 PreviewFileSize;
    FString URL;
    int32 votesUp;
    int32 votesDown;
    float score;
    int32 numChildren;

};

class UUWorksInterfaceCoreUGC : public UUWorksInterfaceCore
{
    FUWorksInterfaceCoreUGCItemInstalled ItemInstalled;
    void ItemInstalledDelegate(int32 AppID, FUWorksPublishedFileID PublishedFileID);
    FUWorksInterfaceCoreUGCDownloadItemResult DownloadItemResult;
    void DownloadItemResultDelegate(int32 AppID, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result);

    bool UpdateItemPreviewVideo(FUWorksUGCUpdateHandle Handle, int32 Index, FString PreviewVideo);
    bool UpdateItemPreviewFile(FUWorksUGCUpdateHandle Handle, int32 Index, FString PreviewFile);
    void UnsubscribeItemMinimal(const FUnsubscribeItemMinimalCompleted& Completed, FUWorksPublishedFileID PublishedFileID);
    class UUWorksRequestCoreUnsubscribeItem* UnsubscribeItem();
    void SuspendDownloads(bool bSuspend);
    void SubscribeItemMinimal(const FSubscribeItemMinimalCompleted& Completed, FUWorksPublishedFileID PublishedFileID);
    class UUWorksRequestCoreSubscribeItem* SubscribeItem();
    void SubmitItemUpdateMinimal(const FSubmitItemUpdateMinimalCompleted& Completed, FUWorksUGCUpdateHandle UGCUpdateHandle, FString ChangeNote);
    class UUWorksRequestCoreSubmitItemUpdate* SubmitItemUpdate();
    void StopPlaytimeTrackingMinimal(const FStopPlaytimeTrackingMinimalCompleted& Completed, TArray<FUWorksPublishedFileID> PublishedFileIDs);
    void StopPlaytimeTrackingForAllItemsMinimal(const FStopPlaytimeTrackingForAllItemsMinimalCompleted& Completed);
    class UUWorksRequestCoreStopPlaytimeTrackingForAllItems* StopPlaytimeTrackingForAllItems();
    class UUWorksRequestCoreStopPlaytimeTracking* StopPlaytimeTracking();
    void StartPlaytimeTrackingMinimal(const FStartPlaytimeTrackingMinimalCompleted& Completed, TArray<FUWorksPublishedFileID> PublishedFileID);
    class UUWorksRequestCoreStartPlaytimeTracking* StartPlaytimeTracking();
    FUWorksUGCUpdateHandle StartItemUpdate(int32 ConsumerAppID, FUWorksPublishedFileID PublishedFileID);
    void SetUserItemVoteMinimal(const FSetUserItemVoteMinimalCompleted& Completed, FUWorksPublishedFileID PublishedFileID, bool bVoteUp);
    class UUWorksRequestCoreSetUserItemVote* SetUserItemVote();
    bool SetSearchText(FUWorksUGCQueryHandle Handle, FString searchText);
    bool SetReturnTotalOnly(FUWorksUGCQueryHandle Handle, bool bReturnTotalOnly);
    bool SetReturnOnlyIDs(FUWorksUGCQueryHandle Handle, bool bReturnOnlyIDs);
    bool SetReturnMetadata(FUWorksUGCQueryHandle Handle, bool bReturnMetaData);
    bool SetReturnLongDescription(FUWorksUGCQueryHandle Handle, bool bReturnLongDescription);
    bool SetReturnKeyValueTags(FUWorksUGCQueryHandle Handle, bool bReturnKeyValueTags);
    bool SetReturnChildren(FUWorksUGCQueryHandle Handle, bool bReturnChildren);
    bool SetReturnAdditionalPreviews(FUWorksUGCQueryHandle Handle, bool bReturnAdditionalPreviews);
    bool SetRankedByTrendDays(FUWorksUGCQueryHandle Handle, int32 Days);
    bool SetMatchAnyTag(FUWorksUGCQueryHandle Handle, bool bMatchAnyTag);
    bool SetLanguage(FUWorksUGCQueryHandle Handle, FString Language);
    bool SetItemVisibility(FUWorksUGCUpdateHandle Handle, EUWorksRemoteStoragePublishedFileVisibility Visibility);
    bool SetItemUpdateLanguage(FUWorksUGCUpdateHandle Handle, FString Language);
    bool SetItemTitle(FUWorksUGCUpdateHandle Handle, FString Title);
    bool SetItemTags(FUWorksUGCUpdateHandle Handle, TArray<FString> tags);
    bool SetItemPreview(FUWorksUGCUpdateHandle Handle, FString PreviewFile);
    bool SetItemMetadata(FUWorksUGCUpdateHandle Handle, FString MetaData);
    bool SetItemDescription(FUWorksUGCUpdateHandle Handle, FString Description);
    bool SetItemContent(FUWorksUGCUpdateHandle Handle, FString ContentFolder);
    bool SetCloudFileNameFilter(FUWorksUGCQueryHandle Handle, FString MatchCloudFileName);
    bool SetAllowCachedResponse(FUWorksUGCQueryHandle Handle, int32 MaxAgeSeconds);
    void SendQueryUGCRequestMinimal(const FSendQueryUGCRequestMinimalCompleted& Completed, FUWorksUGCQueryHandle UGCQueryHandle);
    class UUWorksRequestCoreSendQueryUGCRequest* SendQueryUGCRequest();
    bool RemoveItemPreview(FUWorksUGCUpdateHandle Handle, int32 Index);
    bool RemoveItemKeyValueTags(FUWorksUGCUpdateHandle Handle, FString Key);
    void RemoveItemFromFavoritesMinimal(const FRemoveItemFromFavoritesMinimalCompleted& Completed, int32 AppID, FUWorksPublishedFileID PublishedFileID);
    class UUWorksRequestCoreRemoveItemFromFavorites* RemoveItemFromFavorites();
    bool ReleaseQueryUGCRequest(FUWorksUGCQueryHandle Handle);
    void GetUserItemVoteMinimal(const FGetUserItemVoteMinimalCompleted& Completed, FUWorksPublishedFileID PublishedFileID);
    class UUWorksRequestCoreGetUserItemVote* GetUserItemVote();
    class UUWorksInterfaceCoreUGC* GetUGC();
    int32 GetSubscribedItems(TArray<FUWorksPublishedFileID>& PublishedFileIDs, int32 MaxEntries);
    bool GetQueryUGCStatistic(FUWorksUGCQueryHandle Handle, int32 Index, EUWorksItemStatistic StatType, FString& StatValue);
    bool GetQueryUGCResult(FUWorksUGCQueryHandle Handle, int32 Index, FUWorksSteamUGCDetails& Details);
    bool GetQueryUGCPreviewURL(FUWorksUGCQueryHandle Handle, int32 Index, FString& URL, int32 URLMaxLength);
    int32 GetQueryUGCNumKeyValueTags(FUWorksUGCQueryHandle Handle, int32 Index);
    int32 GetQueryUGCNumAdditionalPreviews(FUWorksUGCQueryHandle Handle, int32 Index);
    bool GetQueryUGCMetadata(FUWorksUGCQueryHandle Handle, int32 Index, FString& MetaData, int32 MetadataMaxLength);
    bool GetQueryUGCKeyValueTag(FUWorksUGCQueryHandle Handle, int32 Index, int32 KeyValueTagIndex, FString& Key, int32 KeyMaxLength, FString& Value, int32 ValueMaxLength);
    bool GetQueryUGCChildren(FUWorksUGCQueryHandle Handle, int32 Index, TArray<FUWorksPublishedFileID>& PublishedFileIDs, int32 MaxEntries);
    bool GetQueryUGCAdditionalPreview(FUWorksUGCQueryHandle Handle, int32 Index, int32 PreviewIndex, FString& urlOrVideoId, int32 URLOrVideoIDMaxLength, FString& originalFileName, int32 OriginalFileNameMaxLength, EUWorksItemPreviewType& PreviewType);
    int32 GetNumSubscribedItems();
    EUWorksItemUpdateStatus GetItemUpdateProgress(FUWorksUGCUpdateHandle Handle, FString& BytesProcessed, FString& bytesTotal);
    int32 GetItemState(FUWorksPublishedFileID PublishedFileID);
    bool GetItemInstallInfo(FUWorksPublishedFileID PublishedFileID, FString& SizeOnDisk, FString& Path, int32 PathMaxLength, int32& Timestamp);
    bool GetItemDownloadInfo(FUWorksPublishedFileID PublishedFileID, FString& BytesDownloaded, FString& bytesTotal);
    bool DownloadItem(FUWorksPublishedFileID PublishedFileID, bool bHighPriority);
    FUWorksUGCQueryHandle CreateQueryUserUGCRequest(FUWorksSteamID SteamID, EUWorksUserUGCList ListType, EUWorksUGCMatchingUGCType MatchingUGCType, EUWorksUserUGCListSortOrder sortOrder, int32 CreatorAppID, int32 ConsumerAppID, int32 Page);
    FUWorksUGCQueryHandle CreateQueryUGCDetailsRequest(TArray<FUWorksPublishedFileID> PublishedFileIDs, int32 NumPublishedFileIDs);
    FUWorksUGCQueryHandle CreateQueryAllUGCRequest(EUWorksUGCQuery queryType, EUWorksUGCMatchingUGCType MatchingUGCTypeFileType, int32 CreatorAppID, int32 ConsumerAppID, int32 Page);
    void CreateItemMinimal(const FCreateItemMinimalCompleted& Completed, int32 ConsumerAppID, EUWorksWorkshopFileType fileType);
    class UUWorksRequestCoreCreateItem* CreateItem();
    bool BInitWorkshopForGameServer(int32 WorkshopDepotID, FString Folder);
    bool AddRequiredTag(FUWorksUGCQueryHandle Handle, FString TagName);
    bool AddRequiredKeyValueTag(FUWorksUGCQueryHandle Handle, FString Key, FString Value);
    void AddItemToFavoritesMinimal(const FAddItemToFavoritesMinimalCompleted& Completed, int32 AppID, FUWorksPublishedFileID PublishedFileID);
    class UUWorksRequestCoreAddItemToFavorites* AddItemToFavorites();
    bool AddItemPreviewVideo(FUWorksUGCUpdateHandle Handle, FString VideoID);
    bool AddItemPreviewFile(FUWorksUGCUpdateHandle Handle, FString PreviewFile, EUWorksItemPreviewType Type);
    bool AddItemKeyValueTag(FUWorksUGCUpdateHandle Handle, FString Key, FString Value);
    bool AddExcludedTag(FUWorksUGCQueryHandle Handle, FString TagName);
};

struct FUWorksSteamUser
{
};

class UUWorksInterfaceCoreUser : public UUWorksInterfaceCore
{
    FUWorksInterfaceCoreUserSteamServersConnected SteamServersConnected;
    void SteamServersConnectedDelegate();
    FUWorksInterfaceCoreUserSteamServerConnectFailure SteamServerConnectFailure;
    void SteamServerConnectFailureDelegate(EUWorksResult Result, bool bStillRetrying);
    FUWorksInterfaceCoreUserSteamServersDisconnected SteamServersDisconnected;
    void SteamServersDisconnectedDelegate(EUWorksResult Result);
    FUWorksInterfaceCoreUserClientGameServerDeny ClientGameServerDeny;
    void ClientGameServerDenyDelegate(int32 AppID, FString GameServerIP, int32 GameServerPort, bool BSecure, EUWorksDenyReason Reason);
    FUWorksInterfaceCoreUserIPCFailure IPCFailure;
    void IPCFailureDelegate(EUWorksFailureType FailureType);
    FUWorksInterfaceCoreUserLicensesUpdated LicensesUpdated;
    void LicensesUpdatedDelegate();
    FUWorksInterfaceCoreUserValidateAuthTicketResponse ValidateAuthTicketResponse;
    void ValidateAuthTicketResponseDelegate(FUWorksSteamID SteamID, EUWorksAuthSessionResponse AuthSessionResponse, FUWorksSteamID OwnerSteamID);
    FUWorksInterfaceCoreUserMicroTxnAuthorizationResponse MicroTxnAuthorizationResponse;
    void MicroTxnAuthorizationResponseDelegate(int32 AppID, FString OrderID, bool bAuthorized);
    FUWorksInterfaceCoreUserGetAuthSessionTicketResponse GetAuthSessionTicketResponse;
    void GetAuthSessionTicketResponseDelegate(FUWorksTicketHandle AuthTicket, EUWorksResult Result);
    FUWorksInterfaceCoreUserGameWebCallback GameWebCallback;
    void GameWebCallbackDelegate(FString URL);

    EUWorksUserHasLicenseForAppResult UserHasLicenseForApp(FUWorksSteamID SteamID, int32 AppID);
    void StopVoiceRecording();
    void StartVoiceRecording();
    void RequestStoreAuthURLMinimal(const FRequestStoreAuthURLMinimalCompleted& Completed, FString URL);
    class UUWorksRequestCoreRequestStoreAuthURL* RequestStoreAuthURL();
    void RequestEncryptedAppTicketMinimal(const FRequestEncryptedAppTicketMinimalCompleted& Completed, TArray<uint8> Buffer);
    class UUWorksRequestCoreRequestEncryptedAppTicket* RequestEncryptedAppTicket();
    class UAudioComponent* GetVoiceChannel(int32 Index);
    EUWorksVoiceResult GetVoice(TArray<uint8>& Data);
    class UUWorksInterfaceCoreUser* GetUser();
    FUWorksSteamID GetSteamID();
    int32 GetPlayerSteamLevel();
    FUWorksSteamUser GetHSteamUser();
    int32 GetGameBadgeLevel(int32 Series, bool bFoil);
    bool GetEncryptedAppTicket(TArray<uint8>& Ticket);
    FUWorksTicketHandle GetAuthSessionTicket(TArray<uint8>& Ticket);
    void EndAuthSession(FUWorksSteamID SteamID);
    EUWorksVoiceResult DecompressVoice(TArray<uint8> CompressedBuffer, TArray<uint8>& UncompressedBuffer);
    void CancelAuthTicket(FUWorksTicketHandle TicketHandle);
    bool BLoggedOn();
    bool BIsTwoFactorEnabled();
    bool BIsPhoneVerified();
    bool BIsPhoneRequiringVerification();
    bool BIsPhoneIdentifying();
    bool BIsBehindNAT();
    EUWorksBeginAuthSessionResult BeginAuthSession(TArray<uint8> Ticket, FUWorksSteamID SteamID);
    void AdvertiseGame(FUWorksSteamID SteamIDGameServer, FString ServerIP, int32 ServerPort);
    class UAudioComponent* AddBufferToVoiceChannel(TArray<uint8> Buffer, int32 Index);
};

struct FUWorksSteamLeaderboard
{
};

struct FUWorksSteamLeaderboardEntries
{
};

struct FUWorksLeaderboardEntry
{
    FUWorksSteamID SteamID;
    int32 GlobalRank;
    int32 score;
    int32 Details;
    FUWorksUGCHandle UGCHandle;

};

class UUWorksInterfaceCoreUserStats : public UUWorksInterfaceCore
{
    FUWorksInterfaceCoreUserStatsUserStatsReceived UserStatsReceived;
    void UserStatsReceivedDelegate(FUWorksGameID GameID, EUWorksResult Result, FUWorksSteamID SteamID);
    FUWorksInterfaceCoreUserStatsUserStatsStored UserStatsStored;
    void UserStatsStoredDelegate(FUWorksGameID GameID, EUWorksResult Result);
    FUWorksInterfaceCoreUserStatsUserAchievementStored UserAchievementStored;
    void UserAchievementStoredDelegate(FUWorksGameID GameID, bool bGroupAchievement, FString AchievementName, int32 CurrentProgress, int32 MaxProgress);
    FUWorksInterfaceCoreUserStatsUserStatsUnloaded UserStatsUnloaded;
    void UserStatsUnloadedDelegate(FUWorksSteamID SteamID);
    FUWorksInterfaceCoreUserStatsUserAchievementIconFetched UserAchievementIconFetched;
    void UserAchievementIconFetchedDelegate(FUWorksGameID GameID, FString AchievementName, bool bAchieved, class UTexture2D* Icon);

    void UploadLeaderboardScoreMinimal(const FUploadLeaderboardScoreMinimalCompleted& Completed, FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int32 score, TArray<int32> ScoreDetails);
    class UUWorksRequestCoreUploadLeaderboardScore* UploadLeaderboardScore();
    bool UpdateAvgRateStat(FString Name, float CountThisSession, float SessionLength);
    bool StoreStats();
    bool SetStatAsInteger(FString Name, int32 Data);
    bool SetStatAsFloat(FString Name, float Data);
    bool SetAchievement(FString Name);
    bool ResetAllStats(bool bAchievementsToo);
    void RequestUserStatsMinimal(const FRequestUserStatsMinimalCompleted& Completed, FUWorksSteamID SteamID);
    class UUWorksRequestCoreRequestUserStats* RequestUserStats();
    void RequestGlobalStatsMinimal(const FRequestGlobalStatsMinimalCompleted& Completed, int32 HistoryDays);
    class UUWorksRequestCoreRequestGlobalStats* RequestGlobalStats();
    void RequestGlobalAchievementPercentagesMinimal(const FRequestGlobalAchievementPercentagesMinimalCompleted& Completed);
    class UUWorksRequestCoreRequestGlobalAchievementPercentages* RequestGlobalAchievementPercentages();
    bool RequestCurrentStats();
    bool IndicateAchievementProgress(FString Name, int32 CurrentProgress, int32 MaxProgress);
    class UUWorksInterfaceCoreUserStats* GetUserStats();
    bool GetUserStatInteger(FUWorksSteamID SteamIDUser, FString Name, int32& Data);
    bool GetUserStatFloat(FUWorksSteamID SteamIDUser, FString Name, float& Data);
    bool GetUserAchievementAndUnlockTime(FUWorksSteamID SteamIDUser, FString Name, bool& bAchieved, int32& UnlockTime);
    bool GetUserAchievement(FUWorksSteamID SteamIDUser, FString Name, bool& bAchieved);
    bool GetStatAsInteger(FString Name, int32& Data);
    bool GetStatAsFloat(FString Name, float& Data);
    void GetNumberOfCurrentPlayersMinimal(const FGetNumberOfCurrentPlayersMinimalCompleted& Completed);
    class UUWorksRequestCoreGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayers();
    int32 GetNumAchievements();
    int32 GetNextMostAchievedAchievementInfo(int32 IteratorPrevious, FString& Name, int32 NameBufferLength, float& Percent, bool& bAchieved);
    int32 GetMostAchievedAchievementInfo(FString& Name, int32 NameBufferLength, float& Percent, bool& bAchieved);
    EUWorksLeaderboardSortMethod GetLeaderboardSortMethod(FUWorksSteamLeaderboard SteamLeaderboard);
    FString GetLeaderboardName(FUWorksSteamLeaderboard SteamLeaderboard);
    int32 GetLeaderboardEntryCount(FUWorksSteamLeaderboard SteamLeaderboard);
    EUWorksLeaderboardDisplayType GetLeaderboardDisplayType(FUWorksSteamLeaderboard SteamLeaderboard);
    int32 GetGlobalStatHistoryFromIntegers(FString StatName, TArray<FString>& Data, int32 HistoryDays);
    int32 GetGlobalStatHistoryFromFloats(FString StatName, TArray<FString>& Data, int32 HistoryDays);
    bool GetGlobalStatFromInteger(FString StatName, FString& Data);
    bool GetGlobalStatFromFloat(FString StatName, FString& Data);
    bool GetDownloadedLeaderboardEntry(FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 Index, FUWorksLeaderboardEntry& LeaderboardEntry, TArray<int32>& Details, int32 DetailsMax);
    FString GetAchievementName(int32 Achievement);
    class UTexture2D* GetAchievementIcon(FString Name);
    FString GetAchievementDisplayAttribute(FString Name, FString Key);
    bool GetAchievementAndUnlockTime(FString Name, bool& bAchieved, int32& UnlockTime);
    bool GetAchievementAchievedPercent(FString Name, float& Percent);
    bool GetAchievement(FString Name, bool& bAchieved);
    void FindOrCreateLeaderboardMinimal(const FFindOrCreateLeaderboardMinimalCompleted& Completed, FString LeaderboardName, EUWorksLeaderboardSortMethod LeaderboardSortMethod, EUWorksLeaderboardDisplayType LeaderboardDisplayType);
    class UUWorksRequestCoreFindOrCreateLeaderboard* FindOrCreateLeaderboard();
    void FindLeaderboardMinimal(const FFindLeaderboardMinimalCompleted& Completed, FString LeaderboardName);
    class UUWorksRequestCoreFindLeaderboard* FindLeaderboard();
    void DownloadLeaderboardEntriesMinimal(const FDownloadLeaderboardEntriesMinimalCompleted& Completed, FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardDataRequest LeaderboardDataRequest, int32 RangeStart, int32 RangeEnd);
    void DownloadLeaderboardEntriesForUsersMinimal(const FDownloadLeaderboardEntriesForUsersMinimalCompleted& Completed, FUWorksSteamLeaderboard SteamLeaderboard, TArray<FUWorksSteamID> Users);
    class UUWorksRequestCoreDownloadLeaderboardEntriesForUsers* DownloadLeaderboardEntriesForUsers();
    class UUWorksRequestCoreDownloadLeaderboardEntries* DownloadLeaderboardEntries();
    bool ClearAchievement(FString Name);
    void AttachLeaderboardUGCMinimal(const FAttachLeaderboardUGCMinimalCompleted& Completed, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksUGCHandle UGCHandle);
    class UUWorksRequestCoreAttachLeaderboardUGC* AttachLeaderboardUGC();
};

class UUWorksInterfaceCoreUtils : public UUWorksInterfaceCore
{
    FUWorksInterfaceCoreUtilsIPCountry IPCountry;
    void IPCountryDelegate();
    FUWorksInterfaceCoreUtilsLowBatteryPower LowBatteryPower;
    void LowBatteryPowerDelegate(int32 MinutesBatteryLeft);
    FUWorksInterfaceCoreUtilsSteamShutdown SteamShutdown;
    void SteamShutdownDelegate();
    FUWorksInterfaceCoreUtilsGamepadTextInputDismissed GamepadTextInputDismissed;
    void GamepadTextInputDismissedDelegate(bool bSubmitted, int32 SubmittedText);

    void StartVRDashboard();
    bool ShowGamepadTextInput(EUWorksGamepadTextInputMode InputMode, EUWorksGamepadTextInputLineMode LineInputMode, FString Description, int32 CharMax, FString ExistingText);
    void SetOverlayNotificationPosition(EUWorksNotificationPosition NotificationPosition);
    void SetOverlayNotificationInset(int32 HorizontalInset, int32 VerticalInset);
    bool IsSteamRunningInVR();
    bool IsSteamInBigPictureMode();
    bool IsOverlayEnabled();
    class UUWorksInterfaceCoreUtils* GetUtils();
    FString GetSteamUILanguage();
    int32 GetServerRealTime();
    int32 GetSecondsSinceComputerActive();
    int32 GetSecondsSinceAppActive();
    FString GetIPCountry();
    int32 GetIPCCallCount();
    int32 GetEnteredGamepadTextLength();
    bool GetEnteredGamepadTextInput(FString& Text, int32 TextMaxLength);
    uint8 GetCurrentBatteryPower();
    EUWorksUniverse GetConnectedUniverse();
    int32 GetAppID();
    bool BOverlayNeedsPresent();
};

class UUWorksRequestCoreGetFileDetails : public UUWorksRequestCore
{
    FUWorksRequestCoreGetFileDetailsOnRequestCompleted OnRequestCompleted;
    void GetFileDetailsDelegate(bool bSuccessful, EUWorksResult Result, int32 fileSize, FString FileSHA, const TArray<int32>& FileFlags);
    FUWorksRequestCoreGetFileDetailsOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetFileDetailsMinimalDelegate(bool bSuccessful, EUWorksResult Result, int32 fileSize, FString FileSHA, const TArray<int32>& FileFlags);

    void SetInput(FString Filename);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, int32& fileSize, FString& FileSHA, TArray<int32>& FileFlags);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreSetPersonaName : public UUWorksRequestCore
{
    FUWorksRequestCoreSetPersonaNameOnRequestCompleted OnRequestCompleted;
    void SetPersonaNameDelegate(bool bSuccessful, bool bSuccess, bool bLocalSuccess, EUWorksResult Result);
    FUWorksRequestCoreSetPersonaNameOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void SetPersonaNameMinimalDelegate(bool bSuccessful, bool bSuccess, bool bLocalSuccess, EUWorksResult Result);

    void SetInput(FString Name);
    bool IsActive();
    void GetOutput(bool& bSuccess, bool& bLocalSuccess, EUWorksResult& Result);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreDownloadClanActivityCounts : public UUWorksRequestCore
{
    FUWorksRequestCoreDownloadClanActivityCountsOnRequestCompleted OnRequestCompleted;
    void DownloadClanActivityCountsDelegate(bool bSuccessful, bool bSuccess);
    FUWorksRequestCoreDownloadClanActivityCountsOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void DownloadClanActivityCountsMinimalDelegate(bool bSuccessful, bool bSuccess);

    void SetInput(TArray<FUWorksSteamID> SteamIDClans);
    bool IsActive();
    void GetOutput(bool& bSuccess);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreRequestClanOfficerList : public UUWorksRequestCore
{
    FUWorksRequestCoreRequestClanOfficerListOnRequestCompleted OnRequestCompleted;
    void RequestClanOfficerListDelegate(bool bSuccessful, FUWorksSteamID SteamIDClan, int32 Officers, bool bSuccess);
    FUWorksRequestCoreRequestClanOfficerListOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void RequestClanOfficerListMinimalDelegate(bool bSuccessful, FUWorksSteamID SteamIDClan, int32 Officers, bool bSuccess);

    void SetInput(FUWorksSteamID SteamID);
    bool IsActive();
    void GetOutput(FUWorksSteamID& SteamIDClan, int32& Officers, bool& bSuccess);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreJoinClanChatRoom : public UUWorksRequestCore
{
    FUWorksRequestCoreJoinClanChatRoomOnRequestCompleted OnRequestCompleted;
    void JoinClanChatRoomDelegate(bool bSuccessful, FUWorksSteamID SteamIDClanChat, EUWorksChatRoomEnterResponse ChatRoomEnterResponse);
    FUWorksRequestCoreJoinClanChatRoomOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void JoinClanChatRoomMinimalDelegate(bool bSuccessful, FUWorksSteamID SteamIDClanChat, EUWorksChatRoomEnterResponse ChatRoomEnterResponse);

    void SetInput(FUWorksSteamID SteamIDClan);
    bool IsActive();
    void GetOutput(FUWorksSteamID& SteamIDClanChat, EUWorksChatRoomEnterResponse& ChatRoomEnterResponse);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreGetFollowerCount : public UUWorksRequestCore
{
    FUWorksRequestCoreGetFollowerCountOnRequestCompleted OnRequestCompleted;
    void GetFollowerCountDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, int32 Count);
    FUWorksRequestCoreGetFollowerCountOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetFollowerCountMinimalDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, int32 Count);

    void SetInput(FUWorksSteamID SteamID);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamID, int32& Count);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreIsFollowing : public UUWorksRequestCore
{
    FUWorksRequestCoreIsFollowingOnRequestCompleted OnRequestCompleted;
    void IsFollowingDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, bool bIsFollowing);
    FUWorksRequestCoreIsFollowingOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void IsFollowingMinimalDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, bool bIsFollowing);

    void SetInput(FUWorksSteamID SteamID);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamID, bool& bIsFollowing);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreEnumerateFollowingList : public UUWorksRequestCore
{
    FUWorksRequestCoreEnumerateFollowingListOnRequestCompleted OnRequestCompleted;
    void EnumerateFollowingListDelegate(bool bSuccessful, EUWorksResult Result, const TArray<FUWorksSteamID>& SteamIDs, int32 ResultsReturned, int32 TotalResultCount);
    FUWorksRequestCoreEnumerateFollowingListOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void EnumerateFollowingListMinimalDelegate(bool bSuccessful, EUWorksResult Result, const TArray<FUWorksSteamID>& SteamIDs, int32 ResultsReturned, int32 TotalResultCount);

    void SetInput(int32 StartIndex);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, TArray<FUWorksSteamID>& SteamIDs, int32& ResultsReturned, int32& TotalResultCount);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreAssociateWithClan : public UUWorksRequestCore
{
    FUWorksRequestCoreAssociateWithClanOnRequestCompleted OnRequestCompleted;
    void AssociateWithClanDelegate(bool bSuccessful, EUWorksResult Result);
    FUWorksRequestCoreAssociateWithClanOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void AssociateWithClanMinimalDelegate(bool bSuccessful, EUWorksResult Result);

    void SetInput(FUWorksSteamID SteamIDClan);
    bool IsActive();
    void GetOutput(EUWorksResult& Result);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreComputeNewPlayerCompatibility : public UUWorksRequestCore
{
    FUWorksRequestCoreComputeNewPlayerCompatibilityOnRequestCompleted OnRequestCompleted;
    void ComputeNewPlayerCompatibilityDelegate(bool bSuccessful, EUWorksResult Result, int32 PlayersThatDontLikeCandidate, int32 PlayersThatCandidateDoesntLike, int32 ClanPlayersThatDontLikeCandidate, FUWorksSteamID SteamIDCandidate);
    FUWorksRequestCoreComputeNewPlayerCompatibilityOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void ComputeNewPlayerCompatibilityMinimalDelegate(bool bSuccessful, EUWorksResult Result, int32 PlayersThatDontLikeCandidate, int32 PlayersThatCandidateDoesntLike, int32 ClanPlayersThatDontLikeCandidate, FUWorksSteamID SteamIDCandidate);

    void SetInput(FUWorksSteamID SteamIDNewPlayer);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, int32& PlayersThatDontLikeCandidate, int32& PlayersThatCandidateDoesntLike, int32& ClanPlayersThatDontLikeCandidate, FUWorksSteamID& SteamIDCandidate);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreRequestUserStatsGS : public UUWorksRequestCore
{
    FUWorksRequestCoreRequestUserStatsGSOnRequestCompleted OnRequestCompleted;
    void ServerRequestUserStatsDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDUser);
    FUWorksRequestCoreRequestUserStatsGSOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void ServerRequestUserStatsMinimalDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDUser);

    void SetInput(FUWorksSteamID SteamIDUser);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamIDUser);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreStoreUserStats : public UUWorksRequestCore
{
    FUWorksRequestCoreStoreUserStatsOnRequestCompleted OnRequestCompleted;
    void ServerStoreUserStatsDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDUser);
    FUWorksRequestCoreStoreUserStatsOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void ServerStoreUserStatsMinimalDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDUser);

    void SetInput(FUWorksSteamID SteamIDUser);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamIDUser);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs : public UUWorksRequestCore
{
    FUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDsOnRequestCompleted OnRequestCompleted;
    void RequestEligiblePromoItemDefinitionsIDsDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, int32 NumEligiblePromoItemsDefinitionsIDs, bool bCachedData);
    FUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDsOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void RequestEligiblePromoItemDefinitionsIDsMinimalDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, int32 NumEligiblePromoItemsDefinitionsIDs, bool bCachedData);

    void SetInput(FUWorksSteamID SteamID);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamID, int32& NumEligiblePromoItemsDefinitionsIDs, bool& bCachedData);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreRequestLobbyList : public UUWorksRequestCore
{
    FUWorksRequestCoreRequestLobbyListOnRequestCompleted OnRequestCompleted;
    void RequestLobbyListDelegate(bool bSuccessful, int32 LobbiesMatching);
    FUWorksRequestCoreRequestLobbyListOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void RequestLobbyListMinimalDelegate(bool bSuccessful, int32 LobbiesMatching);

    bool IsActive();
    void GetOutput(int32& LobbiesMatching);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreCreateLobby : public UUWorksRequestCore
{
    FUWorksRequestCoreCreateLobbyOnRequestCompleted OnRequestCompleted;
    void CreateLobbyDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDLobby);
    FUWorksRequestCoreCreateLobbyOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void CreateLobbyMinimalDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDLobby);

    void SetInput(EUWorksLobbyType LobbyType, int32 MaxMembers);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamIDLobby);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreJoinLobby : public UUWorksRequestCore
{
    FUWorksRequestCoreJoinLobbyOnRequestCompleted OnRequestCompleted;
    void JoinLobbyDelegate(bool bSuccessful, FUWorksSteamID SteamIDLobby, const TArray<uint8>& ChatPermissions, bool bLocked, EUWorksChatRoomEnterResponse ChatRoomEnterResponse);
    FUWorksRequestCoreJoinLobbyOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void JoinLobbyMinimalDelegate(bool bSuccessful, FUWorksSteamID SteamIDLobby, const TArray<uint8>& ChatPermissions, bool bLocked, EUWorksChatRoomEnterResponse ChatRoomEnterResponse);

    void SetInput(FUWorksSteamID SteamIDLobby);
    bool IsActive();
    void GetOutput(FUWorksSteamID& SteamIDLobby, TArray<uint8>& ChatPermissions, bool& bLocked, EUWorksChatRoomEnterResponse& ChatRoomEnterResponse);
    void Deactivate();
    void Activate();
};

struct FUWorksServerInfo
{
    FString Name;
    FString IP;
    int32 QueryPort;
    int32 ConnectionPort;
    int32 Ping;
    bool bHadSuccessfulResponse;
    bool bDoNotRefresh;
    FString GameDir;
    FString Map;
    FString GameDescription;
    int32 AppID;
    int32 Players;
    int32 MaxPlayers;
    int32 BotPlayers;
    bool bPassword;
    bool BSecure;
    int32 TimeLastPlayed;
    int32 ServerVersion;
    FString GameTags;
    FUWorksSteamID SteamID;

};

class UUWorksRequestCoreServerList : public UUWorksRequestCore
{
    FUWorksRequestCoreServerListOnRequestCompleted OnRequestCompleted;
    void ServerListDelegate(const TArray<FUWorksServerInfo>& Servers);
    FUWorksRequestCoreServerListOnRequestUpdated OnRequestUpdated;
    void ServerListUpdateDelegate(bool bSuccessful, FUWorksServerInfo Server);
    FUWorksRequestCoreServerListOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void ServerListMinimalDelegate(const TArray<FUWorksServerInfo>& Servers);
    FUWorksRequestCoreServerListOnRequestUpdatedMinimal OnRequestUpdatedMinimal;
    void ServerListUpdateMinimalDelegate(bool bSuccessful, FUWorksServerInfo Server);

    void SetInput(int32 AppID, EUWorksServerQueryType queryType);
    bool IsActive();
    void GetOutput(FUWorksServerInfo& UpdatedServer, TArray<FUWorksServerInfo>& Servers);
    void Deactivate();
    void AddFilterSecure();
    void AddFilterOr(int32 Value);
    void AddFilterNotFull();
    void AddFilterNor(int32 Value);
    void AddFilterNoPlayers();
    void AddFilterNand(int32 Value);
    void AddFilterMap(FString Value);
    void AddFilterLinux();
    void AddFilterHasPlayers();
    void AddFilterGameTagsNor(FString Value);
    void AddFilterGameTagsAnd(FString Value);
    void AddFilterGameDataOr(FString Value);
    void AddFilterGameDataNor(FString Value);
    void AddFilterGameDataAnd(FString Value);
    void AddFilterGameAddr(FString Value);
    void AddFilterDedicated();
    void AddFilterAnd(int32 Value);
    void AddFilterAddr(FString Value);
    void Activate();
};

class UUWorksRequestCorePing : public UUWorksRequestCore
{
    FUWorksRequestCorePingOnRequestCompleted OnRequestCompleted;
    void PingDelegate(bool bSuccessful, FUWorksServerInfo Server);
    FUWorksRequestCorePingOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void PingMinimalDelegate(bool bSuccessful, FUWorksServerInfo Server);

    void SetInput(FString IP, int32 Port);
    bool IsActive();
    void GetOutput(FUWorksServerInfo& Server);
    void Deactivate();
    void Activate();
};

struct FUWorksPlayerInfo
{
    FString Name;
    int32 score;
    float TimePlayed;

};

class UUWorksRequestCorePlayers : public UUWorksRequestCore
{
    FUWorksRequestCorePlayersOnRequestCompleted OnRequestCompleted;
    void PlayersDelegate(const TArray<FUWorksPlayerInfo>& Players);
    FUWorksRequestCorePlayersOnRequestUpdated OnRequestUpdated;
    void PlayersUpdateDelegate(bool bSuccessful, FUWorksPlayerInfo Player);
    FUWorksRequestCorePlayersOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void PlayersMinimalDelegate(const TArray<FUWorksPlayerInfo>& Players);
    FUWorksRequestCorePlayersOnRequestUpdatedMinimal OnRequestUpdatedMinimal;
    void PlayersUpdateMinimalDelegate(bool bSuccessful, FUWorksPlayerInfo Player);

    void SetInput(FString IP, int32 Port);
    bool IsActive();
    void GetOutput(FUWorksPlayerInfo& UpdatedPlayer, TArray<FUWorksPlayerInfo>& Players);
    void Deactivate();
    void Activate();
};

struct FUWorksRuleInfo
{
    FString Name;
    FString Value;

};

class UUWorksRequestCoreRules : public UUWorksRequestCore
{
    FUWorksRequestCoreRulesOnRequestCompleted OnRequestCompleted;
    void RulesDelegate(const TArray<FUWorksRuleInfo>& Rules);
    FUWorksRequestCoreRulesOnRequestUpdated OnRequestUpdated;
    void RulesUpdateDelegate(bool bSuccessful, FUWorksRuleInfo Rule);
    FUWorksRequestCoreRulesOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void RulesMinimalDelegate(const TArray<FUWorksRuleInfo>& Rules);
    FUWorksRequestCoreRulesOnRequestUpdatedMinimal OnRequestUpdatedMinimal;
    void RulesUpdateMinimalDelegate(bool bSuccessful, FUWorksRuleInfo Rule);

    void SetInput(FString IP, int32 Port);
    bool IsActive();
    void GetOutput(FUWorksRuleInfo& UpdatedRule, TArray<FUWorksRuleInfo>& Rules);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreFileWriteAsync : public UUWorksRequestCore
{
    FUWorksRequestCoreFileWriteAsyncOnRequestCompleted OnRequestCompleted;
    void FileWriteAsyncDelegate(bool bSuccessful, EUWorksResult Result);
    FUWorksRequestCoreFileWriteAsyncOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void FileWriteAsyncMinimalDelegate(bool bSuccessful, EUWorksResult Result);

    void SetInput(FString File, TArray<uint8> Buffer);
    bool IsActive();
    void GetOutput(EUWorksResult& Result);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreFileReadAsync : public UUWorksRequestCore
{
    FUWorksRequestCoreFileReadAsyncOnRequestCompleted OnRequestCompleted;
    void FileReadAsyncDelegate(bool bSuccessful, EUWorksResult Result, int32 Offset, const TArray<uint8>& Buffer);
    FUWorksRequestCoreFileReadAsyncOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void FileReadAsyncMinimalDelegate(bool bSuccessful, EUWorksResult Result, int32 Offset, const TArray<uint8>& Buffer);

    void SetInput(FString File, int32 Offset, int32 BytesToRead);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, int32& Offset, TArray<uint8>& Buffer);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreSendQueryUGCRequest : public UUWorksRequestCore
{
    FUWorksRequestCoreSendQueryUGCRequestOnRequestCompleted OnRequestCompleted;
    void SendQueryUGCRequestDelegate(bool bSuccessful, FUWorksUGCQueryHandle UGCQueryHandle, EUWorksResult Result, int32 numResultsReturned, int32 TotalMatchingResults, bool bCachedData);
    FUWorksRequestCoreSendQueryUGCRequestOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void SendQueryUGCRequestMinimalDelegate(bool bSuccessful, FUWorksUGCQueryHandle UGCQueryHandle, EUWorksResult Result, int32 numResultsReturned, int32 TotalMatchingResults, bool bCachedData);

    void SetInput(FUWorksUGCQueryHandle UGCQueryHandle);
    bool IsActive();
    void GetOutput(FUWorksUGCQueryHandle& UGCQueryHandle, EUWorksResult& Result, int32& numResultsReturned, int32& TotalMatchingResults, bool& bCachedData);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreCreateItem : public UUWorksRequestCore
{
    FUWorksRequestCoreCreateItemOnRequestCompleted OnRequestCompleted;
    void CreateItemDelegate(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID, bool bUserNeedsToAcceptWorkshopLegalAgreement);
    FUWorksRequestCoreCreateItemOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void CreateItemMinimalDelegate(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID, bool bUserNeedsToAcceptWorkshopLegalAgreement);

    void SetInput(int32 ConsumerAppID, EUWorksWorkshopFileType fileType);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, FUWorksPublishedFileID& PublishedFileID, bool& bUserNeedsToAcceptWorkshopLegalAgreement);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreSubmitItemUpdate : public UUWorksRequestCore
{
    FUWorksRequestCoreSubmitItemUpdateOnRequestCompleted OnRequestCompleted;
    void SubmitItemUpdateDelegate(bool bSuccessful, EUWorksResult Result, bool bUserNeedsToAcceptWorkshopLegalAgreement);
    FUWorksRequestCoreSubmitItemUpdateOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void SubmitItemUpdateMinimalDelegate(bool bSuccessful, EUWorksResult Result, bool bUserNeedsToAcceptWorkshopLegalAgreement);

    void SetInput(FUWorksUGCUpdateHandle UGCUpdateHandle, FString ChangeNote);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, bool& bUserNeedsToAcceptWorkshopLegalAgreement);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreSetUserItemVote : public UUWorksRequestCore
{
    FUWorksRequestCoreSetUserItemVoteOnRequestCompleted OnRequestCompleted;
    void SetUserItemVoteDelegate(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bVoteUp);
    FUWorksRequestCoreSetUserItemVoteOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void SetUserItemVoteMinimalDelegate(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bVoteUp);

    void SetInput(FUWorksPublishedFileID PublishedFileID, bool bVoteUp);
    bool IsActive();
    void GetOutput(FUWorksPublishedFileID& PublishedFileID, EUWorksResult& Result, bool& bVoteUp);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreGetUserItemVote : public UUWorksRequestCore
{
    FUWorksRequestCoreGetUserItemVoteOnRequestCompleted OnRequestCompleted;
    void GetUserItemVoteDelegate(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bVotedUp, bool bVotedDown, bool bVoteSkipped);
    FUWorksRequestCoreGetUserItemVoteOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetUserItemVoteMinimalDelegate(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bVotedUp, bool bVotedDown, bool bVoteSkipped);

    void SetInput(FUWorksPublishedFileID PublishedFileID);
    bool IsActive();
    void GetOutput(FUWorksPublishedFileID& PublishedFileID, EUWorksResult& Result, bool& bVotedUp, bool& bVotedDown, bool& bVoteSkipped);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreAddItemToFavorites : public UUWorksRequestCore
{
    FUWorksRequestCoreAddItemToFavoritesOnRequestCompleted OnRequestCompleted;
    void AddItemToFavoritesDelegate(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bWasAddRequest);
    FUWorksRequestCoreAddItemToFavoritesOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void AddItemToFavoritesMinimalDelegate(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bWasAddRequest);

    void SetInput(int32 AppID, FUWorksPublishedFileID PublishedFileID);
    bool IsActive();
    void GetOutput(FUWorksPublishedFileID& PublishedFileID, EUWorksResult& Result, bool& bWasAddRequest);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreRemoveItemFromFavorites : public UUWorksRequestCore
{
    FUWorksRequestCoreRemoveItemFromFavoritesOnRequestCompleted OnRequestCompleted;
    void RemoveItemFromFavoritesDelegate(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bWasAddRequest);
    FUWorksRequestCoreRemoveItemFromFavoritesOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void RemoveItemFromFavoritesMinimalDelegate(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bWasAddRequest);

    void SetInput(int32 AppID, FUWorksPublishedFileID PublishedFileID);
    bool IsActive();
    void GetOutput(FUWorksPublishedFileID& PublishedFileID, EUWorksResult& Result, bool& bWasAddRequest);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreSubscribeItem : public UUWorksRequestCore
{
    FUWorksRequestCoreSubscribeItemOnRequestCompleted OnRequestCompleted;
    void SubscribeItemDelegate(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID);
    FUWorksRequestCoreSubscribeItemOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void SubscribeItemMinimalDelegate(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID);

    void SetInput(FUWorksPublishedFileID PublishedFileID);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, FUWorksPublishedFileID& PublishedFileID);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreUnsubscribeItem : public UUWorksRequestCore
{
    FUWorksRequestCoreUnsubscribeItemOnRequestCompleted OnRequestCompleted;
    void UnsubscribeItemDelegate(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID);
    FUWorksRequestCoreUnsubscribeItemOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void UnsubscribeItemMinimalDelegate(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID);

    void SetInput(FUWorksPublishedFileID PublishedFileID);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, FUWorksPublishedFileID& PublishedFileID);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreStartPlaytimeTracking : public UUWorksRequestCore
{
    FUWorksRequestCoreStartPlaytimeTrackingOnRequestCompleted OnRequestCompleted;
    void StartPlaytimeTrackingDelegate(bool bSuccessful, EUWorksResult Result);
    FUWorksRequestCoreStartPlaytimeTrackingOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void StartPlaytimeTrackingMinimalDelegate(bool bSuccessful, EUWorksResult Result);

    void SetInput(TArray<FUWorksPublishedFileID> PublishedFileID);
    bool IsActive();
    void GetOutput(EUWorksResult& Result);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreStopPlaytimeTracking : public UUWorksRequestCore
{
    FUWorksRequestCoreStopPlaytimeTrackingOnRequestCompleted OnRequestCompleted;
    void StopPlaytimeTrackingDelegate(bool bSuccessful, EUWorksResult Result);
    FUWorksRequestCoreStopPlaytimeTrackingOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void StopPlaytimeTrackingMinimalDelegate(bool bSuccessful, EUWorksResult Result);

    void SetInput(TArray<FUWorksPublishedFileID> PublishedFileIDs);
    bool IsActive();
    void GetOutput(EUWorksResult& Result);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreStopPlaytimeTrackingForAllItems : public UUWorksRequestCore
{
    FUWorksRequestCoreStopPlaytimeTrackingForAllItemsOnRequestCompleted OnRequestCompleted;
    void StopPlaytimeTrackingForAllItemsDelegate(bool bSuccessful, EUWorksResult Result);
    FUWorksRequestCoreStopPlaytimeTrackingForAllItemsOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void StopPlaytimeTrackingForAllItemsMinimalDelegate(bool bSuccessful, EUWorksResult Result);

    bool IsActive();
    void GetOutput(EUWorksResult& Result);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreRequestEncryptedAppTicket : public UUWorksRequestCore
{
    FUWorksRequestCoreRequestEncryptedAppTicketOnRequestCompleted OnRequestCompleted;
    void RequestEncryptedAppTicketDelegate(bool bSuccessful, EUWorksResult Result);
    FUWorksRequestCoreRequestEncryptedAppTicketOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void RequestEncryptedAppTicketMinimalDelegate(bool bSuccessful, EUWorksResult Result);

    void SetInput(TArray<uint8> Buffer);
    bool IsActive();
    void GetOutput(EUWorksResult& Result);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreRequestStoreAuthURL : public UUWorksRequestCore
{
    FUWorksRequestCoreRequestStoreAuthURLOnRequestCompleted OnRequestCompleted;
    void RequestStoreAuthURLDelegate(bool bSuccessful, FString URL);
    FUWorksRequestCoreRequestStoreAuthURLOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void RequestStoreAuthURLMinimalDelegate(bool bSuccessful, FString URL);

    void SetInput(FString URL);
    bool IsActive();
    void GetOutput(FString& URL);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreRequestUserStats : public UUWorksRequestCore
{
    FUWorksRequestCoreRequestUserStatsOnRequestCompleted OnRequestCompleted;
    void RequestUserStatsDelegate(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result, FUWorksSteamID SteamID);
    FUWorksRequestCoreRequestUserStatsOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void RequestUserStatsMinimalDelegate(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result, FUWorksSteamID SteamID);

    void SetInput(FUWorksSteamID SteamID);
    bool IsActive();
    void GetOutput(FUWorksGameID& GameID, EUWorksResult& Result, FUWorksSteamID& SteamID);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreFindOrCreateLeaderboard : public UUWorksRequestCore
{
    FUWorksRequestCoreFindOrCreateLeaderboardOnRequestCompleted OnRequestCompleted;
    void FindOrCreateLeaderboardDelegate(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);
    FUWorksRequestCoreFindOrCreateLeaderboardOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void FindOrCreateLeaderboardMinimalDelegate(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);

    void SetInput(FString LeaderboardName, EUWorksLeaderboardSortMethod LeaderboardSortMethod, EUWorksLeaderboardDisplayType LeaderboardDisplayType);
    bool IsActive();
    void GetOutput(FUWorksSteamLeaderboard& SteamLeaderboard, bool& bLeaderboardFound);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreFindLeaderboard : public UUWorksRequestCore
{
    FUWorksRequestCoreFindLeaderboardOnRequestCompleted OnRequestCompleted;
    void FindLeaderboardDelegate(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);
    FUWorksRequestCoreFindLeaderboardOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void FindLeaderboardMinimalDelegate(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);

    void SetInput(FString LeaderboardName);
    bool IsActive();
    void GetOutput(FUWorksSteamLeaderboard& SteamLeaderboard, bool& bLeaderboardFound);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreDownloadLeaderboardEntries : public UUWorksRequestCore
{
    FUWorksRequestCoreDownloadLeaderboardEntriesOnRequestCompleted OnRequestCompleted;
    void DownloadLeaderboardEntriesDelegate(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 EntryCount);
    FUWorksRequestCoreDownloadLeaderboardEntriesOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void DownloadLeaderboardEntriesMinimalDelegate(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 EntryCount);

    void SetInput(FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardDataRequest LeaderboardDataRequest, int32 RangeStart, int32 RangeEnd);
    bool IsActive();
    void GetOutput(FUWorksSteamLeaderboard& SteamLeaderboard, FUWorksSteamLeaderboardEntries& SteamLeaderboardEntries, int32& EntryCount);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreDownloadLeaderboardEntriesForUsers : public UUWorksRequestCore
{
    FUWorksRequestCoreDownloadLeaderboardEntriesForUsersOnRequestCompleted OnRequestCompleted;
    void DownloadLeaderboardEntriesForUsersDelegate(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 EntryCount);
    FUWorksRequestCoreDownloadLeaderboardEntriesForUsersOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void DownloadLeaderboardEntriesForUsersMinimalDelegate(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 EntryCount);

    void SetInput(FUWorksSteamLeaderboard SteamLeaderboard, TArray<FUWorksSteamID> Users);
    bool IsActive();
    void GetOutput(FUWorksSteamLeaderboard& SteamLeaderboard, FUWorksSteamLeaderboardEntries& SteamLeaderboardEntries, int32& EntryCount);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreUploadLeaderboardScore : public UUWorksRequestCore
{
    FUWorksRequestCoreUploadLeaderboardScoreOnRequestCompleted OnRequestCompleted;
    void UploadLeaderboardScoreDelegate(bool bSuccessful, bool bSuccess, FUWorksSteamLeaderboard SteamLeaderboard, int32 score, bool bScoreChanged, int32 GlobalRankNew, int32 GlobalRankPrevious);
    FUWorksRequestCoreUploadLeaderboardScoreOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void UploadLeaderboardScoreMinimalDelegate(bool bSuccessful, bool bSuccess, FUWorksSteamLeaderboard SteamLeaderboard, int32 score, bool bScoreChanged, int32 GlobalRankNew, int32 GlobalRankPrevious);

    void SetInput(FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int32 score, TArray<int32> ScoreDetails);
    bool IsActive();
    void GetOutput(bool& bSuccess, FUWorksSteamLeaderboard& SteamLeaderboard, int32& score, bool& bScoreChanged, int32& GlobalRankNew, int32& GlobalRankPrevious);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreAttachLeaderboardUGC : public UUWorksRequestCore
{
    FUWorksRequestCoreAttachLeaderboardUGCOnRequestCompleted OnRequestCompleted;
    void AttachLeaderboardUGCDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamLeaderboard SteamLeaderboard);
    FUWorksRequestCoreAttachLeaderboardUGCOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void AttachLeaderboardUGCMinimalDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamLeaderboard SteamLeaderboard);

    void SetInput(FUWorksSteamLeaderboard SteamLeaderboard, FUWorksUGCHandle UGCHandle);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, FUWorksSteamLeaderboard& SteamLeaderboard);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreGetNumberOfCurrentPlayers : public UUWorksRequestCore
{
    FUWorksRequestCoreGetNumberOfCurrentPlayersOnRequestCompleted OnRequestCompleted;
    void GetNumberOfCurrentPlayersDelegate(bool bSuccessful, bool bSuccess, int32 Players);
    FUWorksRequestCoreGetNumberOfCurrentPlayersOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void GetNumberOfCurrentPlayersMinimalDelegate(bool bSuccessful, bool bSuccess, int32 Players);

    bool IsActive();
    void GetOutput(bool& bSuccess, int32& Players);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreRequestGlobalAchievementPercentages : public UUWorksRequestCore
{
    FUWorksRequestCoreRequestGlobalAchievementPercentagesOnRequestCompleted OnRequestCompleted;
    void RequestGlobalAchievementPercentagesDelegate(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result);
    FUWorksRequestCoreRequestGlobalAchievementPercentagesOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void RequestGlobalAchievementPercentagesMinimalDelegate(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result);

    bool IsActive();
    void GetOutput(FUWorksGameID& GameID, EUWorksResult& Result);
    void Deactivate();
    void Activate();
};

class UUWorksRequestCoreRequestGlobalStats : public UUWorksRequestCore
{
    FUWorksRequestCoreRequestGlobalStatsOnRequestCompleted OnRequestCompleted;
    void RequestGlobalStatsDelegate(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result);
    FUWorksRequestCoreRequestGlobalStatsOnRequestCompletedMinimal OnRequestCompletedMinimal;
    void RequestGlobalStatsMinimalDelegate(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result);

    void SetInput(int32 HistoryDays);
    bool IsActive();
    void GetOutput(FUWorksGameID& GameID, EUWorksResult& Result);
    void Deactivate();
    void Activate();
};

class UCoreGetFileDetailsNode : public UBlueprintAsyncActionBase
{
    FCoreGetFileDetailsNodeCompleted Completed;
    void GetFileDetailsDelegate(bool bSuccessful, EUWorksResult Result, int32 fileSize, FString FileSHA, const TArray<int32>& FileFlags);

    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, int32 fileSize, FString FileSHA, const TArray<int32>& FileFlags);
    class UCoreGetFileDetailsNode* GetFileDetailsNode(FString Filename);
};

class UCoreSetPersonaNameNode : public UBlueprintAsyncActionBase
{
    FCoreSetPersonaNameNodeCompleted Completed;
    void SetPersonaNameDelegate(bool bSuccessful, bool bSuccess, bool bLocalSuccess, EUWorksResult Result);

    class UCoreSetPersonaNameNode* SetPersonaNameNode(FString Name);
    void OnRequestCompleted(bool bSuccessful, bool bSuccess, bool bLocalSuccess, EUWorksResult Result);
};

class UCoreDownloadClanActivityCountsNode : public UBlueprintAsyncActionBase
{
    FCoreDownloadClanActivityCountsNodeCompleted Completed;
    void DownloadClanActivityCountsDelegate(bool bSuccessful, bool bSuccess);

    void OnRequestCompleted(bool bSuccessful, bool bSuccess);
    class UCoreDownloadClanActivityCountsNode* DownloadClanActivityCountsNode(TArray<FUWorksSteamID> SteamIDClans);
};

class UCoreRequestClanOfficerListNode : public UBlueprintAsyncActionBase
{
    FCoreRequestClanOfficerListNodeCompleted Completed;
    void RequestClanOfficerListDelegate(bool bSuccessful, FUWorksSteamID SteamIDClan, int32 Officers, bool bSuccess);

    class UCoreRequestClanOfficerListNode* RequestClanOfficerListNode(FUWorksSteamID SteamID);
    void OnRequestCompleted(bool bSuccessful, FUWorksSteamID SteamIDClan, int32 Officers, bool bSuccess);
};

class UCoreJoinClanChatRoomNode : public UBlueprintAsyncActionBase
{
    FCoreJoinClanChatRoomNodeCompleted Completed;
    void JoinClanChatRoomDelegate(bool bSuccessful, FUWorksSteamID SteamIDClanChat, EUWorksChatRoomEnterResponse ChatRoomEnterResponse);

    void OnRequestCompleted(bool bSuccessful, FUWorksSteamID SteamIDClanChat, EUWorksChatRoomEnterResponse ChatRoomEnterResponse);
    class UCoreJoinClanChatRoomNode* JoinClanChatRoomNode(FUWorksSteamID SteamIDClan);
};

class UCoreGetFollowerCountNode : public UBlueprintAsyncActionBase
{
    FCoreGetFollowerCountNodeCompleted Completed;
    void GetFollowerCountDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, int32 Count);

    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, int32 Count);
    class UCoreGetFollowerCountNode* GetFollowerCountNode(FUWorksSteamID SteamID);
};

class UCoreIsFollowingNode : public UBlueprintAsyncActionBase
{
    FCoreIsFollowingNodeCompleted Completed;
    void IsFollowingDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, bool bIsFollowing);

    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, bool bIsFollowing);
    class UCoreIsFollowingNode* IsFollowingNode(FUWorksSteamID SteamID);
};

class UCoreEnumerateFollowingListNode : public UBlueprintAsyncActionBase
{
    FCoreEnumerateFollowingListNodeCompleted Completed;
    void EnumerateFollowingListDelegate(bool bSuccessful, EUWorksResult Result, const TArray<FUWorksSteamID>& SteamIDs, int32 ResultsReturned, int32 TotalResultCount);

    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, const TArray<FUWorksSteamID>& SteamIDs, int32 ResultsReturned, int32 TotalResultCount);
    class UCoreEnumerateFollowingListNode* EnumerateFollowingListNode(int32 StartIndex);
};

class UCoreAssociateWithClanNode : public UBlueprintAsyncActionBase
{
    FCoreAssociateWithClanNodeCompleted Completed;
    void AssociateWithClanDelegate(bool bSuccessful, EUWorksResult Result);

    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);
    class UCoreAssociateWithClanNode* AssociateWithClanNode(FUWorksSteamID SteamIDClan);
};

class UCoreComputeNewPlayerCompatibilityNode : public UBlueprintAsyncActionBase
{
    FCoreComputeNewPlayerCompatibilityNodeCompleted Completed;
    void ComputeNewPlayerCompatibilityDelegate(bool bSuccessful, EUWorksResult Result, int32 PlayersThatDontLikeCandidate, int32 PlayersThatCandidateDoesntLike, int32 ClanPlayersThatDontLikeCandidate, FUWorksSteamID SteamIDCandidate);

    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, int32 PlayersThatDontLikeCandidate, int32 PlayersThatCandidateDoesntLike, int32 ClanPlayersThatDontLikeCandidate, FUWorksSteamID SteamIDCandidate);
    class UCoreComputeNewPlayerCompatibilityNode* ComputeNewPlayerCompatibilityNode(FUWorksSteamID SteamIDNewPlayer);
};

class UCoreRequestUserStatsGSNode : public UBlueprintAsyncActionBase
{
    FCoreRequestUserStatsGSNodeCompleted Completed;
    void ServerRequestUserStatsDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDUser);

    class UCoreRequestUserStatsGSNode* RequestUserStatsGSNode(FUWorksSteamID SteamIDUser);
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDUser);
};

class UCoreStoreUserStatsNode : public UBlueprintAsyncActionBase
{
    FCoreStoreUserStatsNodeCompleted Completed;
    void ServerStoreUserStatsDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDUser);

    class UCoreStoreUserStatsNode* StoreUserStatsNode(FUWorksSteamID SteamIDUser);
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDUser);
};

class UCoreRequestEligiblePromoItemDefinitionsIDsNode : public UBlueprintAsyncActionBase
{
    FCoreRequestEligiblePromoItemDefinitionsIDsNodeCompleted Completed;
    void RequestEligiblePromoItemDefinitionsIDsDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, int32 NumEligiblePromoItemsDefinitionsIDs, bool bCachedData);

    class UCoreRequestEligiblePromoItemDefinitionsIDsNode* RequestEligiblePromoItemDefinitionsIDsNode(FUWorksSteamID SteamID);
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, int32 NumEligiblePromoItemsDefinitionsIDs, bool bCachedData);
};

class UCoreRequestLobbyListNode : public UBlueprintAsyncActionBase
{
    FCoreRequestLobbyListNodeCompleted Completed;
    void RequestLobbyListDelegate(bool bSuccessful, int32 LobbiesMatching);

    class UCoreRequestLobbyListNode* RequestLobbyListNode();
    void OnRequestCompleted(bool bSuccessful, int32 LobbiesMatching);
};

class UCoreCreateLobbyNode : public UBlueprintAsyncActionBase
{
    FCoreCreateLobbyNodeCompleted Completed;
    void CreateLobbyDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDLobby);

    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDLobby);
    class UCoreCreateLobbyNode* CreateLobbyNode(EUWorksLobbyType LobbyType, int32 MaxMembers);
};

class UCoreJoinLobbyNode : public UBlueprintAsyncActionBase
{
    FCoreJoinLobbyNodeCompleted Completed;
    void JoinLobbyDelegate(bool bSuccessful, FUWorksSteamID SteamIDLobby, const TArray<uint8>& ChatPermissions, bool bLocked, EUWorksChatRoomEnterResponse ChatRoomEnterResponse);

    void OnRequestCompleted(bool bSuccessful, FUWorksSteamID SteamIDLobby, const TArray<uint8>& ChatPermissions, bool bLocked, EUWorksChatRoomEnterResponse ChatRoomEnterResponse);
    class UCoreJoinLobbyNode* JoinLobbyNode(FUWorksSteamID SteamIDLobby);
};

class UCoreServerListNode : public UBlueprintAsyncActionBase
{
    FCoreServerListNodeUpdated Updated;
    void ServerListUpdateDelegate(bool bSuccessful, FUWorksServerInfo Server);

    class UCoreServerListNode* ServerListNode(int32 AppID, EUWorksServerQueryType queryType, int32 MaxUpdates);
    void OnRequestUpdated(bool bSuccessful, FUWorksServerInfo Server);
};

class UCorePingNode : public UBlueprintAsyncActionBase
{
    FCorePingNodeCompleted Completed;
    void PingDelegate(bool bSuccessful, FUWorksServerInfo Server);

    class UCorePingNode* PingNode(FString IP, int32 Port);
    void OnRequestCompleted(bool bSuccessful, FUWorksServerInfo Server);
};

class UCorePlayersNode : public UBlueprintAsyncActionBase
{
    FCorePlayersNodeUpdated Updated;
    void PlayersUpdateDelegate(bool bSuccessful, FUWorksPlayerInfo Player);

    class UCorePlayersNode* PlayersNode(FString IP, int32 Port, int32 MaxUpdates);
    void OnRequestUpdated(bool bSuccessful, FUWorksPlayerInfo Player);
};

class UCoreRulesNode : public UBlueprintAsyncActionBase
{
    FCoreRulesNodeUpdated Updated;
    void RulesUpdateDelegate(bool bSuccessful, FUWorksRuleInfo Rule);

    class UCoreRulesNode* RulesNode(FString IP, int32 Port, int32 MaxUpdates);
    void OnRequestUpdated(bool bSuccessful, FUWorksRuleInfo Rule);
};

class UCoreFileWriteAsyncNode : public UBlueprintAsyncActionBase
{
    FCoreFileWriteAsyncNodeCompleted Completed;
    void FileWriteAsyncDelegate(bool bSuccessful, EUWorksResult Result);

    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);
    class UCoreFileWriteAsyncNode* FileWriteAsyncNode(FString File, TArray<uint8> Buffer);
};

class UCoreFileReadAsyncNode : public UBlueprintAsyncActionBase
{
    FCoreFileReadAsyncNodeCompleted Completed;
    void FileReadAsyncDelegate(bool bSuccessful, EUWorksResult Result, int32 Offset, const TArray<uint8>& Buffer);

    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, int32 Offset, const TArray<uint8>& Buffer);
    class UCoreFileReadAsyncNode* FileReadAsyncNode(FString File, int32 Offset, int32 BytesToRead);
};

class UCoreSendQueryUGCRequestNode : public UBlueprintAsyncActionBase
{
    FCoreSendQueryUGCRequestNodeCompleted Completed;
    void SendQueryUGCRequestDelegate(bool bSuccessful, FUWorksUGCQueryHandle UGCQueryHandle, EUWorksResult Result, int32 numResultsReturned, int32 TotalMatchingResults, bool bCachedData);

    class UCoreSendQueryUGCRequestNode* SendQueryUGCRequestNode(FUWorksUGCQueryHandle UGCQueryHandle);
    void OnRequestCompleted(bool bSuccessful, FUWorksUGCQueryHandle UGCQueryHandle, EUWorksResult Result, int32 numResultsReturned, int32 TotalMatchingResults, bool bCachedData);
};

class UCoreCreateItemNode : public UBlueprintAsyncActionBase
{
    FCoreCreateItemNodeCompleted Completed;
    void CreateItemDelegate(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID, bool bUserNeedsToAcceptWorkshopLegalAgreement);

    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID, bool bUserNeedsToAcceptWorkshopLegalAgreement);
    class UCoreCreateItemNode* CreateItemNode(int32 ConsumerAppID, EUWorksWorkshopFileType fileType);
};

class UCoreSubmitItemUpdateNode : public UBlueprintAsyncActionBase
{
    FCoreSubmitItemUpdateNodeCompleted Completed;
    void SubmitItemUpdateDelegate(bool bSuccessful, EUWorksResult Result, bool bUserNeedsToAcceptWorkshopLegalAgreement);

    class UCoreSubmitItemUpdateNode* SubmitItemUpdateNode(FUWorksUGCUpdateHandle UGCUpdateHandle, FString ChangeNote);
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, bool bUserNeedsToAcceptWorkshopLegalAgreement);
};

class UCoreSetUserItemVoteNode : public UBlueprintAsyncActionBase
{
    FCoreSetUserItemVoteNodeCompleted Completed;
    void SetUserItemVoteDelegate(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bVoteUp);

    class UCoreSetUserItemVoteNode* SetUserItemVoteNode(FUWorksPublishedFileID PublishedFileID, bool bVoteUp);
    void OnRequestCompleted(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bVoteUp);
};

class UCoreGetUserItemVoteNode : public UBlueprintAsyncActionBase
{
    FCoreGetUserItemVoteNodeCompleted Completed;
    void GetUserItemVoteDelegate(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bVotedUp, bool bVotedDown, bool bVoteSkipped);

    void OnRequestCompleted(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bVotedUp, bool bVotedDown, bool bVoteSkipped);
    class UCoreGetUserItemVoteNode* GetUserItemVoteNode(FUWorksPublishedFileID PublishedFileID);
};

class UCoreAddItemToFavoritesNode : public UBlueprintAsyncActionBase
{
    FCoreAddItemToFavoritesNodeCompleted Completed;
    void AddItemToFavoritesDelegate(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bWasAddRequest);

    void OnRequestCompleted(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bWasAddRequest);
    class UCoreAddItemToFavoritesNode* AddItemToFavoritesNode(int32 AppID, FUWorksPublishedFileID PublishedFileID);
};

class UCoreRemoveItemFromFavoritesNode : public UBlueprintAsyncActionBase
{
    FCoreRemoveItemFromFavoritesNodeCompleted Completed;
    void RemoveItemFromFavoritesDelegate(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bWasAddRequest);

    class UCoreRemoveItemFromFavoritesNode* RemoveItemFromFavoritesNode(int32 AppID, FUWorksPublishedFileID PublishedFileID);
    void OnRequestCompleted(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bWasAddRequest);
};

class UCoreSubscribeItemNode : public UBlueprintAsyncActionBase
{
    FCoreSubscribeItemNodeCompleted Completed;
    void SubscribeItemDelegate(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID);

    class UCoreSubscribeItemNode* SubscribeItemNode(FUWorksPublishedFileID PublishedFileID);
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID);
};

class UCoreUnsubscribeItemNode : public UBlueprintAsyncActionBase
{
    FCoreUnsubscribeItemNodeCompleted Completed;
    void UnsubscribeItemDelegate(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID);

    class UCoreUnsubscribeItemNode* UnsubscribeItemNode(FUWorksPublishedFileID PublishedFileID);
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID);
};

class UCoreStartPlaytimeTrackingNode : public UBlueprintAsyncActionBase
{
    FCoreStartPlaytimeTrackingNodeCompleted Completed;
    void StartPlaytimeTrackingDelegate(bool bSuccessful, EUWorksResult Result);

    class UCoreStartPlaytimeTrackingNode* StartPlaytimeTrackingNode(TArray<FUWorksPublishedFileID> PublishedFileID);
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);
};

class UCoreStopPlaytimeTrackingNode : public UBlueprintAsyncActionBase
{
    FCoreStopPlaytimeTrackingNodeCompleted Completed;
    void StopPlaytimeTrackingDelegate(bool bSuccessful, EUWorksResult Result);

    class UCoreStopPlaytimeTrackingNode* StopPlaytimeTrackingNode(TArray<FUWorksPublishedFileID> PublishedFileID);
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);
};

class UCoreStopPlaytimeTrackingForAllItemsNode : public UBlueprintAsyncActionBase
{
    FCoreStopPlaytimeTrackingForAllItemsNodeCompleted Completed;
    void StopPlaytimeTrackingForAllItemsDelegate(bool bSuccessful, EUWorksResult Result);

    class UCoreStopPlaytimeTrackingForAllItemsNode* StopPlaytimeTrackingForAllItemsNode();
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);
};

class UCoreRequestEncryptedAppTicketNode : public UBlueprintAsyncActionBase
{
    FCoreRequestEncryptedAppTicketNodeCompleted Completed;
    void RequestEncryptedAppTicketDelegate(bool bSuccessful, EUWorksResult Result);

    class UCoreRequestEncryptedAppTicketNode* RequestEncryptedAppTicketNode(TArray<uint8> Buffer);
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);
};

class UCoreRequestStoreAuthURLNode : public UBlueprintAsyncActionBase
{
    FCoreRequestStoreAuthURLNodeCompleted Completed;
    void RequestStoreAuthURLDelegate(bool bSuccessful, FString URL);

    class UCoreRequestStoreAuthURLNode* RequestStoreAuthURLNode(FString URL);
    void OnRequestCompleted(bool bSuccessful, FString URL);
};

class UCoreRequestUserStatsNode : public UBlueprintAsyncActionBase
{
    FCoreRequestUserStatsNodeCompleted Completed;
    void RequestUserStatsDelegate(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result, FUWorksSteamID SteamID);

    class UCoreRequestUserStatsNode* RequestUserStatsNode(FUWorksSteamID SteamID);
    void OnRequestCompleted(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result, FUWorksSteamID SteamID);
};

class UCoreFindOrCreateLeaderboardNode : public UBlueprintAsyncActionBase
{
    FCoreFindOrCreateLeaderboardNodeCompleted Completed;
    void FindOrCreateLeaderboardDelegate(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);

    void OnRequestCompleted(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);
    class UCoreFindOrCreateLeaderboardNode* FindOrCreateLeaderboardNode(FString LeaderboardName, EUWorksLeaderboardSortMethod LeaderboardSortMethod, EUWorksLeaderboardDisplayType LeaderboardDisplayType);
};

class UCoreFindLeaderboardNode : public UBlueprintAsyncActionBase
{
    FCoreFindLeaderboardNodeCompleted Completed;
    void FindLeaderboardDelegate(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);

    void OnRequestCompleted(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);
    class UCoreFindLeaderboardNode* FindLeaderboardNode(FString LeaderboardName);
};

class UCoreDownloadLeaderboardEntriesNode : public UBlueprintAsyncActionBase
{
    FCoreDownloadLeaderboardEntriesNodeCompleted Completed;
    void DownloadLeaderboardEntriesDelegate(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 EntryCount);

    void OnRequestCompleted(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 EntryCount);
    class UCoreDownloadLeaderboardEntriesNode* DownloadLeaderboardEntriesNode(FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardDataRequest LeaderboardDataRequest, int32 RangeStart, int32 RangeEnd);
};

class UCoreDownloadLeaderboardEntriesForUsersNode : public UBlueprintAsyncActionBase
{
    FCoreDownloadLeaderboardEntriesForUsersNodeCompleted Completed;
    void DownloadLeaderboardEntriesForUsersDelegate(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 EntryCount);

    void OnRequestCompleted(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 EntryCount);
    class UCoreDownloadLeaderboardEntriesForUsersNode* DownloadLeaderboardEntriesForUsersNode(FUWorksSteamLeaderboard SteamLeaderboard, TArray<FUWorksSteamID> Users);
};

class UCoreUploadLeaderboardScoreNode : public UBlueprintAsyncActionBase
{
    FCoreUploadLeaderboardScoreNodeCompleted Completed;
    void UploadLeaderboardScoreDelegate(bool bSuccessful, bool bSuccess, FUWorksSteamLeaderboard SteamLeaderboard, int32 score, bool bScoreChanged, int32 GlobalRankNew, int32 GlobalRankPrevious);

    class UCoreUploadLeaderboardScoreNode* UploadLeaderboardScoreNode(FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int32 score, TArray<int32> ScoreDetails);
    void OnRequestCompleted(bool bSuccessful, bool bSuccess, FUWorksSteamLeaderboard SteamLeaderboard, int32 score, bool bScoreChanged, int32 GlobalRankNew, int32 GlobalRankPrevious);
};

class UCoreAttachLeaderboardUGCNode : public UBlueprintAsyncActionBase
{
    FCoreAttachLeaderboardUGCNodeCompleted Completed;
    void AttachLeaderboardUGCDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamLeaderboard SteamLeaderboard);

    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamLeaderboard SteamLeaderboard);
    class UCoreAttachLeaderboardUGCNode* AttachLeaderboardUGCNode(FUWorksSteamLeaderboard SteamLeaderboard, FUWorksUGCHandle UGCHandle);
};

class UCoreGetNumberOfCurrentPlayersNode : public UBlueprintAsyncActionBase
{
    FCoreGetNumberOfCurrentPlayersNodeCompleted Completed;
    void GetNumberOfCurrentPlayersDelegate(bool bSuccessful, bool bSuccess, int32 Players);

    void OnRequestCompleted(bool bSuccessful, bool bSuccess, int32 Players);
    class UCoreGetNumberOfCurrentPlayersNode* GetNumberOfCurrentPlayersNode();
};

class UCoreRequestGlobalAchievementPercentagesNode : public UBlueprintAsyncActionBase
{
    FCoreRequestGlobalAchievementPercentagesNodeCompleted Completed;
    void RequestGlobalAchievementPercentagesDelegate(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result);

    class UCoreRequestGlobalAchievementPercentagesNode* RequestGlobalAchievementPercentagesNode();
    void OnRequestCompleted(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result);
};

class UCoreRequestGlobalStatsNode : public UBlueprintAsyncActionBase
{
    FCoreRequestGlobalStatsNodeCompleted Completed;
    void RequestGlobalStatsDelegate(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result);

    class UCoreRequestGlobalStatsNode* RequestGlobalStatsNode(int32 HistoryDays);
    void OnRequestCompleted(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result);
};

struct FUWorksSteamPipe
{
};

struct FUWorksAnnexCoreAppList
{
};

struct FUWorksAnnexCoreApps
{
};

struct FUWorksAnnexCoreController
{
};

struct FUWorksAnnexCoreFriends
{
};

struct FUWorksAnnexCoreGameServer
{
};

struct FUWorksAnnexCoreGameServerStats
{
};

struct FUWorksAnnexCoreInventory
{
};

struct FUWorksAnnexCoreMatchmaking
{
};

struct FUWorksAnnexCoreMatchmakingServers
{
};

struct FUWorksAnnexCoreMusic
{
};

struct FUWorksAnnexCoreNetworking
{
};

struct FUWorksAnnexCoreRemoteStorage
{
};

struct FUWorksAnnexCoreScreenshots
{
};

struct FUWorksAnnexCoreUGC
{
};

struct FUWorksAnnexCoreUser
{
};

struct FUWorksAnnexCoreUserStats
{
};

struct FUWorksAnnexCoreUtils
{
};

#endif
