#pragma once

// PlayerUnknown's Battle Ground Mobile Lite (0.27.0) SDK Generate by  @MIRI_OWNER
// Telegram Channel:- @MIRI_CHEAT
// Generate on Sun Feb 25 13:48:27 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_lucky_unback.bp_lucky_unback_C
// 0x00F0 (0x04E8 - 0x03F8)
class Abp_lucky_unback_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_LuckyUnback_Voucher              BP_STRUCT_LuckyUnback_Voucher;                            // 0x0400(0x0018) (Edit, BlueprintVisible)
	int                                                BP_LuckyUnback_AnimStage;                                 // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LuckyUnback_CurVoucherCount;                           // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LuckyUnback_ResourceType;                              // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_LuckyUnback_IsOpenLobbyEnter;                          // 0x0424(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0425(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_LuckyUnback_Voucher>      BP_ARRAY_LuckyUnback_Voucher_List;                        // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_LuckyUnback_CurVoucherId;                              // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LuckyUnback_Cur_Price;                                 // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_LuckyUnback_ItemInfo             BP_STRUCT_LuckyUnback_ItemInfo;                           // 0x0440(0x0048) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_LuckyUnback_ItemInfo>     BP_ARRAY_LuckyUnback_ItemInfo_List;                       // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_LuckyUnback_CurVoucherPrice;                           // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LuckyUnback_Round_Count;                               // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LuckyUnback_SurpriseStatus;                            // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LuckyUnback_CurGetPos;                                 // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_LuckyUnback_TimePeriod;                                // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_LuckyUnback_ImageLink;                                 // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_LuckyUnback_IsShowBubble;                              // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04C9(0x0003) MISSED OFFSET
	int                                                BP_LuckyUnback_Total_Round;                               // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_LuckyUnback_RedPoint;                                  // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04D1(0x0003) MISSED OFFSET
	int                                                BP_LuckyUnback_Cur_UC;                                    // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LuckyUnback_Had_Draw_Count;                            // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04DC(0x0004) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_lucky_unback.bp_lucky_unback_C");
		return pStaticClass;
	}


	void EventLuckyUnbackExchangeClick_NoFetch();
	void EventLuckyUnbackExchangeClick();
	void EventLuckyUnbackEnterFromLobby_NoFetch();
	void EventLuckyUnbackEnterFromLobby();
	void EventLuckyUnbackClose_NoFetch();
	void EventLuckyUnbackClose();
	void EventLuckyUnbackShowGet_NoFetch();
	void EventLuckyUnbackShowGet();
	void EventLuckyUnbackShowRate_NoFetch();
	void EventLuckyUnbackShowRate();
	void EventLuckyUnbackHideBubble_NoFetch();
	void EventLuckyUnbackHideBubble();
	void EventLuckyUnbackShowSurprise_NoFetch();
	void EventLuckyUnbackShowSurprise();
	void EventLuckyUnbackSwicthRound_NoFetch();
	void EventLuckyUnbackSwicthRound();
	void EventLuckyUnbackShowRule_NoFetch();
	void EventLuckyUnbackShowRule();
	void UserConstructionScript();
};


}

