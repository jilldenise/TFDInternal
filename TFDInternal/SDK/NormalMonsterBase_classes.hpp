#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NormalMonsterBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NormalMonsterBase.NormalMonsterBase_C
// 0x0010 (0x0F20 - 0x0F10)
class ANormalMonsterBase_C : public AM1NormalMonster
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0F10(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_NormalMonsterBase(int32 EntryPoint);
	void BP_DieCommon();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NormalMonsterBase_C">();
	}
	static class ANormalMonsterBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANormalMonsterBase_C>();
	}
};

}

