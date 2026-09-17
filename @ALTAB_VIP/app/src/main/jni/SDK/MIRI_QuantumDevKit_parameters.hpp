#pragma once

// PlayerUnknown's Battle Ground Mobile Lite (0.27.0) SDK Generate by  @MIRI_OWNER
// Telegram Channel:- @MIRI_CHEAT
// Generate on Sun Feb 25 13:48:17 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetStatus
struct UQuantumFirebaseRemoteConfig_GetStatus_Params
{
	EQuantumFirebaseRemoteConfigStatus                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetRemoteConfig
struct UQuantumFirebaseRemoteConfig_GetRemoteConfig_Params
{
	struct FString                                     ConfigNameToQuery;                                        // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function QuantumDevKit.QuantumFirebaseRemoteConfig.GetInstance
struct UQuantumFirebaseRemoteConfig_GetInstance_Params
{
	class UQuantumFirebaseRemoteConfig*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

