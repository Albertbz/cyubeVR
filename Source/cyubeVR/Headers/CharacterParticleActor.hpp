#ifndef UE4SS_SDK_CharacterParticleActor_HPP
#define UE4SS_SDK_CharacterParticleActor_HPP

class ACharacterParticleActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* ParticleSystem1;
    class UParticleSystemComponent* ParticleSystem;
    class USceneComponent* DefaultSceneRoot;
    bool Active;

    void UpdateBirdSpawnLocation();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_CharacterParticleActor(int32 EntryPoint);
};

#endif
