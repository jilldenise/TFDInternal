#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MovieRenderPipelineRenderPasses

#include "Basic.hpp"

#include "MovieRenderPipelineCore_classes.hpp"
#include "MovieRenderPipelineRenderPasses_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "ActorLayerUtilities_structs.hpp"


namespace SDK
{

// Class MovieRenderPipelineRenderPasses.MoviePipelineImagePassBase
// 0x0130 (0x0178 - 0x0048)
class UMoviePipelineImagePassBase : public UMoviePipelineRenderPass
{
public:
	uint8                                         Pad_48[0x130];                                     // 0x0048(0x0130)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MoviePipelineImagePassBase">();
	}
	static class UMoviePipelineImagePassBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMoviePipelineImagePassBase>();
	}
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPassBase
// 0x00C0 (0x0238 - 0x0178)
class UMoviePipelineDeferredPassBase : public UMoviePipelineImagePassBase
{
public:
	bool                                          bAccumulatorIncludesAlpha;                         // 0x0178(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDisableMultisampleEffects;                        // 0x0179(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUse32BitPostProcessMaterials;                     // 0x017A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_17B[0x5];                                      // 0x017B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FMoviePipelinePostProcessPass>  AdditionalPostProcessMaterials;                    // 0x0180(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bRenderMainPass;                                   // 0x0190(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAddDefaultLayer;                                  // 0x0191(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_192[0x6];                                      // 0x0192(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FActorLayer>                    ActorLayers;                                       // 0x0198(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A8[0x10];                                     // 0x01A8(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSoftObjectPath>                DataLayers;                                        // 0x01B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>             ActivePostProcessMaterials;                        // 0x01C8(0x0010)(ZeroConstructor, Transient, DuplicateTransient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UMaterialInterface*                     StencilLayerMaterial;                              // 0x01D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1E0[0x58];                                     // 0x01E0(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MoviePipelineDeferredPassBase">();
	}
	static class UMoviePipelineDeferredPassBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMoviePipelineDeferredPassBase>();
	}
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_Unlit
// 0x0000 (0x0238 - 0x0238)
class UMoviePipelineDeferredPass_Unlit final : public UMoviePipelineDeferredPassBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MoviePipelineDeferredPass_Unlit">();
	}
	static class UMoviePipelineDeferredPass_Unlit* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMoviePipelineDeferredPass_Unlit>();
	}
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_DetailLighting
// 0x0000 (0x0238 - 0x0238)
class UMoviePipelineDeferredPass_DetailLighting final : public UMoviePipelineDeferredPassBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MoviePipelineDeferredPass_DetailLighting">();
	}
	static class UMoviePipelineDeferredPass_DetailLighting* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMoviePipelineDeferredPass_DetailLighting>();
	}
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_LightingOnly
// 0x0000 (0x0238 - 0x0238)
class UMoviePipelineDeferredPass_LightingOnly final : public UMoviePipelineDeferredPassBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MoviePipelineDeferredPass_LightingOnly">();
	}
	static class UMoviePipelineDeferredPass_LightingOnly* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMoviePipelineDeferredPass_LightingOnly>();
	}
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_ReflectionsOnly
// 0x0000 (0x0238 - 0x0238)
class UMoviePipelineDeferredPass_ReflectionsOnly final : public UMoviePipelineDeferredPassBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MoviePipelineDeferredPass_ReflectionsOnly">();
	}
	static class UMoviePipelineDeferredPass_ReflectionsOnly* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMoviePipelineDeferredPass_ReflectionsOnly>();
	}
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_PathTracer
// 0x0008 (0x0240 - 0x0238)
class UMoviePipelineDeferredPass_PathTracer final : public UMoviePipelineDeferredPassBase
{
public:
	bool                                          bReferenceMotionBlur;                              // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_239[0x7];                                      // 0x0239(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MoviePipelineDeferredPass_PathTracer">();
	}
	static class UMoviePipelineDeferredPass_PathTracer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMoviePipelineDeferredPass_PathTracer>();
	}
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutputBase
// 0x0020 (0x0068 - 0x0048)
class UMoviePipelineImageSequenceOutputBase : public UMoviePipelineOutputBase
{
public:
	uint8                                         Pad_48[0x20];                                      // 0x0048(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MoviePipelineImageSequenceOutputBase">();
	}
	static class UMoviePipelineImageSequenceOutputBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMoviePipelineImageSequenceOutputBase>();
	}
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_EXR
// 0x0008 (0x0070 - 0x0068)
class UMoviePipelineImageSequenceOutput_EXR final : public UMoviePipelineImageSequenceOutputBase
{
public:
	EEXRCompressionFormat                         Compression;                                       // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMultilayer;                                       // 0x0069(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6A[0x6];                                       // 0x006A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MoviePipelineImageSequenceOutput_EXR">();
	}
	static class UMoviePipelineImageSequenceOutput_EXR* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMoviePipelineImageSequenceOutput_EXR>();
	}
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_BMP
// 0x0000 (0x0068 - 0x0068)
class UMoviePipelineImageSequenceOutput_BMP final : public UMoviePipelineImageSequenceOutputBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MoviePipelineImageSequenceOutput_BMP">();
	}
	static class UMoviePipelineImageSequenceOutput_BMP* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMoviePipelineImageSequenceOutput_BMP>();
	}
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_PNG
// 0x0008 (0x0070 - 0x0068)
class UMoviePipelineImageSequenceOutput_PNG final : public UMoviePipelineImageSequenceOutputBase
{
public:
	bool                                          bWriteAlpha;                                       // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MoviePipelineImageSequenceOutput_PNG">();
	}
	static class UMoviePipelineImageSequenceOutput_PNG* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMoviePipelineImageSequenceOutput_PNG>();
	}
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_JPG
// 0x0000 (0x0068 - 0x0068)
class UMoviePipelineImageSequenceOutput_JPG final : public UMoviePipelineImageSequenceOutputBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MoviePipelineImageSequenceOutput_JPG">();
	}
	static class UMoviePipelineImageSequenceOutput_JPG* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMoviePipelineImageSequenceOutput_JPG>();
	}
};

// Class MovieRenderPipelineRenderPasses.MoviePipelineWaveOutput
// 0x0070 (0x00B8 - 0x0048)
class UMoviePipelineWaveOutput final : public UMoviePipelineOutputBase
{
public:
	class FString                                 FileNameFormatOverride;                            // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_58[0x60];                                      // 0x0058(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MoviePipelineWaveOutput">();
	}
	static class UMoviePipelineWaveOutput* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMoviePipelineWaveOutput>();
	}
};

}
