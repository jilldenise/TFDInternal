#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_EquipAltWeapon

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1Data_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function Skill_EquipAltWeapon.Skill_EquipAltWeapon_C.TryCommitAltWeaponCooltime
// 0x0001 (0x0001 - 0x0000)
struct Skill_EquipAltWeapon_C_TryCommitAltWeaponCooltime final
{
public:
	bool                                          CallFunc_TryCommitCooltime_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skill_EquipAltWeapon.Skill_EquipAltWeapon_C.OnChangedWeaponActionState
// 0x0018 (0x0018 - 0x0000)
struct Skill_EquipAltWeapon_C_OnChangedWeaponActionState final
{
public:
	class UM1WeaponActionStateEventData*          InEventData;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetWeaponCurrentRounds_ReturnValue;       // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skill_EquipAltWeapon.Skill_EquipAltWeapon_C.OnAbilityEvent_F97548B44FDB4CFC1ACD57AF7F521D17
// 0x0040 (0x0040 - 0x0000)
struct Skill_EquipAltWeapon_C_OnAbilityEvent_F97548B44FDB4CFC1ACD57AF7F521D17 final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Skill_EquipAltWeapon.Skill_EquipAltWeapon_C.OnAbilityEvent_F807D9B84912A3952D6DA8801D1102CE
// 0x0040 (0x0040 - 0x0000)
struct Skill_EquipAltWeapon_C_OnAbilityEvent_F807D9B84912A3952D6DA8801D1102CE final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Skill_EquipAltWeapon.Skill_EquipAltWeapon_C.OnAbilityEvent_A0B05E1C4F6F33B8D84A67BE19EB1789
// 0x0040 (0x0040 - 0x0000)
struct Skill_EquipAltWeapon_C_OnAbilityEvent_A0B05E1C4F6F33B8D84A67BE19EB1789 final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Skill_EquipAltWeapon.Skill_EquipAltWeapon_C.OnAbilityEvent_209C47A242A4371A04A3EB98B9979174
// 0x0040 (0x0040 - 0x0000)
struct Skill_EquipAltWeapon_C_OnAbilityEvent_209C47A242A4371A04A3EB98B9979174 final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Skill_EquipAltWeapon.Skill_EquipAltWeapon_C.OnAbilityEvent_10B32DC54687DE7B021D50AD6DFA14F1
// 0x0040 (0x0040 - 0x0000)
struct Skill_EquipAltWeapon_C_OnAbilityEvent_10B32DC54687DE7B021D50AD6DFA14F1 final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Skill_EquipAltWeapon.Skill_EquipAltWeapon_C.InitializeRounds
// 0x0018 (0x0018 - 0x0000)
struct Skill_EquipAltWeapon_C_InitializeRounds final
{
public:
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetStatValue_StatValue;                   // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStatValue_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ScaledIntToInt_ReturnValue;          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skill_EquipAltWeapon.Skill_EquipAltWeapon_C.ExecuteUbergraph_Skill_EquipAltWeapon
// 0x04C8 (0x04C8 - 0x0000)
struct Skill_EquipAltWeapon_C_ExecuteUbergraph_Skill_EquipAltWeapon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanReceiveEndInput_Return;                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1AbilityTask_WaitAbilityEvent*        CallFunc_WaitAbilityEvent_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x0014(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Temp_struct_Variable_1;                            // 0x001C(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityEvent                        K2Node_CustomEvent_Event_2;                        // 0x0028(0x0040)(ConstParm)
	TDelegate<void(struct FM1AbilityEvent& Event)> K2Node_CreateDelegate_OutputDelegate;              // 0x0068(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityEvent                        Temp_struct_Variable_2;                            // 0x0078(0x0040)()
	class UM1AbilityTask_WaitAbilityEvent*        CallFunc_WaitAbilityEvent_ReturnValue_1;           // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityEventData_WeaponSlotType     CallFunc_GetAbilityEventData_WeaponSlotType_ReturnValue; // 0x00C8(0x0010)()
	TDelegate<void(struct FM1AbilityEvent& Event)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x00D8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EA[0x2];                                       // 0x00EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           K2Node_Select_Default;                             // 0x00EC(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityEvent                        K2Node_CustomEvent_Event_1;                        // 0x00F8(0x0040)(ConstParm)
	struct FM1AbilityEvent                        Temp_struct_Variable_3;                            // 0x0138(0x0040)()
	class UM1AbilityTask_WaitAbilityEvent*        CallFunc_WaitAbilityEvent_ReturnValue_2;           // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_181[0x7];                                      // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1WeaponActivatedEventData*            K2Node_DynamicCast_AsM1Weapon_Activated_Event_Data; // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_191[0x3];                                      // 0x0191(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FM1AbilityEvent& Event)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0194(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A5[0x3];                                      // 0x01A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityEvent                        K2Node_CustomEvent_Event;                          // 0x01A8(0x0040)(ConstParm)
	struct FM1AbilityEvent                        Temp_struct_Variable_4;                            // 0x01E8(0x0040)()
	class UM1AbilityTask_WaitAbilityEvent*        CallFunc_WaitAbilityEvent_ReturnValue_3;           // 0x0228(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_231[0x7];                                      // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1WeaponActionStateEventData*          K2Node_DynamicCast_AsM1Weapon_Action_State_Event_Data; // 0x0238(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_241[0x3];                                      // 0x0241(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0244(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_254[0x4];                                      // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue;                // 0x0258(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityEvent                        Temp_struct_Variable_5;                            // 0x0260(0x0040)()
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x02A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A2[0x6];                                      // 0x02A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityEvent                        K2Node_CustomEvent_Event_4;                        // 0x02A8(0x0040)(ConstParm)
	bool                                          K2Node_Event_bCancelled;                           // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E9[0x7];                                      // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue_1;              // 0x02F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x02F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FA[0x6];                                      // 0x02FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityId                           CallFunc_InvokeFirstStatusEffectToSelfByTag_ReturnValue; // 0x0300(0x0010)(HasGetValueTypeHash)
	TDelegate<void(struct FM1AbilityEvent& Event)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0310(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0321(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0322(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_323[0x5];                                      // 0x0323(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1AbilityTask_LocalWaitInput*          CallFunc_LocalWaitInput_ReturnValue;               // 0x0328(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_331[0x7];                                      // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityEvent                        Temp_struct_Variable_6;                            // 0x0338(0x0040)()
	struct FM1AbilityEvent                        K2Node_CustomEvent_Event_3;                        // 0x0378(0x0040)(ConstParm)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x03B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B9[0x3];                                      // 0x03B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityOwnerInfo                    CallFunc_GetOwnerInfo_ReturnValue;                 // 0x03BC(0x0038)(ConstParm, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_3F4[0x4];                                      // 0x03F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityEvent                        K2Node_MakeStruct_M1AbilityEvent;                  // 0x03F8(0x0040)()
	TScriptInterface<class IM1AbilityEventInterface> CallFunc_HandleAbilityEvent_self_CastInput;        // 0x0438(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_HandleAbilityEvent_ReturnValue;           // 0x0448(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FM1AbilityEvent& Event)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x044C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45C[0x4];                                      // 0x045C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue_2;              // 0x0460(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_2;               // 0x0469(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46A[0x6];                                      // 0x046A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1AbilityTask_WaitDelay*               CallFunc_WaitDelay_ReturnValue;                    // 0x0470(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue_3;              // 0x0478(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x0480(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x0481(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x0482(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_483[0x1];                                      // 0x0483(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0484(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_494[0x4];                                      // 0x0494(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue_4;              // 0x0498(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanChangeWithAltWeapon_ReturnValue;       // 0x04A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_TryExecuteCostOperation_ReturnValue;   // 0x04A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A2[0x6];                                      // 0x04A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue_5;              // 0x04A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_TryStartOperationsToSelfByTag_ReturnValue; // 0x04B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x04B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_3;               // 0x04B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B3[0x5];                                      // 0x04B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1AbilityTask_WaitAbilityEvent*        CallFunc_WaitAbilityEvent_ReturnValue_4;           // 0x04B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x04C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1EquipmentSlotType                          CallFunc_GetLastItemWeaponSlotType_ReturnValue;    // 0x04C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CustomTryCommitActivateCost_Result;       // 0x04C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x04C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanReceiveEndInput_Return_1;              // 0x04C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skill_EquipAltWeapon.Skill_EquipAltWeapon_C.CustomTryCommitActivateCost
// 0x0002 (0x0002 - 0x0000)
struct Skill_EquipAltWeapon_C_CustomTryCommitActivateCost final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryCommitActivateCost_ReturnValue;        // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skill_EquipAltWeapon.Skill_EquipAltWeapon_C.CanReceiveEndInput
// 0x0001 (0x0001 - 0x0000)
struct Skill_EquipAltWeapon_C_CanReceiveEndInput final
{
public:
	bool                                          Return;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skill_EquipAltWeapon.Skill_EquipAltWeapon_C.BP_OnDeactivated
// 0x0001 (0x0001 - 0x0000)
struct Skill_EquipAltWeapon_C_BP_OnDeactivated final
{
public:
	bool                                          bCancelled;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skill_EquipAltWeapon.Skill_EquipAltWeapon_C.CanActivateAbility
// 0x0010 (0x0010 - 0x0000)
struct Skill_EquipAltWeapon_C_CanActivateAbility final
{
public:
	const class AActor*                           InOwner;                                           // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanChangeWithAltWeapon_ReturnValue;       // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
