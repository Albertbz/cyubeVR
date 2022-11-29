#ifndef UE4SS_SDK_UWorksUtilities_HPP
#define UE4SS_SDK_UWorksUtilities_HPP

class UUWorksLibrary : public UUWorks
{
};

class UUWorksLibraryConversions : public UUWorksLibrary
{

    FString GetCurrentProcessId();
    TArray<uint8> ConvertStringToBytes(FString Data);
    FString ConvertBytesToString(TArray<uint8> Data);
};

class UUWorksLibraryGameID : public UUWorksLibrary
{

    void SetIdentifier(FUWorksGameID& GameID, FString Identifier);
    void Reset(FUWorksGameID& GameID);
    bool IsValid(FUWorksGameID GameID);
    bool IsSteamApp(FUWorksGameID GameID);
    bool IsShortcut(FUWorksGameID GameID);
    bool IsP2PFile(FUWorksGameID GameID);
    bool IsMod(FUWorksGameID GameID);
    bool IsIdenticalWith(FUWorksGameID A, FUWorksGameID B);
    int32 GetModID(FUWorksGameID GameID);
    FString GetIdentifier(FUWorksGameID GameID);
    int32 GetAppID(FUWorksGameID GameID);
    FUWorksGameID ConstructFromParametersC(int32 AppID, int32 ModID);
    FUWorksGameID ConstructFromParametersB(int32 AppID);
    FUWorksGameID ConstructFromParametersA(FString Identifier);
};

class UUWorksLibraryLex : public UUWorksLibrary
{

    FUWorksUGCUpdateHandle WriteUGCUpdateHandle(FString Value);
    FUWorksUGCQueryHandle WriteUGCQueryHandle(FString Value);
    FUWorksUGCHandle WriteUGCHandle(FString Value);
    FUWorksUGCFileWriteStreamHandle WriteUGCFileWriteStreamHandle(FString Value);
    FUWorksTicketHandle WriteTicketHandle(FString Value);
    FUWorksSteamUser WriteSteamUser(FString Value);
    FUWorksSteamPipe WriteSteamPipe(FString Value);
    FUWorksSteamLeaderboardEntries WriteSteamLeaderboardEntries(FString Value);
    FUWorksSteamLeaderboard WriteSteamLeaderboard(FString Value);
    FUWorksSteamInventoryResult WriteSteamInventoryResult(FString Value);
    FUWorksScreenshotHandle WriteScreenshotHandle(FString Value);
    FUWorksFriendsGroupID WriteFriendsGroupID(FString Value);
    FUWorksControllerHandle WriteControllerHandle(FString Value);
    FUWorksControllerDigitalActionHandle WriteControllerDigitalActionHandle(FString Value);
    FUWorksControllerAnalogActionHandle WriteControllerAnalogActionHandle(FString Value);
    FUWorksControllerActionSetHandle WriteControllerActionSetHandle(FString Value);
    FString ReadUGCUpdateHandle(FUWorksUGCUpdateHandle Value);
    FString ReadUGCQueryHandle(FUWorksUGCQueryHandle Value);
    FString ReadUGCHandle(FUWorksUGCHandle Value);
    FString ReadUGCFileWriteStreamHandle(FUWorksUGCFileWriteStreamHandle Value);
    FString ReadTicketHandle(FUWorksTicketHandle Value);
    FString ReadSteamUser(FUWorksSteamUser Value);
    FString ReadSteamPipe(FUWorksSteamPipe Value);
    FString ReadSteamLeaderboardEntries(FUWorksSteamLeaderboardEntries Value);
    FString ReadSteamLeaderboard(FUWorksSteamLeaderboard Value);
    FString ReadSteamInventoryResult(FUWorksSteamInventoryResult Value);
    FString ReadScreenshotHandle(FUWorksScreenshotHandle Value);
    FString ReadFriendsGroupID(FUWorksFriendsGroupID Value);
    FString ReadControllerHandle(FUWorksControllerHandle Value);
    FString ReadControllerDigitalActionHandle(FUWorksControllerDigitalActionHandle Value);
    FString ReadControllerAnalogActionHandle(FUWorksControllerAnalogActionHandle Value);
    FString ReadControllerActionSetHandle(FUWorksControllerActionSetHandle Value);
};

class UUWorksLibrarySteamID : public UUWorksLibrary
{

    void SetUniverse(FUWorksSteamID& SteamID, EUWorksUniverse Universe);
    void SetParametersC(FUWorksSteamID& SteamID, EUWorksUniverse Universe, EUWorksAccountType AccountType, FString AccountID, FString AccountInstance);
    void SetParametersB(FUWorksSteamID& SteamID, EUWorksUniverse Universe, EUWorksAccountType AccountType, FString AccountID);
    void SetParametersA(FUWorksSteamID& SteamID, EUWorksUniverse Universe, EUWorksAccountType AccountType, FString Identifier);
    void SetIdentifier(FUWorksSteamID& SteamID, FString Identifier);
    void SetAccountInstance(FUWorksSteamID& SteamID, FString AccountInstance);
    void SetAccountID(FUWorksSteamID& SteamID, FString AccountID);
    bool IsValid(FUWorksSteamID SteamID);
    bool IsPersistentGameServerAccount(FUWorksSteamID SteamID);
    bool IsLobby(FUWorksSteamID SteamID);
    bool IsIndividualAccount(FUWorksSteamID SteamID);
    bool IsIdenticalWith(FUWorksSteamID A, FUWorksSteamID B);
    bool IsGameServerAccount(FUWorksSteamID SteamID);
    bool IsContentServerAccount(FUWorksSteamID SteamID);
    bool IsConsoleUserAccount(FUWorksSteamID SteamID);
    bool IsClanAccount(FUWorksSteamID SteamID);
    bool IsChatAccount(FUWorksSteamID SteamID);
    bool IsBlankAnonAccount(FUWorksSteamID SteamID);
    bool IsAnonUserAccount(FUWorksSteamID SteamID);
    bool IsAnonGameServerAccount(FUWorksSteamID SteamID);
    bool IsAnonAccount(FUWorksSteamID SteamID);
    bool HasNoIndividualInstance(FUWorksSteamID SteamID);
    EUWorksUniverse GetUniverse(FUWorksSteamID SteamID);
    FString GetStaticAccountKey(FUWorksSteamID SteamID);
    FString GetIdentifier(FUWorksSteamID SteamID);
    EUWorksAccountType GetAccountType(FUWorksSteamID SteamID);
    FString GetAccountInstance(FUWorksSteamID SteamID);
    FString GetAccountID(FUWorksSteamID SteamID);
    void CreateBlankAnonUserLogon(FUWorksSteamID& SteamID, EUWorksUniverse Universe);
    void CreateBlankAnonLogon(FUWorksSteamID& SteamID, EUWorksUniverse Universe);
    FUWorksSteamID ConstructFromParametersC(EUWorksUniverse Universe, EUWorksAccountType AccountType, FString AccountID, FString AccountInstance);
    FUWorksSteamID ConstructFromParametersB(EUWorksUniverse Universe, EUWorksAccountType AccountType, FString AccountID);
    FUWorksSteamID ConstructFromParametersA(FString Identifier);
    void ClearIndividualInstance(FUWorksSteamID& SteamID);
    void Clear(FUWorksSteamID& SteamID);
};

class UUWorksLibraryTickets : public UUWorksLibrary
{
};

class UUWorksManager : public UUWorks
{
};

class UUWorksManagerNetwork : public UUWorksManager
{
    FUWorksManagerNetworkRefreshComplete RefreshComplete;
    void RefreshCompleteDelegate(FString AddressSteam, FString AddressExternal, FString AddressInternal, int32 Port);

    void Refresh();
    FString GetNetDriverClassName();
    class UUWorksManagerNetwork* GetManagerNetwork();
    void CreateSessionUWorks(FName SessionName, int32 NumPublicConnections, bool bIsLANMatch);
};

#endif
