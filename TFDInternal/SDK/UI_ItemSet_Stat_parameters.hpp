#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemSet_Stat

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_ItemSet_Stat.UI_ItemSet_Stat_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_ItemSet_Stat_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ItemSet_Stat.UI_ItemSet_Stat_C.ExecuteUbergraph_UI_ItemSet_Stat
// 0x0008 (0x0008 - 0x0000)
struct UI_ItemSet_Stat_C_ExecuteUbergraph_UI_ItemSet_Stat final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ItemSet_Stat.UI_ItemSet_Stat_C.BP_SetDimmed
// 0x0010 (0x0010 - 0x0000)
struct UI_ItemSet_Stat_C_BP_SetDimmed final
{
public:
	bool                                          bDimmed;                                           // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_real_Variable;                                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable_1;                              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ItemSet_Stat.UI_ItemSet_Stat_C.BP_SetDescriptionText
// 0x0018 (0x0018 - 0x0000)
struct UI_ItemSet_Stat_C_BP_SetDescriptionText final
{
public:
	class FText                                   InDescription;                                     // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

}
