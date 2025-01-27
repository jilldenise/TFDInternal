#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcSkillElementalStackableDotDamageMonster

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1Data_structs.hpp"
#include "M1_structs.hpp"


namespace SDK::Params
{

// Function CalcSkillElementalStackableDotDamageMonster.CalcSkillElementalStackableDotDamageMonster_C.DoCalculation
// 0x05A8 (0x05A8 - 0x0000)
struct CalcSkillElementalStackableDotDamageMonster_C_DoCalculation final
{
public:
	struct FM1AbilityOpCalcParam                  Param;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FM1CalcDamageInfo                      DamageInfo;                                        // 0x0008(0x0140)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FM1ScaledInteger                       SkillDamageDemonic;                                // 0x0148(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_ScaledIntScaledInt_ReturnValue;   // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_152[0x2];                                      // 0x0152(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159[0x3];                                      // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Array_Get_Item;                           // 0x0160(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue;       // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0178(0x0018)()
	struct FM1ScaledInteger                       CallFunc_Array_Get_Item_1;                         // 0x0190(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0198(0x0050)(HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue_1;     // 0x01E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Array_Get_Item_2;                         // 0x01F8(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0200(0x0018)()
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue_2;     // 0x0218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0228(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0278(0x0018)()
	struct FM1ScaledInteger                       CallFunc_Array_Get_Item_3;                         // 0x0290(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0298(0x0050)(HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue_3;     // 0x02E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue_4;     // 0x02F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0308(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0320(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0338(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x0388(0x0050)(HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x03D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_DoubleToString_ReturnValue;          // 0x03E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x03F8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0410(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_5;            // 0x0428(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_6;            // 0x0478(0x0050)(HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_DoubleToString_ReturnValue_1;        // 0x04C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x04D8(0x0018)()
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x04F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_7;            // 0x04F8(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0548(0x0010)(ReferenceParm)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0558(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0560(0x0018)()
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0578(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0580(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_FromFloat_ReturnValue;                    // 0x0590(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue;  // 0x0598(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FromFloat_InValue_ImplicitCast;           // 0x05A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

