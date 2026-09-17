#pragma once

// PlayerUnknown's Battle Ground Mobile Lite (0.27.0) SDK Generate by  @MIRI_OWNER
// Telegram Channel:- @MIRI_CHEAT
// Generate on Sun Feb 25 13:48:33 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_scene_manager.bp_scene_manager_C
// 0x0078 (0x0470 - 0x03F8)
class Abp_scene_manager_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_LobbySceneManager_MallSceneTextureURL;                 // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_LobbySceneManager_LightType;                           // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0414(0x0004) MISSED OFFSET
	struct FString                                     BP_LobbySceneManager_ExtraData;                           // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_LobbySceneManager_OperateExtraModelID;                 // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x042C(0x0004) MISSED OFFSET
	struct FString                                     BP_LobbySceneManager_ClassPath;                           // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BP_Array_LobbySceneManager_OperateExtraModelTransform;    // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_LobbySceneManager_OperateExtraModelPath;               // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_LobbySceneManager_MallSceneMaterialID;                 // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_scene_manager.bp_scene_manager_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

