#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NavigationSystem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum NavigationSystem.ERuntimeGenerationType
// NumValues: 0x0005
enum class ERuntimeGenerationType : uint8
{
	Static                                   = 0,
	DynamicModifiersOnly                     = 1,
	Dynamic                                  = 2,
	LegacyGeneration                         = 3,
	ERuntimeGenerationType_MAX               = 4,
};

// Enum NavigationSystem.ENavCostDisplay
// NumValues: 0x0004
enum class ENavCostDisplay : uint8
{
	TotalCost                                = 0,
	HeuristicOnly                            = 1,
	RealCostOnly                             = 2,
	ENavCostDisplay_MAX                      = 3,
};

// Enum NavigationSystem.ERecastPartitioning
// NumValues: 0x0004
enum class ERecastPartitioning : uint8
{
	Monotone                                 = 0,
	Watershed                                = 1,
	ChunkyMonotone                           = 2,
	ERecastPartitioning_MAX                  = 3,
};

// Enum NavigationSystem.EHeightFieldRenderMode
// NumValues: 0x0003
enum class EHeightFieldRenderMode : uint8
{
	Solid                                    = 0,
	Walkable                                 = 1,
	EHeightFieldRenderMode_MAX               = 2,
};

// Enum NavigationSystem.ENavSystemOverridePolicy
// NumValues: 0x0004
enum class ENavSystemOverridePolicy : uint8
{
	Override                                 = 0,
	Append                                   = 1,
	Skip                                     = 2,
	ENavSystemOverridePolicy_MAX             = 3,
};

// ScriptStruct NavigationSystem.NavCollisionCylinder
// 0x0014 (0x0014 - 0x0000)
struct FNavCollisionCylinder final
{
public:
	struct FVector                                Offset;                                            // 0x0000(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Radius;                                            // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Height;                                            // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct NavigationSystem.NavCollisionBox
// 0x0018 (0x0018 - 0x0000)
struct FNavCollisionBox final
{
public:
	struct FVector                                Offset;                                            // 0x0000(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Extent;                                            // 0x000C(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct NavigationSystem.NavLinkCustomInstanceData
// 0x0008 (0x0070 - 0x0068)
struct FNavLinkCustomInstanceData final : public FActorComponentInstanceData
{
public:
	uint32                                        NavLinkUserId;                                     // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct NavigationSystem.NavigationFilterArea
// 0x0018 (0x0018 - 0x0000)
struct FNavigationFilterArea final
{
public:
	TSubclassOf<class UNavArea>                   AreaClass;                                         // 0x0000(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TravelCostOverride;                                // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EnteringCostOverride;                              // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bIsExcluded : 1;                                   // 0x0010(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverrideTravelCost : 1;                           // 0x0010(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverrideEnteringCost : 1;                         // 0x0010(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct NavigationSystem.SupportedAreaData
// 0x0020 (0x0020 - 0x0000)
struct FSupportedAreaData final
{
public:
	class FString                                 AreaClassName;                                     // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AreaID;                                            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    AreaClass;                                         // 0x0018(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct NavigationSystem.NavigationFilterFlags
// 0x0004 (0x0004 - 0x0000)
struct alignas(0x04) FNavigationFilterFlags final
{
public:
	uint8                                         bNavFlag0 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag1 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag2 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag3 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag4 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag5 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag6 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag7 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag8 : 1;                                     // 0x0001(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag9 : 1;                                     // 0x0001(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag10 : 1;                                    // 0x0001(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag11 : 1;                                    // 0x0001(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag12 : 1;                                    // 0x0001(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag13 : 1;                                    // 0x0001(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag14 : 1;                                    // 0x0001(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag15 : 1;                                    // 0x0001(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct NavigationSystem.NavGraphEdge
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FNavGraphEdge final
{
public:
	uint8                                         Pad_0[0x18];                                       // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct NavigationSystem.NavGraphNode
// 0x0018 (0x0018 - 0x0000)
struct FNavGraphNode final
{
public:
	class UObject*                                Owner;                                             // 0x0000(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8[0x10];                                       // 0x0008(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct NavigationSystem.RecastNavMeshGenerationProperties
// 0x0040 (0x0040 - 0x0000)
struct FRecastNavMeshGenerationProperties final
{
public:
	int32                                         TilePoolSize;                                      // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TileSizeUU;                                        // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CellSize;                                          // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CellHeight;                                        // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AgentRadius;                                       // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AgentHeight;                                       // 0x0014(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AgentMaxSlope;                                     // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AgentMaxStepHeight;                                // 0x001C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinRegionArea;                                     // 0x0020(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MergeRegionSize;                                   // 0x0024(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxSimplificationError;                            // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TileNumberHardLimit;                               // 0x002C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERecastPartitioning                           RegionPartitioning;                                // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERecastPartitioning                           LayerPartitioning;                                 // 0x0031(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_32[0x2];                                       // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RegionChunkSplits;                                 // 0x0034(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         LayerChunkSplits;                                  // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bSortNavigationAreasByCost : 1;                    // 0x003C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bPerformVoxelFiltering : 1;                        // 0x003C(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bMarkLowHeightAreas : 1;                           // 0x003C(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUseExtraTopCellWhenMarkingAreas : 1;              // 0x003C(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bFilterLowSpanSequences : 1;                       // 0x003C(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bFilterLowSpanFromTileCache : 1;                   // 0x003C(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bFixedTilePoolSize : 1;                            // 0x003C(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIsWorldPartitioned : 1;                           // 0x003C(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct NavigationSystem.RecastNavMeshTileGenerationDebug
// 0x001C (0x001C - 0x0000)
struct FRecastNavMeshTileGenerationDebug final
{
public:
	uint8                                         bEnabled : 1;                                      // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FIntVector                             TileCoordinate;                                    // 0x0004(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bGenerateDebugTileOnly : 1;                        // 0x0010(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCollisionGeometry : 1;                            // 0x0010(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	EHeightFieldRenderMode                        HeightFieldRenderMode;                             // 0x0014(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bHeightfieldFromRasterization : 1;                 // 0x0018(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bHeightfieldPostInclusionBoundsFiltering : 1;      // 0x0018(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bHeightfieldPostHeightFiltering : 1;               // 0x0018(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bHeightfieldBounds : 1;                            // 0x0018(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCompactHeightfield : 1;                           // 0x0018(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCompactHeightfieldEroded : 1;                     // 0x0018(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCompactHeightfieldRegions : 1;                    // 0x0018(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCompactHeightfieldDistances : 1;                  // 0x0018(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bTileCacheLayerAreas : 1;                          // 0x0019(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bTileCacheLayerRegions : 1;                        // 0x0019(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bTileCacheContours : 1;                            // 0x0019(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bTileCachePolyMesh : 1;                            // 0x0019(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bTileCacheDetailMesh : 1;                          // 0x0019(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct NavigationSystem.NavMeshResolutionParam
// 0x0008 (0x0008 - 0x0000)
struct FNavMeshResolutionParam final
{
public:
	float                                         CellSize;                                          // 0x0000(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CellHeight;                                        // 0x0004(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
