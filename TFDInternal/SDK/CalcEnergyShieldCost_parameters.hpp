#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcEnergyShieldCost

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "M1_structs.hpp"


namespace SDK::Params
{

// Function CalcEnergyShieldCost.CalcEnergyShieldCost_C.DoCalculation
// 0x01D8 (0x01D8 - 0x0000)
struct CalcEnergyShieldCost_C_DoCalculation final
{
public:
	struct FM1AbilityOpCalcParam                  Param;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FM1CalcDamageInfo                      DamageInfo;                                        // 0x0008(0x0140)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FM1AbilityOpExecCalcOutput             Output;                                            // 0x0148(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue;                   // 0x0158(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_FromFloat_ReturnValue;                    // 0x0160(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_ScaledIntegerZero_ReturnValue;            // 0x0168(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_FromFloat_ReturnValue_1;                  // 0x0170(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Equal_ScaledIntScaledInt_ReturnValue;     // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_179[0x7];                                      // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue;  // 0x0180(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1StatTypeOpValue                     K2Node_MakeStruct_M1StatTypeOpValue;               // 0x0188(0x0010)(NoDestructor)
	struct FM1ScaledInteger                       CallFunc_FromFloat_ReturnValue_2;                  // 0x0198(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A4[0x4];                                      // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1ScaledInteger                       CallFunc_FromFloat_ReturnValue_3;                  // 0x01A8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_1; // 0x01B0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1StatTypeOpValue                     K2Node_MakeStruct_M1StatTypeOpValue_1;             // 0x01B8(0x0010)(NoDestructor)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FromFloat_InValue_ImplicitCast;           // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FromFloat_InValue_ImplicitCast_1;         // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
