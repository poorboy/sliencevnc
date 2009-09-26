// ActiveXCap.cpp : Implementation of CActiveXCapApp and DLL registration.

#include "stdafx.h"
#include "ActiveXCap.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CActiveXCapApp theApp;

const GUID CDECL BASED_CODE _tlid =
		{ 0x4D980CDF, 0x41E8, 0x4FC8, { 0xB5, 0x12, 0x5A, 0x4D, 0x7D, 0xD6, 0xD6, 0x23 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CActiveXCapApp::InitInstance - DLL initialization

BOOL CActiveXCapApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: Add your own module initialization code here.
	}

	return bInit;
}



// CActiveXCapApp::ExitInstance - DLL termination

int CActiveXCapApp::ExitInstance()
{
	// TODO: Add your own module termination code here.

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - Adds entries to the system registry

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - Removes entries from the system registry

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
