#pragma once

#include "stdafx.h"
#include "windows.h"
#using <mscorlib.dll>
#include "HCNetSDK.h"

using namespace System;
using namespace System::Runtime::InteropServices;
[DllImport("HCNetSDK.dll",CharSet=CharSet::Auto)]
	extern "C" NET_DVR_API BOOL __stdcall NET_DVR_Init();

using namespace System;
using namespace System::Runtime::InteropServices;
[DllImport("HCNetSDK.dll",CharSet=CharSet::Auto)]
	extern "C" NET_DVR_API LONG __stdcall NET_DVR_Login_V30(char *sDVRIP, WORD wDVRPort, char *sUserName, char *sPassword, LPNET_DVR_DEVICEINFO_V30 lpDeviceInfo);

	
using namespace System;
using namespace System::Runtime::InteropServices;
[DllImport("HCNetSDK.dll",CharSet=CharSet::Auto)]
	extern "C" NET_DVR_API BOOL __stdcall NET_DVR_Logout(LONG lUserID);

using namespace System;
using namespace System::Runtime::InteropServices;
[DllImport("HCNetSDK.dll",CharSet=CharSet::Auto)]
	extern "C" NET_DVR_API LONG __stdcall NET_DVR_GetFileByTime(LONG lUserID,LONG lChannel, LPNET_DVR_TIME lpStartTime, LPNET_DVR_TIME lpStopTime, char *sSavedFileName);

using namespace System;
using namespace System::Runtime::InteropServices;
[DllImport("HCNetSDK.dll",CharSet=CharSet::Auto)]
	extern "C" NET_DVR_API BOOL __stdcall NET_DVR_PlayBackControl(LONG lPlayHandle,DWORD dwControlCode,DWORD dwInValue,DWORD *LPOutValue);


using namespace System;
using namespace System::Runtime::InteropServices;
[DllImport("HCNetSDK.dll",CharSet=CharSet::Auto)]
	extern "C"  NET_DVR_API BOOL __stdcall NET_DVR_StopGetFile(LONG lFileHandle);
	
using namespace System;
using namespace System::Runtime::InteropServices;
[DllImport("HCNetSDK.dll",CharSet=CharSet::Auto)]
	extern "C" NET_DVR_API LONG __stdcall NET_DVR_GetDownloadPos(LONG lFileHandle);

using namespace System;
using namespace System::Runtime::InteropServices;
[DllImport("HCNetSDK.dll",CharSet=CharSet::Auto)]
	extern "C" NET_DVR_API BOOL __stdcall NET_DVR_Cleanup();

using namespace System;
using namespace System::Runtime::InteropServices;
[DllImport("HCNetSDK.dll",CharSet=CharSet::Auto)]
	extern "C" NET_DVR_API LONG __stdcall NET_DVR_GetDownloadPos(LONG lFileHandle);