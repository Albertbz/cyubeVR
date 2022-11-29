#ifndef UE4SS_SDK_SteamAudio_HPP
#define UE4SS_SDK_SteamAudio_HPP

#include "SteamAudio_enums.hpp"

class UPhononGeometryComponent : public USceneComponent
{
    bool ExportAllChildren;
    uint32 NumVertices;
    uint32 NumTriangles;

};

class UPhononMaterialComponent : public UActorComponent
{
    int32 MaterialIndex;
    EPhononMaterial MaterialPreset;
    float LowFreqAbsorption;
    float MidFreqAbsorption;
    float HighFreqAbsorption;
    float LowFreqTransmission;
    float MidFreqTransmission;
    float HighFreqTransmission;
    float Scattering;

};

class UPhononOcclusionSourceSettings : public UOcclusionPluginSourceSettingsBase
{
    EIplDirectOcclusionMode DirectOcclusionMode;
    EIplDirectOcclusionMethod DirectOcclusionMethod;
    float DirectOcclusionSourceRadius;
    bool DirectAttenuation;
    bool AirAbsorption;

};

class UPhononProbeComponent : public USceneComponent
{
    TArray<FVector> ProbeLocations;

};

struct FBakedDataInfo
{
    FName Name;
    int32 Size;

};

class APhononProbeVolume : public AVolume
{
    EPhononProbePlacementStrategy PlacementStrategy;
    float HorizontalSpacing;
    float HeightAboveFloor;
    int32 NumProbes;
    int32 ProbeDataSize;
    TArray<FBakedDataInfo> BakedDataInfo;
    class UPhononProbeComponent* PhononProbeComponent;
    FString ProbeBoxFileName;
    FString ProbeBatchFileName;

};

struct FSubmixEffectReverbPluginSettings
{
};

class USubmixEffectReverbPluginPreset : public USoundEffectSubmixPreset
{
    FSubmixEffectReverbPluginSettings Settings;

};

class UPhononReverbSourceSettings : public UReverbPluginSourceSettingsBase
{
    EIplSimulationType SourceReverbSimulationType;
    float SourceReverbContribution;

};

class UPhononSourceComponent : public USceneComponent
{
    float BakingRadius;
    FName UniqueIdentifier;

};

class UPhononSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase
{
    EIplSpatializationMethod SpatializationMethod;
    EIplHrtfInterpolationMethod HrtfInterpolationMethod;

};

class USteamAudioSettings : public UObject
{
    FSoftObjectPath OutputSubmix;
    EIplAudioEngine AudioEngine;
    EIplRayTracerType RayTracer;
    EIplConvolutionType ConvolutionType;
    bool ExportBSPGeometry;
    bool ExportLandscapeGeometry;
    EPhononMaterial StaticMeshMaterialPreset;
    float StaticMeshLowFreqAbsorption;
    float StaticMeshMidFreqAbsorption;
    float StaticMeshHighFreqAbsorption;
    float StaticMeshLowFreqTransmission;
    float StaticMeshMidFreqTransmission;
    float StaticMeshHighFreqTransmission;
    float StaticMeshScattering;
    EPhononMaterial BSPMaterialPreset;
    float BSPLowFreqAbsorption;
    float BSPMidFreqAbsorption;
    float BSPHighFreqAbsorption;
    float BSPLowFreqTransmission;
    float BSPMidFreqTransmission;
    float BSPHighFreqTransmission;
    float BSPScattering;
    EPhononMaterial LandscapeMaterialPreset;
    float LandscapeLowFreqAbsorption;
    float LandscapeMidFreqAbsorption;
    float LandscapeHighFreqAbsorption;
    float LandscapeLowFreqTransmission;
    float LandscapeMidFreqTransmission;
    float LandscapeHighFreqTransmission;
    float LandscapeScattering;
    int32 OcclusionSampleCount;
    EIplSimulationType ListenerReverbSimulationType;
    float ListenerReverbContribution;
    int32 IndirectImpulseResponseOrder;
    float IndirectImpulseResponseDuration;
    EIplSpatializationMethod IndirectSpatializationMethod;
    float IrradianceMinDistance;
    uint32 MaxSources;
    EQualitySettings RealtimeQualityPreset;
    int32 RealTimeCPUCoresPercentage;
    int32 RealtimeBounces;
    int32 RealtimeRays;
    int32 RealtimeSecondaryRays;
    EQualitySettings BakedQualityPreset;
    int32 BakingCPUCoresPercentage;
    int32 BakedBounces;
    int32 BakedRays;
    int32 BakedSecondaryRays;
    int32 MaxComputeUnits;
    float FractionComputeUnitsForIRUpdate;
    int32 TANIndirectImpulseResponseOrder;
    float TANIndirectImpulseResponseDuration;
    uint32 TANMaxSources;
    int32 RadeonRaysBakingBatchSize;

};

#endif
