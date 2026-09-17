#pragma once

// PlayerUnknown's Battle Ground Mobile Lite (0.27.0) SDK Generate by  @MIRI_OWNER
// Telegram Channel:- @MIRI_CHEAT
// Generate on Sun Feb 25 13:48:17 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UAEOptimizeTools.UAEOTConsoleCommandObject
// 0x0000 (0x0028 - 0x0028)
class UUAEOTConsoleCommandObject : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAEOptimizeTools.UAEOTConsoleCommandObject");
		return pStaticClass;
	}


	void UOTStartReportSlatePaint();
	void UOTReportUIObject(const struct FString& InFileName);
	void UOTReportObjectPath(const struct FString& InFileName);
	void UOTReportObjectCount(const struct FString& InFileName);
	void UOTReportObjectAll(const struct FString& InFileName);
	void UOTReportActor(const struct FString& InFileName);
	void UOTObjectReports(const struct FString& InFileName);
	void UOTEndReportSlatePaintEnd(int Filter, const struct FString& Filename);
	void ReportClassObjectInfo(const struct FString& ClassName);
};


}

