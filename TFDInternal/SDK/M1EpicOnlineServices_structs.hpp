#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M1EpicOnlineServices

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct M1EpicOnlineServices.M1EOSClientAuthInfo
// 0x0028 (0x0028 - 0x0000)
struct FM1EOSClientAuthInfo final
{
public:
	class FString                                 ProductUserId;                                     // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 JsonWebToken;                                      // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSkipVerifyAuth;                                   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct M1EpicOnlineServices.M1EOSNetworkTransportMessage
// 0x0010 (0x0010 - 0x0000)
struct FM1EOSNetworkTransportMessage final
{
public:
	TArray<uint8>                                 Payload;                                           // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}
