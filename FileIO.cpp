#include "StdAfx.h"
#include "FileIO.h"
#include "HCNetSDK_Imports.h"
#include "FormMain.h"


FileIO::FileIO(void)
{

}

long FileIO::getFileByTime(long userid, 
	long lchannel, 
	LPNET_DVR_TIME lpStartTime, 
	LPNET_DVR_TIME lpStopTime,
	char * sSavedFileName){
	long result = 0;
	/*NET_DVR_API LONG __stdcall NET_DVR_GetFileByTime(LONG lUserID,
	LONG lChannel, LPNET_DVR_TIME lpStartTime, 
	LPNET_DVR_TIME lpStopTime, 
	char *sSavedFileName);
	*/
		using namespace HikVisionDVRSegmentExtractionUtility;

		result = NET_DVR_GetFileByTime(userid,lchannel, lpStartTime, lpStopTime, sSavedFileName);
		return result;
}

bool FileIO::playBackControl(long lPlayHandle,
		 DWORD dwControlCode,
		 DWORD dwInValue,
		 DWORD *LPOutValue){

			 
			 using namespace HikVisionDVRSegmentExtractionUtility;
			 bool result;

				result = NET_DVR_PlayBackControl(lPlayHandle,dwControlCode,dwInValue,LPOutValue);

			 return result;
		
}

bool FileIO::stopGetFile(LONG lFileHandle){

	return (bool) NET_DVR_StopGetFile(lFileHandle);
}

long FileIO::getDownloadPos(LONG lFileHandle){

	return NET_DVR_GetDownloadPos(lFileHandle);

}