#ifndef UE4SS_SDK_SHISMC_Manager_HPP
#define UE4SS_SDK_SHISMC_Manager_HPP

class ASHISMC_Manager_C : public AActor
{
    class USceneComponent* DefaultSceneRoot;
    TMap<class UStaticMesh*, class UHierarchicalInstancedStaticMeshComponent*> MeshMap;

    void RemoveMesh(class UStaticMesh* Mesh, int32 InstanceID);
    void AddMeshAtWorldTransform(class UStaticMesh* Mesh, FTransform Transform, int32& InstanceID);
    void FindOrCreate(class UStaticMesh* Mesh, class UHierarchicalInstancedStaticMeshComponent*& HISMC);
};

#endif
