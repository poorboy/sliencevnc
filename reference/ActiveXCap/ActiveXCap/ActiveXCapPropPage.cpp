// ActiveXCapPropPage.cpp : Implementation of the CActiveXCapPropPage property page class.

#include "stdafx.h"
#include "ActiveXCap.h"
#include "ActiveXCapPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CActiveXCapPropPage, COlePropertyPage)



// Message map

BEGIN_MESSAGE_MAP(CActiveXCapPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CActiveXCapPropPage, "ACTIVEXCAP.ActiveXCapPropPage.1",
	0xde497a0f, 0x152d, 0x47c0, 0x81, 0x39, 0x21, 0x21, 0x73, 0x6f, 0x43, 0x91)



// CActiveXCapPropPage::CActiveXCapPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CActiveXCapPropPage

BOOL CActiveXCapPropPage::CActiveXCapPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_ACTIVEXCAP_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}



// CActiveXCapPropPage::CActiveXCapPropPage - Constructor

CActiveXCapPropPage::CActiveXCapPropPage() :
	COlePropertyPage(IDD, IDS_ACTIVEXCAP_PPG_CAPTION)
{
}



// CActiveXCapPropPage::DoDataExchange - Moves data between page and properties

void CActiveXCapPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}



// CActiveXCapPropPage message handlers
