#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_InstanceDungeon_RotationInfo2

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_InstanceDungeon_RotationInfo2.UI_InstanceDungeon_RotationInfo2_C.SetDataImpl
// 0x0008 (0x0008 - 0x0000)
struct UI_InstanceDungeon_RotationInfo2_C_SetDataImpl final
{
public:
	class UM1UIData*                              InData;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// Function UI_InstanceDungeon_RotationInfo2.UI_InstanceDungeon_RotationInfo2_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_InstanceDungeon_RotationInfo2_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_InstanceDungeon_RotationInfo2.UI_InstanceDungeon_RotationInfo2_C.ExecuteUbergraph_UI_InstanceDungeon_RotationInfo2
// 0x0018 (0x0018 - 0x0000)
struct UI_InstanceDungeon_RotationInfo2_C_ExecuteUbergraph_UI_InstanceDungeon_RotationInfo2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1UIData*                              K2Node_Event_InData;                               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

