#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PreviewLevelShopWire

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PreviewLevelShopWire.BP_PreviewLevelShopWire_C
// 0x0010 (0x02F8 - 0x02E8)
class ABP_PreviewLevelShopWire_C final : public AM1ActorPreviewLevel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PreviewLevelShopWire(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PreviewLevelShopWire_C">();
	}
	static class ABP_PreviewLevelShopWire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PreviewLevelShopWire_C>();
	}
};

}
