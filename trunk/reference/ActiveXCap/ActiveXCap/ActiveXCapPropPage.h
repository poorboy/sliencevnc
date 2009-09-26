#pragma once

// ActiveXCapPropPage.h : Declaration of the CActiveXCapPropPage property page class.


// CActiveXCapPropPage : See ActiveXCapPropPage.cpp for implementation.

class CActiveXCapPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CActiveXCapPropPage)
	DECLARE_OLECREATE_EX(CActiveXCapPropPage)

// Constructor
public:
	CActiveXCapPropPage();

// Dialog Data
	enum { IDD = IDD_PROPPAGE_ACTIVEXCAP };

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
	DECLARE_MESSAGE_MAP()
};

