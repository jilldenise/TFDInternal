#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EnvQueryContext_PrevQuerierLocation

#include "Basic.hpp"

#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EnvQueryContext_PrevQuerierLocation.EnvQueryContext_PrevQuerierLocation_C
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryContext_PrevQuerierLocation_C final : public UEnvQueryContext_BlueprintBase
{
public:
	void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EnvQueryContext_PrevQuerierLocation_C">();
	}
	static class UEnvQueryContext_PrevQuerierLocation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryContext_PrevQuerierLocation_C>();
	}
};

}
