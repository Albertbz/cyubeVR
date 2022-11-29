#ifndef UE4SS_SDK_LoadAssets_HPP
#define UE4SS_SDK_LoadAssets_HPP

class ALoadAssets_C : public AActor
{
    class USceneComponent* DefaultSceneRoot;
    TArray<class UStaticMesh*> Meshes;
    TArray<class UMaterialInterface*> Materials;
    TArray<class UObject*> Objects;

};

#endif
