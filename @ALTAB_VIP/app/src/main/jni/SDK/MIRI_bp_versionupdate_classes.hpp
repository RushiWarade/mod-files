#pragma once

// PlayerUnknown's Battle Ground Mobile Lite (0.27.0) SDK Generate by  @MIRI_OWNER
// Telegram Channel:- @MIRI_CHEAT
// Generate on Sun Feb 25 13:48:30 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_versionupdate.bp_versionupdate_C
// 0x00E0 (0x04D8 - 0x03F8)
class Abp_versionupdate_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_IsExamin;                                              // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0401(0x0007) MISSED OFFSET
	struct FString                                     BP_CurStage;                                              // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CDNLoaderUrl;                                          // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CDNLoaderSavedDir;                                     // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_VersionUpdateInfo                BP_STRUCT_VersionUpdateInfo;                              // 0x0438(0x0088) (Edit, BlueprintVisible)
	bool                                               BP_EnableCDNGetVersion;                                   // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CDNNeedBreakpointContinualTransfer;                    // 0x04C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x04C2(0x0002) MISSED OFFSET
	int                                                BP_CDNLoaderType;                                         // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ShaderCompileCurPercent;                               // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CurPercent;                                            // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_versionupdate.bp_versionupdate_C");
		return pStaticClass;
	}


	void EventNoWifiNotifyAndroidAppUpdate_Push_NoFetch();
	void EventNoWifiNotifyAndroidAppUpdate_Push();
	void EventWindowsAppUpdate_NoFetch();
	void EventWindowsAppUpdate();
	void EventWifiNotifyIOSAppUpdate_Push_NoFetch();
	void EventWifiNotifyIOSAppUpdate_Push();
	void EventWifiNotifyAndroidAppUpdate_Push_NoFetch();
	void EventWifiNotifyAndroidAppUpdate_Push();
	void EventNoWifiNotifyIOSAppUpdate_Push_NoFetch();
	void EventNoWifiNotifyIOSAppUpdate_Push();
	void EventShaderCompileProgress_NoFetch();
	void EventShaderCompileProgress();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventNoConnectionStartUpdate_Push_NoFetch();
	void EventNoConnectionStartUpdate_Push();
	void UserConstructionScript();
};


}

