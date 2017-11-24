
// visualizer10.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cvisualizer10App:
// See visualizer10.cpp for the implementation of this class
//

class Cvisualizer10App : public CWinApp
{
public:
	Cvisualizer10App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern Cvisualizer10App theApp;