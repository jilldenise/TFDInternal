#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IKRig

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum IKRig.EIKRigGoalSpace
// NumValues: 0x0004
enum class EIKRigGoalSpace : uint8
{
	Component                                = 0,
	Additive                                 = 1,
	World                                    = 2,
	EIKRigGoalSpace_MAX                      = 3,
};

// Enum IKRig.EIKRigGoalTransformSource
// NumValues: 0x0004
enum class EIKRigGoalTransformSource : uint8
{
	Manual                                   = 0,
	Bone                                     = 1,
	ActorComponent                           = 2,
	EIKRigGoalTransformSource_MAX            = 3,
};

// Enum IKRig.ERetargetSourceOrTarget
// NumValues: 0x0003
enum class ERetargetSourceOrTarget : uint8
{
	Source                                   = 0,
	Target                                   = 1,
	ERetargetSourceOrTarget_MAX              = 2,
};

// Enum IKRig.ERetargetTranslationMode
// NumValues: 0x0004
enum class ERetargetTranslationMode : uint8
{
	None                                     = 0,
	GloballyScaled                           = 1,
	Absolute                                 = 2,
	ERetargetTranslationMode_MAX             = 3,
};

// Enum IKRig.ERetargetRotationMode
// NumValues: 0x0005
enum class ERetargetRotationMode : uint8
{
	Interpolated                             = 0,
	OneToOne                                 = 1,
	OneToOneReversed                         = 2,
	None                                     = 3,
	ERetargetRotationMode_MAX                = 4,
};

// Enum IKRig.EBasicAxis
// NumValues: 0x0007
enum class EBasicAxis : uint32
{
	X                                        = 0,
	Y                                        = 1,
	Z                                        = 2,
	NegX                                     = 3,
	NegY                                     = 4,
	NegZ                                     = 5,
	EBasicAxis_MAX                           = 6,
};

// Enum IKRig.EWarpingDirectionSource
// NumValues: 0x0003
enum class EWarpingDirectionSource : uint32
{
	Goals                                    = 0,
	Chain                                    = 1,
	EWarpingDirectionSource_MAX              = 2,
};

// ScriptStruct IKRig.TargetChainFKSettings
// 0x0018 (0x0018 - 0x0000)
struct FTargetChainFKSettings final
{
public:
	bool                                          EnableFK;                                          // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERetargetRotationMode                         RotationMode;                                      // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RotationAlpha;                                     // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERetargetTranslationMode                      TranslationMode;                                   // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TranslationAlpha;                                  // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PoleVectorMatching;                                // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PoleVectorOffset;                                  // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct IKRig.TargetChainIKSettings
// 0x0044 (0x0044 - 0x0000)
struct FTargetChainIKSettings final
{
public:
	bool                                          EnableIK;                                          // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BlendToSource;                                     // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                BlendToSourceWeights;                              // 0x0008(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                StaticOffset;                                      // 0x0014(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                StaticLocalOffset;                                 // 0x0020(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               StaticRotationOffset;                              // 0x002C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                         ScaleVertical;                                     // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Extension;                                         // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAffectedByIKWarping;                              // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct IKRig.TargetChainSpeedPlantSettings
// 0x0018 (0x0018 - 0x0000)
struct FTargetChainSpeedPlantSettings final
{
public:
	bool                                          EnableSpeedPlanting;                               // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SpeedCurveName;                                    // 0x0004(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SpeedThreshold;                                    // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UnplantStiffness;                                  // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UnplantCriticalDamping;                            // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct IKRig.TargetChainSettings
// 0x0074 (0x0074 - 0x0000)
struct FTargetChainSettings final
{
public:
	struct FTargetChainFKSettings                 FK;                                                // 0x0000(0x0018)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FTargetChainIKSettings                 IK;                                                // 0x0018(0x0044)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FTargetChainSpeedPlantSettings         SpeedPlanting;                                     // 0x005C(0x0018)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct IKRig.TargetRootSettings
// 0x0040 (0x0040 - 0x0000)
struct FTargetRootSettings final
{
public:
	float                                         RotationAlpha;                                     // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TranslationAlpha;                                  // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BlendToSource;                                     // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                BlendToSourceWeights;                              // 0x000C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ScaleHorizontal;                                   // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ScaleVertical;                                     // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                TranslationOffset;                                 // 0x0020(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               RotationOffset;                                    // 0x002C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                         AffectIKHorizontal;                                // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AffectIKVertical;                                  // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct IKRig.RetargetGlobalSettings
// 0x0020 (0x0020 - 0x0000)
struct FRetargetGlobalSettings final
{
public:
	bool                                          bEnableRoot;                                       // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableFK;                                         // 0x0001(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableIK;                                         // 0x0002(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bWarping;                                          // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWarpingDirectionSource                       DirectionSource;                                   // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBasicAxis                                    ForwardDirection;                                  // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   DirectionChain;                                    // 0x000C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WarpForwards;                                      // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SidewaysOffset;                                    // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WarpSplay;                                         // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct IKRig.RetargetProfile
// 0x00D8 (0x00D8 - 0x0000)
struct FRetargetProfile final
{
public:
	bool                                          bApplyTargetRetargetPose;                          // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   TargetRetargetPoseName;                            // 0x0004(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bApplySourceRetargetPose;                          // 0x000C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SourceRetargetPoseName;                            // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bApplyChainSettings;                               // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, struct FTargetChainSettings> ChainSettings;                                     // 0x0020(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                          bApplyRootSettings;                                // 0x0070(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTargetRootSettings                    RootSettings;                                      // 0x0074(0x0040)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bApplyGlobalSettings;                              // 0x00B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B5[0x3];                                       // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRetargetGlobalSettings                GlobalSettings;                                    // 0x00B8(0x0020)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct IKRig.IKRigGoal
// 0x0060 (0x0060 - 0x0000)
struct FIKRigGoal final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EIKRigGoalTransformSource                     TransformSource;                                   // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBoneReference                         SourceBone;                                        // 0x000C(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                Position;                                          // 0x001C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               Rotation;                                          // 0x0028(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                         PositionAlpha;                                     // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotationAlpha;                                     // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EIKRigGoalSpace                               PositionSpace;                                     // 0x003C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EIKRigGoalSpace                               RotationSpace;                                     // 0x003D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3E[0x2];                                       // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                FinalBlendedPosition;                              // 0x0040(0x000C)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  FinalBlendedRotation;                              // 0x0050(0x0010)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct IKRig.AnimNode_IKRig
// 0x0188 (0x01E0 - 0x0058)
struct FAnimNode_IKRig final : public FAnimNode_CustomProperty
{
public:
	struct FPoseLink                              Source;                                            // 0x0058(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UIKRigDefinition*                       RigDefinitionAsset;                                // 0x0068(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FIKRigGoal>                     Goals;                                             // 0x0070(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bStartFromRefPose;                                 // 0x0080(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAnimAlphaInputType                           AlphaInputType;                                    // 0x0081(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAlphaBoolEnabled;                                 // 0x0082(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_83[0x1];                                       // 0x0083(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Alpha;                                             // 0x0084(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                        AlphaScaleBias;                                    // 0x0088(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputAlphaBoolBlend                   AlphaBoolBlend;                                    // 0x0090(0x0048)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                   AlphaCurveName;                                    // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                   AlphaScaleBiasClamp;                               // 0x00E0(0x0030)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UIKRigProcessor*                        IKRigProcessor;                                    // 0x0110(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_118[0xC0];                                     // 0x0118(0x00C0)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ActualAlpha;                                       // 0x01D8(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1DC[0x4];                                      // 0x01DC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct IKRig.AnimNode_RetargetPoseFromMesh
// 0x0218 (0x0228 - 0x0010)
struct FAnimNode_RetargetPoseFromMesh final : public FAnimNode_Base
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent>  SourceMeshComponent;                               // 0x0010(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseAttachedParent;                                // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UIKRetargeter*                          IKRetargeterAsset;                                 // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRetargetProfile                       CustomRetargetProfile;                             // 0x0028(0x00D8)(Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	bool                                          bSuppressWarnings;                                 // 0x0100(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCopyCurves;                                       // 0x0101(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_102[0x6];                                      // 0x0102(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UIKRetargetProcessor*                   Processor;                                         // 0x0108(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_110[0x118];                                    // 0x0110(0x0118)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct IKRig.IKRigGoalContainer
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FIKRigGoalContainer final
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct IKRig.BoneChain
// 0x0030 (0x0030 - 0x0000)
struct FBoneChain final
{
public:
	class FName                                   ChainName;                                         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                         StartBone;                                         // 0x0008(0x0010)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                         EndBone;                                           // 0x0018(0x0010)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                   IKGoalName;                                        // 0x0028(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct IKRig.RetargetDefinition
// 0x0018 (0x0018 - 0x0000)
struct FRetargetDefinition final
{
public:
	class FName                                   RootBone;                                          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FBoneChain>                     BoneChains;                                        // 0x0008(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// ScriptStruct IKRig.GoalBone
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x04) FGoalBone final
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct IKRig.IKRigInputSkeleton
// 0x0038 (0x0038 - 0x0000)
struct alignas(0x08) FIKRigInputSkeleton final
{
public:
	uint8                                         Pad_0[0x38];                                       // 0x0000(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct IKRig.IKRigSkeleton
// 0x0070 (0x0070 - 0x0000)
struct FIKRigSkeleton final
{
public:
	TArray<class FName>                           BoneNames;                                         // 0x0000(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<int32>                                 ParentIndices;                                     // 0x0010(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<class FName>                           ExcludedBones;                                     // 0x0020(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                     CurrentPoseGlobal;                                 // 0x0030(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                     CurrentPoseLocal;                                  // 0x0040(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                     RefPoseGlobal;                                     // 0x0050(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x10];                                      // 0x0060(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct IKRig.RetargetChainMap
// 0x0010 (0x0010 - 0x0000)
struct FRetargetChainMap final
{
public:
	class FName                                   SourceChain;                                       // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   TargetChain;                                       // 0x0008(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct IKRig.IKRetargetPose
// 0x0060 (0x0060 - 0x0000)
struct FIKRetargetPose final
{
public:
	struct FVector                                RootTranslationOffset;                             // 0x0000(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, struct FQuat>               BoneRotationOffsets;                               // 0x0010(0x0050)(Edit, NativeAccessSpecifierPrivate)
};

// ScriptStruct IKRig.LimbSolverSettings
// 0x0024 (0x0024 - 0x0000)
struct FLimbSolverSettings final
{
public:
	float                                         ReachPrecision;                                    // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAxis                                         HingeRotationAxis;                                 // 0x0004(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MaxIterations;                                     // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableLimit;                                      // 0x000C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MinRotationAngle;                                  // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAveragePull;                                      // 0x0014(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PullDistribution;                                  // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReachStepAlpha;                                    // 0x001C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableTwistCorrection;                            // 0x0020(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAxis                                         EndBoneForwardAxis;                                // 0x0021(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_22[0x2];                                       // 0x0022(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct IKRig.LimbLink
// 0x0038 (0x0038 - 0x0000)
struct alignas(0x04) FLimbLink final
{
public:
	uint8                                         Pad_0[0x38];                                       // 0x0000(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct IKRig.LimbSolver
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FLimbSolver final
{
public:
	uint8                                         Pad_0[0x18];                                       // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}
