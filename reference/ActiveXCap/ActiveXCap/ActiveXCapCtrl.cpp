// ActiveXCapCtrl.cpp : Implementation of the CActiveXCapCtrl ActiveX Control class.

#include "stdafx.h"
#include "ActiveXCap.h"
#include "ActiveXCapCtrl.h"
#include "ActiveXCapPropPage.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CActiveXCapCtrl, COleControl)



// Message map

BEGIN_MESSAGE_MAP(CActiveXCapCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
	ON_WM_SIZE()
END_MESSAGE_MAP()



// Dispatch map

BEGIN_DISPATCH_MAP(CActiveXCapCtrl, COleControl)
	DISP_FUNCTION_ID(CActiveXCapCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION_ID(CActiveXCapCtrl, "InitActive", dispidInitActive, InitActive, VT_I4, VTS_NONE)
END_DISPATCH_MAP()



// Event map

BEGIN_EVENT_MAP(CActiveXCapCtrl, COleControl)
END_EVENT_MAP()



// Property pages

// TODO: Add more property pages as needed.  Remember to increase the count!
BEGIN_PROPPAGEIDS(CActiveXCapCtrl, 1)
	PROPPAGEID(CActiveXCapPropPage::guid)
END_PROPPAGEIDS(CActiveXCapCtrl)



// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CActiveXCapCtrl, "ACTIVEXCAP.ActiveXCapCtrl.1",
	0xbbca5cdf, 0xd248, 0x411c, 0x8f, 0x7c, 0xce, 0x99, 0xe6, 0xf1, 0x9e, 0x59)



// Type library ID and version

IMPLEMENT_OLETYPELIB(CActiveXCapCtrl, _tlid, _wVerMajor, _wVerMinor)



// Interface IDs

const IID BASED_CODE IID_DActiveXCap =
		{ 0xF6600C59, 0x4E77, 0x4E2C, { 0xB1, 0xD9, 0x65, 0x9C, 0x90, 0x5E, 0xCE, 0xA3 } };
const IID BASED_CODE IID_DActiveXCapEvents =
		{ 0xE741AB3F, 0x68A0, 0x4942, { 0xB9, 0xC6, 0x34, 0x71, 0x87, 0x9B, 0x9E, 0xB4 } };



// Control type information

static const DWORD BASED_CODE _dwActiveXCapOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CActiveXCapCtrl, IDS_ACTIVEXCAP, _dwActiveXCapOleMisc)



// CActiveXCapCtrl::CActiveXCapCtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CActiveXCapCtrl

BOOL CActiveXCapCtrl::CActiveXCapCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: Verify that your control follows apartment-model threading rules.
	// Refer to MFC TechNote 64 for more information.
	// If your control does not conform to the apartment-model rules, then
	// you must modify the code below, changing the 6th parameter from
	// afxRegApartmentThreading to 0.

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_ACTIVEXCAP,
			IDB_ACTIVEXCAP,
			afxRegApartmentThreading,
			_dwActiveXCapOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}



// CActiveXCapCtrl::CActiveXCapCtrl - Constructor

CActiveXCapCtrl::CActiveXCapCtrl()
{
	InitializeIIDs(&IID_DActiveXCap, &IID_DActiveXCapEvents);
	// TODO: Initialize your control's instance data here.
	pdlgCapVideo = NULL;
}



// CActiveXCapCtrl::~CActiveXCapCtrl - Destructor

CActiveXCapCtrl::~CActiveXCapCtrl()
{
	// TODO: Cleanup your control's instance data here.
	if (pdlgCapVideo)
		delete pdlgCapVideo;
}



// CActiveXCapCtrl::OnDraw - Drawing function

void CActiveXCapCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	if (!pdc)
		return;

	// TODO: Replace the following code with your own drawing code.
	//pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	//pdc->Ellipse(rcBounds);
}



// CActiveXCapCtrl::DoPropExchange - Persistence support

void CActiveXCapCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Call PX_ functions for each persistent custom property.
}



// CActiveXCapCtrl::OnResetState - Reset control to default state

void CActiveXCapCtrl::OnResetState()
{
	COleControl::OnResetState();  // Resets defaults found in DoPropExchange

	// TODO: Reset any other control state here.
}



// CActiveXCapCtrl::AboutBox - Display an "About" box to the user

void CActiveXCapCtrl::AboutBox()
{
	CDialog dlgAbout(IDD_ABOUTBOX_ACTIVEXCAP);
	dlgAbout.DoModal();
}



// CActiveXCapCtrl message handlers

void CActiveXCapCtrl::OnSize(UINT nType, int cx, int cy)
{
	COleControl::OnSize(nType, cx, cy);
	if (pdlgCapVideo)
	{
		CRect rc;
		GetClientRect(&rc);
		pdlgCapVideo->MoveWindow(rc);
		pdlgCapVideo->ShowWindow(SW_SHOW);
	}

	// TODO: Add your message handler code here
}

LONG CActiveXCapCtrl::InitActive(void)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	// TODO: Add your dispatch handler code here
	if (!pdlgCapVideo)
	{
		CRect rc(0,0,320,240);
		MoveWindow(&rc);
		pdlgCapVideo = new CDlgCap;
		pdlgCapVideo->Create(CDlgCap::IDD,this);
		GetClientRect(&rc);
		pdlgCapVideo->MoveWindow(rc);
		pdlgCapVideo->ShowWindow(SW_SHOW);
	}
	return 0;
}
