#ifndef UE4SS_SDK_cyubeVR_HPP
#define UE4SS_SDK_cyubeVR_HPP

#include "cyubeVR_enums.hpp"

class AAttachedRain : public AActor
{
    bool bTemporary;
    class USceneCaptureComponent* SceneCapture;
    TArray<class UAudioComponent*> RainAudioComponents;
    bool bHasAudio;
    float AudioDistance;
    int32 RowsX;
    int32 RowsY;

    void UpdateAudioLocations();
};

class AAudioManager : public AActor
{
    TArray<class USoundBase*> NatureSoundsDay;
    TArray<class USoundBase*> NatureSoundsNight;
    TArray<class USoundBase*> NatureSoundsDayDesert;
    TArray<class USoundBase*> NatureSoundsNightDesert;
    class USoundBase* BirdCue;
    class USoundClass* SoundClassDay;
    class USoundClass* SoundClassNight;
    class USoundClass* SoundClassMaster;
    float SnowVolumeMultiplier;
    float GeneralVolumeMultiplier;

};

class ABenchmarkActor : public AActor
{
    int32 AmountFramesWithWrongTime;

    bool WereSteamVRSettingsModified();
    void StoreExistingSteamVRSettings();
    void StopBenchmark();
    void StartBenchmark();
    void SetupChaperoneForBenchmark(bool Benchmark);
    void SetSteamVRSettingsModified(bool Modified);
    void SetSteamVRSettings(bool Edit1, bool Edit2, bool Edit3, bool Edit4, bool ManualSS, float SSValue, bool MotionSmoothing, int32 SSValuePerApp, bool ForceDisableAsync);
    void SetSSValue(int32& Result);
    void SetSSPerAppValue(int32& Result);
    void SetMotionSmoothing(bool Enabled);
    void SetForceDisableAsyncReproForApp();
    void SetAudioSetting(bool bValue);
    void SetAsyncRepro(bool Enabled, int32& Result);
    void RestoreSteamVRSettings();
    void IsSteamVRHMDValid(bool& ValidHMD);
    bool IsRenderingActiveEnough();
    void GetSystemInfo(FString& CPU, FString& GPU, int32& Cores, int32& Threads, FString& OSName, FString& DriverVersionName, int32& SystemMemory, int32& VideoMemory);
    void GetSteamVRSettings(bool& ReproCorrect, bool& SSCorrect, bool& SSCorrectPerApp, bool& DashboardCorrect, bool& MotionSmoothingCorrect);
    void GetRenderingResolution(int32& H, int32& W);
    void GetHMDModelData(FString& ModelName, FString& ManufacturerName, float& DisplayFrequency, float& HorizontalFOVPerEye, float& VerticalFOVPerEye, FString& SteamVRVersion);
    void GetGPUName(FString& GPU);
    void GetFPS(float& FPS, float& FrametimeMS);
    void GetBenchmarkResults(float& AverageFPS, float& AverageFrametime, float& Low1Percent, float& Low001Percent, bool& ActiveRendering);
    bool GetAudioSetting();
    void EncodeScoreDetails(TArray<int32>& DetailsArray, FString CPUName, FString HeadsetName, FString GPUName, bool ShowName, int32 ResX, int32 ResY, int32 Version);
    void DisableMinimizeButton();
    void DecodeScoreDetails(TArray<int32> DetailsArray, FString& GPU, FString& CPU, FString& HeadsetName, bool& ShowName, int32& ResX, int32& ResY);
    void CopyToClipboardForReddit(FString FPS, FString FPSAverageNoFormatting, FString FPS1Low, FString FPS03Low, FString HMDName, FString res, FString RefreshRate, FString HorizontalFOV, FString VerticalFOV, FString RenderedPPD, FString GPU, FString GPUMemory, FString GPUDriver, FString CPU, FString CoresThreads, FString RAM, FString Windows, FString SteamVR, FString OpenVRBenchmark);
    void BenchmarkFinishedEvent();
    void ApplyAudioSetting();
};

class ABenchmarkLeaderboardManager : public AActor
{
};

struct FEntryData
{
    FString Rank;
    FString RankSameHeadset;
    FString RankSameGPU;
    FString RankSameHeadsetAndGPU;
    FString score;
    int32 ScoreOriginal;
    FString GPU;
    FString CPU;
    FString HeadsetName;
    FString UserName;
    FString res;
    int32 ResOriginalX;
    int32 ResOriginalY;
    bool IsCurrentUser;

};

class UBenchmarkLeaderboardsCPP : public UUserWidget
{
    class UScrollBox* ScrollBox_Entries;
    TSubclassOf<class UUserWidget> EntryWidgetClass;
    TArray<class ULeaderboardEntryCPP*> FakeEntryList;
    int32 ArraySetting;

    void UpdateFakeList(int32 Offset, int32& AmountToShow);
    void SetShowNameOwnResult(bool ShowName);
    void PopulateScrollBox(class UGameInstance* GameInstance, const FUWorksSteamLeaderboardEntries& Entries, int32 EntryCount, FString CurrentHeadsetName, FString CurrentGPUName, int32 CurrentResX, int32 CurrentResY, int32 ActualResultThisRun);
    void OpenSteamOverlayToDLC(int32 AppID);
    bool GetOwnEntryResultData(FEntryData& OwnResultEntryData);
    void GetAverageDeviation(float& Difference);
    void DeleteOwnEntryResult();
};

class AReceiveLightActor : public AActor
{
    bool InitLightImmediate;
    bool bUseLightAroundValue;
    TArray<class UMeshComponent*> LightReceiveMeshes;

    bool UseLightAroundValue();
    void SetLightReceiveMeshes(TArray<class UMeshComponent*> NewMeshes);
    FVector ManualTickLight(class UMaterialInstanceDynamic* DynamicMaterial);
    TArray<class UMeshComponent*> GetMeshComponents();
};

class ABlockItem : public AReceiveLightActor
{
    EBlockTypeBP BlockType;
    int32 UniqueId;
    FColor CrystalColor;
    float ChargeState;
    float LastRechargeTime;
    bool bOnFire;
    float Health;
    float MeltAmount;
    bool bLoadedScale;
    EBlockTypeBP CurrentResult;
    TArray<class ABlockItem*> AttachedItemsC;
    class UBoxComponent* BoxCollision;
    TArray<class UTextRenderComponent*> TextAmounts;
    bool IsChestItem;
    bool bSpecialCosmeticItem;
    class UMaterialInstanceDynamic* CrystalMaterial;
    class UParticleSystemComponent* ChargingParticleSystem;
    FString Debug_LastPhysicsEnableFrom;
    float Debug_LastPhysicsEnableFromTime;

    void WriteLastRecipeToDisk();
    void UpdateItemType(EBlockTypeBP NewType, int32 NewUniqueID, class AChunkManager* ChunkManager);
    void SetDebugLastPhysicsEnable(FString Reason);
    void SetCrystalProperties();
    void ResetToPoolBP();
    void RemoveFromOverlap();
    float GetHealthReduceOnFire();
    void FullyChargedNow();
    void FullUpdate(int32 Amount, EBlockTypeBP NewType, int32 NewUniqueID, bool DirectFromLoad);
    void DestroyToPool(FString FunctionName);
    void CheckRemove(class ABlockItem* RemovedItem, TArray<class ABlockItem*>& NeedRemoveToo, bool& AllowRemove);
    void CheckItems(bool& success, EBlockTypeBP& Result, int32& Amount, int32& OutUniqueID);
    bool CanBeLitOnFire();
    void AllowRelease(bool& Allow);
};

class ACaptureActor : public AActor
{
    class USceneCaptureComponent2D* Source;
    int32 SizeX;
    int32 SizeY;

    void StartCapture();
    void EndCapture();
};

class AMeshObject : public AReceiveLightActor
{
    EBlockTypeBP Type;
    float Life;
    bool Destroyed;
    bool bDoInstantDestroy;
    class UBoxComponent* OverlapBoundingBox;
    TArray<class UStaticMeshComponent*> PreviewMaterialIgnoreComponents;

    void SetReadyForSaving();
    void SetPreviewValid(bool IsValid);
    void SetIsPreview(bool IsPreview);
    void MarkForSave();
    void DestroyMeshObject();
    void DestroyEvent();
    void DamageMeshObject(float Damage, bool& Destroyed_);
    bool CanDamageObject();
};

class AChest : public AMeshObject
{
    class AChestInternals* ChestInternals;

    bool UseActorCustomLocation();
    void SetChestRotation(FRotator rot);
    FRotator GetChestRotation();
    FVector GetActorCustomLocation();
};

struct FStorageItem
{
    EBlockTypeBP Type;
    uint8 Amount;
    FColor CrystalColor;
    float ChargeState;

};

class AStorage : public AActor
{
    TArray<FStorageItem> items;
    TArray<int32> UniqueIDs;
    int32 SlotLimit;
    bool bAllowShrinkOnLoad;

    bool TryToShrink();
    bool IsItemStackable(EBlockTypeBP Item);
    bool IsItemPlacable(EBlockTypeBP Item);
    bool IsFullyEmpty();
    EItemClass GetItemClass(EBlockTypeBP Item);
    int32 GetAmountAtIndex(int32 Index);
    int32 GetAmount(EBlockTypeBP Item, int32 UniqueId);
    int32 FindFittingIndex(EBlockTypeBP ToAdd, int32 Amount, int32 UniqueId);
    int32 FindAmountFree(EBlockTypeBP ToAdd, int32 UniqueId);
    void AddItemToSlotFromOtherChest(int32 ToIndex, int32 FromChestIndex, EBlockTypeBP Type, class AChestInternals* OtherChest, bool& success);
    bool AddItem(int32& Index, EBlockTypeBP ToAdd, int32 UniqueId, FColor CrystalColor, float ChargeState);
};

class AChestInternals : public AStorage
{
    bool Initialized;

    void UpdateVisualsEvent(bool MarkForSave);
    void RemoveSingleItemFromSlot(int32 FromIndex, bool& success);
    void InitializeChestInternals(class AInventory* Inventory_, class AChest* ParentChest_);
    void AddItemToSlot(EBlockTypeBP ToAdd, int32 ToAddID, float ToAddChargeState, FColor ToAddCrystalColor, int32 Amount, int32 ToIndex, int32 FromInventoryIndex, bool& success);
};

struct FChunkAboutBP
{
    int32 ChunkID;
    int32 LevelLOD;
    int32 LocationX;
    int32 LocationY;
    float SpawnTime;

};

struct FBlockInfoBP
{
    FChunkAboutBP ChunkAbout;
    int32 X;
    int32 Y;
    int32 Z;

};

struct FModifiedBlockActorToSpawn
{
    EBlockTypeBP BlockType;
    int32 UniqueId;
    FVector Location;
    FBlockInfoBP BlockInfo;
    float Damage;
    bool IsForMove;

};

struct FUID
{
};

class AChunkManager : public AActor
{
    bool ForceKnucklesControls;
    TArray<class ABlockItem*> BlockItemPool;
    bool InitialLoadFinished;
    int32 ViewDistanceByINI;
    bool DoAnything;
    bool DevMode;
    bool DevModeLoadWorld;
    bool BenchmarkDevMode;
    int32 N_Type;
    int32 N_Octaves;
    float N_Frequency;
    float N_Lacunarity;
    float N_Gain;
    float N_Scale;
    int32 N_Interp;
    int32 N_FracType;
    int32 N_Seed;
    FString N_Seed_String;
    UClass* DeerClass;
    UClass* RabbitClass;
    UClass* MonitorLizardClass;
    UClass* GeckoClass;
    UClass* TorchClass;
    UClass* TorchStandingClass;
    UClass* TorchRespawnClass;
    UClass* DeathBeaconClass;
    UClass* BlockItemBPClass;
    UClass* TreeBPClass;
    UClass* CactusBPClass;
    UClass* DesertGrassBPClass;
    UClass* LogBPClass;
    UClass* ModifiedBlockActorBPClass;
    class UMaterialParameterCollection* FogParameters;
    class UParticleSystem* TreeEmitter;
    UClass* CustomAudioComponentClass;
    UClass* EasterEggClass;
    class AActor* SphereActor;
    class ATreeManager* TreeManager;
    class AActor* WorldTrackingActor;
    class AActor* NavMeshBoundsVolume;
    TMap<class EBlockTypeBP, class EBlockTypeBP> ItemToSpawn;
    TMap<EBlockTypeBP, int32> AmountToSpawn;
    TMap<class EBlockTypeBP, class USoundBase*> MiningHitSound;
    TMap<class EBlockTypeBP, class USoundBase*> MiningEndSound;
    TMap<class EBlockTypeBP, class USoundBase*> BlockSpawnSound;
    TMap<class EBlockTypeBP, class UClass*> MeshObjectsTypeToClass;
    float SkyTime;
    bool SkyIsDay;
    bool RecordingDevMode;
    class UMaterialParameterCollection* FogParameter;
    bool PlayerNeedsPositionUpdateAfterLoad;
    class AInventory* Inventory;
    class ADirectionalLight* Sun;
    class AAudioManager* AudioManager;
    class AWeatherManager* WeatherManager;
    class UTexture2D* ViewDistanceLUT;
    class UDataTable* TableMiningDamage;
    class UDataTable* TableMiningAmount;
    class UDataTable* TableMiningParticle;
    class UDataTable* TableMiningParticleHold;
    class UDataTable* TableMiningSound;
    class UDataTable* TableHitSoundHard;
    class UDataTable* TableHitSoundLight;
    TArray<EBlockTypeBP> RecipeUnlockOrder;
    class UStaticMesh* FoliageGrassMesh;
    class UStaticMesh* FoliageLeavesMesh;
    class UStaticMesh* BirdMesh;
    class UMaterialInterface* ChunkMatRegular;
    class UMaterialInterface* ChunkMatGlass;
    class UMaterialInterface* ChunkMatWaterRegular;
    class UMaterialInterface* GrassMaterial;
    class UMaterialInterface* MeshObjectPreviewMaterial;
    class UMaterialInterface* ChunkMatLODRegular;
    class UMaterialInterface* ChunkMatLODFade;
    class UMaterialInterface* ChunkMatLODWRegular;
    class UMaterialInterface* ChunkMatLODWRegularFar;
    class UMaterialInterface* ChunkMatLODWFade;

    void UpdateSkyEvent(float NewTimeOfDay);
    void UpdateLightValueForActorImmediateGT(class AActor* Actor);
    void UpdateHandLocationVariables(FVector HandLocationLeft_, FVector HandLocationRight_, FVector IndexFingerTipLocationLeft_, FVector IndexFingerTipLocationRight_);
    void UnlockedDraftNew(class ADraftUnlockingPaper* UnlockedActor);
    void TestFunction();
    void TeleportedPlayer();
    void SpawnNewBlockItem(EBlockTypeBP Type, int32 UniqueId, FTransform Transform, int32 Amount, bool bDoFadeScale, FColor CrystalColor, float CrystalChargeState, bool bActivatePhysics);
    TArray<class AModifiedBlockActor*> SpawnModifiedBlockActorsAndInit(const TArray<FModifiedBlockActorToSpawn>& SpawnInfos, EBlockTypeBP ToolType);
    void SpawnHintText(const FVector& LocalLocation, FString Text, const float& Duration, const FVector& SizeMultiplier, const float& SizeMultiplierVertical, const float& FontSizeMultiplier, const FUID& UID);
    void SpawnedHintText(class AActor* NewHintText, const FUID& UID);
    class ADraftUnlockingPaper* SpawnDraftUnlocker(FVector Location, EBlockTypeBP Type);
    class ADeathBeacon* SpawnDeathBeacon(FVector WorldLocation, bool FirstSpawn);
    void SpawnBPModActor(const FTransform& Transform, FString ModName, FString ActorName);
    void SpawnBlockItem(EBlockTypeBP Type, int32 UniqueId, FVector WorldLocation, FRotator WorldRotation);
    bool ShouldCharacterFall(FVector FloorLocation);
    void SetDevRecordingMode();
    void SetBlockItemsNeedToOverlapHand(bool bNeedToOverlap);
    void RemoveTreeAtLocation(const FVector WorldLocation, ETreeType Type, class AActor* Tree, bool& Valid);
    void RemoveLoadingScreenSoon();
    void RemoveDeathBeaconAtLocation(FVector WorldLocation);
    void RemoveBlockFinal(FBlockInfoBP BlockInfo, bool& AboveRemoved, FVector& AboveLocation, EBlockTypeBP& Type);
    void RemoveBlockAtLocation(const FVector Location, EBlockTypeBP& Type, int32& UniqueId, bool& Valid, FBlockInfoBP& BlockInfo, class AModifiedBlockActor*& ExistingModifiedBlockActor);
    void RemoveAllBirds();
    void RegisterMeshObject(EBlockTypeBP Type, class AMeshObject* MeshObject, bool& success);
    FIntVector RealWorldToAbsoluteWorldInt(FVector RealWorld);
    void PrintToLogBP(FString Text);
    bool MovePlayerToStartLocation(FVector Location);
    void MovePlayerToRespawnLocation(FVector CameraOffset, bool& FoundRespawnTorch);
    bool IsWaitingForNewOrigin();
    bool IsTorchType(EBlockTypeBP Type);
    void IsToolCausingAreaDamage(EBlockTypeBP Type, bool& AreaDamage);
    bool IsRespawnTorchActive(FVector WorldLocation);
    bool IsRecipeUnlocked(EBlockTypeBP Type);
    bool IsFoliageType(EBlockTypeBP Type);
    void IsFirstWorldLoad(bool& _DevMode, bool& _DevModeLoadWorld);
    bool IsDyeType(EBlockTypeBP Type);
    bool IsCloakedTorchType(EBlockTypeBP Type);
    void InitializeVoxelAPI();
    void HitBlockWithArrow(const FVector Location, EBlockTypeBP& HitType, bool& Valid);
    void HintTextDespawning(const FUID& HintText);
    void HaveUnlockedAllRecipes();
    void GetWorldSomething();
    void GetTreeClass(ETreeType Type, ETreeClass& ItemClass);
    EBlockTypeBP GetTorchForDye(EBlockTypeBP OldTorchType, EBlockTypeBP DyeType);
    FColor GetTorchColor(EBlockTypeBP Type);
    void GetTextureIndexStatic(const EBlockTypeBP Type, int32 UniqueId, SideBP Side, float& Index);
    void GetTextureIndex(const EBlockTypeBP Type, int32 UniqueId, SideBP Side, float& Index);
    FVector GetPlayerCameraDirection();
    void GetNewBlockItem(FTransform NewTransform, class ABlockItem*& NewBlockItem, bool ActivatePhysics);
    class USoundBase* GetMiningSoundForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool& Result);
    class UParticleSystem* GetMiningParticleHoldForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool& Result);
    class UParticleSystem* GetMiningParticleForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool& Result);
    void GetMiningDamageForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool& Result, float& Damage);
    void GetMiningAmountForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool& Result, float& AmountFloat, int32& AmountRound);
    void GetMeshObjectType(EBlockTypeBP Type, EMeshObjectType& MeshObjectType);
    void GetItemClass(EBlockTypeBP Type, EItemClass& ItemClass, bool& CanExistAsItem);
    bool GetIsPlayerInCave();
    class USoundBase* GetHitSoundForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool HardHit, bool& Result);
    EFootstepType GetFootstepSoundType(EBlockTypeBP BlockType, int32 UniqueId);
    EBlockTypeBP GetDyeForFlower(EBlockTypeBP Type);
    void GetDevModeBP(bool& _DevMode, bool& _DevModeLoadWorld);
    void GetChunkWorldFormatAtLocation(const FVector& Location, int32& ChunkWorldFormat, int32& ChunkID);
    void GetBlockBelowPlayer(FVector CameraLocation, EBlockTypeBP& BlockType, int32& UniqueId);
    void GetBlockAtLocation(FVector Location, EBlockTypeBP& Type, int32& UniqueId, FChunkAboutBP& Chunk);
    void GetBiomeAtLocation(FVector Location, EBiome& BiomeType, FChunkAboutBP& Chunk);
    FIntVector GetAbsolutePlayerCameraLocation();
    void FindExistingWorldData(TArray<FString>& Names, TArray<int32>& Seeds, bool& success);
    float FindDistanceToClosestBlock(FVector Location);
    void EndWorld();
    bool DoesRespawnTorchExist(int32& Amount);
    bool DidAlreadyCollectEasterEggAtLocation(FVector Location);
    void DestroyBlockItem(class ABlockItem* BlockItem, FString FunctionName);
    bool DeleteWorld(FString WorldName);
    void DeleteAllFreeCrystals();
    void DamageBlockAtLocation(const FVector Location, const float Damage, const EBlockTypeBP ToolType, EBlockTypeBP& Type, int32& UniqueId, bool& Valid, bool& NeedSpawnBlockActor, class AModifiedBlockActor*& ExistingModifiedBlockActor, FBlockInfoBP& BlockInfo);
    void CollectEasterEggAtLocation(FVector Location);
    float CheckLoadingPercentage();
    void CheckItemNotPartOfBlockItemPool(const class ABlockItem* BlockItem);
    void ChangeTorchColorAtLocation(FVector Location, EBlockTypeBP NewTorchType);
    void CanStandAtLocation(FVector Location, bool& CanStand);
    void CanSmoothLocoToLocation(FVector Location, bool& CanStand);
    void CanMoveBlockAtLocation(FVector Location, bool& CanMove);
    bool CanModifyChunkAt(FVector Location);
    void CanBuildAtLocation(FVector Location, bool NoSolidIsFine, bool& CanBuild);
    void BlockMoveStarted(FVector Location, EBlockTypeBP Type, int32 UniqueId);
    void BlockHealthyAgain(FBlockInfoBP BlockInfo);
    void BlockAtLocationHitByTool(const FVector Location, const EBlockTypeBP ToolType, const EBlockTypeBP BlockType, const int32 UniqueId, const FVector ExactHitLocation, bool LeftHand);
    void AreaDamageAtLocation(const FVector Location, const float Damage, EBlockTypeBP ToolType, TArray<FModifiedBlockActorToSpawn>& ModifiedBlockActorsToSpawn);
    void AddWorldOrigin(FIntVector Location);
    class AMeshObject* AddMeshObjectAtLocation(EBlockTypeBP Type, UClass* Class, FTransform WorldTransform, bool& success);
    void AddBlockAtLocation(EBlockTypeBP Type, int32 UniqueId, FVector Location, ERotation Rotation, float DuplicationAmount, bool& success, EBlockTypeBP& PlacedOn, bool AfterMove);
    void ActivateRespawnTorch(FVector WorldLocation);
    FVector AbsoluteWorldToRealWorld(FIntVector AbsoluteWorld);
};

class AChunkRenderManager : public AActor
{
};

class ACraftDraftVisualizer : public AActor
{

    void GetDraft(EBlockTypeBP Type, int32& SizeX, int32& SizeY, int32& SizeZ, int32& TotalSize, int32& ItemAmount, TArray<EBlockTypeBP>& Data);
};

struct FCustomBlockInfoForBP
{
    int32 UniqueId;
    FString Name;
    class UTexture2D* RecipePreviewTexture;
    FString CreatorName;
    FString CategoryName;

};

class UCraftingListParent : public UUserWidget
{

    void GetDraftsMod(TArray<FCustomBlockInfoForBP>& DraftsInfoArray);
    void GetDrafts(TArray<EBlockTypeBP>& DraftsArray);
    TMap<EBlockTypeBP, int32> GetDraftAmounts(EBlockTypeBP Type, int32 UniqueId);
};

struct FBenchmarkResults
{
    float AverageFPS;
    float AverageFrametime;
    float Low1Percent;
    float Low01Percent;
    bool ActiveRendering;

};

class UCubeGameInstance : public UGameInstance
{
    bool LoadExistingWorld;
    FString WorldName;
    class USoundBase* LoadingScreenMusic;
    class UAudioComponent* LoadingScreenMusicComponent;
    class UCustomBlockManager* CBM;
    float STAT_TotalPlaytimeHours;
    float STAT_PlaytimeMinutesThisSession;
    bool bDoLaterCBMInit;
    bool AccurateSettings;
    class UTexture2DArray* TextureArrayMain;
    class UTexture2DArray* TextureArrayNormal;
    class UTexture2DArray* TextureArraySnowMask;
    class UTexture2DArray* TextureArrayEmissive;
    class UTexture2D* EmptyNormalTexture;
    class UTexture2D* EmptyEmissiveTexture;
    class UTexture2D* TestTexture;
    class UTextureRenderTarget2D* LUT;
    class UMaterialParameterCollection* MPC;
    TArray<FString> DefaultRecommendedWorkshopItems;

    void UpdateTextureArrays();
    void UpdateMPC(float Value);
    void UpdateArraySize(class UTexture2DArray* ArrayToResize, int32 NumSlices);
    void TestCopyTextureArray(class UTexture2DArray* TextureArray);
    void TestCopyTexture2(class UTexture2D* Texture, class UTexture2D* TextureNew);
    void TestCopyTexture(class UTexture2D* Texture);
    void StopLoadingVideo();
    void StopLoadingScreenMusic();
    void StartLoadingScreenMusic();
    void SetupWorldLoad(bool LoadExistingWorld_, FString WorldName_, FString NewSeed_, TArray<FString> WorldNames, TArray<int32> WorldSeeds);
    void RenderCustomBlockLUT();
    void ReloadMainMenuModules();
    void LaterCBMInit();
    void KillPIDs();
    void GetBenchmarkResults(FBenchmarkResults& Results, bool& Valid);
    void CopyTextureToArraySlice(class UTexture2DArray* DestArray, int32 DestSlice, class UTexture2D* SourceTexture);
    void AddTextureToTextureArray(class UTexture2DArray* TargetArray, class UTexture2DArray* SourceArray);
};

class ACubeGameMode : public AGameModeBase
{
};

class ACubeGameState : public AGameStateBase
{
    class AChunkManager* ChunkManager;
    TMap<class FString, class UTexture2D*> AlreadyLoadedTextures;

};

class ACubePlayerController : public APlayerController
{
    int32 STAT_BlocksDestroyed;
    int32 STAT_BlocksDestroyedInLast10Minutes;
    int32 STAT_BlocksDestroyedInLast10MinutesBest;
    bool bUnrealisticCameraHeight;

    void IncrementBlocksDestroyed(int32 Increment, EBlockTypeBP Type);
};

class UCustomAudioComponent : public UAudioComponent
{
};

struct FCustomBlockData
{
    class UTexture2D* TextureAll;
    class UTexture2D* TextureSides;
    class UTexture2D* TextureUpDown;
    class UTexture2D* TextureUp;
    class UTexture2D* TextureDown;
    class UTexture2D* TextureLeft;
    class UTexture2D* TextureRight;
    class UTexture2D* TextureFront;
    class UTexture2D* TextureBack;
    class UTexture2D* Snow_TextureAll;
    class UTexture2D* Snow_TextureSides;
    class UTexture2D* Snow_TextureUpDown;
    class UTexture2D* Snow_TextureUp;
    class UTexture2D* Snow_TextureDown;
    class UTexture2D* Snow_TextureLeft;
    class UTexture2D* Snow_TextureRight;
    class UTexture2D* Snow_TextureFront;
    class UTexture2D* Snow_TextureBack;
    class UTexture2D* Normal_TextureAll;
    class UTexture2D* Normal_TextureSides;
    class UTexture2D* Normal_TextureUpDown;
    class UTexture2D* Normal_TextureUp;
    class UTexture2D* Normal_TextureDown;
    class UTexture2D* Normal_TextureLeft;
    class UTexture2D* Normal_TextureRight;
    class UTexture2D* Normal_TextureFront;
    class UTexture2D* Normal_TextureBack;
    class UTexture2D* Emissive_TextureAll;
    class UTexture2D* Emissive_TextureSides;
    class UTexture2D* Emissive_TextureUpDown;
    class UTexture2D* Emissive_TextureUp;
    class UTexture2D* Emissive_TextureDown;
    class UTexture2D* Emissive_TextureLeft;
    class UTexture2D* Emissive_TextureRight;
    class UTexture2D* Emissive_TextureFront;
    class UTexture2D* Emissive_TextureBack;
    class UTexture2D* RecipePreviewTexture;

};

class UCustomBlockManager : public UObject
{
    TArray<FCustomBlockData> AllCustomBlocks;
    class UTexture2D* EmptyNormalTexture;
    class UTexture2D* EmptyEmissiveTexture;
    TSet<int32> ExistingIDs;

    class UTexture2D* LoadDDS(FString Filename, TEnumAsByte<EPixelFormat> PixelFormat, bool ConvertDXT5toDXT1);
    int32 GetTextureIndexForCustomBlock(int32 UniqueId, uint8 Side);
    void GetSpecialBlockInfo(TMap<int32, float>& AnimationSpeed, int32& NumTextures);
    EBlockTypeBP GetPropertyBlockForCustomBlock(int32 UniqueId);
    FString GetNameOfCustomBlock(int32 UniqueId);
    int32 GetCustomBlockUniqueIDToDrop(int32 UniqueId);
    bool GetCustomBlockAllowMove(int32 UniqueId);
    bool GetCustomBlockAllowCrystalPlacement(int32 UniqueId);
    void CopyTextureToArraySlice(class UTexture2DArray* DestArray, int32 DestSlice, class UTexture2D* SourceTexture);
};

class UCustomStereoLayerComponent : public UStereoLayerComponent
{
    bool DoDestroy;

    void UseOldLayerId();
    void MarkDirty();
    void ManualDestroy();
};

class ADeathBeacon : public AActor
{
    float RemainingLife;

};

class ADeerCPP : public ACharacter
{
    TArray<class UMeshComponent*> Meshes;
    FColor Color1;
    FColor Color2;
    FColor Color3;
    FColor Color4;
    bool WasLoaded;
    bool RecentlyRendered;
    bool WasVisibleLastFrame;
    bool IsDead;

    void UpdateColorsFromLoaded();
    void StartMoving();
    void SetMobilityAllEvent(TEnumAsByte<EComponentMobility::Type> NewMobility);
    void SetDeadRagdoll();
    void SetDead(class AChunkManager* ChunkManager);
    void SetComponentTickBP();
    void ResetToPoolBP();
    TArray<class UMeshComponent*> GetMeshComponents();
    void DoWeirdStuff();
    void DoTick();
};

class ADraftUnlockingPaper : public AActor
{
    EBlockTypeBP Type;

    void StartDissolve(bool bWithType);
};

class ADynamicResolutionScalingActor : public AActor
{
    bool DynamicResolutionScalingActive;
    bool DynamicResolutionScalingActiveNew;
    int32 DynamicResolutionScalingActiveInt;

    bool IsHighEndGPU();
};

class AEasterEgg : public AReceiveLightActor
{
    EBlockTypeBP ItemType;
    bool bChristmasGift;

};

class UFunctionLibrary : public UBlueprintFunctionLibrary
{

    FVector RandVectorRange(float Size);
};

class AFurnace : public AMeshObject
{
    bool Initialized;

    bool UseActorCustomLocation();
    void SetFurnaceSaveVariables(float HeatOnTop, float MoltenFillValue, float MeltAmountSum, int32 ItemFullyFinishedMelt, bool FlowOutStarted, FRotator RotationShutterTop, FRotator RotationShutterBottom, FRotator RotationLever);
    void GetFurnaceSaveVariables(float& HeatOnTop, float& MoltenFillValue, float& MeltAmountSum, int32& ItemFullyFinishedMelt, bool& FlowOutStarted, FRotator& RotationShutterTop, FRotator& RotationShutterBottom, FRotator& RotationLever);
    FVector GetActorCustomLocation();
    void CanDamageObjectBP(bool& CanDamage);
};

struct FTransform_NetQuantize : public FTransform
{
};

struct FBPAdvGripPhysicsSettings
{
    bool bUsePhysicsSettings;
    EPhysicsGripConstraintType PhysicsConstraintType;
    EPhysicsGripCOMType PhysicsGripLocationSettings;
    bool bTurnOffGravityDuringGrip;
    bool bSkipSettingSimulating;
    float LinearMaxForceCoefficient;
    float AngularMaxForceCoefficient;
    bool bUseCustomAngularValues;
    float AngularStiffness;
    float AngularDamping;

};

struct FBPAdvGripSettings
{
    uint8 GripPriority;
    bool bSetOwnerOnGrip;
    FBPAdvGripPhysicsSettings PhysicsSettings;

};

struct FBPSecondaryGripInfo
{
    bool bHasSecondaryAttachment;
    class USceneComponent* SecondaryAttachment;
    FTransform_NetQuantize SecondaryRelativeTransform;
    bool bIsSlotGrip;
    FName SecondarySlotName;
    float LerpToRate;
    float SecondaryGripDistance;

};

struct FBPActorGripInformation
{
    uint8 GripID;
    EGripTargetType GripTargetType;
    class UObject* GrippedObject;
    EGripCollisionType GripCollisionType;
    EGripLateUpdateSettings GripLateUpdateSetting;
    bool bColliding;
    FTransform_NetQuantize RelativeTransform;
    bool bIsSlotGrip;
    FName GrippedBoneName;
    FName SlotName;
    EGripMovementReplicationSettings GripMovementReplicationSetting;
    bool bIsPaused;
    bool bLockHybridGrip;
    bool bOriginalReplicatesMovement;
    bool bOriginalGravity;
    float Damping;
    float Stiffness;
    FBPAdvGripSettings AdvancedGripSettings;
    FBPSecondaryGripInfo SecondaryGripInfo;
    FTransform AdditionTransform;
    float GripDistance;

};

struct FBPVRComponentPosRep
{
    FVector Position;
    FRotator Rotation;
    EVRVectorQuantization QuantizationLevel;
    EVRRotationQuantization RotationQuantizationLevel;

};

struct FBPAdvancedPhysicsHandleAxisSettings
{
    float Stiffness;
    float Damping;
    float MaxForceCoefficient;
    bool bEnablePositionDrive;
    bool bEnableVelocityDrive;

};

struct FBPAdvancedPhysicsHandleSettings
{
    FBPAdvancedPhysicsHandleAxisSettings XAxisSettings;
    FBPAdvancedPhysicsHandleAxisSettings YAxisSettings;
    FBPAdvancedPhysicsHandleAxisSettings ZAxisSettings;
    FBPAdvancedPhysicsHandleAxisSettings SlerpSettings;
    FBPAdvancedPhysicsHandleAxisSettings TwistSettings;
    FBPAdvancedPhysicsHandleAxisSettings SwingSettings;

};

class UGripMotionControllerComponent : public UMotionControllerComponent
{
    TSubclassOf<class UVRGripScriptBase> DefaultGripScriptClass;
    class UVRGripScriptBase* DefaultGripScript;
    bool bOffsetByHMD;
    TWeakObjectPtr<class APawn> AttachChar;
    EVRVelocityType VelocityCalculationType;
    bool bSampleVelocityInWorldSpace;
    int32 VelocitySamples;
    bool bOffsetByControllerProfile;
    FGripMotionControllerComponentOnControllerProfileTransformChanged OnControllerProfileTransformChanged;
    void VRGripControllerOnProfileTransformChanged(const FTransform& NewRelTransForProcComps, const FTransform& NewProfileTransform);
    FGripMotionControllerComponentOnGripOutOfRange OnGripOutOfRange;
    void VRGripControllerOnGripOutOfRange(const FBPActorGripInformation& GripInformation, float Distance);
    FGripMotionControllerComponentOnTrackingChanged OnTrackingChanged;
    void VRGripControllerOnTrackingEventSignature(const ETrackingStatus& NewTrackingStatus);
    FGripMotionControllerComponentOnGrippedObject OnGrippedObject;
    void VROnControllerGripSignature(const FBPActorGripInformation& GripInformation);
    FGripMotionControllerComponentOnDroppedObject OnDroppedObject;
    void VROnControllerDropSignature(const FBPActorGripInformation& GripInformation, bool bWasSocketed);
    FGripMotionControllerComponentOnSecondaryGripAdded OnSecondaryGripAdded;
    void VROnControllerGripSignature(const FBPActorGripInformation& GripInformation);
    FGripMotionControllerComponentOnSecondaryGripRemoved OnSecondaryGripRemoved;
    void VROnControllerGripSignature(const FBPActorGripInformation& GripInformation);
    TWeakObjectPtr<class USceneComponent> CustomPivotComponent;
    TArray<FBPActorGripInformation> GrippedObjects;
    TArray<FBPActorGripInformation> LocallyGrippedObjects;
    TArray<FBPActorGripInformation> LocalTransactionBuffer;
    bool bAlwaysSendTickGrip;
    TArray<class UPrimitiveComponent*> AdditionalLateUpdateComponents;
    FBPVRComponentPosRep ReplicatedControllerTransform;
    float ControllerNetUpdateRate;
    bool bSmoothReplicatedMotion;
    bool bReplicateWithoutTracking;
    TArray<class UObject*> ObjectsWaitingForSocketUpdate;
    bool bUseWithoutTracking;

    void UpdatePhysicsHandleTransform_BP(const FBPActorGripInformation& GrippedActor, const FTransform& NewTransform);
    bool UpdatePhysicsHandle_BP(const FBPActorGripInformation& Grip, bool bFullyRecreate);
    void TeleportMoveGrips(bool bTeleportPhysicsGrips, bool bIsForPostTeleport);
    bool TeleportMoveGrippedComponent(class UPrimitiveComponent* ComponentToMove, bool bTeleportPhysicsGrips);
    bool TeleportMoveGrippedActor(class AActor* GrippedActorToMove, bool bTeleportPhysicsGrips);
    bool TeleportMoveGrip(FBPActorGripInformation& Grip, bool bTeleportPhysicsGrips, bool bIsForPostTeleport);
    bool SetUpPhysicsHandle_BP(const FBPActorGripInformation& Grip);
    void SetSocketTransform(class UObject* ObjectToSocket, const FTransform_NetQuantize RelativeTransformToParent);
    bool SetPhysicsHandleSettings(const FBPActorGripInformation& Grip, const FBPAdvancedPhysicsHandleSettings& PhysicsHandleSettingsIn);
    void SetPausedTransform(const FBPActorGripInformation& Grip, const FTransform& PausedTransform, bool bTeleport);
    void SetGripStiffnessAndDamping(const FBPActorGripInformation& Grip, EBPVRResultSwitch& Result, float NewStiffness, float NewDamping, bool bAlsoSetAngularValues, float OptionalAngularStiffness, float OptionalAngularDamping);
    void SetGripRelativeTransform(const FBPActorGripInformation& Grip, EBPVRResultSwitch& Result, const FTransform& NewRelativeTransform);
    void SetGripPaused(const FBPActorGripInformation& Grip, EBPVRResultSwitch& Result, bool bIsPaused, bool bNoConstraintWhenPaused);
    void SetGripLateUpdateSetting(const FBPActorGripInformation& Grip, EBPVRResultSwitch& Result, EGripLateUpdateSettings NewGripLateUpdateSetting);
    void SetGripHybridLock(const FBPActorGripInformation& Grip, EBPVRResultSwitch& Result, bool bIsLocked);
    void SetGripCollisionType(const FBPActorGripInformation& Grip, EBPVRResultSwitch& Result, EGripCollisionType NewGripCollisionType);
    void SetGripAdditionTransform(const FBPActorGripInformation& Grip, EBPVRResultSwitch& Result, const FTransform& NewAdditionTransform, bool bMakeGripRelative);
    void SetCustomPivotComponent(class USceneComponent* NewCustomPivotComponent);
    void Server_SendControllerTransform(FBPVRComponentPosRep NewTransform);
    void Server_NotifySecondaryAttachmentChanged_Retain(uint8 GripID, const FBPSecondaryGripInfo& SecondaryGripInfo, const FTransform_NetQuantize& NewRelativeTransform);
    void Server_NotifySecondaryAttachmentChanged(uint8 GripID, const FBPSecondaryGripInfo& SecondaryGripInfo);
    void Server_NotifyLocalGripRemoved(uint8 GripID, const FTransform_NetQuantize& TransformAtDrop, FVector_NetQuantize100 AngularVelocity, FVector_NetQuantize100 LinearVelocity);
    void Server_NotifyLocalGripAddedOrChanged(const FBPActorGripInformation& newGrip);
    void Server_NotifyHandledTransaction(uint8 GripID);
    void Server_NotifyDropAndSocketGrip(uint8 GripID, class USceneComponent* SocketingParent, FName OptionalSocketName, const FTransform_NetQuantize& RelativeTransformToParent, bool bWeldBodies);
    bool RemoveSecondaryAttachmentPoint(class UObject* GrippedObjectToRemoveAttachment, float LerpToTime);
    bool RemoveSecondaryAttachmentFromGrip(const FBPActorGripInformation& GripToRemoveAttachment, float LerpToTime);
    void PostTeleportMoveGrippedObjects();
    void OnRep_ReplicatedControllerTransform();
    void OnRep_LocalTransaction(TArray<FBPActorGripInformation> OriginalArrayState);
    void OnRep_LocallyGrippedObjects(TArray<FBPActorGripInformation> OriginalArrayState);
    void OnRep_GrippedObjects(TArray<FBPActorGripInformation> OriginalArrayState);
    void NotifyDropAndSocket(const FBPActorGripInformation& NewDrop, class USceneComponent* SocketingParent, FName OptionalSocketName, const FTransform_NetQuantize& RelativeTransformToParent, bool bWeldBodies);
    void NotifyDrop(const FBPActorGripInformation& NewDrop, bool bSimulate);
    void NewControllerProfileLoaded();
    bool HasGrippedObjects();
    bool GripObjectByInterface(class UObject* ObjectToGrip, const FTransform& WorldOffset, bool bWorldOffsetIsRelative, FName OptionalBoneToGripName, FName OptionalSnapToSocketName, bool bIsSlotGrip);
    bool GripObject(class UObject* ObjectToGrip, const FTransform& WorldOffset, bool bWorldOffsetIsRelative, FName OptionalSnapToSocketName, FName OptionalBoneToGripName, EGripCollisionType GripCollisionType, EGripLateUpdateSettings GripLateUpdateSetting, EGripMovementReplicationSettings GripMovementReplicationSetting, float GripStiffness, float GripDamping, bool bIsSlotGrip);
    bool GripControllerIsTracked();
    bool GripComponent(class UPrimitiveComponent* ComponentToGrip, const FTransform& WorldOffset, bool bWorldOffsetIsRelative, FName OptionalSnapToSocketName, FName OptionalBoneToGripName, EGripCollisionType GripCollisionType, EGripLateUpdateSettings GripLateUpdateSetting, EGripMovementReplicationSettings GripMovementReplicationSetting, float GripStiffness, float GripDamping, bool bIsSlotGrip);
    bool GripActor(class AActor* ActorToGrip, const FTransform& WorldOffset, bool bWorldOffsetIsRelative, FName OptionalSnapToSocketName, FName OptionalBoneToGripName, EGripCollisionType GripCollisionType, EGripLateUpdateSettings GripLateUpdateSetting, EGripMovementReplicationSettings GripMovementReplicationSetting, float GripStiffness, float GripDamping, bool bIsSlotGrip);
    FTransform GetPivotTransform_BP();
    FVector GetPivotLocation_BP();
    void GetPhysicsVelocities(const FBPActorGripInformation& Grip, FVector& AngularVelocity, FVector& LinearVelocity);
    bool GetPhysicsHandleSettings(const FBPActorGripInformation& Grip, FBPAdvancedPhysicsHandleSettings& PhysicsHandleSettingsOut);
    bool GetPhysicsConstraintForce(const FBPActorGripInformation& Grip, FVector& AngularForce, FVector& LinearForce);
    bool GetIsSecondaryAttachment(const class USceneComponent* ComponentToCheck, FBPActorGripInformation& Grip);
    bool GetIsObjectHeld(const class UObject* ObjectToCheck);
    bool GetIsHeld(const class AActor* ActorToCheck);
    bool GetIsComponentHeld(const class UPrimitiveComponent* ComponentToCheck);
    void GetHandType(EControllerHand& hand);
    void GetGrippedObjects(TArray<class UObject*>& GrippedObjectsArray);
    void GetGrippedComponents(TArray<class UPrimitiveComponent*>& GrippedComponentsArray);
    void GetGrippedActors(TArray<class AActor*>& GrippedActorArray);
    void GetGripMass(const FBPActorGripInformation& Grip, float& Mass);
    bool GetGripDistance_BP(FBPActorGripInformation& Grip, FVector ExpectedLocation, float& CurrentDistance);
    void GetGripByObject(FBPActorGripInformation& Grip, class UObject* ObjectToLookForGrip, EBPVRResultSwitch& Result);
    void GetGripByID(FBPActorGripInformation& Grip, uint8 IDToLookForGrip, EBPVRResultSwitch& Result);
    void GetGripByComponent(FBPActorGripInformation& Grip, class UPrimitiveComponent* ComponentToLookForGrip, EBPVRResultSwitch& Result);
    void GetGripByActor(FBPActorGripInformation& Grip, class AActor* ActorToLookForGrip, EBPVRResultSwitch& Result);
    void GetControllerDeviceID(FXRDeviceId& DeviceID, EBPVRResultSwitch& Result, bool bCheckOpenVROnly);
    void GetAllGrips(TArray<FBPActorGripInformation>& GripArray);
    bool DropObjectByInterface(class UObject* ObjectToDrop, uint8 GripIDToDrop, FVector OptionalAngularVelocity, FVector OptionalLinearVelocity);
    bool DropObject(class UObject* ObjectToDrop, uint8 GripIDToDrop, bool bSimulate, FVector OptionalAngularVelocity, FVector OptionalLinearVelocity);
    bool DropGrip(const FBPActorGripInformation& Grip, bool bSimulate, FVector OptionalAngularVelocity, FVector OptionalLinearVelocity);
    bool DropComponent(class UPrimitiveComponent* ComponentToDrop, bool bSimulate, FVector OptionalAngularVelocity, FVector OptionalLinearVelocity);
    bool DropAndSocketObject(const FTransform_NetQuantize& RelativeTransformToParent, class UObject* ObjectToDrop, uint8 GripIDToDrop, class USceneComponent* SocketingParent, FName OptionalSocketName, bool bWeldBodies);
    bool DropAndSocketGrip(const FBPActorGripInformation& GripToDrop, class USceneComponent* SocketingParent, FName OptionalSocketName, const FTransform_NetQuantize& RelativeTransformToParent, bool bWeldBodies);
    bool DropActor(class AActor* ActorToDrop, bool bSimulate, FVector OptionalAngularVelocity, FVector OptionalLinearVelocity);
    bool DestroyPhysicsHandle_BP(const FBPActorGripInformation& Grip);
    FTransform CreateGripRelativeAdditionTransform_BP(const FBPActorGripInformation& GripToSample, const FTransform& AdditionTransform, bool bGripRelative);
    FTransform ConvertToGripRelativeTransform(const FTransform& GrippedActorTransform, const FTransform& InTransform);
    FTransform ConvertToControllerRelativeTransform(const FTransform& InTransform);
    void Client_NotifyInvalidLocalGrip(class UObject* LocallyGrippedObject, uint8 GripID);
    bool BP_IsLocallyControlled();
    bool BP_HasGripMovementAuthority(const FBPActorGripInformation& Grip);
    bool BP_HasGripAuthorityForObject(const class UObject* ObjToCheck);
    bool BP_HasGripAuthority(const FBPActorGripInformation& Grip);
    bool AddSecondaryAttachmentToGrip(const FBPActorGripInformation& GripToAddAttachment, class USceneComponent* SecondaryPointComponent, const FTransform& OriginalTransform, bool bTransformIsAlreadyRelative, float LerpToTime, bool bIsSlotGrip, FName SecondarySlotName);
    bool AddSecondaryAttachmentPoint(class UObject* GrippedObjectToAddAttachment, class USceneComponent* SecondaryPointComponent, const FTransform& OriginalTransform, bool bTransformIsAlreadyRelative, float LerpToTime, bool bIsSlotGrip, FName SecondarySlotName);
};

class UVRGripScriptBase : public UObject
{
    bool bIsActive;
    EGSTransformOverrideType WorldTransformOverrideType;
    bool bDenyAutoDrop;
    bool bForceDrop;
    bool bDenyLateUpdates;
    bool bInjectPrePhysicsHandle;
    bool bInjectPostPhysicsHandle;
    bool bCanEverTick;
    bool bAllowTicking;

    bool Wants_DenyTeleport(class UGripMotionControllerComponent* Controller);
    void SetTickEnabled(bool bTickEnabled);
    void OnSecondaryGripRelease(class UGripMotionControllerComponent* Controller, class USceneComponent* ReleasingSecondaryGripComponent, const FBPActorGripInformation& GripInformation);
    void OnSecondaryGrip(class UGripMotionControllerComponent* Controller, class USceneComponent* SecondaryGripComponent, const FBPActorGripInformation& GripInformation);
    void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const FBPActorGripInformation& GripInformation, bool bWasSocketed);
    void OnGrip(class UGripMotionControllerComponent* GrippingController, const FBPActorGripInformation& GripInformation);
    void OnEndPlay(const TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnBeginPlay(class UObject* CallingOwner);
    bool IsServer();
    bool HasAuthority();
    bool GetWorldTransform(class UGripMotionControllerComponent* GrippingController, float DeltaTime, FTransform& WorldTransform, const FTransform& ParentTransform, FBPActorGripInformation& Grip, class AActor* Actor, class UPrimitiveComponent* Root, bool bRootHasInterface, bool bActorHasInterface, bool bIsForTeleport);
    FTransform GetParentTransform(bool bGetWorldTransform, FName BoneName);
    class USceneComponent* GetParentSceneComp();
    class UObject* GetParent();
    class AActor* GetOwner();
    FTransform GetGripTransform(const FBPActorGripInformation& Grip, const FTransform& ParentTransform);
    class UVRGripScriptBase* GetGripScriptByClass(class UObject* WorldContextObject, TSubclassOf<class UVRGripScriptBase> GripScriptClass, EBPVRResultSwitch& Result);
    void ForceGripToDrop();
};

class UGS_Default : public UVRGripScriptBase
{
};

class UGS_ExtendedDefault : public UGS_Default
{
    bool bLimitGripScaling;
    FVector_NetQuantize100 MinimumGripScaling;
    FVector_NetQuantize100 MaximumGripScaling;

};

class AInventory : public AStorage
{
    TArray<int32> QuickBarItemIDs;
    TArray<bool> QuickBarItemsReal;
    TArray<EBlockTypeBP> QuickBarTools;
    FColor BucketCrystalColor;
    float BucketCrystalChargeState;
    FColor BuildToolCrystalColorRight;
    float BuildToolCrystalChargeStateRight;
    FColor BuildToolCrystalColorLeft;
    float BuildToolCrystalChargeStateLeft;
    bool bIsLootableInventory;

    void UpdateUIEvent();
    void UpdateBuildToolCrystalProperties(FColor BuildToolCrystalColor_, float BuildToolCrystalChargeState_, bool bIsRightHand);
    void UpdateBucketCrystalProperties(FColor BucketCrystalColor_, float BucketCrystalChargeState_);
    void RemoveItem(EBlockTypeBP ToRemove, int32 ToRemoveUniqueID, int32 RemoveAmount, bool& success, bool& NoMoreLeft);
    void MoveOverPlayerInventoryToLootInventory(class AInventory* LootInventory);
    void MoveOverAllItemsFromOtherInventory(class AInventory* FromInventory, bool& AnythingCollected);
    void MoveOutside(int32 From, bool FromToolHolder);
    void MoveInside(int32 From, EBlockTypeBP Type, int32 UniqueId, bool FromToolSlot);
    void DropOnToolsQuickBar(bool FromToolBar, int32 From, int32 To, class AInventory* FromInventory, EBlockTypeBP Type, bool& UpdateNeeded);
    void DropOnDelete(int32 From, bool FromToolHolder, bool& success);
    void Drop(bool FromToolBar, int32 From, int32 To, class AInventory* FromInventory, EBlockTypeBP Type, bool& UpdateNeeded);
    void AddItemFromChest(int32 FromChestIndex, class AChestInternals* Chest, EBlockTypeBP Type, bool& success);
};

class ULeaderboardEntryCPP : public UUserWidget
{
    class UTextBlock* TextBlock_Rank;
    class UTextBlock* TextBlock_Score;
    class UTextBlock* TextBlock_GPU;
    class UTextBlock* TextBlock_Headset;
    class UTextBlock* TextBlock_CPU;
    class UTextBlock* TextBlock_User;
    class UTextBlock* TextBlock_Resolution;
    class UBorder* Border_BackgroundColor;

};

class ILightReceiveInterface : public IInterface
{

    bool UseLightAroundValue();
    bool UseActorCustomLocation();
    bool TickReceiveLight();
    void LightInterfaceBeginPlay(class AActor* ThisActor);
    void LightInterfaceBeginDestroy(class AActor* ThisActor);
    TArray<class UMeshComponent*> GetMeshComponents();
    FVector GetActorCustomLocation();
};

class ALogItem : public AReceiveLightActor
{
    ETreeType Type;
    FVector RelativeCenterLocation;
    class UMeshComponent* Mesh;

    bool UseActorCustomLocation();
    void SetActive(ETreeType _Type);
    void ResetToPoolBP();
    FVector GetActorCustomLocation();
};

class ALootableInventory : public AMeshObject
{
    class AInventory* Inventory;
    FLinearColor SphereColor;

    void UpdateVisuals();
};

struct FCustomBlockInfoForModsBP
{
    int32 UniqueId;
    FString Name;
    FString Path;
    FString CreatorName;
    bool bGlowing;
    bool bAnimated;

};

class UManageModsWidgetParent : public UUserWidget
{

    void GetDraftsMod(bool bFromWorkshop, bool OnlyPureCustomBlocks, TArray<FCustomBlockInfoForModsBP>& DraftsInfoArray);
};

class UMathBPLibrary : public UBlueprintFunctionLibrary
{

    void GridVector(FVector InVector, float GridSize, FVector& ReturnVector);
};

class UMeshOptimization : public UBlueprintFunctionLibrary
{
};

struct FModTutorialEntry
{
    FString ModName;
    FString Text;

};

class UModdingFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool WriteStringToFileInModFolder(FString ModName, FString Filename, FString StringToWrite);
    FString ReadStringFromFileInModFolder(FString ModName, FString Filename);
    void GetModTutorials(TArray<FModTutorialEntry>& ModTutorials);
    class AInventory* GetInventoryReference(const class UObject* WorldContextObject);
    void GetAllMods(bool OnlyLocal, bool OnlyWorkshop, TArray<FString>& Paths, TArray<bool>& ValidProperties, TArray<FString>& DisplayNames, TArray<FString>& InternalNames, TArray<FString>& PreviewImages);
};

class AModifiedBlockActor : public AActor
{
    bool bWasUsedForMove;
    float CurrentHealth;
    float MaxHealth;
    class UMaterialInstance* GlassMaterial;
    class UMaterialInstanceDynamic* MaterialInstance;
    class UMaterialInstanceDynamic* MaterialInstanceForDamage;
    class UStaticMeshComponent* BlockMesh;
    class AChunkManager* ChunkManager;
    EBlockTypeBP BlockType;
    int32 UniqueId;
    FBlockInfoBP OriginalBlockInfo;
    bool bIsForMove;

    void UpdateMaterialInstanceValuesDefaultLighting();
    void UpdateMaterialInstanceValues();
    void UpdateDestructionAmount();
    void ResetToPoolBP();
    void ResetToPool();
    void MarkDestroyed(bool WasFullyMined);
    void MarkActiveAgain();
    void InitializeMaterialInstance();
    void DamageCPP(float Amount, EBlockTypeBP ToolType);
    void ConvertToForMove();
    bool CheckAllowSpawnItemsForBlock();
};

class AModLoad : public AActor
{

    void GetModFilePaths(TArray<FString>& PathsOut, TArray<FString>& ModNamesOut);
};

struct FPerEyeRaw
{
    float pfLeft;
    float pfRight;
    float pfTop;
    float pfBottom;

};

class UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool WasMirrorResSet();
    void TakeSpecialScreenshot(class UObject* Context, class ADynamicResolutionScalingActor* DynResActor, float mul);
    void StopVRAMUsageCounting();
    void SetSpectatorTexture(class UTexture* Texture);
    void SetRetainerTexture(class UTextureRenderTarget2D* Texture);
    void SetResizeScreenshotForSave(bool ResizeScreenshots);
    void SetLeftHandedMode(bool Enabled);
    void SetDynamicRes(class UObject* Context, float Value);
    bool SavePixels(FString FullFilePath, int32 Width, int32 Height, const TArray<FLinearColor>& ImagePixels, FString& ErrorString);
    void SaveFileDialog(FString& FilePath, FString& Filename, bool& success);
    int32 RunTest();
    bool RunSC3();
    void RecreatePhysicsStateForComponent(class UActorComponent* Component);
    void RecordPlausibleEvent2(FString EventName, FString ValueName1, FString Value1, FString ValueName2, FString Value2);
    void RecordPlausibleEvent(FString EventName, FString Value);
    void PlayControllerMotorMusic();
    void OpenVR_ShowKeyboard(FString ExistingText, FTransform WorldTransform);
    void OpenVR_HideKeyboard();
    void OpenVR_GetKeyboardText(FString& KeyboardText);
    void LookAtWidgetDebug(TArray<class UWidget*> Widgets);
    class UTexture2D* LoadTexture2D_FromFile(FString FullFilePath, bool& IsValid, int32& Width, int32& Height, TEnumAsByte<EPixelFormat> PixelFormat, bool bGenerateMips);
    bool IsPiS();
    bool IsGameWindowInFocus(class UObject* Context);
    void IsEditorBuild(bool& bIsEditorBuild);
    bool IsDateEaster();
    bool IsDateChristmas();
    bool IsCDriveAlmostFull();
    void InitVRAMUsageCounting(const class UObject* WorldContextObject);
    void InitScreenshots();
    void InitO();
    void InitGameInstancePointer(const class UObject* WorldContextObject);
    void HookUpCustomSteamVRScreenshot();
    void GetVRAMUsage(int32& TotalRelevantUsage, TArray<FString>& ProcessNames);
    void GetVideoCaptureMirrorSettings(bool& UseVideoMirror, float& FOV, bool& UseSmoothing, float& SmoothingSpeed, bool& HideControllers);
    void GetVersionName(FString& VersionName);
    float GetSteamStatFloat(FString StatName);
    int32 GetSteamStat(FString StatName);
    FString GetSHA256_BP(const TArray<uint8>& ByteArray);
    FRotator GetRotatorArrayAverage(const TArray<FRotator>& Rotators);
    FString GetRHIName();
    void GetRawProjection(FPerEyeRaw& LeftEye, FPerEyeRaw& RightEye);
    EBlockTypeBP GetRandomEasterEggType();
    bool GetRAMInfo();
    int32 GetNumVRAM();
    int32 GetNumRAM();
    int32 GetNumCPUThreads();
    void GetLeftHandedMode(bool& Enabled);
    int32 GetHMDRefreshRate();
    void GetHMDName(FString& ModelName);
    bool GetHardwareInfo();
    void GetGPURenderTime(float& GPUTime);
    void GetFullscreenFocusSettings(bool& Fullscreen, bool& FocusWarning);
    void GetFullFOV(float& HorizontalFOV, float& VerticalFOV);
    FString GetBlockTypeNameAnalytics(EBlockTypeBP Type);
    bool GetAVX2Support();
    void GetArgs(FString& Args);
    void ForceExitGame();
    void FadeSteamVRColor(float Seconds, FLinearColor Color, bool Background);
    bool DetectRazerCortex();
    void DeleteInputIniFile();
    void CopyCollisionToPMC(class UStaticMesh* SMC, int32 LODIndex, class UProceduralMeshComponent* PMC);
    FVector2D ClosestPointOnLine(float lx1, float ly1, float lx2, float ly2, float x0, float y0);
    void BlueprintVerify(bool Result, FString FailMessage);
    int32 BlueprintCrashGame(FString ErrorMessage);
    void BenchmarkCRC(FVector TestVector);
    void AddToRootBP(class UObject* Object);
    void ActivateSteamOverlay(FString URL);
};

struct FPictureFrameProperties
{
    float Width;
    float Height;
    float Margin;
    float FrameThickness;
    float FrameDepth;
    FColor Color;

};

struct FLoadedPicture
{
    FString Path;
    class UTexture2D* Texture;
    int32 Width;
    int32 Height;

};

class APictureFrame : public AMeshObject
{

    bool UseActorCustomLocation();
    void SetFrameProperties(FPictureFrameProperties Properties);
    bool LoadImagesFromDisk(TArray<FLoadedPicture>& LoadedPictures);
    FPictureFrameProperties GetFrameProperties();
    FVector GetActorCustomLocation();
    bool ApplyNewImage(const FLoadedPicture& NewLoadedPicture);
    void ApplyLoadedTexture(class UTexture2D* LoadedTexture);
};

class APreGenTestActor : public AActor
{

    void SubmitMesh(class UProceduralMeshComponent* PMC, const TArray<EBlockTypeBP>& StructureArray, FIntVector StructureSize);
    void GeneratePyramid(TArray<EBlockTypeBP>& StructureArray, FIntVector& StructureSize);
};

class AProceduralRavenCrowds : public AActor
{
    class URuntimeMeshComponent* RMC;
    class URuntimeMeshProviderStatic* RuntimeMeshProvider;

};

class ARuntimeCactus : public AReceiveLightActor
{
    class UStaticMeshComponent* SMC;
    ETreeType Type;
    bool damaged;
    bool bDestroyed;

    void SetType(ETreeType NewType);
    void SetActive();
    void ResetToPoolBP();
};

class URuntimeMeshProviderChunks : public URuntimeMeshProvider
{
};

class ARuntimeTree : public AActor
{
    ETreeType Type;
    class AChunkManager* ChunkManager;
    bool damaged;
    bool IsFalling;
    class UProceduralMeshComponent* PMC;
    class UStaticMesh* StaticMeshReference;

    void SpawnLogs(class UProceduralMeshComponent* CutNew);
    void SetupWind(int32 From, int32 To);
    void SetActive();
    void ResetToPoolBP();
    void RegisterToolHit(FVector Location, bool& NowFall);
};

class ASmoothbrainStatue : public AMeshObject
{
    bool HasCrystalInside;

    void UpdateVisuals();
};

class ATool : public AMeshObject
{

    void InitTool(EBlockTypeBP Type_, class AChunkManager* ChunkManager_, class ACharacter* Player_);
    void DestroyTool();
};

class Atorch : public AActor
{
    FColor Color;
    EBlockTypeBP TypeCPP;
    class UParticleSystemComponent* P_LOD0;
    class UParticleSystemComponent* P_2_LOD0;
    class UParticleSystemComponent* P_LOD1;
    ERotation Rotation;

    void SetColor(FColor Color_, EBlockTypeBP Type);
    void SetActive(bool Active);
    void DetachFromChunk();
};

class ATreeManager : public AActor
{
    TArray<class UStaticMesh*> TreeMeshes;

};

class AVRCharacter : public APawn
{
    class UCameraComponent* CameraRef;
    bool LocationLoaded;
    float Health;
    TArray<class UMeshComponent*> Meshes;

    void WasRotated();
    bool UseLightAroundValue();
    void SetViewDirection(FVector Direction);
    void ReduceHealthCPP(float Amount);
    TArray<class UMeshComponent*> GetMeshComponents();
    FVector GetActorLocationForCameraLocationCPP(FVector NewCameraLocation);
};

struct FBPLowPassPeakFilter
{
    int32 VelocitySamples;
    TArray<FVector> VelocitySampleLog;

};

struct FBPEuroLowPassFilter
{
    float MinCutoff;
    float DeltaCutoff;
    float CutoffSlope;

};

struct FBPGripPair
{
    class UGripMotionControllerComponent* HoldingController;
    uint8 GripID;

};

class UVRExpansionFunctionLibrary : public UBlueprintFunctionLibrary
{

    void UpdatePeakLowPassFilter(FBPLowPassPeakFilter& TargetPeakFilter, FVector newSample);
    void SmoothUpdateLaserSpline(class USplineComponent* LaserSplineComponent, TArray<class USplineMeshComponent*> LaserSplineMeshComponents, FVector InStartLocation, FVector InEndLocation, FVector InForward, float LaserRadius);
    void SetObjectsIgnoreCollision(class UPrimitiveComponent* Prim1, FName OptionalBoneName1, class UPrimitiveComponent* Prim2, FName OptionalBoneName2, bool bIgnoreCollision);
    void RunEuroSmoothingFilter(FBPEuroLowPassFilter& TargetEuroFilter, FVector InRawValue, const float DeltaTime, FVector& SmoothedValue);
    void RotateAroundPivot(FRotator RotationDelta, FVector OriginalLocation, FRotator OriginalRotation, FVector PivotPoint, FVector& NewLocation, FRotator& NewRotation, bool bUseOriginalYawOnly);
    void ResetPeakLowPassFilter(FBPLowPassPeakFilter& TargetPeakFilter);
    void ResetEuroSmoothingFilter(FBPEuroLowPassFilter& TargetEuroFilter);
    void NonAuthorityMinimumAreaRectangle(class UObject* WorldContextObject, const TArray<FVector>& InVerts, const FVector& SampleSurfaceNormal, FVector& OutRectCenter, FRotator& OutRectRotation, float& OutSideLengthX, float& OutSideLengthY, bool bDebugDraw);
    FVector_NetQuantize100 MakeVector_NetQuantize100(FVector InVector);
    FVector_NetQuantize10 MakeVector_NetQuantize10(FVector InVector);
    FVector_NetQuantize MakeVector_NetQuantize(FVector InVector);
    FTransform_NetQuantize MakeTransform_NetQuantize(FVector Location, FRotator Rotation, FVector Scale);
    void LowPassFilter_RollingAverage(FVector lastAverage, FVector newSample, FVector& newAverage, int32 numSamples);
    void LowPassFilter_Exponential(FVector lastAverage, FVector newSample, FVector& newAverage, float sampleFactor);
    bool IsInVREditorPreviewOrGame();
    bool IsInVREditorPreview();
    FVector GetPeak_PeakLowPassFilter(FBPLowPassPeakFilter& TargetPeakFilter);
    EBPHMDWornState GetIsHMDWorn();
    bool GetIsHMDConnected();
    bool GetIsActorMovable(class AActor* ActorToCheck);
    EBPHMDDeviceType GetHMDType();
    FRotator GetHMDPureYaw(FRotator HMDRotation);
    bool GetHandFromMotionSourceName(FName MotionSource, EControllerHand& hand);
    void GetGripSlotInRangeByTypeName_Component(FName SlotType, class UPrimitiveComponent* Component, FVector WorldLocation, float MaxRange, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName);
    void GetGripSlotInRangeByTypeName(FName SlotType, class AActor* Actor, FVector WorldLocation, float MaxRange, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName);
    bool EqualEqual_FBPActorGripInformation(const FBPActorGripInformation& A, const FBPActorGripInformation& B);
    FTransform_NetQuantize Conv_TransformToTransformNetQuantize(const FTransform& InTransform);
    class UGripMotionControllerComponent* Conv_GripPairToMotionController(const FBPGripPair& GripPair);
    uint8 Conv_GripPairToGripID(const FBPGripPair& GripPair);
    FVector_NetQuantize100 Conv_FVectorToFVectorNetQuantize100(const FVector& InVector);
    FVector_NetQuantize10 Conv_FVectorToFVectorNetQuantize10(const FVector& InVector);
    FVector_NetQuantize Conv_FVectorToFVectorNetQuantize(const FVector& InVector);
    void BreakTransform_NetQuantize(const FTransform_NetQuantize& InTransform, FVector& Location, FRotator& Rotation, FVector& Scale);
    FRotator BPQuat_FindBetween(FVector Vec1, FVector Vec2);
    class USceneComponent* AddSceneComponentByClass(class UObject* Outer, TSubclassOf<class USceneComponent> Class, const FTransform& ComponentRelativeTransform);
};

struct FBPVRControllerProfile
{
    FName ControllerName;
    FTransform_NetQuantize SocketOffsetTransform;
    bool bUseSeperateHandOffsetTransforms;
    FTransform_NetQuantize SocketOffsetTransformRightHand;

};

class UVRGlobalSettings : public UObject
{
    int32 MaxCCDPasses;
    float OneEuroMinCutoff;
    float OneEuroCutoffSlope;
    float OneEuroDeltaCutoff;
    TArray<FBPVRControllerProfile> ControllerProfiles;

    void SaveControllerProfiles();
    void OverwriteControllerProfile(FBPVRControllerProfile& OverwritingProfile, bool bSaveOutToConfig);
    bool LoadControllerProfileByName(FName ControllerProfileName, bool bSetAsCurrentProfile);
    bool LoadControllerProfile(const FBPVRControllerProfile& ControllerProfile, bool bSetAsCurrentProfile);
    FName GetCurrentProfileName(bool& bHadLoadedProfile);
    FBPVRControllerProfile GetCurrentProfile(bool& bHadLoadedProfile);
    TArray<FBPVRControllerProfile> GetControllerProfiles();
    bool GetControllerProfile(FName ControllerProfileName, FBPVRControllerProfile& OutProfile);
    void DeleteControllerProfile(FName ControllerProfileName, bool bSaveOutToConfig);
    FTransform AdjustTransformByGivenControllerProfile(FBPVRControllerProfile& ControllerProfile, const FTransform& SocketTransform, bool bIsRightHand);
    FTransform AdjustTransformByControllerProfile(FName OptionalControllerProfileName, const FTransform& SocketTransform, bool bIsRightHand);
    void AddControllerProfile(FBPVRControllerProfile& NewProfile, bool bSaveOutToConfig);
};

class IVRGripInterface : public IInterface
{

    void TickGrip(class UGripMotionControllerComponent* GrippingController, const FBPActorGripInformation& GripInformation, float DeltaTime);
    EGripInterfaceTeleportBehavior TeleportBehavior();
    bool SimulateOnDrop();
    void SetHeld(class UGripMotionControllerComponent* HoldingController, uint8 GripID, bool bIsHeld);
    ESecondaryGripType SecondaryGripType();
    bool RequestsSocketing(class USceneComponent*& ParentToSocketTo, FName& OptionalSocketName, FTransform_NetQuantize& RelativeTransform);
    void OnUsed();
    void OnSecondaryUsed();
    void OnSecondaryGripRelease(class UGripMotionControllerComponent* GripOwningController, class USceneComponent* ReleasingSecondaryGripComponent, const FBPActorGripInformation& GripInformation);
    void OnSecondaryGrip(class UGripMotionControllerComponent* GripOwningController, class USceneComponent* SecondaryGripComponent, const FBPActorGripInformation& GripInformation);
    void OnInput(FKey Key, TEnumAsByte<EInputEvent> KeyEvent);
    void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const FBPActorGripInformation& GripInformation, bool bWasSocketed);
    void OnGrip(class UGripMotionControllerComponent* GrippingController, const FBPActorGripInformation& GripInformation);
    void OnEndUsed();
    void OnEndSecondaryUsed();
    void OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const FBPActorGripInformation& GripInformation, bool bWasSocketed);
    void OnChildGrip(class UGripMotionControllerComponent* GrippingController, const FBPActorGripInformation& GripInformation);
    void IsHeld(TArray<FBPGripPair>& HoldingControllers, bool& bIsHeld);
    EGripMovementReplicationSettings GripMovementReplicationType();
    EGripLateUpdateSettings GripLateUpdateSetting();
    float GripBreakDistance();
    EGripCollisionType GetPrimaryGripType(bool bIsSlot);
    void GetGripStiffnessAndDamping(float& GripStiffnessOut, float& GripDampingOut);
    bool GetGripScripts(TArray<class UVRGripScriptBase*>& ArrayReference);
    bool DenyGripping();
    void ClosestGripSlotInRange(FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName, class UGripMotionControllerComponent* CallingController, FName OverridePrefix);
    bool AllowsMultipleGrips();
    FBPAdvGripSettings AdvancedGripSettings();
};

class UVRGripScriptBaseBP : public UVRGripScriptBase
{

    void ReceiveTick(float DeltaSeconds);
};

class UVRStereoWidgetComponent : public UWidgetComponent
{
    class UStereoLayerShape* Shape;
    bool bUseEpicsWorldLockedStereo;
    bool bIsSleeping;
    uint8 bNoAlphaChannel;
    uint8 bQuadPreserveTextureRatio;
    int32 Priority;

    void SetPriority(int32 InPriority);
    int32 GetPriority();
};

class AWallMount : public AMeshObject
{
};

struct FWeatherStateData
{
    float CloudDensityTarget;
    float OverallIntensityTarget;
    float SaturationTarget;
    float LightTemperatureTarget;
    float SunLightWeatherMultiplierTarget;
    float WindStrengthTarget;
    float RainStrengthTarget;
    FLinearColor FogWeatherColorTarget;
    float CloudDensity;
    float OverallIntensity;
    float LightTemperatur;
    FLinearColor FogWeatherColor;
    float RainStrength;
    float SunLightWeatherMultiplier;
    float WindStrength;
    float DelayTillParticles;
    float SnowAmount;
    float SnowAmountTarget;
    float RainAmount;
    float RainAmountTarget;
    EWeather Weather;
    float WindSpeed;
    float WindSpeedTarget;
    float TimeTillNewWeather;

};

class AWeatherManager : public AActor
{
    EWeather CurrentWeather;
    EWeather PreviousWeather;
    float WeatherInterp;

    void LoadWeatherState(FWeatherStateData WeatherStateData);
    void GetWeatherState(FWeatherStateData& WeatherStateData);
};

struct FMiningSound : public FTableRowBase
{
    class USoundBase* Stick;
    class USoundBase* Stone_Pickaxe;
    class USoundBase* Stone_Axe;
    class USoundBase* Stone_Shovel;
    class USoundBase* Copper_Pickaxe;
    class USoundBase* Copper_Axe;
    class USoundBase* Copper_Shovel;
    class USoundBase* Copper_Sledgehammer;
    class USoundBase* Iron_Pickaxe;
    class USoundBase* Iron_Axe;
    class USoundBase* Iron_Shovel;
    class USoundBase* Iron_Sledgehammer;

};

struct FMiningParticle : public FTableRowBase
{
    class UParticleSystem* Stick;
    class UParticleSystem* Stone_Pickaxe;
    class UParticleSystem* Stone_Axe;
    class UParticleSystem* Stone_Shovel;
    class UParticleSystem* Copper_Pickaxe;
    class UParticleSystem* Copper_Axe;
    class UParticleSystem* Copper_Shovel;
    class UParticleSystem* Copper_Sledgehammer;
    class UParticleSystem* Iron_Pickaxe;
    class UParticleSystem* Iron_Axe;
    class UParticleSystem* Iron_Shovel;
    class UParticleSystem* Iron_Sledgehammer;

};

struct FMiningDamage : public FTableRowBase
{
    float Stick;
    float Stone_Pickaxe;
    float Stone_Axe;
    float Stone_Shovel;
    float Copper_Pickaxe;
    float Copper_Axe;
    float Copper_Shovel;
    float Arrow;
    float Copper_Sledgehammer;
    float Iron_Pickaxe;
    float Iron_Axe;
    float Iron_Shovel;
    float Iron_Sledgehammer;

};

struct FMeshComponentInfo
{
    class URuntimeMeshComponent* RMC;
    class URuntimeMeshProviderChunks* RuntimeMeshProvider;

};

struct FGripComponentEndPhysicsTickFunction : public FTickFunction
{
};

struct FVRClientAuthReplicationData
{
    bool bUseClientAuthThrowing;
    int32 UpdateRate;

};

struct FRepMovementVR : public FRepMovement
{
};

struct FTexSource
{
    FGuid ID;
    int32 SizeX;
    int32 SizeY;
    int32 NumSlices;
    int32 NumMips;
    bool bGuidIsHash;
    TEnumAsByte<ETextureSourceFormat> Format;

};

struct FBPActorPhysicsHandleInformation
{
    class UObject* HandledObject;

};

struct FBPInterfaceProperties
{
    bool bDenyGripping;
    bool bAllowMultipleGrips;
    EGripInterfaceTeleportBehavior OnTeleportBehavior;
    bool bSimulateOnDrop;
    EGripCollisionType SlotDefaultGripType;
    EGripCollisionType FreeDefaultGripType;
    ESecondaryGripType SecondaryGripType;
    EGripMovementReplicationSettings MovementReplicationType;
    EGripLateUpdateSettings LateUpdateSetting;
    float ConstraintStiffness;
    float ConstraintDamping;
    float ConstraintBreakDistance;
    float SecondarySlotRange;
    float PrimarySlotRange;
    FBPAdvGripSettings AdvancedGripSettings;
    bool bIsHeld;
    TArray<FBPGripPair> HoldingControllers;

};

struct FBPVRWaistTracking_Info
{
    FRotator RestingRotation;
    float WaistRadius;
    EBPVRWaistTrackingMode TrackingMode;
    class UPrimitiveComponent* TrackedDevice;

};

#endif
