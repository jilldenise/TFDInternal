#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissionTaskCollection

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MissionTaskCollection.BP_MissionTaskCollection_C
// 0x0008 (0x06F0 - 0x06E8)
class ABP_MissionTaskCollection_C final : public AM1MissionTaskActorCollection
{
public:
	class UBillboardComponent*                    Billboard;                                         // 0x06E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MissionTaskCollection_C">();
	}
	static class ABP_MissionTaskCollection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MissionTaskCollection_C>();
	}
};

}
