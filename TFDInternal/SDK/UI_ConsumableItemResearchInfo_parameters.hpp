#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ConsumableItemResearchInfo

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_ConsumableItemResearchInfo.UI_ConsumableItemResearchInfo_C.ExecuteUbergraph_UI_ConsumableItemResearchInfo
// 0x0070 (0x0070 - 0x0000)
struct UI_ConsumableItemResearchInfo_C_ExecuteUbergraph_UI_ConsumableItemResearchInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_InRank;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bEnough;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ConstParm, ReferenceParm)
	class FText                                   CallFunc_GetLocalizedTextFormat_ReturnValue;       // 0x0030(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0048(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x005C(0x0014)()
};

// Function UI_ConsumableItemResearchInfo.UI_ConsumableItemResearchInfo_C.BP_SetRankStatus
// 0x0008 (0x0008 - 0x0000)
struct UI_ConsumableItemResearchInfo_C_BP_SetRankStatus final
{
public:
	int32                                         InRank;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnough;                                           // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

