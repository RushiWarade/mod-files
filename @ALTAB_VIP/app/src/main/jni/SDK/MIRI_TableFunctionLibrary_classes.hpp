#pragma once

// PlayerUnknown's Battle Ground Mobile Lite (0.27.0) SDK Generate by  @MIRI_OWNER
// Telegram Channel:- @MIRI_CHEAT
// Generate on Sun Feb 25 13:48:29 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TableFunctionLibrary.TableFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UTableFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass TableFunctionLibrary.TableFunctionLibrary_C");
		return pStaticClass;
	}


	static void GetItemTableRow(int ID, class UObject* __WorldContext, struct FBP_STRUCT_Item_type* Item);
};


}

