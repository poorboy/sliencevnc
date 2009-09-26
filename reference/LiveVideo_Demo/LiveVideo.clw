; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CLiveVideoDlg
LastTemplate=generic CWnd
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "LiveVideo.h"

ClassCount=4
Class1=CLiveVideoApp
Class2=CLiveVideoDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Class4=CCaptureVideo
Resource3=IDD_LIVEVIDEO_DIALOG

[CLS:CLiveVideoApp]
Type=0
HeaderFile=LiveVideo.h
ImplementationFile=LiveVideo.cpp
Filter=N

[CLS:CLiveVideoDlg]
Type=0
HeaderFile=LiveVideoDlg.h
ImplementationFile=LiveVideoDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CLiveVideoDlg

[CLS:CAboutDlg]
Type=0
HeaderFile=LiveVideoDlg.h
ImplementationFile=LiveVideoDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_LIVEVIDEO_DIALOG]
Type=1
Class=?
ControlCount=10
Control1=IDCANCEL,button,1342242816
Control2=IDC_STATIC_SCREEN,static,1342181380
Control3=IDC_RADIO1,button,1342312457
Control4=IDC_RADIO2,button,1342181385
Control5=IDC_RADIO3,button,1342181385
Control6=IDC_RADIO4,button,1342181385
Control7=IDC_STATIC,button,1342177287
Control8=IDC_STOP,button,1342242816
Control9=IDC_STATIC,button,1342177287
Control10=IDC_STATIC,button,1342177287

[CLS:CCaptureVideo]
Type=0
HeaderFile=CaptureVideo.h
ImplementationFile=CaptureVideo.cpp
BaseClass=generic CWnd
Filter=W

