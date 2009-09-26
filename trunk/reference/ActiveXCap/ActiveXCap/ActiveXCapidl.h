

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __ActiveXCapidl_h__
#define __ActiveXCapidl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DActiveXCap_FWD_DEFINED__
#define ___DActiveXCap_FWD_DEFINED__
typedef interface _DActiveXCap _DActiveXCap;
#endif 	/* ___DActiveXCap_FWD_DEFINED__ */


#ifndef ___DActiveXCapEvents_FWD_DEFINED__
#define ___DActiveXCapEvents_FWD_DEFINED__
typedef interface _DActiveXCapEvents _DActiveXCapEvents;
#endif 	/* ___DActiveXCapEvents_FWD_DEFINED__ */


#ifndef __ActiveXCap_FWD_DEFINED__
#define __ActiveXCap_FWD_DEFINED__

#ifdef __cplusplus
typedef class ActiveXCap ActiveXCap;
#else
typedef struct ActiveXCap ActiveXCap;
#endif /* __cplusplus */

#endif 	/* __ActiveXCap_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 


#ifndef __ActiveXCapLib_LIBRARY_DEFINED__
#define __ActiveXCapLib_LIBRARY_DEFINED__

/* library ActiveXCapLib */
/* [control][helpstring][helpfile][version][uuid] */ 


EXTERN_C const IID LIBID_ActiveXCapLib;

#ifndef ___DActiveXCap_DISPINTERFACE_DEFINED__
#define ___DActiveXCap_DISPINTERFACE_DEFINED__

/* dispinterface _DActiveXCap */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DActiveXCap;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("F6600C59-4E77-4E2C-B1D9-659C905ECEA3")
    _DActiveXCap : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DActiveXCapVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DActiveXCap * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DActiveXCap * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DActiveXCap * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DActiveXCap * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DActiveXCap * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DActiveXCap * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DActiveXCap * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DActiveXCapVtbl;

    interface _DActiveXCap
    {
        CONST_VTBL struct _DActiveXCapVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DActiveXCap_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _DActiveXCap_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _DActiveXCap_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _DActiveXCap_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _DActiveXCap_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _DActiveXCap_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _DActiveXCap_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DActiveXCap_DISPINTERFACE_DEFINED__ */


#ifndef ___DActiveXCapEvents_DISPINTERFACE_DEFINED__
#define ___DActiveXCapEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DActiveXCapEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DActiveXCapEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("E741AB3F-68A0-4942-B9C6-3471879B9EB4")
    _DActiveXCapEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DActiveXCapEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DActiveXCapEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DActiveXCapEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DActiveXCapEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DActiveXCapEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DActiveXCapEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DActiveXCapEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DActiveXCapEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DActiveXCapEventsVtbl;

    interface _DActiveXCapEvents
    {
        CONST_VTBL struct _DActiveXCapEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DActiveXCapEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _DActiveXCapEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _DActiveXCapEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _DActiveXCapEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _DActiveXCapEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _DActiveXCapEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _DActiveXCapEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DActiveXCapEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ActiveXCap;

#ifdef __cplusplus

class DECLSPEC_UUID("BBCA5CDF-D248-411C-8F7C-CE99E6F19E59")
ActiveXCap;
#endif
#endif /* __ActiveXCapLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


