#ifndef UE4SS_SDK_BhapticsPlugin_HPP
#define UE4SS_SDK_BhapticsPlugin_HPP

#include "BhapticsPlugin_enums.hpp"

class UBhapticsGameConfig : public UObject
{
    FSoftObjectPath Configuration;

};

struct FBhapticsDevice
{
    FString DeviceName;
    FString Address;
    int32 Position;
    bool Connected;
    bool Paired;
    int32 Battery;
    bool AudioJackIn;

};

struct FBhapticsRotationOption
{
    float OffsetAngleX;
    float OffsetY;

};

class UBhapticsSDK2 : public UBlueprintFunctionLibrary
{

    void SwapPosition(FBhapticsDevice device);
    bool StopHapticByRequestId(int32 requestID);
    bool StopHapticByEventId(FString EventId);
    bool StopHaptic();
    FBhapticsRotationOption ProjectToVestLocation(FVector ContactLocation, FVector PlayerLocation, FRotator PlayerRotation);
    FBhapticsRotationOption ProjectToVest(FVector ContactLocation, class UPrimitiveComponent* PlayerComponent, float HalfHeight);
    int32 PlayHapticWithOption(FString EventId, float Intensity, float Duration, float angleX, float OffsetY);
    int32 PlayHaptic(FString EventId);
    int32 PlayDot(int32 Position, TArray<int32> motorValues, float Seconds);
    void PingAll();
    void Ping(FBhapticsDevice device);
    bool IsPlayingByRequestId(int32 requestID);
    bool IsPlayingByEventId(FString EventId);
    bool IsPlaying();
    void Initialize();
    TArray<FBhapticsDevice> GetBhapticsDevices();
    void Destroy();
    FBhapticsRotationOption CustomProjectToVest(FVector ContactLocation, class UPrimitiveComponent* PlayerComponent, float HalfHeight, FVector UpVector, FVector ForwardVector);
};

struct FBhapticsMappingMetaData
{
    int32 DurationMillis;
    FString Key;
    FString Description;
    bool IsAudio;
    int64 UpdateTime;
    TArray<FString> Positions;

};

class UBhapticsSettings : public UObject
{
    FString AppName;
    FString AppID;
    FString ApiKey;
    int32 LastDeployVersion;
    TArray<FBhapticsMappingMetaData> EventList;
    FString DefaultConfig;

};

#endif
