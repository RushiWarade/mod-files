#pragma once

// PlayerUnknown's Battle Ground Mobile Lite (0.27.0) SDK Generate by  @MIRI_OWNER
// Telegram Channel:- @MIRI_CHEAT
// Generate on Sun Feb 25 13:48:32 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_camera_manager.bp_camera_manager_C
// 0x0070 (0x0468 - 0x03F8)
class Abp_camera_manager_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_MallFullscreenRootCameraID;                            // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CameraManager_EnlargeLensCameraData BP_STRUCT_CameraManager_EnlargeLensCameraData;            // 0x0404(0x0014) (Edit, BlueprintVisible)
	int                                                BP_CurrentCameraAdapt;                                    // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x041C(0x0004) MISSED OFFSET
	struct FString                                     BP_LobbyCameraManager_ClassPath;                          // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_LobbyCamera_BlendTime;                                 // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CameraManager_DefaultCameraData  BP_STRUCT_CameraManager_DefaultCameraData;                // 0x0434(0x0008) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CameraManager_FullscreenCameraData BP_STRUCT_CameraManager_FullscreenCameraData;             // 0x043C(0x0014) (Edit, BlueprintVisible)
	struct FString                                     BP_LobbyCameraManager_ExtraData;                          // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_camera_manager.bp_camera_manager_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

