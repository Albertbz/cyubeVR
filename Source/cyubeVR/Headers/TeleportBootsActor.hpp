#ifndef UE4SS_SDK_TeleportBootsActor_HPP
#define UE4SS_SDK_TeleportBootsActor_HPP

class ATeleportBootsActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* GroundSphere;
    class UStaticMeshComponent* uploads_files_1000830_Pirate_Boot_low1;
    class UStaticMeshComponent* uploads_files_1000830_Pirate_Boot_low;
    class USceneComponent* Scene;

    void SetColor(const FVector ParameterValue);
    void ExecuteUbergraph_TeleportBootsActor(int32 EntryPoint);
};

#endif
