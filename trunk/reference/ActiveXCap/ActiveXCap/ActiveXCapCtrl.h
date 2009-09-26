#pragma once
#include "DlgCap.h"

// ActiveXCapCtrl.h : Declaration of the CActiveXCapCtrl ActiveX Control class.


// CActiveXCapCtrl : See ActiveXCapCtrl.cpp for implementation.

class CActiveXCapCtrl : public COleControl
{
	DECLARE_DYNCREATE(CActiveXCapCtrl)

// Constructor
public:
	CActiveXCapCtrl();

// Overrides
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// Implementation
protected:
	~CActiveXCapCtrl();

	DECLARE_OLECREATE_EX(CActiveXCapCtrl)    // Class factory and guid
	DECLARE_OLETYPELIB(CActiveXCapCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CActiveXCapCtrl)     // Property page IDs
	DECLARE_OLECTLTYPE(CActiveXCapCtrl)		// Type name and misc status

// Message maps
	DECLARE_MESSAGE_MAP()

// Dispatch maps
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// Event maps
	DECLARE_EVENT_MAP()

// Dispatch and event IDs
public:
	enum {
		dispidInitActive = 1L
	};
protected:
	CDlgCap*  pdlgCapVideo;
public:
	afx_msg void OnSize(UINT nType, int cx, int cy);
protected:
	LONG InitActive(void);
};

