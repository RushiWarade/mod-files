#pragma once

// PlayerUnknown's Battle Ground Mobile Lite (0.27.0) SDK Generate by  @MIRI_OWNER
// Telegram Channel:- @MIRI_CHEAT
// Generate on Sun Feb 25 13:48:31 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_eugdpr_panel.bp_eugdpr_panel_C
// 0x0130 (0x0528 - 0x03F8)
class Abp_eugdpr_panel_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FString>                             BP_ARRAY_GDPRContinentsList;                              // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_EUGDPRTipsByState                BP_STRUCT_EUGDPRTipsByState;                              // 0x0410(0x0018) (Edit, BlueprintVisible)
	struct FString                                     EP_EUGDPR_RecommendNation;                                // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_EUGDPR_IsEUByCountry;                                  // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0439(0x0007) MISSED OFFSET
	struct FBP_STRUCT_GDPRNationsPool                  BP_STRUCT_GDPRNationsPool;                                // 0x0440(0x0028) (Edit, BlueprintVisible)
	TArray<int>                                        BP_ARRAY_GDPRMonthList;                                   // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     EP_EUGDPR_Recommend;                                      // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_EUGDPR_DeleteTime;                                     // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x048C(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_GDPRNationsPool>          BP_ARRAY_GDPRNationsList;                                 // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BP_ARRAY_GDPRYearList;                                    // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_EUGDPR_ChangeAgeTime;                                  // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PB_EUGDPR_ParentAgreeTime;                                // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_EUGDPR_Type;                                           // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04BC(0x0004) MISSED OFFSET
	struct FString                                     BP_EUGDPR_EuropeTxt;                                      // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_EUGPPR_BtnID;                                          // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04D4(0x0004) MISSED OFFSET
	TArray<struct FString>                             BP_ARRAY_GDPREUNationsList;                               // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_EUGDPR_SelectedCountry;                                // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_EUGDPR_CountDown;                                      // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_EUGDPR_IsNewUser;                                      // 0x04FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x04FD(0x0003) MISSED OFFSET
	int                                                BP_EUGDPR_State;                                          // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0504(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_EUGDPRTipsByState>        BP_ARRAY_GDPRStateTextList;                               // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_EUGDPRDateOfBirth                BP_STRUCT_EUGDPRDateOfBirth;                              // 0x0518(0x0008) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_eugdpr_panel.bp_eugdpr_panel_C");
		return pStaticClass;
	}


	void EventCloseAllGDPRUI_NoFetch();
	void EventCloseAllGDPRUI();
	void EventSyncEUGDPRDeleteAccount_NoFetch();
	void EventSyncEUGDPRDeleteAccount();
	void EventShowGDPRCountDownPanel_NoFetch();
	void EventShowGDPRCountDownPanel();
	void EventSyncEUGDPRStateToServer_NoFetch();
	void EventSyncEUGDPRStateToServer();
	void EventEUGDPRReturnToLogin_NoFetch();
	void EventEUGDPRReturnToLogin();
	void EventShowGDPRPrivacyPanel_NoFetch();
	void EventShowGDPRPrivacyPanel();
	void EventSyncEUGDPRCancelDeleteAccount_NoFetch();
	void EventSyncEUGDPRCancelDeleteAccount();
	void EventShowGDPRagreementPanel_NoFetch();
	void EventShowGDPRagreementPanel();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventShowVlink_NoFetch();
	void EventShowVlink();
	void EventIsEUCountry_NoFetch();
	void EventIsEUCountry();
	void EventEUGDPRReportBtnClick_NoFetch();
	void EventEUGDPRReportBtnClick();
	void EventShowGDPRAbortPanel_NoFetch();
	void EventShowGDPRAbortPanel();
	void EventShowGDPRDateOfBirth_NoFetch();
	void EventShowGDPRDateOfBirth();
	void EventTryToShowEUGDPR_NoFetch();
	void EventTryToShowEUGDPR();
	void UserConstructionScript();
};


}

