#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SimpleTaskActor

#include "Basic.hpp"

#include "BP_SimpleTaskActorBase_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SimpleTaskActor.BP_SimpleTaskActor_C
// 0x0008 (0x04A0 - 0x0498)
class ABP_SimpleTaskActor_C : public ABP_SimpleTaskActorBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SimpleTaskActor_C;               // 0x0498(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SimpleTaskActor(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SimpleTaskActor_C">();
	}
	static class ABP_SimpleTaskActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SimpleTaskActor_C>();
	}
};

}
