#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GLTFExporter

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// Enum GLTFExporter.EGLTFTextureImageFormat
// NumValues: 0x0004
enum class EGLTFTextureImageFormat : uint8
{
	None                                     = 0,
	PNG                                      = 1,
	JPEG                                     = 2,
	EGLTFTextureImageFormat_MAX              = 3,
};

// Enum GLTFExporter.EGLTFMaterialVariantMode
// NumValues: 0x0004
enum class EGLTFMaterialVariantMode : uint8
{
	None                                     = 0,
	Simple                                   = 1,
	UseMeshData                              = 2,
	EGLTFMaterialVariantMode_MAX             = 3,
};

// Enum GLTFExporter.EGLTFMaterialBakeMode
// NumValues: 0x0004
enum class EGLTFMaterialBakeMode : uint8
{
	Disabled                                 = 0,
	Simple                                   = 1,
	UseMeshData                              = 2,
	EGLTFMaterialBakeMode_MAX                = 3,
};

// Enum GLTFExporter.EGLTFMaterialBakeSizePOT
// NumValues: 0x000F
enum class EGLTFMaterialBakeSizePOT : uint8
{
	POT_1                                    = 0,
	POT_2                                    = 1,
	POT_4                                    = 2,
	POT_8                                    = 3,
	POT_16                                   = 4,
	POT_32                                   = 5,
	POT_64                                   = 6,
	POT_128                                  = 7,
	POT_256                                  = 8,
	POT_512                                  = 9,
	POT_1024                                 = 10,
	POT_2048                                 = 11,
	POT_4096                                 = 12,
	POT_8192                                 = 13,
	POT_MAX                                  = 14,
};

// Enum GLTFExporter.EGLTFMaterialPropertyGroup
// NumValues: 0x0009
enum class EGLTFMaterialPropertyGroup : uint8
{
	None                                     = 0,
	BaseColorOpacity                         = 1,
	MetallicRoughness                        = 2,
	EmissiveColor                            = 3,
	Normal                                   = 4,
	AmbientOcclusion                         = 5,
	ClearCoatRoughness                       = 6,
	ClearCoatBottomNormal                    = 7,
	EGLTFMaterialPropertyGroup_MAX           = 8,
};

// ScriptStruct GLTFExporter.GLTFExportMessages
// 0x0030 (0x0030 - 0x0000)
struct FGLTFExportMessages final
{
public:
	TArray<class FString>                         Suggestions;                                       // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                         Warnings;                                          // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                         Errors;                                            // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct GLTFExporter.GLTFOverrideMaterialBakeSettings
// 0x0006 (0x0006 - 0x0000)
struct FGLTFOverrideMaterialBakeSettings final
{
public:
	bool                                          bOverrideSize;                                     // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGLTFMaterialBakeSizePOT                      Size;                                              // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverrideFilter;                                   // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureFilter                                Filter;                                            // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverrideTiling;                                   // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureAddress                               Tiling;                                            // 0x0005(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
