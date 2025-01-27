#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcDamageFieldObject

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1Data_structs.hpp"
#include "M1_structs.hpp"


namespace SDK::Params
{

// Function CalcDamageFieldObject.CalcDamageFieldObject_C.DoCalculation
// 0x03C8 (0x03C8 - 0x0000)
struct CalcDamageFieldObject_C_DoCalculation final
{
public:
	struct FM1AbilityOpCalcParam                  Param;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FM1CalcDamageInfo                      DamageInfo;                                        // 0x0008(0x0140)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	double                                        FinalValue;                                        // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_DoubleToString_ReturnValue;          // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0160(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0178(0x0050)(HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_FromFloat_ReturnValue;                    // 0x01C8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue;                   // 0x01D0(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue;       // 0x01D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EM1MonsterCategory                            CallFunc_GetMonsterCategoryFromOpTarget_ReturnValue; // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E9[0x7];                                      // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01F0(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_209[0x7];                                      // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0210(0x0050)(HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_ScaledIntegerOne_ReturnValue;             // 0x0260(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue_1;     // 0x0268(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_1;                 // 0x0278(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0280(0x0018)()
	struct FM1ScaledInteger                       CallFunc_Add_ScaledIntScaledInt_ReturnValue;       // 0x0298(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x02A0(0x0050)(HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_2;                 // 0x02F0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Add_ScaledIntScaledInt_ReturnValue_1;     // 0x02F8(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue_2;     // 0x0300(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue;  // 0x0310(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0318(0x0018)()
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_1; // 0x0330(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0338(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0388(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0398(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x03B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_FromFloat_InValue_ImplicitCast;           // 0x03C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

