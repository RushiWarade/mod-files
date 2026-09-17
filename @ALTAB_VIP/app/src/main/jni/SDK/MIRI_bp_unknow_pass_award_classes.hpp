#pragma once

// PlayerUnknown's Battle Ground Mobile Lite (0.27.0) SDK Generate by  @MIRI_OWNER
// Telegram Channel:- @MIRI_CHEAT
// Generate on Sun Feb 25 13:48:27 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_unknow_pass_award.bp_unknow_pass_award_C
// 0x0120 (0x0518 - 0x03F8)
class Abp_unknow_pass_award_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_UnknowPassAward_Item             BP_STRUCT_UnknowPassAward_Item;                           // 0x0400(0x0018) (Edit, BlueprintVisible)
	struct FBP_STRUCT_UnknowPass_Award_Jump_Info       BP_STRUCT_UnknowPass_Award_Jump_Info;                     // 0x0418(0x000C) (Edit, BlueprintVisible)
	int                                                BP_UnknowPass_Award_Gender;                               // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_UnknowPass_CurrentClickLevel;                          // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_UnknowPass_Score;                                      // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_UnknowPass_Award_BuyPass_Tips_Num;                     // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_UnknowPass_Award_HasCanGetAward;                       // 0x0434(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0435(0x0003) MISSED OFFSET
	int                                                BP_ENUM_UNKNOWPASS_NoAward;                               // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	struct FString                                     BP_UnknowPass_Award_Tips;                                 // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_UnknowPass_CurrentEliteGetGroupID;                     // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_UnknowPass_Current_Preview_Price;                      // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_UnknowPass_HasBuy;                                     // 0x0458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0459(0x0007) MISSED OFFSET
	struct FBP_STRUCT_UnknowPass_Award_Level_Info      BP_STRUCT_UnknowPass_Award_Level_Info;                    // 0x0460(0x0030) (Edit, BlueprintVisible)
	int                                                BP_ENUM_UNKNOWPASS_HasGet;                                // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ENUM_UNKNOWPASS_CanGet;                                // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_UnknowPass_Award_Level_Info> BP_ARRAY_UnknowPass_Award_Level_Preview_List;             // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ENUM_UNKNOWPASS_NeedBuy;                               // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_UnknowPass_Prime_Status;                               // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_UnknowPass_Award_StayLevel;                            // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_UnknowPass_Ticket;                                     // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_UnknowPass_MaxGroupAwardCount;                         // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_UnknowPass_Award_IsMaxLevel;                           // 0x04BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x04BD(0x0003) MISSED OFFSET
	int                                                BP_UnknowPass_Level;                                      // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x04C4(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_UnknowPass_Award_Level_Info> BP_ARRAY_UnknowPass_Award_Level_List;                     // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_UnknowPass_Current_Preview_DiscountPrice;              // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_UnknowPass_BuyLevel;                                   // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_UnknowPass_Current_Preview_PriceType;                  // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_UnknowPass_Current_Preview_Level;                      // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_UnknowPass_MaxAwardCount;                              // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_UnknowPass_Award_Season_Index;                         // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_UnknowPass_CurrentSelectItemID;                        // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ENUM_UNKNOWPASS_Lock;                                  // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ARRAY_UnknowPass_Award_Preview_Unlock_Level;           // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x04FC(0x0004) MISSED OFFSET
	struct FString                                     BP_UnknowPass_Prime_Add;                                  // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_unknow_pass_award.bp_unknow_pass_award_C");
		return pStaticClass;
	}


	void EventUnknowPassAwardBuyToLevel_NoFetch();
	void EventUnknowPassAwardBuyToLevel();
	void EventUnknowPassAwardUpdateUpgradeUI_NoFetch();
	void EventUnknowPassAwardUpdateUpgradeUI();
	void EventOrdinaryItemClick_NoFetch();
	void EventOrdinaryItemClick();
	void EventUnknowPassAward_BuyAnotherSplitGroupItem_NoFetch();
	void EventUnknowPassAward_BuyAnotherSplitGroupItem();
	void EventOrdinaryGetClick_NoFetch();
	void EventOrdinaryGetClick();
	void EventShowUnknowpassDetailClick_NoFetch();
	void EventShowUnknowpassDetailClick();
	void EventBuyScoreClick_NoFetch();
	void EventBuyScoreClick();
	void EventEliteGetClick_NoFetch();
	void EventEliteGetClick();
	void EventEliteItemClick_NoFetch();
	void EventEliteItemClick();
	void EventOnClickSendGift_NoFetch();
	void EventOnClickSendGift();
	void EventOrdinaryPreviewItemClick_NoFetch();
	void EventOrdinaryPreviewItemClick();
	void EventUnknowpassAwardReuseListBack_NoFetch();
	void EventUnknowpassAwardReuseListBack();
	void EventUnknowPassAwardShowTips_NoFetch();
	void EventUnknowPassAwardShowTips();
	void EventUnknowPassAward_SplitGroupPreviewItemClicked_NoFetch();
	void EventUnknowPassAward_SplitGroupPreviewItemClicked();
	void EventUnknowPassAwardBuyClick_NoFetch();
	void EventUnknowPassAwardBuyClick();
	void EventUnknowPassAwardGetAllClick_NoFetch();
	void EventUnknowPassAwardGetAllClick();
	void EventUnknowPassAward_SplitGroupItemClicked_NoFetch();
	void EventUnknowPassAward_SplitGroupItemClicked();
	void UserConstructionScript();
};


}

