
// hexmap.h : main header file for the hexmap application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CHexMapApp:
// See hexmap.cpp for the implementation of this class
//

class CHexMapApp : public CWinApp
{
public:
	CHexMapApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CHexMapApp theApp;
