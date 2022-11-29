enum class EPhysicsGripCOMType {
    COM_Default = 0,
    COM_AtPivot = 1,
    COM_SetAndGripAt = 2,
    COM_GripAt = 3,
    COM_GripAtControllerLoc = 4,
    COM_MAX = 5,
};

enum class EPhysicsGripConstraintType {
    AccelerationConstraint = 0,
    ForceConstraint = 1,
    EPhysicsGripConstraintType_MAX = 2,
};

enum class EGripMovementReplicationSettings {
    KeepOriginalMovement = 0,
    ForceServerSideMovement = 1,
    ForceClientSideMovement = 2,
    ClientSide_Authoritive = 3,
    ClientSide_Authoritive_NoRep = 4,
    EGripMovementReplicationSettings_MAX = 5,
};

enum class EGripLateUpdateSettings {
    LateUpdatesAlwaysOn = 0,
    LateUpdatesAlwaysOff = 1,
    NotWhenColliding = 2,
    NotWhenDoubleGripping = 3,
    NotWhenCollidingOrDoubleGripping = 4,
    EGripLateUpdateSettings_MAX = 5,
};

enum class EGripCollisionType {
    InteractiveCollisionWithPhysics = 0,
    InteractiveCollisionWithSweep = 1,
    InteractiveHybridCollisionWithPhysics = 2,
    InteractiveHybridCollisionWithSweep = 3,
    SweepWithPhysics = 4,
    PhysicsOnly = 5,
    ManipulationGrip = 6,
    ManipulationGripWithWristTwist = 7,
    AttachmentGrip = 8,
    CustomGrip = 9,
    EventsOnly = 10,
    EGripCollisionType_MAX = 11,
};

enum class EGripTargetType {
    ActorGrip = 0,
    ComponentGrip = 1,
    EGripTargetType_MAX = 2,
};

enum class SideBP {
    Left = 0,
    Right = 1,
    Front = 2,
    Back = 3,
    Top = 4,
    Down = 5,
    SideBP_MAX = 6,
};

enum class ERotation {
    Right = 0,
    Left = 1,
    Forward = 2,
    Back = 3,
    Up = 4,
    Down = 5,
    None = 6,
    ERotation_MAX = 7,
};

enum class ETreeClass {
    Tree = 0,
    Cactus = 1,
    Grass = 2,
    ETreeClass_MAX = 3,
};

enum class ETreeType {
    Sycamore = 0,
    AspenSummer = 1,
    Cactus1 = 2,
    Cactus2 = 3,
    Cactus3 = 4,
    Cactus4 = 5,
    DesertGrass1 = 6,
    DesertGrass2 = 7,
    TREE_END_NUMBER = 8,
    ETreeType_MAX = 9,
};

enum class EMeshObjectType {
    BigGroundObject = 0,
    WallObject = 1,
    SpecialObject = 2,
    EMeshObjectType_MAX = 3,
};

enum class EBlockTypeBP {
    Stone = 0,
    Grass = 1,
    Dirt = 2,
    Air = 3,
    BottomStone = 4,
    GrassFoliage = 5,
    TreeWood = 6,
    BlackHelperBlock = 7,
    AirCave = 8,
    B_Water = 9,
    Sand = 10,
    Invalid = 11,
    Ore_Coal = 12,
    Ore_Iron = 13,
    TreeRoot = 14,
    Torch = 15,
    Flower1 = 16,
    Flower2 = 17,
    T_Stick = 18,
    T_Pickaxe_Stone = 19,
    T_Axe_Stone = 20,
    T_Shovel_Stone = 21,
    Nugget_Copper = 22,
    Nugget_Gold = 23,
    Nugget_Coal = 24,
    Ore_Copper = 25,
    Ore_Gold = 26,
    Ore_Silver = 27,
    T_Pickaxe_Copper = 28,
    T_Axe_Copper = 29,
    T_Shovel_Copper = 30,
    MeatDeer = 31,
    TreeWoodBright = 32,
    WoodPlankBright = 33,
    WoodPlank = 34,
    StoneMined = 35,
    Flower3 = 36,
    TorchBlue = 37,
    DyeBlue = 38,
    Flower4 = 39,
    TorchGreen = 40,
    DyeGreen = 41,
    Compass = 42,
    Chest1 = 43,
    SpecialBlockObject = 44,
    MeshObject = 45,
    Wallstone = 46,
    Flagstone = 47,
    DyeRed = 48,
    TorchRed = 49,
    Chair1 = 50,
    Chair1Birch = 51,
    WoodScaffolding = 52,
    T_Arrow = 53,
    WallmountCopper = 54,
    Cactus = 55,
    DesertGrass = 56,
    FrameWood = 57,
    FrameGold = 58,
    FrameCopper = 59,
    T_Sledgehammer_Copper = 60,
    TorchRainbow = 61,
    DyeRainbow = 62,
    FlowerRainbow = 63,
    DyeWhite = 64,
    BigWallStone = 65,
    ModBlock = 66,
    CrystalBlock = 67,
    Crystal = 68,
    Furnace = 69,
    FurnaceMoldIron = 70,
    FlintStone = 71,
    DryGrass = 72,
    IngotIron = 73,
    T_Pickaxe_Iron = 74,
    T_Sledgehammer_Iron = 75,
    T_Axe_Iron = 76,
    T_Shovel_Iron = 77,
    WoodStool = 78,
    WoodTable1 = 79,
    WoodTable2 = 80,
    WoodCarafe = 81,
    WoodBench1 = 82,
    WoodBarrel = 83,
    WoodPost = 84,
    MetalPod = 85,
    WoodBench2 = 86,
    WoodBench3 = 87,
    SandbagPile = 88,
    GlassBlock = 89,
    ModBlockTransparent = 90,
    GlassIngot = 91,
    LootableInventory = 92,
    RespawnTorch = 93,
    T_Bow = 94,
    StatueSmoothbrain = 95,
    ShimmerstoneBlue = 96,
    ShimmerstoneGold = 97,
    ShimmerstoneWhite = 98,
    ShimmerstoneGreen = 99,
    StarstoneBlue = 100,
    StarstoneGold = 101,
    StarstoneGreen = 102,
    ShimmertileBlue = 103,
    ShimmertileGold = 104,
    ShimmertileWhite = 105,
    ShimmertileGreen = 106,
    TorchCloaked = 107,
    TorchCloakedBlue = 108,
    TorchCloakedGreen = 109,
    TorchCloakedRed = 110,
    TorchCloakedRainbow = 111,
    Cloakstone = 112,
    Nugget_Cloak = 113,
    MAX_BLOCKTYPE = 114,
    EBlockTypeBP_MAX = 115,
};

enum class EItemClass {
    Block = 0,
    Tool = 1,
    Nugget = 2,
    Meat = 3,
    Object = 4,
    MeshObject = 5,
    EItemClass_MAX = 6,
};

enum class EFootstepType {
    Stone = 0,
    Wood = 1,
    Dirt = 2,
    Sand = 3,
    Glass = 4,
    None = 5,
    EFootstepType_MAX = 6,
};

enum class EHMDType {
    Vive = 0,
    Rift = 1,
    WMR = 2,
    EHMDType_MAX = 3,
};

enum class EBiome {
    Regular = 0,
    Desert = 1,
    Invalid = 2,
    EBiome_MAX = 3,
};

enum class EJoyImageFormats {
    JPG = 0,
    PNG = 1,
    BMP = 2,
    ICO = 3,
    EXR = 4,
    ICNS = 5,
    EJoyImageFormats_MAX = 6,
};

enum class EGripInterfaceTeleportBehavior {
    TeleportAllComponents = 0,
    DeltaTeleportation = 1,
    OnlyTeleportRootComponent = 2,
    DropOnTeleport = 3,
    DontTeleport = 4,
    EGripInterfaceTeleportBehavior_MAX = 5,
};

enum class ESecondaryGripType {
    SG_None = 0,
    SG_Free = 1,
    SG_SlotOnly = 2,
    SG_Free_Retain = 3,
    SG_SlotOnly_Retain = 4,
    SG_FreeWithScaling_Retain = 5,
    SG_SlotOnlyWithScaling_Retain = 6,
    SG_Custom = 7,
    SG_ScalingOnly = 8,
    SG_MAX = 9,
};

enum class EGripLerpState {
    StartLerp = 0,
    EndLerp = 1,
    NotLerping = 2,
    EGripLerpState_MAX = 3,
};

enum class EBPHMDDeviceType {
    DT_OculusHMD = 0,
    DT_PSVR = 1,
    DT_ES2GenericStereoMesh = 2,
    DT_SteamVR = 3,
    DT_GearVR = 4,
    DT_GoogleVR = 5,
    DT_AppleARKit = 6,
    DT_GoogleARCore = 7,
    DT_Unknown = 8,
    DT_MAX = 9,
};

enum class EVRRotationQuantization {
    RoundTo10Bits = 0,
    RoundToShort = 1,
    EVRRotationQuantization_MAX = 2,
};

enum class EVRVectorQuantization {
    RoundOneDecimal = 0,
    RoundTwoDecimals = 1,
    EVRVectorQuantization_MAX = 2,
};

enum class EVRVelocityType {
    VRLOCITY_Default = 0,
    VRLOCITY_RunningAverage = 1,
    VRLOCITY_SamplePeak = 2,
    VRLOCITY_MAX = 3,
};

enum class EBPVRWaistTrackingMode {
    VRWaist_Tracked_Front = 0,
    VRWaist_Tracked_Rear = 1,
    VRWaist_Tracked_Left = 2,
    VRWaist_Tracked_Right = 3,
    VRWaist_Tracked_MAX = 4,
};

enum class EBPVRResultSwitch {
    OnSucceeded = 0,
    OnFailed = 1,
    EBPVRResultSwitch_MAX = 2,
};

enum class EVRConjoinedMovementModes {
    C_MOVE_None = 0,
    C_MOVE_Walking = 1,
    C_MOVE_NavWalking = 2,
    C_MOVE_Falling = 3,
    C_MOVE_Swimming = 4,
    C_MOVE_Flying = 5,
    C_MOVE_MAX = 7,
    C_VRMOVE_Climbing = 8,
    C_VRMOVE_LowGrav = 9,
    C_VRMOVE_Seated = 10,
    C_VRMOVE_Custom1 = 11,
    C_VRMOVE_Custom2 = 12,
    C_VRMOVE_Custom3 = 13,
    C_VRMOVE_Custom4 = 14,
    C_VRMOVE_Custom5 = 15,
    C_MAX = 16,
};

enum class EVRCustomMovementMode {
    VRMOVE_Climbing = 0,
    VRMOVE_LowGrav = 1,
    VRMOVE_Seated = 2,
    VRMOVE_MAX = 3,
};

enum class EBPHMDWornState {
    Unknown = 0,
    Worn = 1,
    NotWorn = 2,
    EBPHMDWornState_MAX = 3,
};

enum class EGSTransformOverrideType {
    None = 0,
    OverridesWorldTransform = 1,
    ModifiesWorldTransform = 2,
    EGSTransformOverrideType_MAX = 3,
};

enum class EWeatherForceSetting {
    Never = 0,
    Natural = 1,
    Always = 2,
    Invalid = 3,
    EWeatherForceSetting_MAX = 4,
};

enum class EWeather {
    Regular = 0,
    Rain = 1,
    Snow = 2,
    Invalid = 3,
    EWeather_MAX = 4,
};

