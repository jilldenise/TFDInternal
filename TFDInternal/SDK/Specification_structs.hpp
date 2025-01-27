#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Specification

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct Specification.Specification_C.AnimBlueprintGeneratedConstantData
// 0x010F (0x0110 - 0x0001)
struct Specification::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_20;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_21;                                 // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_22;                                 // 0x0014(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_23;                                // 0x0018(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_24;                               // 0x001C(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_25;                                // 0x0048(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_26;                                 // 0x004C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_27;                                 // 0x004D(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_28;                                 // 0x004E(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F[0x1];                                       // 0x004F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_29;                                 // 0x0050(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_30;                               // 0x0058(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0078(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00F8(0x0018)()
};

}

