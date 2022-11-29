enum class ERuntimeMeshCollisionFaceSourceType {
    Collision = 0,
    Renderable = 1,
    ERuntimeMeshCollisionFaceSourceType_MAX = 2,
};

enum class ERuntimeMeshThreadingPriority {
    Normal = 0,
    AboveNormal = 1,
    BelowNormal = 2,
    Highest = 3,
    Lowest = 4,
    SlightlyBelowNormal = 5,
    TimeCritical = 6,
    ERuntimeMeshThreadingPriority_MAX = 7,
};

enum class ERuntimeMeshCollisionCookingMode {
    CollisionPerformance = 0,
    CookingPerformance = 1,
    ERuntimeMeshCollisionCookingMode_MAX = 2,
};

enum class ERuntimeMeshUpdateFrequency {
    Average = 0,
    Frequent = 1,
    Infrequent = 2,
    ERuntimeMeshUpdateFrequency_MAX = 3,
};

enum class ERuntimeMeshMobility {
    Movable = 0,
    Stationary = 1,
    Static = 2,
    ERuntimeMeshMobility_MAX = 3,
};

enum class ERuntimeMeshSliceCapOption {
    NoCap = 0,
    CreateNewSectionForCap = 1,
    UseLastSectionForCap = 2,
    ERuntimeMeshSliceCapOption_MAX = 3,
};

