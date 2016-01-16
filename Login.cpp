
#include "stdafx.h"
#include "Login.h"
#include <cstdlib>
#include "HCNetSDK_Imports.h"
#include "FormMain.h"

Login::Login(){


}

long Login::loginUser(char *Ip, char *username,char *password){

/*
		LONG __stdcall NET_DVR_Login_V30(char *sDVRIP, 
		WORD wDVRPort, 
		char *sUserName, 
		char *sPassword, 
		LPNET_DVR_DEVICEINFO_V30 lpDeviceInfo);
*/

		LPNET_DVR_DEVICEINFO_V30 lpDeviceInfo = 0;
		using namespace HikVisionDVRSegmentExtractionUtility;

		long result = 0;
		result =  NET_DVR_Login_V30(Ip,
		8000, 
		username, 
		password, 
		lpDeviceInfo);

		return result;
}

bool Login::logoutUser(long userid){
	
	//BOOL __stdcall NET_DVR_Logout(LONG lUserID);

	return (bool) NET_DVR_Logout(userid);

}
