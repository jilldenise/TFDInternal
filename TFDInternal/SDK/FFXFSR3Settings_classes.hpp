#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FFXFSR3Settings

#include "Basic.hpp"

#include "DeveloperSettings_classes.hpp"
#include "FFXFSR3Settings_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Class FFXFSR3Settings.FFXFSR3Settings
// 0x0098 (0x00D0 - 0x0038)
class UFFXFSR3Settings final : public UDeveloperSettings
{
public:
	bool                                          bEnabled;                                          // 0x0038(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutoExposure;                                     // 0x0039(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnabledInEditorViewport;                          // 0x003A(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseSSRExperimentalDenoiser;                       // 0x003B(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRHIBackend;                                       // 0x003C(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bD3D12Backend;                                     // 0x003D(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFrameGenEnabled;                                  // 0x003E(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCaptureDebugUI;                                   // 0x003F(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUpdateGlobalFrameTime;                            // 0x0040(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bModifySlateDeltaTime;                             // 0x0041(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_42[0x2];                                       // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	EFFXFSR3FrameGenUIMode                        UIMode;                                            // 0x0044(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bD3D12AsyncInterpolation;                          // 0x0048(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bD3D12AsyncPresent;                                // 0x0049(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4A[0x2];                                       // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	EFFXFSR3PaceRHIFrameMode                      PaceMode;                                          // 0x004C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFFXFSR3QualityMode                           QualityMode;                                       // 0x0050(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFFXFSR3HistoryFormat                         HistoryFormat;                                     // 0x0054(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFFXFSR3DeDitherMode                          DeDither;                                          // 0x0058(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Sharpness;                                         // 0x005C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAdjustMipBias;                                    // 0x0060(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForceVertexDeformationOutputsVelocity;            // 0x0061(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_62[0x2];                                       // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	EFFXFSR3LandscapeHISMMode                     ForceLandscapeHISMMobility;                        // 0x0064(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         VelocityFactor;                                    // 0x0068(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReactiveMask;                                     // 0x006C(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ReflectionScale;                                   // 0x0070(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReflectionLuminanceBias;                           // 0x0074(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RoughnessScale;                                    // 0x0078(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RoughnessBias;                                     // 0x007C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RoughnessMaxDistance;                              // 0x0080(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReactiveMaskRoughnessForceMaxDistance;            // 0x0084(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TranslucencyBias;                                  // 0x0088(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TranslucencyLuminanceBias;                         // 0x008C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TranslucencyMaxDistance;                           // 0x0090(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMaterialShadingModel                         ReactiveShadingModelID;                            // 0x0094(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_95[0x3];                                       // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ForceReactiveMaterialValue;                        // 0x0098(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReactiveHistoryTranslucencyBias;                   // 0x009C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReactiveHistoryTranslucencyLumaBias;               // 0x00A0(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PreDOFTranslucencyScale;                           // 0x00A4(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPreDOFTranslucencyMax;                            // 0x00A8(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A9[0x3];                                       // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ReactiveMaskDeferredDecalScale;                    // 0x00AC(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReactiveHistoryDeferredDecalScale;                 // 0x00B0(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReactiveMaskTAAResponsiveValue;                    // 0x00B4(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReactiveHistoryTAAResponsiveValue;                 // 0x00B8(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReactiveMaskCustomStencilScale;                    // 0x00BC(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReactiveHistoryCustomStencilScale;                 // 0x00C0(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CustomStencilMask;                                 // 0x00C4(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CustomStencilShift;                                // 0x00C8(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FFXFSR3Settings">();
	}
	static class UFFXFSR3Settings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFFXFSR3Settings>();
	}
};

}

