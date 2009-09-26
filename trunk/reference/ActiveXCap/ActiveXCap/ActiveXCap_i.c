

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Sat Sep 26 22:18:26 2009
 */
/* Compiler settings for .\ActiveXCap.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_ActiveXCapLib,0x4D980CDF,0x41E8,0x4FC8,0xB5,0x12,0x5A,0x4D,0x7D,0xD6,0xD6,0x23);


MIDL_DEFINE_GUID(IID, DIID__DActiveXCap,0xF6600C59,0x4E77,0x4E2C,0xB1,0xD9,0x65,0x9C,0x90,0x5E,0xCE,0xA3);


MIDL_DEFINE_GUID(IID, DIID__DActiveXCapEvents,0xE741AB3F,0x68A0,0x4942,0xB9,0xC6,0x34,0x71,0x87,0x9B,0x9E,0xB4);


MIDL_DEFINE_GUID(CLSID, CLSID_ActiveXCap,0xBBCA5CDF,0xD248,0x411C,0x8F,0x7C,0xCE,0x99,0xE6,0xF1,0x9E,0x59);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



