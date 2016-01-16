#pragma once
#include "windows.h"
#include "HCNetSDK.h"

class FileIO
{
public:
	FileIO(void);

	long FileIO::getFileByTime(long userid, 
	long lchannel, 
	LPNET_DVR_TIME lpStartTime, 
	LPNET_DVR_TIME lpStopTIme,
	char * sSavedFileName);

	 bool FileIO::playBackControl(LONG lPlayHandle,
		 DWORD dwControlCode,
		 DWORD dwInValue,
		 DWORD *LPOutValue);

	  bool FileIO::stopGetFile(LONG lFileHandle);

	  long FileIO::getDownloadPos(LONG lFileHandle);
	 

};

