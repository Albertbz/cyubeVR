#ifndef UE4SS_SDK_RuntimeMeshComponent_HPP
#define UE4SS_SDK_RuntimeMeshComponent_HPP

#include "RuntimeMeshComponent_enums.hpp"

struct FRuntimeMeshMaterialSlot
{
    FName SlotName;
    class UMaterialInterface* Material;

};

struct FRuntimeMeshSectionProperties
{
    ERuntimeMeshUpdateFrequency UpdateFrequency;
    int32 MaterialSlot;
    bool bIsVisible;
    bool bIsMainPassRenderable;
    bool bCastsShadow;
    bool bForceOpaque;
    bool bUseHighPrecisionTangents;
    bool bUseHighPrecisionTexCoords;
    uint8 NumTexCoords;
    bool bWants32BitIndices;

};

struct FRuntimeMeshLODProperties
{
    float ScreenSize;
    bool bCanGetSectionsIndependently;
    bool bCanGetAllSectionsAtOnce;
    bool bShouldMergeStaticSectionBuffers;

};

class URuntimeMeshProviderTargetInterface : public UObject
{

    void SetupMaterialSlot(int32 MaterialSlot, FName SlotName, class UMaterialInterface* InMaterial);
    void SetSectionVisibility(int32 LODIndex, int32 SectionId, bool bIsVisible);
    void SetSectionCastsShadow(int32 LODIndex, int32 SectionId, bool bCastsShadow);
    void SetLODScreenSize(int32 LODIndex, float ScreenSize);
    void RemoveSection(int32 LODIndex, int32 SectionId);
    void MarkSectionDirty(int32 LODIndex, int32 SectionId);
    void MarkLODDirty(int32 LODIndex);
    void MarkCollisionDirty();
    void MarkAllLODsDirty();
    bool IsMaterialSlotNameValid(FName MaterialSlotName);
    int32 GetNumMaterials();
    TArray<FRuntimeMeshMaterialSlot> GetMaterialSlots();
    TArray<FName> GetMaterialSlotNames();
    FRuntimeMeshMaterialSlot GetMaterialSlot(int32 SlotIndex);
    int32 GetMaterialIndex(FName MaterialSlotName);
    class UMaterialInterface* GetMaterial(int32 SlotIndex);
    void CreateSection(int32 LODIndex, int32 SectionId, const FRuntimeMeshSectionProperties& SectionProperties);
    void ConfigureLODs(const TArray<FRuntimeMeshLODProperties>& InLODs);
    void ClearSection(int32 LODIndex, int32 SectionId);
};

struct FRuntimeMeshCollisionSourceSectionInfo
{
    int32 StartIndex;
    int32 EndIndex;
    TWeakObjectPtr<class URuntimeMeshProvider> SourceProvider;
    int32 SectionId;
    ERuntimeMeshCollisionFaceSourceType SourceType;

};

struct FRuntimeMeshAsyncBodySetupData
{
    class UBodySetup* BodySetup;
    TArray<FRuntimeMeshCollisionSourceSectionInfo> CollisionSources;

};

struct FRuntimeMeshCollisionHitInfo
{
    TWeakObjectPtr<class URuntimeMeshProvider> SourceProvider;
    ERuntimeMeshCollisionFaceSourceType SourceType;
    int32 SectionId;
    int32 FaceIndex;
    class UMaterialInterface* Material;

};

class URuntimeMesh : public URuntimeMeshProviderTargetInterface
{
    class URuntimeMeshProvider* MeshProviderPtr;
    class UBodySetup* BodySetup;
    TArray<FRuntimeMeshCollisionSourceSectionInfo> CollisionSource;
    TArray<FRuntimeMeshAsyncBodySetupData> AsyncBodySetupQueue;
    TArray<FRuntimeMeshMaterialSlot> MaterialSlots;
    TMap<FName, int32> SlotNameLookup;
    FRuntimeMeshCollisionUpdated CollisionUpdated;
    void RuntimeMeshCollisionUpdatedDelegate();

    void Reset();
    bool IsInitialized();
    void Initialize(class URuntimeMeshProvider* Provider);
    class URuntimeMeshProvider* GetProviderPtr();
    FBoxSphereBounds GetLocalBounds();
    FRuntimeMeshCollisionHitInfo GetHitSource(int32 FaceIndex);
    class UBodySetup* GetBodySetup();
};

class ARuntimeMeshActor : public AActor
{
    class URuntimeMeshComponent* RuntimeMeshComponent;

    void SetRuntimeMeshMobility(ERuntimeMeshMobility NewMobility);
    ERuntimeMeshMobility GetRuntimeMeshMobility();
    class URuntimeMeshComponent* GetRuntimeMeshComponent();
};

struct FRuntimeMeshTriangleStream
{
};

struct FRuntimeMeshVertexTexCoordStream
{
};

struct FRuntimeMeshVertexTangentStream
{
};

struct FRuntimeMeshVertexPositionStream
{
};

struct FRuntimeMeshVertexColorStream
{
};

struct FRuntimeMeshCollisionVertexStream
{
};

struct FRuntimeMeshCollisionTriangleStream
{
};

struct FRuntimeMeshCollisionTexCoordStream
{
};

struct FRuntimeMeshCollisionMaterialIndexStream
{
};

struct FRuntimeMeshRenderableMeshData
{
    FRuntimeMeshVertexPositionStream Positions;
    FRuntimeMeshVertexTangentStream Tangents;
    FRuntimeMeshVertexTexCoordStream TexCoords;
    FRuntimeMeshVertexColorStream Colors;
    FRuntimeMeshTriangleStream Triangles;
    FRuntimeMeshTriangleStream AdjacencyTriangles;

};

struct FRuntimeMeshCollisionData
{
    FRuntimeMeshCollisionVertexStream Vertices;
    FRuntimeMeshCollisionTriangleStream Triangles;
    FRuntimeMeshCollisionTexCoordStream TexCoords;
    FRuntimeMeshCollisionMaterialIndexStream MaterialIndices;
    TArray<FRuntimeMeshCollisionSourceSectionInfo> CollisionSources;
    bool bFlipNormals;
    bool bDeformableMesh;
    bool bFastCook;
    bool bDisableActiveEdgePrecompute;

};

struct FRuntimeMeshCollisionConvexMesh
{
    TArray<FVector> VertexBuffer;
    FBox BoundingBox;

};

struct FRuntimeMeshCollisionSphere
{
    FVector Center;
    float Radius;

};

struct FRuntimeMeshCollisionBox
{
    FVector Center;
    FRotator Rotation;
    FVector Extents;

};

struct FRuntimeMeshCollisionCapsule
{
    FVector Center;
    FRotator Rotation;
    float Radius;
    float Length;

};

struct FRuntimeMeshCollisionSettings
{
    bool bUseComplexAsSimple;
    bool bUseAsyncCooking;
    ERuntimeMeshCollisionCookingMode CookingMode;
    TArray<FRuntimeMeshCollisionConvexMesh> ConvexElements;
    TArray<FRuntimeMeshCollisionSphere> Spheres;
    TArray<FRuntimeMeshCollisionBox> Boxes;
    TArray<FRuntimeMeshCollisionCapsule> Capsules;

};

class URuntimeMeshBlueprintFunctions : public UBlueprintFunctionLibrary
{

    void SetVertexIndex(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 Index, int32 NewIndex);
    void SetTexCoord(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Index, FVector2D NewTexCoord, int32 ChannelId);
    void SetTangents(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector InTangentX, FVector InTangentY, FVector InTangentZ);
    void SetTangent(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector NewTangent);
    void SetPosition(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32 Index, FVector NewPosition);
    void SetNumTriangles(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 NewNum, bool bAllowShrinking);
    void SetNumTexCoords(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 NewNum, bool bAllowShrinking);
    void SetNumTangents(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 NewNum, bool bAllowShrinking);
    void SetNumPositions(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32 NewNum, bool bAllowShrinking);
    void SetNumColors(FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32 NewNum, bool bAllowShrinking);
    void SetNumCollisionVertices(FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32 NewNum, bool bAllowShrinking);
    void SetNumCollisionTriangles(FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32 NewNum, bool bAllowShrinking);
    void SetNumCollisionTexCoords(FRuntimeMeshCollisionTexCoordStream& Stream, FRuntimeMeshCollisionTexCoordStream& OutStream, int32 NewNumChannels, int32 NewNumTexCoords, bool bAllowShrinking);
    void SetNumCollisionMaterialIndices(FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32 NewNum, bool bAllowShrinking);
    void SetNormal(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector NewNormal);
    void SetColor(FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32 Index, FLinearColor NewColor);
    void SetCollisionVertex(FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32 Index, FVector NewVertex);
    void SetCollisionTexCoord(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Index, FVector2D NewTexCoord, int32 ChannelId);
    void SeCollisionMaterialIndex(FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32 Index, int32 NewIndex);
    void NumTriangles(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32& OutNumTriangles);
    void NumTexCoords(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32& OutNumTexCoords);
    void NumTexCoordChannels(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32& OutNumTexCoordChannels);
    void NumTangents(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32& OutNumTangents);
    void NumPositions(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32& OutNumPositions);
    void NumIndices(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32& OutNumIndices);
    void NumColors(FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32& OutNumColors);
    void NumCollisionVertices(FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32& OutNumVertices);
    void NumCollisionTriangles(FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32& OutNumTriangles);
    void NumCollisionTexCoords(FRuntimeMeshCollisionTexCoordStream& Stream, FRuntimeMeshCollisionTexCoordStream& OutStream, int32 ChannelId, int32& OutNumTexCoords);
    void NumCollisionTexCoordChannels(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32& OutNumTexCoordChannels);
    void NumCollisionMaterialIndices(FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32& OutNumIndices);
    void GetVertexIndex(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 Index, int32& OutIndex);
    FRuntimeMeshTriangleStream GetTriangleStream(FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData);
    FRuntimeMeshVertexTexCoordStream GetTexCoordStream(FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData);
    void GetTexCoord(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Index, FVector2D& OutTexCoord);
    FRuntimeMeshVertexTangentStream GetTangentStream(FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData);
    void GetTangents(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector& OutTangentX, FVector& OutTangentY, FVector& OutTangentZ);
    void GetTangent(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector& OutTangent);
    FRuntimeMeshVertexPositionStream GetPositionStream(FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData);
    void GetPosition(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32 Index, FVector& OutPosition);
    void GetNormal(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector& OutNormal);
    FRuntimeMeshVertexColorStream GetColorStream(FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData);
    void GetColor(FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32 Index, FLinearColor& OutColor);
    FRuntimeMeshCollisionVertexStream GetCollisionVertexStream(FRuntimeMeshCollisionData& CollisionData, FRuntimeMeshCollisionData& OutCollisionData);
    void GetCollisionVertex(FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32 Index, FVector& OutVertex);
    FRuntimeMeshCollisionTriangleStream GetCollisionTriangleStream(FRuntimeMeshCollisionData& CollisionData, FRuntimeMeshCollisionData& OutCollisionData);
    void GetCollisionTriangle(FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32 Index, int32& OutIndexA, int32& OutIndexB, int32& OutIndexC);
    FRuntimeMeshCollisionTexCoordStream GetCollisionTexCoordStream(FRuntimeMeshCollisionData& CollisionData, FRuntimeMeshCollisionData& OutCollisionData);
    void GetCollisionTexCoord(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Index, FVector2D& OutTexCoord, int32 ChannelId);
    FRuntimeMeshCollisionMaterialIndexStream GetCollisionMaterialIndexStream(FRuntimeMeshCollisionData& CollisionData, FRuntimeMeshCollisionData& OutCollisionData);
    void GetCollisionMaterialIndex(FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32 Index, int32& OutIndex);
    void GetBounds(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, FBox& OutBounds);
    FRuntimeMeshTriangleStream GetAdjacencyTriangleStream(FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData);
    void EmptyTriangles(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 Slack);
    void EmptyTexCoords(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Slack);
    void EmptyTangents(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Slack);
    void EmptyPositions(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32 Slack);
    void EmptyColors(FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32 Slack);
    void EmptyCollisionVertices(FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32 Slack);
    void EmptyCollisionTriangles(FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32 Slack);
    void EmptyCollisionTexCoords(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Slack);
    void EmptyCollisionMaterialIndices(FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32 Slack);
    FRuntimeMeshRenderableMeshData CreateRenderableMeshData(bool bWantsHighPrecisionTangents, bool bWantsHighPrecisionTexCoords, uint8 NumTexCoords, bool bWants32BitIndices);
    void AppendTriangles(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, const FRuntimeMeshTriangleStream& InOther);
    void AppendTexCoords(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, const FRuntimeMeshVertexTexCoordStream& InOther);
    void AppendTangents(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, const FRuntimeMeshVertexTangentStream& InOther);
    void AppendPositions(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, const FRuntimeMeshVertexPositionStream& InOther);
    void AppendColors(FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, const FRuntimeMeshVertexColorStream& InOther);
    void AddTriangle(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 NewIndexA, int32 NewIndexB, int32 NewIndexC);
    void AddTexCoord(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32& OutIndex, FVector2D InTexCoord, int32 ChannelId);
    void AddTangents(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, FVector InTangentX, FVector InTangentY, FVector InTangentZ, int32& OutIndex);
    void AddPosition(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, FVector InPosition, int32& OutIndex);
    void AddNormalAndTangent(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, FVector InNormal, FVector InTangent, int32& OutIndex);
    void AddIndex(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 NewIndex, int32& OutIndex);
    void AddColor(FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, FLinearColor InColor, int32& OutIndex);
    void AddCollisionVertex(FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, FVector InVertex, int32& OutIndex);
    void AddCollisionTriangle(FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32 NewIndexA, int32 NewIndexB, int32 NewIndexC, int32& OutTriangleIndex);
    void AddCollisionTexCoord(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, FVector2D InTexCoord, int32& OutIndex);
    void AddCollisionSphere(FRuntimeMeshCollisionSettings& Settings, FRuntimeMeshCollisionSettings& OutSettings, FRuntimeMeshCollisionSphere NewSphere);
    void AddCollisionMaterialIndex(FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32 NewIndex, int32& OutIndex);
    void AddCollisionConvex(FRuntimeMeshCollisionSettings& Settings, FRuntimeMeshCollisionSettings& OutSettings, FRuntimeMeshCollisionConvexMesh NewConvex);
    void AddCollisionCapsule(FRuntimeMeshCollisionSettings& Settings, FRuntimeMeshCollisionSettings& OutSettings, FRuntimeMeshCollisionCapsule NewCapsule);
    void AddCollisionBox(FRuntimeMeshCollisionSettings& Settings, FRuntimeMeshCollisionSettings& OutSettings, FRuntimeMeshCollisionBox NewBox);
};

class URuntimeMeshComponent : public UMeshComponent
{
    class URuntimeMesh* RuntimeMeshReference;

    void SetupMaterialSlot(int32 MaterialSlot, FName SlotName, class UMaterialInterface* InMaterial);
    void SetRuntimeMeshMobility(ERuntimeMeshMobility NewMobility);
    void SetRuntimeMesh(class URuntimeMesh* NewMesh);
    void Initialize(class URuntimeMeshProvider* Provider);
    ERuntimeMeshMobility GetRuntimeMeshMobility();
    class URuntimeMesh* GetRuntimeMesh();
    class URuntimeMeshProvider* GetProvider();
    class URuntimeMesh* GetOrCreateRuntimeMesh();
    TArray<FRuntimeMeshMaterialSlot> GetMaterialSlots();
    FRuntimeMeshCollisionHitInfo GetHitSource(int32 FaceIndex);
};

class URuntimeMeshComponentEngineSubsystem : public UEngineSubsystem
{
};

class URuntimeMeshComponentSettings : public UDeveloperSettings
{
    ERuntimeMeshUpdateFrequency DefaultUpdateFrequency;
    bool bUse32BitIndicesByDefault;
    bool bUseHighPrecisionTexCoordsByDefault;
    bool bUseHighPrecisionTangentsByDefault;
    bool bCookCollisionAsync;
    ERuntimeMeshCollisionCookingMode DefaultCookingMode;
    FInt32Range MinMaxThreadPoolThreads;
    int32 SystemThreadDivisor;
    ERuntimeMeshThreadingPriority ThreadPriority;
    int32 ThreadStackSize;
    float MaxAllowedTimePerTick;

};

struct FRuntimeMeshTangent
{
    FVector TangentX;
    bool bFlipTangentY;

};

class URuntimeMeshComponentStatic : public URuntimeMeshComponent
{
    class URuntimeMesh* RuntimeMesh;
    class URuntimeMeshProviderStatic* StaticProvider;
    class URuntimeMeshModifierNormals* NormalsModifier;
    class URuntimeMeshModifierAdjacency* AdjacencyModifier;

    void UpdateSectionFromComponents(int32 LODIndex, int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FRuntimeMeshTangent>& Tangents);
    void UpdateSection_Blueprint(int32 LODIndex, int32 SectionId, const FRuntimeMeshRenderableMeshData& SectionData);
    void SetRenderableSectionAffectsCollision(int32 SectionId, bool bCollisionEnabled);
    void SetRenderableLODForCollision(int32 LODIndex);
    void SetCollisionSettings(const FRuntimeMeshCollisionSettings& NewCollisionSettings);
    void SetCollisionMesh(const FRuntimeMeshCollisionData& NewCollisionMesh);
    void RemoveAllSectionsForLOD(int32 LODIndex);
    bool HasTessellationTriangleGenerationEnabled();
    bool HasNormalTangentGenerationEnabled();
    class URuntimeMeshProviderStatic* GetStaticProvider();
    TSet<int32> GetSectionsForMeshCollision();
    FRuntimeMeshRenderableMeshData GetSectionRenderDataAndClear(int32 LODIndex, int32 SectionId);
    FRuntimeMeshRenderableMeshData GetSectionRenderData(int32 LODIndex, int32 SectionId);
    FRuntimeMeshSectionProperties GetSectionProperties(int32 LODIndex, int32 SectionId);
    TArray<int32> GetSectionIds(int32 LODIndex);
    FBoxSphereBounds GetSectionBounds(int32 LODIndex, int32 SectionId);
    int32 GetLODForMeshCollision();
    int32 GetLastSectionId(int32 LODIndex);
    FRuntimeMeshCollisionSettings GetCollisionSettings();
    FRuntimeMeshCollisionData GetCollisionMesh();
    void EnableNormalTangentGeneration();
    void EnabledTessellationTrianglesGeneration();
    bool DoesSectionHaveValidMeshData(int32 LODIndex, int32 SectionId);
    void DisableTessellationTrianglesGeneration();
    void DisableNormalTangentGeneration();
    void CreateSectionFromComponents(int32 LODIndex, int32 SectionIndex, int32 MaterialSlot, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FRuntimeMeshTangent>& Tangents, ERuntimeMeshUpdateFrequency UpdateFrequency, bool bCreateCollision);
    void CreateSection_Blueprint(int32 LODIndex, int32 SectionId, const FRuntimeMeshSectionProperties& SectionProperties, const FRuntimeMeshRenderableMeshData& SectionData);
    void ClearSection(int32 LODIndex, int32 SectionId);
};

class URuntimeMeshModifier : public UObject
{

    void ApplyToMesh(FRuntimeMeshRenderableMeshData& MeshData);
    void ApplyToCollisionMesh(FRuntimeMeshCollisionData& MeshData);
};

class URuntimeMeshModifierAdjacency : public URuntimeMeshModifier
{

    void CalculateTessellationIndices(FRuntimeMeshRenderableMeshData& MeshData);
};

class URuntimeMeshModifierNormals : public URuntimeMeshModifier
{
    bool bComputeSmoothNormals;

    void CalculateNormalsTangents(FRuntimeMeshRenderableMeshData& MeshData, bool bInComputeSmoothNormals);
};

struct FRuntimeMeshSectionData
{
};

class URuntimeMeshProvider : public URuntimeMeshProviderTargetInterface
{

    void Shutdown();
    bool IsThreadSafe();
    bool IsBound();
    void Initialize();
    bool HasCollisionMesh();
    bool GetSectionMeshForLOD(int32 LODIndex, int32 SectionId, FRuntimeMeshRenderableMeshData& MeshData);
    FRuntimeMeshCollisionSettings GetCollisionSettings();
    bool GetCollisionMesh(FRuntimeMeshCollisionData& CollisionData);
    FBoxSphereBounds GetBounds();
    bool GetAllSectionsMeshForLOD(int32 LODIndex, TMap<int32, FRuntimeMeshSectionData>& MeshDatas);
    void CollisionUpdateCompleted();
};

class URuntimeMeshProviderPassthrough : public URuntimeMeshProvider
{
    class URuntimeMeshProvider* ChildProvider;

    void SetChildProvider(class URuntimeMeshProvider* InProvider);
    class URuntimeMeshProvider* GetChildProvider();
};

class URuntimeMeshProviderBox : public URuntimeMeshProvider
{
    FVector BoxRadius;
    class UMaterialInterface* Material;

    void SetBoxRadius(const FVector& InRadius);
    void SetBoxMaterial(class UMaterialInterface* InMaterial);
    FVector GetBoxRadius();
    class UMaterialInterface* GetBoxMaterial();
};

struct FRuntimeMeshRenderableCollisionData
{
    FRuntimeMeshCollisionVertexStream Vertices;
    FRuntimeMeshCollisionTriangleStream Triangles;
    FRuntimeMeshCollisionTexCoordStream TexCoords;

};

class URuntimeMeshProviderCollision : public URuntimeMeshProviderPassthrough
{
    int32 LODForMeshCollision;
    TMap<int32, FRuntimeMeshRenderableCollisionData> RenderableCollisionData;
    TSet<int32> SectionsAffectingCollision;
    FRuntimeMeshCollisionSettings CollisionSettings;
    FRuntimeMeshCollisionData CollisionMesh;

    void SetRenderableSectionAffectsCollision(int32 SectionId, bool bCollisionEnabled);
    void SetRenderableLODForCollision(int32 LODIndex);
    void SetCollisionSettings(const FRuntimeMeshCollisionSettings& NewCollisionSettings);
    void SetCollisionMesh(const FRuntimeMeshCollisionData& NewCollisionMesh);
};

class URuntimeMeshProviderMemoryCache : public URuntimeMeshProviderPassthrough
{

    void ClearCache();
};

class URuntimeMeshProviderModifiers : public URuntimeMeshProviderPassthrough
{
    TArray<class URuntimeMeshModifier*> Modifiers;

    void RemoveModifier(class URuntimeMeshModifier* ModifierToRemove);
    void AddModifier(class URuntimeMeshModifier* NewModifier);
};

class URuntimeMeshProviderPlane : public URuntimeMeshProviderPassthrough
{
    FVector LocationA;
    FVector LocationB;
    FVector LocationC;
    TArray<int32> VertsAB;
    TArray<int32> VertsAC;
    TArray<float> ScreenSize;
    class UMaterialInterface* Material;

};

class URuntimeMeshProviderSphere : public URuntimeMeshProvider
{
    int32 MaxLOD;
    float SphereRadius;
    int32 MaxLatitudeSegments;
    int32 MinLatitudeSegments;
    int32 MaxLongitudeSegments;
    int32 MinLongitudeSegments;
    float LODMultiplier;
    class UMaterialInterface* SphereMaterial;

    void SetSphereRadius(float InSphereRadius);
    void SetSphereMaterial(class UMaterialInterface* InSphereMaterial);
    void SetMinLongitudeSegments(int32 InMinLongitudeSegments);
    void SetMinLatitudeSegments(int32 InMinLatitudeSegments);
    void SetMaxLongitudeSegments(int32 InMaxLongitudeSegments);
    void SetMaxLatitudeSegments(int32 InMaxLatitudeSegments);
    void SetLODMultiplier(float InLODMultiplier);
    float GetSphereRadius();
    class UMaterialInterface* GetSphereMaterial();
    int32 GetMinLongitudeSegments();
    int32 GetMinLatitudeSegments();
    int32 GetMaxLongitudeSegments();
    int32 GetMaxLatitudeSegments();
    float GetLODMultiplier();
};

class URuntimeMeshProviderStatic : public URuntimeMeshProvider
{
    bool StoreEditorGeneratedDataForGame;
    TArray<class URuntimeMeshModifier*> CurrentMeshModifiers;

    void UpdateSectionFromComponents(int32 LODIndex, int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FRuntimeMeshTangent>& Tangents);
    void UpdateSection_Blueprint(int32 LODIndex, int32 SectionId, const FRuntimeMeshRenderableMeshData& SectionData);
    void UnRegisterModifier(class URuntimeMeshModifier* Modifier);
    void SetShouldSerializeMeshData(bool bIsSerialized);
    void SetRenderableSectionAffectsCollision(int32 SectionId, bool bCollisionEnabled, bool bForceUpdate);
    void SetRenderableLODForCollision(int32 LODIndex);
    void SetCollisionSettings(const FRuntimeMeshCollisionSettings& NewCollisionSettings);
    void SetCollisionMesh(const FRuntimeMeshCollisionData& NewCollisionMesh);
    void RemoveAllSectionsForLOD(int32 LODIndex);
    void RegisterModifier(class URuntimeMeshModifier* Modifier);
    TSet<int32> GetSectionsForMeshCollision();
    FRuntimeMeshRenderableMeshData GetSectionRenderDataAndClear(int32 LODIndex, int32 SectionId);
    FRuntimeMeshRenderableMeshData GetSectionRenderData(int32 LODIndex, int32 SectionId);
    FRuntimeMeshSectionProperties GetSectionProperties(int32 LODIndex, int32 SectionId);
    TArray<int32> GetSectionIds(int32 LODIndex);
    FBoxSphereBounds GetSectionBounds(int32 LODIndex, int32 SectionId);
    int32 GetLODForMeshCollision();
    int32 GetLastSectionId(int32 LODIndex);
    FRuntimeMeshCollisionSettings GetCollisionSettingsStatic();
    FRuntimeMeshCollisionData GetCollisionMeshStatic();
    bool DoesSectionHaveValidMeshData(int32 LODIndex, int32 SectionId);
    void CreateSectionFromComponents(int32 LODIndex, int32 SectionIndex, int32 MaterialSlot, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FRuntimeMeshTangent>& Tangents, ERuntimeMeshUpdateFrequency UpdateFrequency, bool bCreateCollision);
    void CreateSection_Blueprint(int32 LODIndex, int32 SectionId, const FRuntimeMeshSectionProperties& SectionProperties, const FRuntimeMeshRenderableMeshData& SectionData);
};

class URuntimeMeshProviderStaticMesh : public URuntimeMeshProvider
{
    class UStaticMesh* StaticMesh;
    int32 MaxLOD;
    int32 ComplexCollisionLOD;

    void SetStaticMesh(class UStaticMesh* InStaticMesh);
    void SetMaxLOD(int32 InMaxLOD);
    void SetComplexCollisionLOD(int32 InLOD);
    class UStaticMesh* GetStaticMesh();
    int32 GetMaxLOD();
    int32 GetComplexCollisionLOD();
};

class URuntimeMeshSlicer : public UBlueprintFunctionLibrary
{

    bool SliceRuntimeMeshData(FRuntimeMeshRenderableMeshData& SourceSection, const FPlane& SlicePlane, ERuntimeMeshSliceCapOption CapOption, FRuntimeMeshRenderableMeshData& NewSourceSection, FRuntimeMeshRenderableMeshData& NewSourceSectionCap, bool bCreateDestination, FRuntimeMeshRenderableMeshData& DestinationSection, FRuntimeMeshRenderableMeshData& NewDestinationSectionCap);
    void SliceRuntimeMesh(class URuntimeMeshComponent* InRuntimeMesh, FVector PlanePosition, FVector PlaneNormal, bool bCreateOtherHalf, class URuntimeMeshComponent*& OutOtherHalfRuntimeMesh, ERuntimeMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial);
};

class URuntimeMeshStaticMeshConverter : public UBlueprintFunctionLibrary
{

    bool CopyStaticMeshToRuntimeMesh(class UStaticMesh* StaticMesh, class URuntimeMeshComponent* RuntimeMeshComponent, int32 CollisionLODIndex, int32 MaxLODToCopy);
    bool CopyStaticMeshSectionToRenderableMeshData(class UStaticMesh* StaticMesh, int32 LODIndex, int32 SectionId, FRuntimeMeshRenderableMeshData& OutMeshData);
    bool CopyStaticMeshLODToCollisionData(class UStaticMesh* StaticMesh, int32 LODIndex, FRuntimeMeshCollisionData& OutCollisionData);
    bool CopyStaticMeshComponentToRuntimeMesh(class UStaticMeshComponent* StaticMeshComponent, class URuntimeMeshComponent* RuntimeMeshComponent, int32 CollisionLODIndex, int32 MaxLODToCopy);
    bool CopyStaticMeshCollisionToCollisionSettings(class UStaticMesh* StaticMesh, FRuntimeMeshCollisionSettings& OutCollisionSettings);
};

#endif
