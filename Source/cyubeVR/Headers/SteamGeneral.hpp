#ifndef UE4SS_SDK_SteamGeneral_HPP
#define UE4SS_SDK_SteamGeneral_HPP

#include "SteamGeneral_enums.hpp"

struct FUInt64
{
    uint64 Value;

};

struct FSteamUGCItemId
{
    FUInt64 ID;

};

struct FSteamKeyValuePair
{
    FString Key;
    FString Value;

};

struct FSteamUGCQueryHandle
{
    FUInt64 Handle;

};

struct FUInt32
{
    uint32 Value;

};

struct FSteamAppId
{
    FUInt32 ID;

};

struct FSteamUGCHandle
{
    FUInt64 Handle;

};

struct FSteamDepotId
{
    FUInt32 ID;

};

struct FSteamUGCUpdateHandle
{
    FUInt64 Handle;

};

class USteamGeneralLibrary : public UBlueprintFunctionLibrary
{

    int32 Uint64Array_Remove(TArray<FUInt64>& Values, FUInt64 Value);
    int32 Uint64Array_Find(const TArray<FUInt64>& Values, FUInt64 Value);
    bool Uint64Array_Contains(const TArray<FUInt64>& Values, FUInt64 Value);
    int32 Uint64Array_AddUnique(TArray<FUInt64>& Values, FUInt64 Value);
    int32 Uint32Array_Remove(TArray<FUInt32>& Values, FUInt32 Value);
    int32 Uint32Array_Find(const TArray<FUInt32>& Values, FUInt32 Value);
    bool Uint32Array_Contains(const TArray<FUInt32>& Values, FUInt32 Value);
    int32 Uint32Array_AddUnique(TArray<FUInt32>& Values, FUInt32 Value);
    FString ToString_UInt64(const FUInt64& Value);
    FString ToString_UInt32(const FUInt32& Value);
    FString ToString_SteamItemId(const FSteamUGCItemId& ID);
    FString ToString_SteamDepotId(const FSteamDepotId& ID);
    FString ToString_SteamAppId(const FSteamAppId& ID);
    bool SteamUpdateHandle_IsValid(const FSteamUGCUpdateHandle& Handle);
    int32 SteamUGCItemIdArray_Remove(TArray<FSteamUGCItemId>& Values, FSteamUGCItemId Value);
    int32 SteamUGCItemIdArray_Find(const TArray<FSteamUGCItemId>& Values, FSteamUGCItemId Value);
    bool SteamUGCItemIdArray_Contains(const TArray<FSteamUGCItemId>& Values, FSteamUGCItemId Value);
    int32 SteamUGCItemIdArray_AddUnique(TArray<FSteamUGCItemId>& Values, FSteamUGCItemId Value);
    bool SteamUGCHandle_IsValid(const FSteamUGCHandle& Handle);
    bool SteamQueryHandle_IsValid(const FSteamUGCQueryHandle& Handle);
    EPersonaStateBP SteamGeneral_GetUserState();
    FString SteamGeneral_GetUserName();
    EPersonaStateBP SteamGeneral_GetFriendState(FUInt64 steamUserId);
    FString SteamGeneral_GetFriendName(FUInt64 steamUserId);
    bool SteamGeneral_ActivateGameOverlayToWebPage(FString webpage);
    int32 SteamDepotIdArray_Remove(TArray<FSteamDepotId>& Values, FSteamDepotId Value);
    int32 SteamDepotIdArray_Find(const TArray<FSteamDepotId>& Values, FSteamDepotId Value);
    bool SteamDepotIdArray_Contains(const TArray<FSteamDepotId>& Values, FSteamDepotId Value);
    int32 SteamDepotIdArray_AddUnique(TArray<FSteamDepotId>& Values, FSteamDepotId Value);
    bool SteamDelegate_OnGameOverlayActivated_Unbind(FSteamDelegate_OnGameOverlayActivated_UnbindDelegateToCall delegateToCall);
    bool SteamDelegate_OnGameOverlayActivated_Bind(FSteamDelegate_OnGameOverlayActivated_BindDelegateToCall delegateToCall);
    FString SteamConvertLanguageToLanguageCode(ESteamSupportedLanguages Language);
    int32 SteamAppIdArray_Remove(TArray<FSteamAppId>& Values, FSteamAppId Value);
    int32 SteamAppIdArray_Find(const TArray<FSteamAppId>& Values, FSteamAppId Value);
    bool SteamAppIdArray_Contains(const TArray<FSteamAppId>& Values, FSteamAppId Value);
    int32 SteamAppIdArray_AddUnique(TArray<FSteamAppId>& Values, FSteamAppId Value);
    bool NotEqual_UInt64(FUInt64 A, FUInt64 B);
    bool NotEqual_UInt32(FUInt32 A, FUInt32 B);
    bool NotEqual_SteamItemId(FSteamUGCItemId A, FSteamUGCItemId B);
    bool NotEqual_SteamDepotId(FSteamDepotId A, FSteamDepotId B);
    bool NotEqual_SteamAppId(FSteamAppId A, FSteamAppId B);
    bool IsSteamInitialized();
    FSteamAppId GetSteamAppId();
    FUInt64 FromString_UInt64(FString Value);
    FUInt32 FromString_UInt32(FString Value);
    bool Equal_UInt64(FUInt64 A, FUInt64 B);
    bool Equal_UInt32(FUInt32 A, FUInt32 B);
    bool Equal_SteamItemId(FSteamUGCItemId A, FSteamUGCItemId B);
    bool Equal_SteamDepotId(FSteamDepotId A, FSteamDepotId B);
    bool Equal_SteamAppId(FSteamAppId A, FSteamAppId B);
    bool BreakUInt64(const FUInt64& InVal, int32& OutVal);
    bool BreakUInt32(const FUInt32& InVal, int32& OutVal);
};

#endif
