#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_038_Harris

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_NpcBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NPC_038_Harris.NPC_038_Harris_C
// 0x0010 (0x07C0 - 0x07B0)
class ANPC_038_Harris_C final : public ABP_NpcBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_NPC_038_Harris_C;                   // 0x07A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   ChildActorComponent;                               // 0x07B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_NPC_038_Harris(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPC_038_Harris_C">();
	}
	static class ANPC_038_Harris_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANPC_038_Harris_C>();
	}
};

}
