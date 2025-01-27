#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Spica

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "OnlineSubsystemUtils_classes.hpp"
#include "Spica_structs.hpp"


namespace SDK
{

// Class Spica.SpicaActorChannel
// 0x0020 (0x02B0 - 0x0290)
class USpicaActorChannel final : public UActorChannel
{
public:
	class USpicaSupervisor*                       Supervisor;                                        // 0x0290(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_298[0x18];                                     // 0x0298(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpicaActorChannel">();
	}
	static class USpicaActorChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpicaActorChannel>();
	}
};

// Class Spica.SpicaGameEngine
// 0x0110 (0x11A0 - 0x1090)
class USpicaGameEngine final : public UGameEngine
{
public:
	uint8                                         Pad_1090[0x8];                                     // 0x1090(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bUseParallelWorldContextTick;                      // 0x1098(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bUseParallelWorldContextTickLoop;                  // 0x1099(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_109A[0x2];                                     // 0x109A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ParallelWorldContextTickSyncFrequency;             // 0x109C(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bUseOverrideShouldSimulatePhysics;                 // 0x10A0(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bShouldSimulatePhysics;                            // 0x10A1(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_10A2[0x16];                                    // 0x10A2(0x0016)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         WorldContextTickThresholdTime;                     // 0x10B8(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_10BC[0x54];                                    // 0x10BC(0x0054)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bUseMultipleWorldOutputDeviceFile;                 // 0x1110(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1111[0x1B];                                    // 0x1111(0x001B)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bUseClientFastTravelMode;                          // 0x112C(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bUseCameraFadeDuringLevelTransition;               // 0x112D(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bUseAutoStopCameraFadeOnLevelTransitionCompleted;  // 0x112E(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_112F[0x71];                                    // 0x112F(0x0071)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void GetOnPawnControllerChanged(class APawn* InPawn, class AController* InController);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpicaGameEngine">();
	}
	static class USpicaGameEngine* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpicaGameEngine>();
	}
};

// Class Spica.SpicaActorSaveInfo
// 0x0078 (0x00A0 - 0x0028)
class USpicaActorSaveInfo : public UObject
{
public:
	uint8                                         Pad_28[0x78];                                      // 0x0028(0x0078)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpicaActorSaveInfo">();
	}
	static class USpicaActorSaveInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpicaActorSaveInfo>();
	}
};

// Class Spica.SpicaInfoCreator
// 0x0000 (0x0028 - 0x0028)
class USpicaInfoCreator : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpicaInfoCreator">();
	}
	static class USpicaInfoCreator* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpicaInfoCreator>();
	}
};

// Class Spica.SpicaAssistant
// 0x0158 (0x0180 - 0x0028)
class USpicaAssistant : public UObject
{
public:
	class USpicaSupervisor*                       Supervisor;                                        // 0x0028(0x0008)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_30[0x150];                                     // 0x0030(0x0150)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpicaAssistant">();
	}
	static class USpicaAssistant* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpicaAssistant>();
	}
};

// Class Spica.SpicaActorTickAssistant
// 0x0008 (0x0188 - 0x0180)
class USpicaActorTickAssistant final : public USpicaAssistant
{
public:
	bool                                          bDisabledMovementComponentTick;                    // 0x0180(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bUseAssignedActorMovementComponentTickInterval;    // 0x0181(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_182[0x2];                                      // 0x0182(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AssignedActorMovementComponentTickInterval;        // 0x0184(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpicaActorTickAssistant">();
	}
	static class USpicaActorTickAssistant* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpicaActorTickAssistant>();
	}
};

// Class Spica.SpicaAIAssistant
// 0x0028 (0x01A8 - 0x0180)
class USpicaAIAssistant final : public USpicaAssistant
{
public:
	uint8                                         Pad_180[0x18];                                     // 0x0180(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AController*>                    KeepControllers;                                   // 0x0198(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpicaAIAssistant">();
	}
	static class USpicaAIAssistant* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpicaAIAssistant>();
	}
};

// Class Spica.SpicaControlChannel
// 0x0000 (0x0080 - 0x0080)
class USpicaControlChannel final : public UControlChannel
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpicaControlChannel">();
	}
	static class USpicaControlChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpicaControlChannel>();
	}
};

// Class Spica.SpicaNetDriver
// 0x00C0 (0x0928 - 0x0868)
class USpicaNetDriver : public UIpNetDriver
{
public:
	uint8                                         Pad_868[0x10];                                     // 0x0868(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class USpicaSupervisor*                       Supervisor;                                        // 0x0878(0x0008)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_880[0xA8];                                     // 0x0880(0x00A8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpicaNetDriver">();
	}
	static class USpicaNetDriver* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpicaNetDriver>();
	}
};

// Class Spica.SpicaRPCHelperComponent
// 0x0000 (0x00A8 - 0x00A8)
class USpicaRPCHelperComponent : public UActorComponent
{
public:
	void ServerNotifyRemoteFunctionCalled(class AActor* Actor, int32 PacketId);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpicaRPCHelperComponent">();
	}
	static class USpicaRPCHelperComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpicaRPCHelperComponent>();
	}
};

// Class Spica.SpicaSubNetDriver
// 0x03E8 (0x0D10 - 0x0928)
class USpicaSubNetDriver final : public USpicaNetDriver
{
public:
	uint8                                         Pad_928[0x3C0];                                    // 0x0928(0x03C0)(Fixing Size After Last Property [ Dumper-7 ])
	class UNetConnection*                         MainNetServerConnection;                           // 0x0CE8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class AActor>>          AssignedActors;                                    // 0x0CF0(0x0010)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class AActor>>          SpawnedActors;                                     // 0x0D00(0x0010)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpicaSubNetDriver">();
	}
	static class USpicaSubNetDriver* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpicaSubNetDriver>();
	}
};

// Class Spica.SpicaSupervisor
// 0x1A40 (0x1A68 - 0x0028)
class USpicaSupervisor final : public UObject
{
public:
	uint8                                         Pad_28[0x20];                                      // 0x0028(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class AActor*, class USpicaActorSaveInfo*> SpicaActorSaveInfos;                               // 0x0048(0x0050)(NativeAccessSpecifierPrivate)
	uint8                                         Pad_98[0x398];                                     // 0x0098(0x0398)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SubNetDriverPort;                                  // 0x0430(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         MaxAssignedActorCount;                             // 0x0434(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         SendActorCmdMaxCount;                              // 0x0438(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         ProcessReserveActorCmdMaxCount;                    // 0x043C(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         ReserveActorTimeoutSeconds;                        // 0x0440(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         ProcessPendingActorCmdMaxCount;                    // 0x0444(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         PendingActorTimeoutSeconds;                        // 0x0448(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         UpdateInfoFrequency;                               // 0x044C(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bSkipMainNetReplicate;                             // 0x0450(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_451[0x3];                                      // 0x0451(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MainNetUpdateFrequency;                            // 0x0454(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                   SpicaInfoCreatorClassName;                         // 0x0458(0x0008)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                   SpicaActorSaveInfoClassName;                       // 0x0460(0x0008)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                   SpicaRPCHelperComponentClassName;                  // 0x0468(0x0008)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FSpicaAssistantDefinition>      SpicaAssistantDefinitions;                         // 0x0470(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	float                                         StartSubNetTimeoutSeconds;                         // 0x0480(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         ConnectPrivateSubNetTimeoutSeconds;                // 0x0484(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         ConnectPublicSubNetTimeoutSeconds;                 // 0x0488(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         ResendConnectionlessPacketIntervalSeconds;         // 0x048C(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         STUNHeartbeatIntervalSeconds;                      // 0x0490(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         STUNHolePunchingIntervalSeconds;                   // 0x0494(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         ReceiveTimeoutMaxCount;                            // 0x0498(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         SubNetHeartbeatIntervalSeconds;                    // 0x049C(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         SubNetReceiveTimeoutSeconds;                       // 0x04A0(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         RTTTimeoutMaxCount;                                // 0x04A4(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         SubNetRTTCheckIntervalSeconds;                     // 0x04A8(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         SubNetRTTTimeoutSeconds;                           // 0x04AC(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         AssignActorCmdTimeoutSeconds;                      // 0x04B0(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4B4[0x4];                                      // 0x04B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USpicaNetDriver*                        MainNetDriver;                                     // 0x04B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class USpicaSubNetDriver*>             SubNetDrivers;                                     // 0x04C0(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class USpicaSubNetDriver*>             PendingDestroySubNetDrivers;                       // 0x04D0(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class USpicaSubNetDriver*>             ShutdownSubNetDrivers;                             // 0x04E0(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class USpicaActorTickAssistant*               ActorTickAssistant;                                // 0x04F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpicaAIAssistant*                      AIAssistant;                                       // 0x04F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class USpicaAssistant*>                Assistants;                                        // 0x0500(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_510[0x14E0];                                   // 0x0510(0x14E0)(Fixing Size After Last Property [ Dumper-7 ])
	class USpicaInfoCreator*                      InfoCreator;                                       // 0x19F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                 SpicaActorSaveInfoClass;                           // 0x19F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                 SpicaRPCHelperComponentClass;                      // 0x1A00(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1A08[0x60];                                    // 0x1A08(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpicaSupervisor">();
	}
	static class USpicaSupervisor* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpicaSupervisor>();
	}
};

}

