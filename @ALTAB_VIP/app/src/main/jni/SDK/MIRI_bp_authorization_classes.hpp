#pragma once

// PlayerUnknown's Battle Ground Mobile Lite (0.27.0) SDK Generate by  @MIRI_OWNER
// Telegram Channel:- @MIRI_CHEAT
// Generate on Sun Feb 25 13:48:29 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_authorization.bp_authorization_C
// 0x00B0 (0x04A8 - 0x03F8)
class Abp_authorization_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_TokenIsValid;                                          // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	struct FString                                     BP_GameVersion;                                           // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             BP_ARRAY_LoginTypeOrderList;                              // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_AutoAuthLogin;                                         // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_UserAgreementVersion;                                  // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_DeviceNameBeforeAuthLogin;                             // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_PrivacyPolicyVersion;                                  // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0444(0x0004) MISSED OFFSET
	struct FString                                     BP_QQPasswd;                                              // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_DeviceLimit;                                           // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LoginCount;                                            // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsCustomerServiceEnable;                               // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0461(0x0007) MISSED OFFSET
	struct FString                                     BP_AuthLoginChannel;                                      // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_LoginTime;                                             // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_MaxLoginTypeNum;                                       // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LoginCheck;                                            // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasShowDeviceLimit;                                       // 0x0484(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0485(0x0003) MISSED OFFSET
	struct FString                                     BP_QQID;                                                  // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_WECHAT_INSTALL;                                        // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x049C(0x0004) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_authorization.bp_authorization_C");
		return pStaticClass;
	}


	void EventShowPushTipsThenLogin_NoFetch();
	void EventShowPushTipsThenLogin();
	void EventCheckWeChatInstalled_NoFetch();
	void EventCheckWeChatInstalled();
	void EventShowH5CustomerService_NoFetch();
	void EventShowH5CustomerService();
	void EventGetCustomerServiceOpenStatus_NoFetch();
	void EventGetCustomerServiceOpenStatus();
	void EventClearLoginLimit_NoFetch();
	void EventClearLoginLimit();
	void EventBeforeAuthLogin_NoFetch();
	void EventBeforeAuthLogin();
	void EventAddLoginCount_NoFetch();
	void EventAddLoginCount();
	void EventAutoAuthLogin_NoFetch();
	void EventAutoAuthLogin();
	void EventGetUserAgreementVersion_NoFetch();
	void EventGetUserAgreementVersion();
	void EventShowPushShortTips_NoFetch();
	void EventShowPushShortTips();
	void EventShowPushLongTips_NoFetch();
	void EventShowPushLongTips();
	void EventShowRefuse_NoFetch();
	void EventShowRefuse();
	void EventUnrealLogoBtnClick_NoFetch();
	void EventUnrealLogoBtnClick();
	void EventLoginTimeOut_NoFetch();
	void EventLoginTimeOut();
	void EventShowNoticeBeforeLogin_NoFetch();
	void EventShowNoticeBeforeLogin();
	void EventClickKefu_NoFetch();
	void EventClickKefu();
	void EventShowCustomerService_NoFetch();
	void EventShowCustomerService();
	void EventOpenRepairDailog_NoFetch();
	void EventOpenRepairDailog();
	void EventAskForPrivacyPolicy_NoFetch();
	void EventAskForPrivacyPolicy();
	void EventAuthShowButtons_NoFetch();
	void EventAuthShowButtons();
	void EventShowTouristNotice_NoFetch();
	void EventShowTouristNotice();
	void EventClearChannelID_NoFetch();
	void EventClearChannelID();
	void EventAuthShowConnect_NoFetch();
	void EventAuthShowConnect();
	void EventRedoAutoAuthorization_NoFetch();
	void EventRedoAutoAuthorization();
	void EventAuthHideConnect_NoFetch();
	void EventAuthHideConnect();
	void EventShowNotInstallVkMsg_NoFetch();
	void EventShowNotInstallVkMsg();
	void EventShowNotInstallWechatMsg_NoFetch();
	void EventShowNotInstallWechatMsg();
	void EventStartLogin_NoFetch();
	void EventStartLogin();
	void EventShowPrivacyAgreement_NoFetch();
	void EventShowPrivacyAgreement();
	void EventDeleteSavedDir_NoFetch();
	void EventDeleteSavedDir();
	void EventShowVLinkFromAuthorization_NoFetch();
	void EventShowVLinkFromAuthorization();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventStartAuthorization_NoFetch();
	void EventStartAuthorization();
	void EventGetLoginTypeList_NoFetch();
	void EventGetLoginTypeList();
	void EventUpdateLoginTime_NoFetch();
	void EventUpdateLoginTime();
	void EventLoginWithoutBasePakInNoMiniVersion_NoFetch();
	void EventLoginWithoutBasePakInNoMiniVersion();
	void EventGameVersion_NoFetch();
	void EventGameVersion();
	void EventAskForUserAgreement_NoFetch();
	void EventAskForUserAgreement();
	void EventShowService_NoFetch();
	void EventShowService();
	void EventEnterLanguageSetting_NoFetch();
	void EventEnterLanguageSetting();
	void EventGCLoginTimeOut_NoFetch();
	void EventGCLoginTimeOut();
	void EventGetPrivacyPolicyVersion_NoFetch();
	void EventGetPrivacyPolicyVersion();
	void EventLogout_NoFetch();
	void EventLogout();
	void EventQuickLogin_NoFetch();
	void EventQuickLogin();
	void EventLoginCheck_NoFetch();
	void EventLoginCheck();
	void UserConstructionScript();
};


}

