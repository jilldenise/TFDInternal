#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EnvQueryContext_MainTarget

#include "Basic.hpp"

#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EnvQueryContext_MainTarget.EnvQueryContext_MainTarget_C
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryContext_MainTarget_C final : public UEnvQueryContext_BlueprintBase
{
public:
	void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EnvQueryContext_MainTarget_C">();
	}
	static class UEnvQueryContext_MainTarget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryContext_MainTarget_C>();
	}
};

}

