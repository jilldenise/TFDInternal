#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerNpcBase

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerNpcBase.BP_PlayerNpcBase_C
// 0x0030 (0x0870 - 0x0840)
class ABP_PlayerNpcBase_C : public AM1PlayerNpc
{
public:
	class UAK_Dialog_Component_C*                 AK_Dialog_Component;                               // 0x0840(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UM1InteractionInvokerComponent*         M1InteractionInvoker;                              // 0x0848(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UM1IndicatorComponent*                  M1Indicator;                                       // 0x0850(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Origin_position;                                   // 0x0858(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Sub_position;                                      // 0x0864(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	class UM1InteractionInvokerComponent* BP_GetInteractionComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerNpcBase_C">();
	}
	static class ABP_PlayerNpcBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerNpcBase_C>();
	}
};

}
