#ifndef UE4SS_SDK_Party_HPP
#define UE4SS_SDK_Party_HPP

#include "Party_enums.hpp"

class UChatroom : public UObject
{
    FString CurrentChatRoomId;
    int32 MaxChatRoomRetries;
    int32 NumChatRoomRetries;

};

class USocialManager : public UObject
{
    TArray<class USocialToolkit*> SocialToolkits;
    class USocialDebugTools* SocialDebugTools;

};

class USocialParty : public UObject
{
    TSubclassOf<class APartyBeaconClient> ReservationBeaconClientClass;
    TSubclassOf<class ASpectatorBeaconClient> SpectatorBeaconClientClass;
    FUniqueNetIdRepl OwningLocalUserId;
    FUniqueNetIdRepl CurrentLeaderId;
    TMap<class FUniqueNetIdRepl, class UPartyMember*> PartyMembersById;
    bool bEnableAutomaticPartyRejoin;
    class APartyBeaconClient* ReservationBeaconClient;
    class ASpectatorBeaconClient* SpectatorBeaconClient;

};

class UPartyMember : public UObject
{
    class USocialUser* SocialUser;

};

class USocialToolkit : public UObject
{
    class USocialUser* LocalUser;
    TArray<class USocialUser*> AllUsers;
    class ULocalPlayer* LocalPlayerOwner;
    class USocialChatManager* SocialChatManager;

};

class USocialChatManager : public UObject
{
    TMap<class TWeakObjectPtr<USocialUser>, class USocialPrivateMessageChannel*> DirectChannelsByTargetUser;
    TMap<class FString, class USocialChatRoom*> ChatRoomsById;
    TMap<class FString, class USocialReadOnlyChatChannel*> ReadOnlyChannelsByDisplayName;
    bool bEnableChatSlashCommands;
    TMap<class FUniqueNetIdRepl, class USocialGroupChannel*> GroupChannels;

};

class USocialChatChannel : public UObject
{
};

class USocialChatRoom : public USocialChatChannel
{
};

class USocialDebugTools : public UObject
{
};

class USocialGroupChannel : public UObject
{
    class USocialUser* SocialUser;
    FUniqueNetIdRepl GroupId;
    FText DisplayName;
    TArray<class USocialUser*> Members;

};

class USocialPartyChatRoom : public USocialChatRoom
{
};

class USocialPrivateMessageChannel : public USocialChatChannel
{
    class USocialUser* TargetUser;

};

class USocialReadOnlyChatChannel : public USocialChatChannel
{
};

struct FSocialPlatformDescription
{
    FString Name;
    FString PlatformType;
    FName OnlineSubsystem;
    FString SessionType;
    FString ExternalAccountType;
    FString CrossplayPool;

};

class USocialSettings : public UObject
{
    TArray<FName> OssNamesWithEnvironmentIdPrefix;
    int32 DefaultMaxPartySize;
    bool bPreferPlatformInvites;
    bool bMustSendPrimaryInvites;
    bool bLeavePartyOnDisconnect;
    bool bSetDesiredPrivacyOnLocalPlayerBecomesLeader;
    float UserListAutoUpdateRate;
    int32 MinNicknameLength;
    int32 MaxNicknameLength;
    TArray<FSocialPlatformDescription> SocialPlatformDescriptions;

};

class USocialUser : public UObject
{
};

struct FOnlinePartyRepDataBase
{
};

struct FUserPlatform
{
    FSocialPlatformDescription PlatformDescription;

};

struct FPartyMemberRepData : public FOnlinePartyRepDataBase
{
    FUserPlatform Platform;
    FUniqueNetIdRepl PlatformUniqueId;
    FString PlatformSessionId;
    ECrossplayPreference CrossplayPreference;

};

struct FPartyPrivacySettings
{
    EPartyType PartyType;
    EPartyInviteRestriction PartyInviteRestriction;
    bool bOnlyLeaderFriendsCanJoin;

};

struct FPartyPlatformSessionInfo
{
    FString SessionType;
    FString SessionId;
    FUniqueNetIdRepl OwnerPrimaryId;

};

struct FSocialChatChannelConfig
{
    class USocialUser* SocialUser;
    TArray<class USocialChatChannel*> ListenChannels;

};

struct FPartyRepData : public FOnlinePartyRepDataBase
{
    FPartyPrivacySettings PrivacySettings;
    TArray<FPartyPlatformSessionInfo> PlatformSessions;

};

#endif
