#ifndef UE4SS_SDK_Qos_HPP
#define UE4SS_SDK_Qos_HPP

#include "Qos_enums.hpp"

class AQosBeaconClient : public AOnlineBeaconClient
{

    void ServerQosRequest(FString InSessionId);
    void ClientQosResponse(EQosResponseType Response);
};

class AQosBeaconHost : public AOnlineBeaconHostObject
{
};

struct FQosPingServerInfo
{
    FString Address;
    int32 Port;

};

struct FQosDatacenterInfo
{
    FString ID;
    FString RegionId;
    bool bEnabled;
    TArray<FQosPingServerInfo> Servers;

};

struct FDatacenterQosInstance
{
    FQosDatacenterInfo Definition;
    EQosDatacenterResult Result;
    int32 AvgPingMs;
    TArray<int32> PingResults;
    FDateTime LastCheckTimestamp;
    bool bUsable;

};

class UQosEvaluator : public UObject
{
    bool bInProgress;
    bool bCancelOperation;
    TArray<FDatacenterQosInstance> Datacenters;

};

struct FQosRegionInfo
{
    FText DisplayName;
    FString RegionId;
    bool bEnabled;
    bool bVisible;
    bool bAutoAssignable;

};

struct FRegionQosInstance
{
    FQosRegionInfo Definition;
    TArray<FDatacenterQosInstance> DatacenterOptions;

};

class UQosRegionManager : public UObject
{
    int32 NumTestsPerRegion;
    float PingTimeout;
    TArray<FQosRegionInfo> RegionDefinitions;
    TArray<FQosDatacenterInfo> DatacenterDefinitions;
    FDateTime LastCheckTimestamp;
    class UQosEvaluator* Evaluator;
    EQosCompletionResult QosEvalResult;
    TArray<FRegionQosInstance> RegionOptions;
    FString ForceRegionId;
    bool bRegionForcedViaCommandline;
    FString SelectedRegionId;

};

#endif
