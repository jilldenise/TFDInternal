#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Game_InstanceDungeonScore_Item

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_Game_InstanceDungeonScore_Item.UI_Game_InstanceDungeonScore_Item_C.SetAmount
// 0x0058 (0x0058 - 0x0000)
struct UI_Game_InstanceDungeonScore_Item_C_SetAmount final
{
public:
	double                                        InValue;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0014)()
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Abs_ReturnValue;                          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0028(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0040(0x0014)()
};

// Function UI_Game_InstanceDungeonScore_Item.UI_Game_InstanceDungeonScore_Item_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_Game_InstanceDungeonScore_Item_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Game_InstanceDungeonScore_Item.UI_Game_InstanceDungeonScore_Item_C.ExecuteUbergraph_UI_Game_InstanceDungeonScore_Item
// 0x0010 (0x0010 - 0x0000)
struct UI_Game_InstanceDungeonScore_Item_C_ExecuteUbergraph_UI_Game_InstanceDungeonScore_Item final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}

