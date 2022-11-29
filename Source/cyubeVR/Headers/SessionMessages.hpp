#ifndef UE4SS_SDK_SessionMessages_HPP
#define UE4SS_SDK_SessionMessages_HPP

struct FSessionServiceLogUnsubscribe
{
};

struct FSessionServiceLogSubscribe
{
};

struct FSessionServiceLog
{
    FName Category;
    FString Data;
    FGuid InstanceID;
    double TimeSeconds;
    uint8 Verbosity;

};

struct FSessionServicePong
{
    bool Authorized;
    FString BuildDate;
    FString DeviceName;
    FGuid InstanceID;
    FString InstanceName;
    FString PlatformName;
    FGuid SessionId;
    FString SessionName;
    FString SessionOwner;
    bool Standalone;

};

struct FSessionServicePing
{
    FString UserName;

};

#endif
