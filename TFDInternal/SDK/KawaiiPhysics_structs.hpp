#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KawaiiPhysics

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "M1Actor_structs.hpp"


namespace SDK
{

// Enum KawaiiPhysics.EPlanarConstraint
// NumValues: 0x0005
enum class EPlanarConstraint : uint8
{
	None                                     = 0,
	X                                        = 1,
	Y                                        = 2,
	Z                                        = 3,
	EPlanarConstraint_MAX                    = 4,
};

// Enum KawaiiPhysics.EPhysicsSignificanceLevel
// NumValues: 0x0005
enum class EPhysicsSignificanceLevel : uint8
{
	Low                                      = 0,
	Medium                                   = 1,
	High                                     = 2,
	Num                                      = 3,
	EPhysicsSignificanceLevel_MAX            = 4,
};

// ScriptStruct KawaiiPhysics.CollisionLimitBase
// 0x0050 (0x0050 - 0x0000)
struct FCollisionLimitBase
{
public:
	struct FBoneReference                         DrivingBone;                                       // 0x0000(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                OffsetLocation;                                    // 0x0010(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               OffsetRotation;                                    // 0x001C(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                Location;                                          // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0xC];                                       // 0x0034(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  Rotation;                                          // 0x0040(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct KawaiiPhysics.SphericalLimit
// 0x0010 (0x0060 - 0x0050)
struct FSphericalLimit final : public FCollisionLimitBase
{
public:
	float                                         Radius;                                            // 0x0050(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESphericalLimitType                           LimitType;                                         // 0x0054(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_55[0xB];                                       // 0x0055(0x000B)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct KawaiiPhysics.CapsuleLimit
// 0x0010 (0x0060 - 0x0050)
struct FCapsuleLimit final : public FCollisionLimitBase
{
public:
	float                                         Radius;                                            // 0x0050(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Length;                                            // 0x0054(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_58[0x8];                                       // 0x0058(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct KawaiiPhysics.PlanarLimit
// 0x0010 (0x0060 - 0x0050)
struct FPlanarLimit final : public FCollisionLimitBase
{
public:
	struct FPlane                                 Plane;                                             // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct KawaiiPhysics.KawaiiPhysicsSettings
// 0x0030 (0x0030 - 0x0000)
struct FKawaiiPhysicsSettings final
{
public:
	float                                         Damping;                                           // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WorldDampingLocation;                              // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WorldDampingRotation;                              // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Stiffness;                                         // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Radius;                                            // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LimitAngle;                                        // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              LimitAngleX;                                       // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              LimitAngleY;                                       // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              LimitAngleZ;                                       // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct KawaiiPhysics.KawaiiPhysicsModifyBone
// 0x00D0 (0x00D0 - 0x0000)
struct FKawaiiPhysicsModifyBone final
{
public:
	struct FBoneReference                         BoneRef;                                           // 0x0000(0x0010)(NoDestructor, NativeAccessSpecifierPublic)
	int32                                         ParentIndex;                                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 ChildIndexs;                                       // 0x0018(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FKawaiiPhysicsSettings                 PhysicsSettings;                                   // 0x0028(0x0030)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                Location;                                          // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                PrevLocation;                                      // 0x0064(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                  PrevRotation;                                      // 0x0070(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                PoseLocation;                                      // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  PoseRotation;                                      // 0x0090(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                PoseScale;                                         // 0x00A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                PoseMovement;                                      // 0x00AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                WindVelocity;                                      // 0x00B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LengthFromRoot;                                    // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDummy;                                            // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct KawaiiPhysics.AnimNode_KawaiiPhysics
// 0x01B8 (0x0280 - 0x00C8)
struct FAnimNode_KawaiiPhysics final : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                         RootBone;                                          // 0x00C8(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                 ExcludeBones;                                      // 0x00D8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                 RootBonesParallel;                                 // 0x00E8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         TargetFrameRate;                                   // 0x00F8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          OverrideTargetFramerate;                           // 0x00FC(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_FD[0x3];                                       // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKawaiiPhysicsSettings                 PhysicsSettings;                                   // 0x0100(0x0030)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UCurveFloat*                            DampingCurve;                                      // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            WorldDampingLocationCurve;                         // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            WorldDampingRotationCurve;                         // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            StiffnessCurve;                                    // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            RadiusCurve;                                       // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            LimitAngleCurve;                                   // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            SmoothingCurve;                                    // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUpdatePhysicsSettingsInGame;                      // 0x0168(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_169[0x3];                                      // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DummyBoneLength;                                   // 0x016C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPlanarConstraint                             PlanarConstraint;                                  // 0x0170(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_171[0x7];                                      // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSphericalLimit>                SphericalLimits;                                   // 0x0178(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCapsuleLimit>                  CapsuleLimits;                                     // 0x0188(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPlanarLimit>                   PlanarLimits;                                      // 0x0198(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         TeleportDistanceThreshold;                         // 0x01A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TeleportRotationThreshold;                         // 0x01AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Gravity;                                           // 0x01B0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableWind;                                       // 0x01BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1BD[0x3];                                      // 0x01BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         WindScale;                                         // 0x01C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FM1WindChannels                        WindChannels;                                      // 0x01C4(0x0001)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C5[0x3];                                      // 0x01C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InterpSpeedWhenSuspendingSim;                      // 0x01C8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EvaluationResetTime;                               // 0x01CC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EvaluationSuspendSimTimeAfterReset;                // 0x01D0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EvaluationSmoothingTime;                           // 0x01D4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SmoothMovementThreshold;                           // 0x01D8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPhysicsSignificanceLevel                     Significance;                                      // 0x01DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1DD[0x3];                                      // 0x01DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FKawaiiPhysicsModifyBone>       ModifyBones;                                       // 0x01E0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         TotalBoneLength;                                   // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1F4[0xC];                                      // 0x01F4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             PreSkelCompTransform;                              // 0x0200(0x0030)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bInitPhysicsSettings;                              // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_231[0x4F];                                     // 0x0231(0x004F)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}
