
// SQLiteDbManager.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CSQLiteDbManagerApp:
// See SQLiteDbManager.cpp for the implementation of this class
//

class CSQLiteDbManagerApp : public CWinApp
{
public:
	CSQLiteDbManagerApp();

// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
// Implementation

	DECLARE_MESSAGE_MAP()
	
};

extern CSQLiteDbManagerApp theApp;