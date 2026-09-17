#pragma once

// PlayerUnknown's Battle Ground Mobile Lite (0.27.0) SDK Generate by  @MIRI_OWNER
// Telegram Channel:- @MIRI_CHEAT
// Generate on Sun Feb 25 13:48:28 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_mall_weapon_model_handler.bp_mall_weapon_model_handler_C
// 0x0080 (0x0478 - 0x03F8)
class Abp_mall_weapon_model_handler_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_MallWeapon_Cur_Show_Weapon_Need_ResetRotation;         // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0401(0x0003) MISSED OFFSET
	int                                                BP_MallWeapon_Cur_Show_Weapon_Resid;                      // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MallWeapon_Cur_Show_Weapon_Skin;                       // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MallWeapon_Cur_Show_Weapon_Need_AutoRotate;            // 0x0409(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MallWeapon_Cur_Show_Weapon_Need_RotateBack;            // 0x040A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MallWeapon_isRecommend;                                // 0x040B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_MallWeapon_CameraId;                                   // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MallWeapon_HasEditorConfig;                            // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0411(0x0007) MISSED OFFSET
	TArray<int>                                        BP_Array_MallWeapon_AdaptRotation;                        // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MallWeapon_GRENADE_BOOM_Y;                             // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_MallWeapon_GRENADE_BOOM_Z;                             // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_MallWeapon_GRENADE_BOOM_X;                             // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0434(0x0004) MISSED OFFSET
	struct FString                                     BP_MallWeapon_Display_ExtraData;                          // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MallWeapon_Cur_Equipment_Resid;                        // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x044C(0x0004) MISSED OFFSET
	TArray<int>                                        BP_Array_MallWeapon_PutOnEquipment_Resid_List;            // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BP_Array_MallWeapon_AdaptTransform;                       // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_mall_weapon_model_handler.bp_mall_weapon_model_handler_C");
		return pStaticClass;
	}


	void EventProjectileAndParticleEffectFinish_NoFetch();
	void EventProjectileAndParticleEffectFinish();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

