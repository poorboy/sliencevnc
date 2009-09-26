// DlgCap.cpp : implementation file
//

#include "stdafx.h"
#include "ActiveXCap.h"
#include "DlgCap.h"


// CDlgCap dialog

IMPLEMENT_DYNAMIC(CDlgCap, CDialog)

CDlgCap::CDlgCap(CWnd* pParent /*=NULL*/)
	: CDialog(CDlgCap::IDD, pParent)
{

}

CDlgCap::~CDlgCap()
{
}

void CDlgCap::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBODRIVES, m_ComboxDrives);
}


BEGIN_MESSAGE_MAP(CDlgCap, CDialog)
END_MESSAGE_MAP()


// CDlgCap message handlers

BOOL CDlgCap::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  Add extra initialization here
	myCapVideo.EnumDevices(m_ComboxDrives);
	m_ComboxDrives.SetCurSel(0);
	HRESULT hr = myCapVideo.Init(m_ComboxDrives.GetCurSel(),m_hWnd);
	m_ComboxDrives.ShowWindow(SW_HIDE);

	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}
