#ifndef UE4SS_SDK_Lobby_HPP
#define UE4SS_SDK_Lobby_HPP

#include "Lobby_enums.hpp"

class ALobbyBeaconClient : public AOnlineBeaconClient
{
    class ALobbyBeaconState* LobbyState;
    class ALobbyBeaconPlayerState* PlayerState;
    ELobbyBeaconJoinState LobbyJoinServerState;

    void ServerSetPartyOwner(const FUniqueNetIdRepl& InUniqueId, const FUniqueNetIdRepl& InPartyOwnerId);
    void ServerNotifyJoiningServer();
    void ServerLoginPlayer(FString InSessionId, const FUniqueNetIdRepl& InUniqueId, FString UrlString);
    void ServerKickPlayer(const FUniqueNetIdRepl& PlayerToKick, const FText& Reason);
    void ServerDisconnectFromLobby();
    void ServerCheat(FString Msg);
    void ClientWasKicked(const FText& KickReason);
    void ClientSetInviteFlags(const FJoinabilitySettings& Settings);
    void ClientPlayerLeft(const FUniqueNetIdRepl& InUniqueId);
    void ClientPlayerJoined(const FText& NewPlayerName, const FUniqueNetIdRepl& InUniqueId);
    void ClientLoginComplete(const FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful);
    void ClientJoinGame();
    void ClientAckJoiningServer();
};

class ALobbyBeaconHost : public AOnlineBeaconHostObject
{
    TSoftClassPtr<ALobbyBeaconState> LobbyStateClass;
    class ALobbyBeaconState* LobbyState;

};

class ALobbyBeaconPlayerState : public AInfo
{
    FText DisplayName;
    FUniqueNetIdRepl UniqueId;
    FUniqueNetIdRepl PartyOwnerUniqueId;
    bool bInLobby;
    class AOnlineBeaconClient* ClientActor;

    void OnRep_UniqueId();
    void OnRep_PartyOwner();
    void OnRep_InLobby();
};

struct FLobbyPlayerStateActorInfo : public FFastArraySerializerItem
{
    class ALobbyBeaconPlayerState* LobbyPlayerState;

};

struct FLobbyPlayerStateInfoArray : public FFastArraySerializer
{
    TArray<FLobbyPlayerStateActorInfo> Players;
    class ALobbyBeaconState* ParentState;

};

class ALobbyBeaconState : public AInfo
{
    int32 MaxPlayers;
    TSubclassOf<class ALobbyBeaconPlayerState> LobbyBeaconPlayerStateClass;
    bool bLobbyStarted;
    float WaitForPlayersTimeRemaining;
    FLobbyPlayerStateInfoArray Players;

    void OnRep_WaitForPlayersTimeRemaining();
    void OnRep_LobbyStarted();
};

#endif
