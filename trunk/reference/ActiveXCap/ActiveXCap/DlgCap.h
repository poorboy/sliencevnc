#pragma once
#include "CaptureVideo.h"
#include "afxwin.h"

// CDlgCap dialog

class CDlgCap : public CDialog
{
	DECLARE_DYNAMIC(CDlgCap)

public:
	CDlgCap(CWnd* pParent = NULL);   // standard constructor
	virtual ~CDlgCap();

// Dialog Data
	enum { IDD = IDD_DLGCAP };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CCaptureVideo myCapVideo;
public:
	virtual BOOL OnInitDialog();
public:
	CComboBox m_ComboxDrives;
};
