#if !defined(AFX_NEWCLIENT_H__74A5E363_EE6F_4066_92A0_65AD32C83831__INCLUDED_) 
#define AFX_NEWCLIENT_H__74A5E363_EE6F_4066_92A0_65AD32C83831__INCLUDED_ 
 
#if _MSC_VER > 1000 
#pragma once 
#endif // _MSC_VER > 1000 
 
#ifndef __AFXWIN_H__ 
	#error include 'stdafx.h' before including this file for PCH 
#endif 
 
#include "resource.h"		// main symbols 
#include "HCstruct.h" 
#include "HCNetSDK.h" 
#include "PlayMpeg4.h" 
 
///////////////////////////////////////////////////////////////////////////// 
// CNewclientApp: 
// See newclient.cpp for the implementation of this class 
// 
 
class CNewclientApp : public CWinApp 
{ 
public: 
	CNewclientApp(); 
	char m_cHardDriver[26]; 
	int	 m_iDriverNum; 
	BOOL F_GetSystemInfo(); 
	 
// Overrides 
	// ClassWizard generated virtual function overrides 
	//{{AFX_VIRTUAL(CNewclientApp) 
	public: 
	virtual BOOL InitInstance(); 
	virtual int ExitInstance(); 
	//}}AFX_VIRTUAL 
 
// Implementation 
 
	//{{AFX_MSG(CNewclientApp) 
		// NOTE - the ClassWizard will add and remove member functions here. 
		//    DO NOT EDIT what you see in these blocks of generated code ! 
	//}}AFX_MSG 
	DECLARE_MESSAGE_MAP() 
}; 
 
 
///////////////////////////////////////////////////////////////////////////// 
 
//{{AFX_INSERT_LOCATION}} 
// Microsoft Visual C++ will insert additional declarations immediately before the previous line. 
 
#endif // !defined(AFX_NEWCLIENT_H__74A5E363_EE6F_4066_92A0_65AD32C83831__INCLUDED_) 