#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissionTaskDestructionVulgusPost

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MissionTaskDestructionVulgusPost.BP_MissionTaskDestructionVulgusPost_C
// 0x0008 (0x0748 - 0x0740)
class ABP_MissionTaskDestructionVulgusPost_C final : public AM1MissionTaskActorDestructionVulgusPost
{
public:
	class UM1CoolTimeComponent*                   M1CoolTime;                                        // 0x0740(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MissionTaskDestructionVulgusPost_C">();
	}
	static class ABP_MissionTaskDestructionVulgusPost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MissionTaskDestructionVulgusPost_C>();
	}
};

}

