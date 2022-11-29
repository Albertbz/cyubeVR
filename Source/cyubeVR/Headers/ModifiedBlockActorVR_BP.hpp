#ifndef UE4SS_SDK_ModifiedBlockActorVR_BP_HPP
#define UE4SS_SDK_ModifiedBlockActorVR_BP_HPP

class AModifiedBlockActorVR_BP_C : public AModifiedBlockActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* bLock;
    float Timeline_1_Opacity_8B546AD246DD3C3541818D8FC042EFD0;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_8B546AD246DD3C3541818D8FC042EFD0;
    class UTimelineComponent* Timeline_1;
    float Timeline_0_Scale_7AA6BC1B4B6280F33DA85792E1419A4B;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_7AA6BC1B4B6280F33DA85792E1419A4B;
    class UTimelineComponent* Timeline_0;
    class UMaterialInstanceDynamic* MaterialInstanceDynamicBP;
    class UTexture2D* ParticleTexture;
    float MaxHealthBP;
    float CurrentHealthBP;
    bool BackToNormal;
    FTimerHandle RepairTimer;
    class ABlockItemVR_C* SpawnedItem;
    EBlockTypeBP LastToolHitWith;
    FVector MoveTargetLocation;

    void UnlockAchievementOnItemSpawn(EBlockTypeBP ItemSpawned);
    void GetUniqueID(int32& UniqueId);
    void SetDestructionAmountNew(float Amount);
    void GetDamageTextureFalloff(float Level, float& Falloff);
    void SetRealMaterialF();
    void SpawnItems();
    void CopyMaterialInstance(class UMaterialInstanceDynamic* ToCopy, class UMaterialInstanceDynamic*& Copy);
    void PlayRemoveEffects(EBlockTypeBP Type, FVector Location);
    void RemoveSelfAndPotentialBlockAbove();
    void FinishedMining();
    void ReceiveTickFromPlayer(bool& Finished);
    void SetDestructionAmount(int32 Amount);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void TransferBack();
    void DamageCPP(float Amount, EBlockTypeBP ToolType);
    void StartFadeScale();
    void ReceiveTick(float DeltaSeconds);
    void SetRealMaterial();
    void UpdateDestructionAmountBP();
    void AddHealth();
    void ResetToPoolBP();
    void StartFadeOpacity();
    void StopFadeOpacity();
    void IsForMoveNow();
    void SetNewMoveTargetLocation(FVector MoveTargetLocation);
    void FinishBlockMove();
    void HealthyAndFadeBackToChunk();
    void Hit(float Damage, EBlockTypeBP Tool);
    void ReceiveBeginPlay();
    void DestroyNextFrame();
    void ExecuteUbergraph_ModifiedBlockActorVR_BP(int32 EntryPoint);
};

#endif
