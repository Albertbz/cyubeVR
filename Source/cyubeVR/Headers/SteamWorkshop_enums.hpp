enum class ESteamItemVisibility {
    SIV_Public = 0,
    SIV_FriendsOnly = 1,
    SIV_Private = 2,
    SIV_MAX = 3,
};

enum class EVoteType {
    VT_Skipped = 0,
    VT_Up = 1,
    VT_Down = 2,
    VT_MAX = 3,
};

enum class EItemPreviewTypeBP {
    PT_Image = 0,
    PT_YouTubeVideo = 1,
    PT_Sketchfab = 2,
    PT_EnvironmentMap_HorizontalCross = 3,
    PT_EnvironmentMap_LatLong = 4,
    PT_ReservedMax = 255,
    PT_MAX = 256,
};

enum class EWorkshopFileTypeBP {
    WFT_First = 0,
    WFT_Community = 0,
    WFT_Microtransaction = 1,
    WFT_Collection = 2,
    WFT_Art = 3,
    WFT_Video = 4,
    WFT_Screenshot = 5,
    WFT_Game = 6,
    WFT_Software = 7,
    WFT_Concept = 8,
    WFT_WebGuide = 9,
    WFT_IntegratedGuide = 10,
    WFT_Merch = 11,
    WFT_ControllerBinding = 12,
    WFT_SteamworksAccessInvite = 13,
    WFT_SteamVideo = 14,
    WFT_GameManagedItem = 15,
    WFT_Max = 16,
};

enum class EUGCMatchingUGCTypeBP {
    T_Items = 0,
    T_Items_Mtx = 1,
    T_Items_ReadyToUse = 2,
    T_Collections = 3,
    T_Artwork = 4,
    T_Videos = 5,
    T_Screenshots = 6,
    T_AllGuides = 7,
    T_WebGuides = 8,
    T_IntegratedGuides = 9,
    T_UsableInGame = 10,
    T_ControllerBindings = 11,
    T_GameManagedItems = 12,
    T_All = 255,
    T_MAX = 256,
};

enum class EUGCQueryBP {
    UQ_RankedByVote = 0,
    UQ_RankedByPublicationDate = 1,
    UQ_AcceptedForGameRankedByAcceptanceDate = 2,
    UQ_RankedByTrend = 3,
    UQ_FavoritedByFriendsRankedByPublicationDate = 4,
    UQ_CreatedByFriendsRankedByPublicationDate = 5,
    UQ_RankedByNumTimesReported = 6,
    UQ_CreatedByFollowedUsersRankedByPublicationDate = 7,
    UQ_NotYetRated = 8,
    UQ_RankedByTotalVotesAsc = 9,
    UQ_RankedByVotesUp = 10,
    UQ_RankedByTextSearch = 11,
    UQ_RankedByTotalUniqueSubscriptions = 12,
    UQ_RankedByPlaytimeTrend = 13,
    UQ_RankedByTotalPlaytime = 14,
    UQ_RankedByAveragePlaytimeTrend = 15,
    UQ_RankedByLifetimeAveragePlaytime = 16,
    UQ_RankedByPlaytimeSessionsTrend = 17,
    UQ_RankedByLifetimePlaytimeSessions = 18,
    UQ_MAX = 19,
};

enum class EUserUGCListSortOrderBP {
    SO_CreationOrderDesc = 0,
    SO_CreationOrderAsc = 1,
    SO_TitleAsc = 2,
    SO_LastUpdatedDesc = 3,
    SO_SubscriptionDateDesc = 4,
    SO_VoteScoreDesc = 5,
    SO_ForModeration = 6,
    SO_MAX = 7,
};

enum class EUserUGCListBP {
    L_Published = 0,
    L_VotedOn = 1,
    L_VotedUp = 2,
    L_VotedDown = 3,
    L_WillVoteLater = 4,
    L_Favorited = 5,
    L_Subscribed = 6,
    L_UsedOrPlayed = 7,
    L_Followed = 8,
    L_MAX = 9,
};

enum EItemStatisticBP {
    IStat_NumSubscriptions = 0,
    IStat_NumFavorites = 1,
    IStat_NumFollowers = 2,
    IStat_NumUniqueSubscriptions = 3,
    IStat_NumUniqueFavorites = 4,
    IStat_NumUniqueFollowers = 5,
    IStat_NumUniqueWebsiteViews = 6,
    IStat_ReportScore = 7,
    IStat_NumSecondsPlayed = 8,
    IStat_NumPlaytimeSessions = 9,
    IStat_NumComments = 10,
    IStat_NumSecondsPlayedDuringTimePeriod = 11,
    IStat_NumPlaytimeSessionsDuringTimePeriod = 12,
    IStat_MAX = 13,
};

enum class EItemUpdateStatusBP {
    US_Invalid = 0,
    US_PreparingConfig = 1,
    US_PreparingContent = 2,
    US_UploadingContent = 3,
    US_UploadingPreviewFile = 4,
    US_CommittingChanges = 5,
    US_MAX = 6,
};

enum class EItemStateBP {
    IS_None = 0,
    IS_Subscribed = 1,
    IS_LegacyItem = 2,
    IS_Installed = 4,
    IS_NeedsUpdate = 8,
    IS_Downloading = 16,
    IS_DownloadPending = 32,
    IS_MAX = 33,
};

