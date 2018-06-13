

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for drsr.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/

#include <string.h>

#include "drsr.h"

#define TYPE_FORMAT_STRING_SIZE   7635                              
#define PROC_FORMAT_STRING_SIZE   2113                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _drsr_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } drsr_MIDL_TYPE_FORMAT_STRING;

typedef struct _drsr_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } drsr_MIDL_PROC_FORMAT_STRING;

typedef struct _drsr_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } drsr_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};



extern const drsr_MIDL_TYPE_FORMAT_STRING drsr__MIDL_TypeFormatString;
extern const drsr_MIDL_PROC_FORMAT_STRING drsr__MIDL_ProcFormatString;
extern const drsr_MIDL_EXPR_FORMAT_STRING drsr__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: drsuapi, ver. 4.0,
   GUID={0xe3514235,0x4b06,0x11d1,{0xab,0x04,0x00,0xc0,0x4f,0xc2,0xdc,0xd2}} */

 extern const MIDL_STUBLESS_PROXY_INFO drsuapi_ProxyInfo;


static const RPC_CLIENT_INTERFACE drsuapi___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0xe3514235,0x4b06,0x11d1,{0xab,0x04,0x00,0xc0,0x4f,0xc2,0xdc,0xd2}},{4,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    &drsuapi_ProxyInfo,
    0x02000000
    };
RPC_IF_HANDLE drsuapi_v4_0_c_ifspec = (RPC_IF_HANDLE)& drsuapi___RpcClientInterface;

extern const MIDL_STUB_DESC drsuapi_StubDesc;

static RPC_BINDING_HANDLE drsuapi__MIDL_AutoBindHandle;


ULONG IDL_DRSBind( 
    /* [in] */ handle_t rpc_handle,
    /* [unique][in] */ UUID *puuidClientDsa,
    /* [unique][in] */ DRS_EXTENSIONS *pextClient,
    /* [out] */ DRS_EXTENSIONS **ppextServer,
    /* [ref][out] */ DRS_HANDLE *phDrs)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  0,
                  0,
                  rpc_handle,
                  puuidClientDsa,
                  pextClient,
                  ppextServer,
                  phDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSUnbind( 
    /* [ref][out][in] */ DRS_HANDLE *phDrs)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  1,
                  0,
                  phDrs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSReplicaSync( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwVersion,
    /* [switch_is][ref][in] */ DRS_MSG_REPSYNC *pmsgSync)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  2,
                  0,
                  hDrs,
                  dwVersion,
                  pmsgSync);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSGetNCChanges( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_GETCHGREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_GETCHGREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  3,
                  0,
                  hDrs,
                  dwInVersion,
                  pmsgIn,
                  pdwOutVersion,
                  pmsgOut);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSUpdateRefs( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwVersion,
    /* [switch_is][ref][in] */ DRS_MSG_UPDREFS *pmsgUpdRefs)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  4,
                  0,
                  hDrs,
                  dwVersion,
                  pmsgUpdRefs);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSReplicaAdd( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwVersion,
    /* [switch_is][ref][in] */ DRS_MSG_REPADD *pmsgAdd)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  5,
                  0,
                  hDrs,
                  dwVersion,
                  pmsgAdd);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSReplicaDel( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwVersion,
    /* [switch_is][ref][in] */ DRS_MSG_REPDEL *pmsgDel)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  6,
                  0,
                  hDrs,
                  dwVersion,
                  pmsgDel);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSReplicaModify( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwVersion,
    /* [switch_is][ref][in] */ DRS_MSG_REPMOD *pmsgMod)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  7,
                  0,
                  hDrs,
                  dwVersion,
                  pmsgMod);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSVerifyNames( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_VERIFYREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_VERIFYREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  8,
                  0,
                  hDrs,
                  dwInVersion,
                  pmsgIn,
                  pdwOutVersion,
                  pmsgOut);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSGetMemberships( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_REVMEMB_REQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_REVMEMB_REPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  9,
                  0,
                  hDrs,
                  dwInVersion,
                  pmsgIn,
                  pdwOutVersion,
                  pmsgOut);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSInterDomainMove( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_MOVEREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_MOVEREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  10,
                  0,
                  hDrs,
                  dwInVersion,
                  pmsgIn,
                  pdwOutVersion,
                  pmsgOut);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSGetNT4ChangeLog( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_NT4_CHGLOG_REQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_NT4_CHGLOG_REPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  11,
                  0,
                  hDrs,
                  dwInVersion,
                  pmsgIn,
                  pdwOutVersion,
                  pmsgOut);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSCrackNames( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_CRACKREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_CRACKREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  12,
                  0,
                  hDrs,
                  dwInVersion,
                  pmsgIn,
                  pdwOutVersion,
                  pmsgOut);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSWriteSPN( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_SPNREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_SPNREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  13,
                  0,
                  hDrs,
                  dwInVersion,
                  pmsgIn,
                  pdwOutVersion,
                  pmsgOut);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSRemoveDsServer( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_RMSVRREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_RMSVRREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  14,
                  0,
                  hDrs,
                  dwInVersion,
                  pmsgIn,
                  pdwOutVersion,
                  pmsgOut);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSRemoveDsDomain( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_RMDMNREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_RMDMNREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  15,
                  0,
                  hDrs,
                  dwInVersion,
                  pmsgIn,
                  pdwOutVersion,
                  pmsgOut);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSDomainControllerInfo( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_DCINFOREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_DCINFOREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  16,
                  0,
                  hDrs,
                  dwInVersion,
                  pmsgIn,
                  pdwOutVersion,
                  pmsgOut);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSAddEntry( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_ADDENTRYREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_ADDENTRYREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  17,
                  0,
                  hDrs,
                  dwInVersion,
                  pmsgIn,
                  pdwOutVersion,
                  pmsgOut);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSExecuteKCC( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_KCC_EXECUTE *pmsgIn)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  18,
                  0,
                  hDrs,
                  dwInVersion,
                  pmsgIn);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSGetReplInfo( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_GETREPLINFO_REQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_GETREPLINFO_REPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  19,
                  0,
                  hDrs,
                  dwInVersion,
                  pmsgIn,
                  pdwOutVersion,
                  pmsgOut);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSAddSidHistory( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_ADDSIDREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_ADDSIDREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  20,
                  0,
                  hDrs,
                  dwInVersion,
                  pmsgIn,
                  pdwOutVersion,
                  pmsgOut);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSGetMemberships2( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_GETMEMBERSHIPS2_REQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_GETMEMBERSHIPS2_REPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  21,
                  0,
                  hDrs,
                  dwInVersion,
                  pmsgIn,
                  pdwOutVersion,
                  pmsgOut);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSReplicaVerifyObjects( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwVersion,
    /* [switch_is][ref][in] */ DRS_MSG_REPVERIFYOBJ *pmsgVerify)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  22,
                  0,
                  hDrs,
                  dwVersion,
                  pmsgVerify);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSGetObjectExistence( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_EXISTREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_EXISTREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  23,
                  0,
                  hDrs,
                  dwInVersion,
                  pmsgIn,
                  pdwOutVersion,
                  pmsgOut);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSQuerySitesByCost( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_QUERYSITESREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_QUERYSITESREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  24,
                  0,
                  hDrs,
                  dwInVersion,
                  pmsgIn,
                  pdwOutVersion,
                  pmsgOut);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSInitDemotion( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_INIT_DEMOTIONREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_INIT_DEMOTIONREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  25,
                  0,
                  hDrs,
                  dwInVersion,
                  pmsgIn,
                  pdwOutVersion,
                  pmsgOut);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSReplicaDemotion( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_REPLICA_DEMOTIONREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_REPLICA_DEMOTIONREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  26,
                  0,
                  hDrs,
                  dwInVersion,
                  pmsgIn,
                  pdwOutVersion,
                  pmsgOut);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSFinishDemotion( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_FINISH_DEMOTIONREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_FINISH_DEMOTIONREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  27,
                  0,
                  hDrs,
                  dwInVersion,
                  pmsgIn,
                  pdwOutVersion,
                  pmsgOut);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSAddCloneDC( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_ADDCLONEDCREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_ADDCLONEDCREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  28,
                  0,
                  hDrs,
                  dwInVersion,
                  pmsgIn,
                  pdwOutVersion,
                  pmsgOut);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSWriteNgcKey( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_WRITENGCKEYREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_WRITENGCKEYREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  29,
                  0,
                  hDrs,
                  dwInVersion,
                  pmsgIn,
                  pdwOutVersion,
                  pmsgOut);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DRSReadNgcKey( 
    /* [ref][in] */ DRS_HANDLE hDrs,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DRS_MSG_READNGCKEYREQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DRS_MSG_READNGCKEYREPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&drsuapi_ProxyInfo,
                  30,
                  0,
                  hDrs,
                  dwInVersion,
                  pmsgIn,
                  pdwOutVersion,
                  pmsgOut);
    return ( ULONG  )_RetVal.Simple;
    
}


/* Standard interface: dsaop, ver. 1.0,
   GUID={0x7c44d7d4,0x31d5,0x424c,{0xbd,0x5e,0x2b,0x3e,0x1f,0x32,0x3d,0x22}} */

 extern const MIDL_STUBLESS_PROXY_INFO dsaop_ProxyInfo;


static const RPC_CLIENT_INTERFACE dsaop___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x7c44d7d4,0x31d5,0x424c,{0xbd,0x5e,0x2b,0x3e,0x1f,0x32,0x3d,0x22}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    &dsaop_ProxyInfo,
    0x02000000
    };
RPC_IF_HANDLE dsaop_v1_0_c_ifspec = (RPC_IF_HANDLE)& dsaop___RpcClientInterface;

extern const MIDL_STUB_DESC dsaop_StubDesc;

static RPC_BINDING_HANDLE dsaop__MIDL_AutoBindHandle;


ULONG IDL_DSAPrepareScript( 
    /* [in] */ handle_t hRpc,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DSA_MSG_PREPARE_SCRIPT_REQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DSA_MSG_PREPARE_SCRIPT_REPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&dsaop_ProxyInfo,
                  0,
                  0,
                  hRpc,
                  dwInVersion,
                  pmsgIn,
                  pdwOutVersion,
                  pmsgOut);
    return ( ULONG  )_RetVal.Simple;
    
}


ULONG IDL_DSAExecuteScript( 
    /* [in] */ handle_t hRpc,
    /* [in] */ DWORD dwInVersion,
    /* [switch_is][ref][in] */ DSA_MSG_EXECUTE_SCRIPT_REQ *pmsgIn,
    /* [ref][out] */ DWORD *pdwOutVersion,
    /* [switch_is][ref][out] */ DSA_MSG_EXECUTE_SCRIPT_REPLY *pmsgOut)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&dsaop_ProxyInfo,
                  1,
                  0,
                  hRpc,
                  dwInVersion,
                  pmsgIn,
                  pdwOutVersion,
                  pmsgOut);
    return ( ULONG  )_RetVal.Simple;
    
}


#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const drsr_MIDL_PROC_FORMAT_STRING drsr__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure IDL_DRSBind */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x44 ),	/* 68 */
/* 16 */	NdrFcShort( 0x40 ),	/* 64 */
/* 18 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 20 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 22 */	NdrFcShort( 0x1 ),	/* 1 */
/* 24 */	NdrFcShort( 0x1 ),	/* 1 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter puuidClientDsa */

/* 30 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 32 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 34 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pextClient */

/* 36 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 38 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 40 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Parameter ppextServer */

/* 42 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 44 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 46 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Parameter phDrs */

/* 48 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 50 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 52 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Return value */

/* 54 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 56 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 58 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSUnbind */

/* 60 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 62 */	NdrFcLong( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x1 ),	/* 1 */
/* 68 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 70 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 72 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 74 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 76 */	NdrFcShort( 0x38 ),	/* 56 */
/* 78 */	NdrFcShort( 0x40 ),	/* 64 */
/* 80 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 82 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 84 */	NdrFcShort( 0x0 ),	/* 0 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phDrs */

/* 92 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 94 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 96 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */

	/* Return value */

/* 98 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 100 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSReplicaSync */

/* 104 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 106 */	NdrFcLong( 0x0 ),	/* 0 */
/* 110 */	NdrFcShort( 0x2 ),	/* 2 */
/* 112 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 114 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 116 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 118 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 120 */	NdrFcShort( 0x2c ),	/* 44 */
/* 122 */	NdrFcShort( 0x8 ),	/* 8 */
/* 124 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 126 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x1 ),	/* 1 */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 136 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 138 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 140 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwVersion */

/* 142 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 144 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgSync */

/* 148 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 150 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 152 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 154 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 156 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSGetNCChanges */

/* 160 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 162 */	NdrFcLong( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x3 ),	/* 3 */
/* 168 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 170 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 172 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 174 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 176 */	NdrFcShort( 0x2c ),	/* 44 */
/* 178 */	NdrFcShort( 0x24 ),	/* 36 */
/* 180 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 182 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 184 */	NdrFcShort( 0x1 ),	/* 1 */
/* 186 */	NdrFcShort( 0x1 ),	/* 1 */
/* 188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 190 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 192 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 194 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 196 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 198 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 200 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 204 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 206 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 208 */	NdrFcShort( 0xcc ),	/* Type Offset=204 */

	/* Parameter pdwOutVersion */

/* 210 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 212 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 216 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 218 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 220 */	NdrFcShort( 0x2f4 ),	/* Type Offset=756 */

	/* Return value */

/* 222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 224 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSUpdateRefs */

/* 228 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x4 ),	/* 4 */
/* 236 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 238 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 240 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 242 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 244 */	NdrFcShort( 0x2c ),	/* 44 */
/* 246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 248 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 250 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	NdrFcShort( 0x1 ),	/* 1 */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 260 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 262 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 264 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwVersion */

/* 266 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 268 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgUpdRefs */

/* 272 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 274 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 276 */	NdrFcShort( 0x61e ),	/* Type Offset=1566 */

	/* Return value */

/* 278 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 280 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSReplicaAdd */

/* 284 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 290 */	NdrFcShort( 0x5 ),	/* 5 */
/* 292 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 294 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 296 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 298 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 300 */	NdrFcShort( 0x2c ),	/* 44 */
/* 302 */	NdrFcShort( 0x8 ),	/* 8 */
/* 304 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 306 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 310 */	NdrFcShort( 0x1 ),	/* 1 */
/* 312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 314 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 316 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 318 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 320 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwVersion */

/* 322 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 324 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgAdd */

/* 328 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 330 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 332 */	NdrFcShort( 0x65c ),	/* Type Offset=1628 */

	/* Return value */

/* 334 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 336 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSReplicaDel */

/* 340 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 346 */	NdrFcShort( 0x6 ),	/* 6 */
/* 348 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 350 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 352 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 354 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 356 */	NdrFcShort( 0x2c ),	/* 44 */
/* 358 */	NdrFcShort( 0x8 ),	/* 8 */
/* 360 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 362 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x1 ),	/* 1 */
/* 368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 372 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 374 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 376 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwVersion */

/* 378 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 380 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgDel */

/* 384 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 386 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 388 */	NdrFcShort( 0x6d0 ),	/* Type Offset=1744 */

	/* Return value */

/* 390 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 392 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSReplicaModify */

/* 396 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x7 ),	/* 7 */
/* 404 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 406 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 408 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 410 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 412 */	NdrFcShort( 0x2c ),	/* 44 */
/* 414 */	NdrFcShort( 0x8 ),	/* 8 */
/* 416 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 418 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 422 */	NdrFcShort( 0x1 ),	/* 1 */
/* 424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 426 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 428 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 430 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 432 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwVersion */

/* 434 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 436 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgMod */

/* 440 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 442 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 444 */	NdrFcShort( 0x70a ),	/* Type Offset=1802 */

	/* Return value */

/* 446 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 448 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSVerifyNames */

/* 452 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 458 */	NdrFcShort( 0x8 ),	/* 8 */
/* 460 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 462 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 464 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 466 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 468 */	NdrFcShort( 0x2c ),	/* 44 */
/* 470 */	NdrFcShort( 0x24 ),	/* 36 */
/* 472 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 474 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 476 */	NdrFcShort( 0x1 ),	/* 1 */
/* 478 */	NdrFcShort( 0x1 ),	/* 1 */
/* 480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 482 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 484 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 486 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 488 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 490 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 492 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 494 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 496 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 498 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 500 */	NdrFcShort( 0x74c ),	/* Type Offset=1868 */

	/* Parameter pdwOutVersion */

/* 502 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 504 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 508 */	NdrFcShort( 0x8113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=32 */
/* 510 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 512 */	NdrFcShort( 0x7b2 ),	/* Type Offset=1970 */

	/* Return value */

/* 514 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 516 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSGetMemberships */

/* 520 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 522 */	NdrFcLong( 0x0 ),	/* 0 */
/* 526 */	NdrFcShort( 0x9 ),	/* 9 */
/* 528 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 530 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 532 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 534 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 536 */	NdrFcShort( 0x2c ),	/* 44 */
/* 538 */	NdrFcShort( 0x24 ),	/* 36 */
/* 540 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 542 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 544 */	NdrFcShort( 0x1 ),	/* 1 */
/* 546 */	NdrFcShort( 0x1 ),	/* 1 */
/* 548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 550 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 552 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 554 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 556 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 558 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 560 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 564 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 566 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 568 */	NdrFcShort( 0x814 ),	/* Type Offset=2068 */

	/* Parameter pdwOutVersion */

/* 570 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 572 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 576 */	NdrFcShort( 0xa113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=40 */
/* 578 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 580 */	NdrFcShort( 0x886 ),	/* Type Offset=2182 */

	/* Return value */

/* 582 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 584 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSInterDomainMove */

/* 588 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 590 */	NdrFcLong( 0x0 ),	/* 0 */
/* 594 */	NdrFcShort( 0xa ),	/* 10 */
/* 596 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 598 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 600 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 602 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 604 */	NdrFcShort( 0x2c ),	/* 44 */
/* 606 */	NdrFcShort( 0x24 ),	/* 36 */
/* 608 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 610 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 612 */	NdrFcShort( 0x1 ),	/* 1 */
/* 614 */	NdrFcShort( 0x1 ),	/* 1 */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 620 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 622 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 624 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 626 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 628 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 632 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 634 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 636 */	NdrFcShort( 0x930 ),	/* Type Offset=2352 */

	/* Parameter pdwOutVersion */

/* 638 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 640 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 644 */	NdrFcShort( 0x8113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=32 */
/* 646 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 648 */	NdrFcShort( 0x9ea ),	/* Type Offset=2538 */

	/* Return value */

/* 650 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 652 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 654 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSGetNT4ChangeLog */

/* 656 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 658 */	NdrFcLong( 0x0 ),	/* 0 */
/* 662 */	NdrFcShort( 0xb ),	/* 11 */
/* 664 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 666 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 668 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 670 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 672 */	NdrFcShort( 0x2c ),	/* 44 */
/* 674 */	NdrFcShort( 0x24 ),	/* 36 */
/* 676 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 678 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 680 */	NdrFcShort( 0x1 ),	/* 1 */
/* 682 */	NdrFcShort( 0x1 ),	/* 1 */
/* 684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 686 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 688 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 690 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 692 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 694 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 696 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 700 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 702 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 704 */	NdrFcShort( 0xa40 ),	/* Type Offset=2624 */

	/* Parameter pdwOutVersion */

/* 706 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 708 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 712 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 714 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 716 */	NdrFcShort( 0xa8c ),	/* Type Offset=2700 */

	/* Return value */

/* 718 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 720 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSCrackNames */

/* 724 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 726 */	NdrFcLong( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0xc ),	/* 12 */
/* 732 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 734 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 736 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 738 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 740 */	NdrFcShort( 0x2c ),	/* 44 */
/* 742 */	NdrFcShort( 0x24 ),	/* 36 */
/* 744 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 746 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 748 */	NdrFcShort( 0x1 ),	/* 1 */
/* 750 */	NdrFcShort( 0x1 ),	/* 1 */
/* 752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 754 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 756 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 758 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 760 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 762 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 764 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 768 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 770 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 772 */	NdrFcShort( 0xb16 ),	/* Type Offset=2838 */

	/* Parameter pdwOutVersion */

/* 774 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 776 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 780 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 782 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 784 */	NdrFcShort( 0xb78 ),	/* Type Offset=2936 */

	/* Return value */

/* 786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 788 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSWriteSPN */

/* 792 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0xd ),	/* 13 */
/* 800 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 802 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 804 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 806 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 808 */	NdrFcShort( 0x2c ),	/* 44 */
/* 810 */	NdrFcShort( 0x24 ),	/* 36 */
/* 812 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 814 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 816 */	NdrFcShort( 0x1 ),	/* 1 */
/* 818 */	NdrFcShort( 0x1 ),	/* 1 */
/* 820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 822 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 824 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 826 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 828 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 830 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 832 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 836 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 838 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 840 */	NdrFcShort( 0xbfa ),	/* Type Offset=3066 */

	/* Parameter pdwOutVersion */

/* 842 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 844 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 848 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 850 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 852 */	NdrFcShort( 0xc60 ),	/* Type Offset=3168 */

	/* Return value */

/* 854 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 856 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSRemoveDsServer */

/* 860 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 866 */	NdrFcShort( 0xe ),	/* 14 */
/* 868 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 870 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 872 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 874 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 876 */	NdrFcShort( 0x2c ),	/* 44 */
/* 878 */	NdrFcShort( 0x24 ),	/* 36 */
/* 880 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 882 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 884 */	NdrFcShort( 0x1 ),	/* 1 */
/* 886 */	NdrFcShort( 0x1 ),	/* 1 */
/* 888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 890 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 892 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 894 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 896 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 898 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 900 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 902 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 904 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 906 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 908 */	NdrFcShort( 0xc8a ),	/* Type Offset=3210 */

	/* Parameter pdwOutVersion */

/* 910 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 912 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 916 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 918 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 920 */	NdrFcShort( 0xcc4 ),	/* Type Offset=3268 */

	/* Return value */

/* 922 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 924 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 926 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSRemoveDsDomain */

/* 928 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 930 */	NdrFcLong( 0x0 ),	/* 0 */
/* 934 */	NdrFcShort( 0xf ),	/* 15 */
/* 936 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 938 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 940 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 942 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 944 */	NdrFcShort( 0x2c ),	/* 44 */
/* 946 */	NdrFcShort( 0x24 ),	/* 36 */
/* 948 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 950 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 952 */	NdrFcShort( 0x1 ),	/* 1 */
/* 954 */	NdrFcShort( 0x1 ),	/* 1 */
/* 956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 958 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 960 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 962 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 964 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 966 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 968 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 972 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 974 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 976 */	NdrFcShort( 0xce8 ),	/* Type Offset=3304 */

	/* Parameter pdwOutVersion */

/* 978 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 980 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 984 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 986 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 988 */	NdrFcShort( 0xd1a ),	/* Type Offset=3354 */

	/* Return value */

/* 990 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 992 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSDomainControllerInfo */

/* 996 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 998 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1002 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1004 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1006 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1008 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1010 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1012 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1014 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1016 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1018 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1020 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1022 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1026 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 1028 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1030 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1032 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 1034 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1036 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 1040 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1042 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1044 */	NdrFcShort( 0xd3e ),	/* Type Offset=3390 */

	/* Parameter pdwOutVersion */

/* 1046 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1048 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 1052 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1054 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1056 */	NdrFcShort( 0xd72 ),	/* Type Offset=3442 */

	/* Return value */

/* 1058 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1060 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSAddEntry */

/* 1064 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1066 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1070 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1072 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1074 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1076 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1078 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1080 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1082 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1084 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1086 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1088 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1090 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1094 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 1096 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1098 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1100 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 1102 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1104 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 1108 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1110 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1112 */	NdrFcShort( 0xf48 ),	/* Type Offset=3912 */

	/* Parameter pdwOutVersion */

/* 1114 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1116 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 1120 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1122 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1124 */	NdrFcShort( 0xfbc ),	/* Type Offset=4028 */

	/* Return value */

/* 1126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1128 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSExecuteKCC */

/* 1132 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1138 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1140 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1142 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1144 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1146 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1148 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1150 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1152 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1154 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1158 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1162 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 1164 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1166 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1168 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 1170 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1172 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 1176 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1178 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1180 */	NdrFcShort( 0x11f6 ),	/* Type Offset=4598 */

	/* Return value */

/* 1182 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1184 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSGetReplInfo */

/* 1188 */	0x0,		/* 0 */
			0x49,		/* Old Flags:  full ptr, */
/* 1190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1194 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1196 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1198 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1200 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1202 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1204 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1206 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1208 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1210 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1212 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1214 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1218 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 1220 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1222 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1224 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 1226 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1228 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 1232 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1234 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1236 */	NdrFcShort( 0x1222 ),	/* Type Offset=4642 */

	/* Parameter pdwOutVersion */

/* 1238 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1240 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 1244 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1246 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1248 */	NdrFcShort( 0x1282 ),	/* Type Offset=4738 */

	/* Return value */

/* 1250 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1252 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSAddSidHistory */

/* 1256 */	0x0,		/* 0 */
			0x49,		/* Old Flags:  full ptr, */
/* 1258 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1262 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1264 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1266 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1268 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1270 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1272 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1274 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1276 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1278 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1280 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1282 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1286 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 1288 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1290 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1292 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 1294 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1296 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 1300 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1302 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1304 */	NdrFcShort( 0x1700 ),	/* Type Offset=5888 */

	/* Parameter pdwOutVersion */

/* 1306 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1308 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 1312 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1314 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1316 */	NdrFcShort( 0x17a0 ),	/* Type Offset=6048 */

	/* Return value */

/* 1318 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1320 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSGetMemberships2 */

/* 1324 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1330 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1332 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1334 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1336 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1338 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1340 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1342 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1344 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1346 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1348 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1350 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1354 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 1356 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1358 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1360 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 1362 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1364 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 1368 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1370 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1372 */	NdrFcShort( 0x17c4 ),	/* Type Offset=6084 */

	/* Parameter pdwOutVersion */

/* 1374 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1376 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 1380 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1382 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1384 */	NdrFcShort( 0x1822 ),	/* Type Offset=6178 */

	/* Return value */

/* 1386 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1388 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSReplicaVerifyObjects */

/* 1392 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1394 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1398 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1400 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1402 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1404 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1406 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1408 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1410 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1412 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1414 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1418 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1422 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 1424 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1426 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1428 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwVersion */

/* 1430 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1432 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1434 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgVerify */

/* 1436 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1438 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1440 */	NdrFcShort( 0x1880 ),	/* Type Offset=6272 */

	/* Return value */

/* 1442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1444 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSGetObjectExistence */

/* 1448 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1454 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1456 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1458 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1460 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1462 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1464 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1466 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1468 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1470 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1472 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1474 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 1480 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1482 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1484 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 1486 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1488 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 1492 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1494 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1496 */	NdrFcShort( 0x18b8 ),	/* Type Offset=6328 */

	/* Parameter pdwOutVersion */

/* 1498 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1500 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 1504 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1506 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1508 */	NdrFcShort( 0x1900 ),	/* Type Offset=6400 */

	/* Return value */

/* 1510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1512 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSQuerySitesByCost */

/* 1516 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1522 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1524 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1526 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1528 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1530 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1532 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1534 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1536 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1538 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1540 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1542 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1546 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 1548 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1550 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1552 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 1554 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1556 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 1560 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1562 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1564 */	NdrFcShort( 0x195e ),	/* Type Offset=6494 */

	/* Parameter pdwOutVersion */

/* 1566 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1568 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 1572 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 1574 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1576 */	NdrFcShort( 0x19c4 ),	/* Type Offset=6596 */

	/* Return value */

/* 1578 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1580 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSInitDemotion */

/* 1584 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1586 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1590 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1592 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1594 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1596 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1598 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1600 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1602 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1604 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1606 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1608 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1610 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1614 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 1616 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1618 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1620 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 1622 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1624 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 1628 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1630 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1632 */	NdrFcShort( 0x1a24 ),	/* Type Offset=6692 */

	/* Parameter pdwOutVersion */

/* 1634 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1636 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 1640 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1642 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1644 */	NdrFcShort( 0x1a48 ),	/* Type Offset=6728 */

	/* Return value */

/* 1646 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1648 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSReplicaDemotion */

/* 1652 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1654 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1658 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1660 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1662 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1664 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1666 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1668 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1670 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1672 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1674 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1676 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1678 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1682 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 1684 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1686 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1688 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 1690 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1692 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 1696 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1698 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1700 */	NdrFcShort( 0x1a6c ),	/* Type Offset=6764 */

	/* Parameter pdwOutVersion */

/* 1702 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1704 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 1708 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1710 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1712 */	NdrFcShort( 0x1aa4 ),	/* Type Offset=6820 */

	/* Return value */

/* 1714 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1716 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSFinishDemotion */

/* 1720 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1726 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1728 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1730 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1732 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1734 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1736 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1738 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1740 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1742 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1744 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1746 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1750 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 1752 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1754 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1756 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 1758 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1760 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 1764 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1766 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1768 */	NdrFcShort( 0x1ac8 ),	/* Type Offset=6856 */

	/* Parameter pdwOutVersion */

/* 1770 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1772 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 1776 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1778 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1780 */	NdrFcShort( 0x1b00 ),	/* Type Offset=6912 */

	/* Return value */

/* 1782 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1784 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSAddCloneDC */

/* 1788 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1790 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1794 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1796 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1798 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1800 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1802 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1804 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1806 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1808 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1810 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1812 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1814 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1818 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 1820 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1822 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1824 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 1826 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1828 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 1832 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1834 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1836 */	NdrFcShort( 0x1b2c ),	/* Type Offset=6956 */

	/* Parameter pdwOutVersion */

/* 1838 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1840 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 1844 */	NdrFcShort( 0x8113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=32 */
/* 1846 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1848 */	NdrFcShort( 0x1b64 ),	/* Type Offset=7012 */

	/* Return value */

/* 1850 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1852 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1854 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSWriteNgcKey */

/* 1856 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1858 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1862 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1864 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1866 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1868 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1870 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1872 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1874 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1876 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1878 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1880 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1882 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1886 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 1888 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1890 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1892 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 1894 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1896 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 1900 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1902 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1904 */	NdrFcShort( 0x1bb8 ),	/* Type Offset=7096 */

	/* Parameter pdwOutVersion */

/* 1906 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1908 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 1912 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1914 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1916 */	NdrFcShort( 0x1c08 ),	/* Type Offset=7176 */

	/* Return value */

/* 1918 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1920 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DRSReadNgcKey */

/* 1924 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1926 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1930 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1932 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1934 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1936 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1938 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1940 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1942 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1944 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1946 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1948 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1950 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1954 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDrs */

/* 1956 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1958 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1960 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter dwInVersion */

/* 1962 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1964 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 1968 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1970 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1972 */	NdrFcShort( 0x1c2c ),	/* Type Offset=7212 */

	/* Parameter pdwOutVersion */

/* 1974 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1976 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 1980 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1982 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1984 */	NdrFcShort( 0x1c5e ),	/* Type Offset=7262 */

	/* Return value */

/* 1986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1988 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DSAPrepareScript */

/* 1992 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2000 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2002 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2004 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2006 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2008 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2010 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2012 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2014 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2016 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2020 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwInVersion */

/* 2022 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2024 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 2028 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2030 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2032 */	NdrFcShort( 0x1ca8 ),	/* Type Offset=7336 */

	/* Parameter pdwOutVersion */

/* 2034 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2036 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 2040 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2042 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2044 */	NdrFcShort( 0x1ccc ),	/* Type Offset=7372 */

	/* Return value */

/* 2046 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2048 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IDL_DSAExecuteScript */

/* 2052 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2054 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2058 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2060 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2062 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2064 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2066 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2068 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2070 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2072 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2074 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2076 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2080 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwInVersion */

/* 2082 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2084 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgIn */

/* 2088 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2090 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2092 */	NdrFcShort( 0x1d58 ),	/* Type Offset=7512 */

	/* Parameter pdwOutVersion */

/* 2094 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2096 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmsgOut */

/* 2100 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2102 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2104 */	NdrFcShort( 0x1da2 ),	/* Type Offset=7586 */

	/* Return value */

/* 2106 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2108 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const drsr_MIDL_TYPE_FORMAT_STRING drsr__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x0,	/* FC_UP */
/*  4 */	NdrFcShort( 0x8 ),	/* Offset= 8 (12) */
/*  6 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/*  8 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 12 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 14 */	NdrFcShort( 0x10 ),	/* 16 */
/* 16 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 18 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 20 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (6) */
			0x5b,		/* FC_END */
/* 24 */	
			0x12, 0x0,	/* FC_UP */
/* 26 */	NdrFcShort( 0x18 ),	/* Offset= 24 (50) */
/* 28 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 30 */	NdrFcShort( 0x1 ),	/* 1 */
/* 32 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 34 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 36 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 38 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 40 */	NdrFcLong( 0x1 ),	/* 1 */
/* 44 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 48 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 50 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 52 */	NdrFcShort( 0x4 ),	/* 4 */
/* 54 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (28) */
/* 56 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 58 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 60 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (24) */
/* 62 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 64 */	NdrFcShort( 0x2 ),	/* Offset= 2 (66) */
/* 66 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 68 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 70 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 72 */	NdrFcShort( 0x2 ),	/* Offset= 2 (74) */
/* 74 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 76 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 78 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 80 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 82 */	
			0x11, 0x0,	/* FC_RP */
/* 84 */	NdrFcShort( 0x2 ),	/* Offset= 2 (86) */
/* 86 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 88 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 90 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 92 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 94 */	0x0 , 
			0x0,		/* 0 */
/* 96 */	NdrFcLong( 0x0 ),	/* 0 */
/* 100 */	NdrFcLong( 0x0 ),	/* 0 */
/* 104 */	NdrFcShort( 0x2 ),	/* Offset= 2 (106) */
/* 106 */	NdrFcShort( 0x28 ),	/* 40 */
/* 108 */	NdrFcShort( 0x1 ),	/* 1 */
/* 110 */	NdrFcLong( 0x1 ),	/* 1 */
/* 114 */	NdrFcShort( 0x3c ),	/* Offset= 60 (174) */
/* 116 */	NdrFcShort( 0xffff ),	/* Offset= -1 (115) */
/* 118 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 120 */	NdrFcShort( 0x1c ),	/* 28 */
/* 122 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 124 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 126 */	NdrFcShort( 0x1c ),	/* 28 */
/* 128 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 130 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (118) */
/* 132 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 134 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 136 */	NdrFcShort( 0x2 ),	/* 2 */
/* 138 */	0x9,		/* Corr desc: FC_ULONG */
			0x57,		/* FC_ADD_1 */
/* 140 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 142 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 144 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 150 */	NdrFcLong( 0xa00001 ),	/* 10485761 */
/* 154 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 156 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 158 */	NdrFcShort( 0x38 ),	/* 56 */
/* 160 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (134) */
/* 162 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 164 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 166 */	NdrFcShort( 0xff66 ),	/* Offset= -154 (12) */
/* 168 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 170 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (124) */
/* 172 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 174 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 176 */	NdrFcShort( 0x28 ),	/* 40 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0xc ),	/* Offset= 12 (192) */
/* 182 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 184 */	0x0,		/* 0 */
			NdrFcShort( 0xff53 ),	/* Offset= -173 (12) */
			0x36,		/* FC_POINTER */
/* 188 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 190 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 192 */	
			0x11, 0x0,	/* FC_RP */
/* 194 */	NdrFcShort( 0xffda ),	/* Offset= -38 (156) */
/* 196 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 198 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 200 */	
			0x11, 0x0,	/* FC_RP */
/* 202 */	NdrFcShort( 0x2 ),	/* Offset= 2 (204) */
/* 204 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 206 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 208 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 210 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 212 */	0x0 , 
			0x0,		/* 0 */
/* 214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0x2 ),	/* Offset= 2 (224) */
/* 224 */	NdrFcShort( 0xa8 ),	/* 168 */
/* 226 */	NdrFcShort( 0x5 ),	/* 5 */
/* 228 */	NdrFcLong( 0x4 ),	/* 4 */
/* 232 */	NdrFcShort( 0x12e ),	/* Offset= 302 (534) */
/* 234 */	NdrFcLong( 0x5 ),	/* 5 */
/* 238 */	NdrFcShort( 0x144 ),	/* Offset= 324 (562) */
/* 240 */	NdrFcLong( 0x7 ),	/* 7 */
/* 244 */	NdrFcShort( 0x166 ),	/* Offset= 358 (602) */
/* 246 */	NdrFcLong( 0x8 ),	/* 8 */
/* 250 */	NdrFcShort( 0x184 ),	/* Offset= 388 (638) */
/* 252 */	NdrFcLong( 0xa ),	/* 10 */
/* 256 */	NdrFcShort( 0x1b4 ),	/* Offset= 436 (692) */
/* 258 */	NdrFcShort( 0xffff ),	/* Offset= -1 (257) */
/* 260 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 262 */	NdrFcShort( 0x18 ),	/* 24 */
/* 264 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 266 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 268 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 270 */	NdrFcShort( 0x1 ),	/* 1 */
/* 272 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 278 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 280 */	NdrFcLong( 0x0 ),	/* 0 */
/* 284 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 288 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 290 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 292 */	NdrFcShort( 0x10 ),	/* 16 */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x6 ),	/* Offset= 6 (302) */
/* 298 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 300 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 302 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 304 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (268) */
/* 306 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 308 */	NdrFcShort( 0x18 ),	/* 24 */
/* 310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 312 */	NdrFcShort( 0x0 ),	/* Offset= 0 (312) */
/* 314 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 316 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 318 */	NdrFcShort( 0xffe4 ),	/* Offset= -28 (290) */
/* 320 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 322 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 326 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 330 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 332 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 334 */	NdrFcLong( 0x0 ),	/* 0 */
/* 338 */	NdrFcLong( 0x100000 ),	/* 1048576 */
/* 342 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 346 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 348 */	0x0 , 
			0x0,		/* 0 */
/* 350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 354 */	NdrFcLong( 0x0 ),	/* 0 */
/* 358 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 360 */	NdrFcShort( 0xffca ),	/* Offset= -54 (306) */
/* 362 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 364 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 366 */	NdrFcShort( 0x10 ),	/* 16 */
/* 368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 370 */	NdrFcShort( 0x6 ),	/* Offset= 6 (376) */
/* 372 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 374 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 376 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 378 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (322) */
/* 380 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 382 */	NdrFcShort( 0x18 ),	/* 24 */
/* 384 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 386 */	NdrFcShort( 0xfe8a ),	/* Offset= -374 (12) */
/* 388 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 390 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 392 */	NdrFcShort( 0x18 ),	/* 24 */
/* 394 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 396 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 398 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 400 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 402 */	NdrFcLong( 0x0 ),	/* 0 */
/* 406 */	NdrFcLong( 0x100000 ),	/* 1048576 */
/* 410 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 412 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (380) */
/* 414 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 416 */	
			0x17,		/* FC_CSTRUCT */
			0x7,		/* 7 */
/* 418 */	NdrFcShort( 0x10 ),	/* 16 */
/* 420 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (390) */
/* 422 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 424 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 426 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 428 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 430 */	NdrFcShort( 0x4 ),	/* 4 */
/* 432 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 434 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 436 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 438 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 440 */	NdrFcLong( 0x1 ),	/* 1 */
/* 444 */	NdrFcLong( 0x100000 ),	/* 1048576 */
/* 448 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 450 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 452 */	NdrFcShort( 0xc ),	/* 12 */
/* 454 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (428) */
/* 456 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 458 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 460 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 462 */	NdrFcShort( 0x70 ),	/* 112 */
/* 464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 466 */	NdrFcShort( 0x1a ),	/* Offset= 26 (492) */
/* 468 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 470 */	NdrFcShort( 0xfe36 ),	/* Offset= -458 (12) */
/* 472 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 474 */	NdrFcShort( 0xfe32 ),	/* Offset= -462 (12) */
/* 476 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 478 */	0x0,		/* 0 */
			NdrFcShort( 0xff25 ),	/* Offset= -219 (260) */
			0x36,		/* FC_POINTER */
/* 482 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 484 */	0x0,		/* 0 */
			NdrFcShort( 0xff87 ),	/* Offset= -121 (364) */
			0x8,		/* FC_LONG */
/* 488 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 490 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 492 */	
			0x11, 0x0,	/* FC_RP */
/* 494 */	NdrFcShort( 0xfeae ),	/* Offset= -338 (156) */
/* 496 */	
			0x12, 0x0,	/* FC_UP */
/* 498 */	NdrFcShort( 0xffae ),	/* Offset= -82 (416) */
/* 500 */	
			0x12, 0x0,	/* FC_UP */
/* 502 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (450) */
/* 504 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 506 */	NdrFcShort( 0x1 ),	/* 1 */
/* 508 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 510 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 512 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 514 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 516 */	NdrFcLong( 0x1 ),	/* 1 */
/* 520 */	NdrFcLong( 0x100 ),	/* 256 */
/* 524 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 526 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 528 */	NdrFcShort( 0x4 ),	/* 4 */
/* 530 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (504) */
/* 532 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 534 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 536 */	NdrFcShort( 0x88 ),	/* 136 */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 540 */	NdrFcShort( 0xc ),	/* Offset= 12 (552) */
/* 542 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 544 */	NdrFcShort( 0xfdec ),	/* Offset= -532 (12) */
/* 546 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 548 */	0x0,		/* 0 */
			NdrFcShort( 0xffa7 ),	/* Offset= -89 (460) */
			0x5b,		/* FC_END */
/* 552 */	
			0x11, 0x0,	/* FC_RP */
/* 554 */	NdrFcShort( 0xffe4 ),	/* Offset= -28 (526) */
/* 556 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 558 */	NdrFcShort( 0x8 ),	/* 8 */
/* 560 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 562 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 564 */	NdrFcShort( 0x60 ),	/* 96 */
/* 566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 568 */	NdrFcShort( 0x1a ),	/* Offset= 26 (594) */
/* 570 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 572 */	NdrFcShort( 0xfdd0 ),	/* Offset= -560 (12) */
/* 574 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 576 */	NdrFcShort( 0xfdcc ),	/* Offset= -564 (12) */
/* 578 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 580 */	0x0,		/* 0 */
			NdrFcShort( 0xfebf ),	/* Offset= -321 (260) */
			0x36,		/* FC_POINTER */
/* 584 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 586 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 588 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 590 */	NdrFcShort( 0xffde ),	/* Offset= -34 (556) */
/* 592 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 594 */	
			0x11, 0x0,	/* FC_RP */
/* 596 */	NdrFcShort( 0xfe48 ),	/* Offset= -440 (156) */
/* 598 */	
			0x12, 0x0,	/* FC_UP */
/* 600 */	NdrFcShort( 0xff48 ),	/* Offset= -184 (416) */
/* 602 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 604 */	NdrFcShort( 0xa8 ),	/* 168 */
/* 606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 608 */	NdrFcShort( 0x12 ),	/* Offset= 18 (626) */
/* 610 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 612 */	NdrFcShort( 0xfda8 ),	/* Offset= -600 (12) */
/* 614 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 616 */	0x0,		/* 0 */
			NdrFcShort( 0xff63 ),	/* Offset= -157 (460) */
			0x36,		/* FC_POINTER */
/* 620 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 622 */	0x0,		/* 0 */
			NdrFcShort( 0xfefd ),	/* Offset= -259 (364) */
			0x5b,		/* FC_END */
/* 626 */	
			0x11, 0x0,	/* FC_RP */
/* 628 */	NdrFcShort( 0xff9a ),	/* Offset= -102 (526) */
/* 630 */	
			0x12, 0x0,	/* FC_UP */
/* 632 */	NdrFcShort( 0xff4a ),	/* Offset= -182 (450) */
/* 634 */	
			0x12, 0x0,	/* FC_UP */
/* 636 */	NdrFcShort( 0xff46 ),	/* Offset= -186 (450) */
/* 638 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 640 */	NdrFcShort( 0x80 ),	/* 128 */
/* 642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 644 */	NdrFcShort( 0x20 ),	/* Offset= 32 (676) */
/* 646 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 648 */	NdrFcShort( 0xfd84 ),	/* Offset= -636 (12) */
/* 650 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 652 */	NdrFcShort( 0xfd80 ),	/* Offset= -640 (12) */
/* 654 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 656 */	0x0,		/* 0 */
			NdrFcShort( 0xfe73 ),	/* Offset= -397 (260) */
			0x36,		/* FC_POINTER */
/* 660 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 662 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 664 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 666 */	NdrFcShort( 0xff92 ),	/* Offset= -110 (556) */
/* 668 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 670 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 672 */	NdrFcShort( 0xfecc ),	/* Offset= -308 (364) */
/* 674 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 676 */	
			0x11, 0x0,	/* FC_RP */
/* 678 */	NdrFcShort( 0xfdf6 ),	/* Offset= -522 (156) */
/* 680 */	
			0x12, 0x0,	/* FC_UP */
/* 682 */	NdrFcShort( 0xfef6 ),	/* Offset= -266 (416) */
/* 684 */	
			0x12, 0x0,	/* FC_UP */
/* 686 */	NdrFcShort( 0xff14 ),	/* Offset= -236 (450) */
/* 688 */	
			0x12, 0x0,	/* FC_UP */
/* 690 */	NdrFcShort( 0xff10 ),	/* Offset= -240 (450) */
/* 692 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 694 */	NdrFcShort( 0x88 ),	/* 136 */
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 698 */	NdrFcShort( 0x22 ),	/* Offset= 34 (732) */
/* 700 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 702 */	NdrFcShort( 0xfd4e ),	/* Offset= -690 (12) */
/* 704 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 706 */	NdrFcShort( 0xfd4a ),	/* Offset= -694 (12) */
/* 708 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 710 */	0x0,		/* 0 */
			NdrFcShort( 0xfe3d ),	/* Offset= -451 (260) */
			0x36,		/* FC_POINTER */
/* 714 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 716 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 718 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 720 */	NdrFcShort( 0xff5c ),	/* Offset= -164 (556) */
/* 722 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 724 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 726 */	NdrFcShort( 0xfe96 ),	/* Offset= -362 (364) */
/* 728 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 730 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 732 */	
			0x11, 0x0,	/* FC_RP */
/* 734 */	NdrFcShort( 0xfdbe ),	/* Offset= -578 (156) */
/* 736 */	
			0x12, 0x0,	/* FC_UP */
/* 738 */	NdrFcShort( 0xfebe ),	/* Offset= -322 (416) */
/* 740 */	
			0x12, 0x0,	/* FC_UP */
/* 742 */	NdrFcShort( 0xfedc ),	/* Offset= -292 (450) */
/* 744 */	
			0x12, 0x0,	/* FC_UP */
/* 746 */	NdrFcShort( 0xfed8 ),	/* Offset= -296 (450) */
/* 748 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 750 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 752 */	
			0x11, 0x0,	/* FC_RP */
/* 754 */	NdrFcShort( 0x2 ),	/* Offset= 2 (756) */
/* 756 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 758 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 760 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 762 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 764 */	0x0 , 
			0x0,		/* 0 */
/* 766 */	NdrFcLong( 0x0 ),	/* 0 */
/* 770 */	NdrFcLong( 0x0 ),	/* 0 */
/* 774 */	NdrFcShort( 0x2 ),	/* Offset= 2 (776) */
/* 776 */	NdrFcShort( 0xa8 ),	/* 168 */
/* 778 */	NdrFcShort( 0x5 ),	/* 5 */
/* 780 */	NdrFcLong( 0x1 ),	/* 1 */
/* 784 */	NdrFcShort( 0x140 ),	/* Offset= 320 (1104) */
/* 786 */	NdrFcLong( 0x2 ),	/* 2 */
/* 790 */	NdrFcShort( 0x192 ),	/* Offset= 402 (1192) */
/* 792 */	NdrFcLong( 0x6 ),	/* 6 */
/* 796 */	NdrFcShort( 0x21e ),	/* Offset= 542 (1338) */
/* 798 */	NdrFcLong( 0x7 ),	/* 7 */
/* 802 */	NdrFcShort( 0x254 ),	/* Offset= 596 (1398) */
/* 804 */	NdrFcLong( 0x9 ),	/* 9 */
/* 808 */	NdrFcShort( 0x2b6 ),	/* Offset= 694 (1502) */
/* 810 */	NdrFcShort( 0xffff ),	/* Offset= -1 (809) */
/* 812 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 814 */	NdrFcShort( 0x1 ),	/* 1 */
/* 816 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 820 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 822 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 824 */	NdrFcLong( 0x0 ),	/* 0 */
/* 828 */	NdrFcLong( 0x1900000 ),	/* 26214400 */
/* 832 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 834 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 836 */	NdrFcShort( 0x10 ),	/* 16 */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x6 ),	/* Offset= 6 (846) */
/* 842 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 844 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 846 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 848 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (812) */
/* 850 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 854 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 858 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 860 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 866 */	NdrFcLong( 0xa00000 ),	/* 10485760 */
/* 870 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 874 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 876 */	0x0 , 
			0x0,		/* 0 */
/* 878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 882 */	NdrFcLong( 0x0 ),	/* 0 */
/* 886 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 888 */	NdrFcShort( 0xffca ),	/* Offset= -54 (834) */
/* 890 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 892 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 894 */	NdrFcShort( 0x10 ),	/* 16 */
/* 896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 898 */	NdrFcShort( 0x6 ),	/* Offset= 6 (904) */
/* 900 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 902 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 904 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 906 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (850) */
/* 908 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 910 */	NdrFcShort( 0x18 ),	/* 24 */
/* 912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 914 */	NdrFcShort( 0x0 ),	/* Offset= 0 (914) */
/* 916 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 918 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 920 */	NdrFcShort( 0xffe4 ),	/* Offset= -28 (892) */
/* 922 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 924 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 928 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 932 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 934 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 936 */	NdrFcLong( 0x0 ),	/* 0 */
/* 940 */	NdrFcLong( 0x100000 ),	/* 1048576 */
/* 944 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 948 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 950 */	0x0 , 
			0x0,		/* 0 */
/* 952 */	NdrFcLong( 0x0 ),	/* 0 */
/* 956 */	NdrFcLong( 0x0 ),	/* 0 */
/* 960 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 962 */	NdrFcShort( 0xffca ),	/* Offset= -54 (908) */
/* 964 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 966 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 968 */	NdrFcShort( 0x10 ),	/* 16 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x6 ),	/* Offset= 6 (978) */
/* 974 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 976 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 978 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 980 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (924) */
/* 982 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 984 */	NdrFcShort( 0x20 ),	/* 32 */
/* 986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 988 */	NdrFcShort( 0xa ),	/* Offset= 10 (998) */
/* 990 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 992 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 994 */	0x0,		/* 0 */
			NdrFcShort( 0xffe3 ),	/* Offset= -29 (966) */
			0x5b,		/* FC_END */
/* 998 */	
			0x12, 0x0,	/* FC_UP */
/* 1000 */	NdrFcShort( 0xfcb4 ),	/* Offset= -844 (156) */
/* 1002 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1004 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1008 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1008) */
/* 1010 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1012 */	0xb,		/* FC_HYPER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1014 */	0x0,		/* 0 */
			NdrFcShort( 0xfc15 ),	/* Offset= -1003 (12) */
			0xb,		/* FC_HYPER */
/* 1018 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1020 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 1022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1024 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1026 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1028 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 1030 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 1032 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1036 */	NdrFcLong( 0x100000 ),	/* 1048576 */
/* 1040 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1044 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1046 */	0x0 , 
			0x0,		/* 0 */
/* 1048 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1052 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1056 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1058 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (1002) */
/* 1060 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1062 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1064 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1066 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1020) */
/* 1068 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1068) */
/* 1070 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1072 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1074 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1076 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1080 */	NdrFcShort( 0xc ),	/* Offset= 12 (1092) */
/* 1082 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1084 */	0x0,		/* 0 */
			NdrFcShort( 0xff99 ),	/* Offset= -103 (982) */
			0x8,		/* FC_LONG */
/* 1088 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1090 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1092 */	
			0x12, 0x0,	/* FC_UP */
/* 1094 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1074) */
/* 1096 */	
			0x12, 0x0,	/* FC_UP */
/* 1098 */	NdrFcShort( 0xfbc2 ),	/* Offset= -1086 (12) */
/* 1100 */	
			0x12, 0x0,	/* FC_UP */
/* 1102 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (1062) */
/* 1104 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1106 */	NdrFcShort( 0x90 ),	/* 144 */
/* 1108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1110 */	NdrFcShort( 0x20 ),	/* Offset= 32 (1142) */
/* 1112 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1114 */	NdrFcShort( 0xfbb2 ),	/* Offset= -1102 (12) */
/* 1116 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1118 */	NdrFcShort( 0xfbae ),	/* Offset= -1106 (12) */
/* 1120 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1122 */	0x0,		/* 0 */
			NdrFcShort( 0xfca1 ),	/* Offset= -863 (260) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1126 */	0x0,		/* 0 */
			NdrFcShort( 0xfc9d ),	/* Offset= -867 (260) */
			0x36,		/* FC_POINTER */
/* 1130 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1132 */	NdrFcShort( 0xfd00 ),	/* Offset= -768 (364) */
/* 1134 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1136 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1138 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1140 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 1142 */	
			0x12, 0x0,	/* FC_UP */
/* 1144 */	NdrFcShort( 0xfc24 ),	/* Offset= -988 (156) */
/* 1146 */	
			0x12, 0x0,	/* FC_UP */
/* 1148 */	NdrFcShort( 0xfd24 ),	/* Offset= -732 (416) */
/* 1150 */	
			0x12, 0x0,	/* FC_UP */
/* 1152 */	NdrFcShort( 0xffb2 ),	/* Offset= -78 (1074) */
/* 1154 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1156 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1158 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1160 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1162 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1164 */	0x0 , 
			0x0,		/* 0 */
/* 1166 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1174 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1176 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1178 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1182 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1188) */
/* 1184 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1186 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1188 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1190 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1154) */
/* 1192 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1194 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1198 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1198) */
/* 1200 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1202 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1176) */
/* 1204 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1206 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1208 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1210 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1212 */	NdrFcShort( 0xfb50 ),	/* Offset= -1200 (12) */
/* 1214 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 1216 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1218 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 1220 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1222 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1224 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1226 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 1228 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 1230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1234 */	NdrFcLong( 0x100000 ),	/* 1048576 */
/* 1238 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1240 */	NdrFcShort( 0xffde ),	/* Offset= -34 (1206) */
/* 1242 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1244 */	
			0x17,		/* FC_CSTRUCT */
			0x7,		/* 7 */
/* 1246 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1248 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1218) */
/* 1250 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1252 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1254 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1256 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1258 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1262 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1262) */
/* 1264 */	0xb,		/* FC_HYPER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1266 */	0x0,		/* 0 */
			NdrFcShort( 0xfef7 ),	/* Offset= -265 (1002) */
			0x5b,		/* FC_END */
/* 1270 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1272 */	NdrFcShort( 0x58 ),	/* 88 */
/* 1274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1276 */	NdrFcShort( 0x10 ),	/* Offset= 16 (1292) */
/* 1278 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1280 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1282 */	0x0,		/* 0 */
			NdrFcShort( 0xfe3f ),	/* Offset= -449 (834) */
			0x8,		/* FC_LONG */
/* 1286 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1288 */	0x0,		/* 0 */
			NdrFcShort( 0xffdf ),	/* Offset= -33 (1256) */
			0x5b,		/* FC_END */
/* 1292 */	
			0x12, 0x0,	/* FC_UP */
/* 1294 */	NdrFcShort( 0xfb8e ),	/* Offset= -1138 (156) */
/* 1296 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 1298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1300 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1302 */	NdrFcShort( 0x94 ),	/* 148 */
/* 1304 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 1306 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 1308 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1312 */	NdrFcLong( 0x100000 ),	/* 1048576 */
/* 1316 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1320 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1322 */	0x0 , 
			0x0,		/* 0 */
/* 1324 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1328 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1332 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1334 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (1270) */
/* 1336 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1338 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1340 */	NdrFcShort( 0xa8 ),	/* 168 */
/* 1342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1344 */	NdrFcShort( 0x26 ),	/* Offset= 38 (1382) */
/* 1346 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1348 */	NdrFcShort( 0xfac8 ),	/* Offset= -1336 (12) */
/* 1350 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1352 */	NdrFcShort( 0xfac4 ),	/* Offset= -1340 (12) */
/* 1354 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1356 */	0x0,		/* 0 */
			NdrFcShort( 0xfbb7 ),	/* Offset= -1097 (260) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1360 */	0x0,		/* 0 */
			NdrFcShort( 0xfbb3 ),	/* Offset= -1101 (260) */
			0x36,		/* FC_POINTER */
/* 1364 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1366 */	NdrFcShort( 0xfc16 ),	/* Offset= -1002 (364) */
/* 1368 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1370 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1372 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1374 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1376 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1378 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1380 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1382 */	
			0x12, 0x0,	/* FC_UP */
/* 1384 */	NdrFcShort( 0xfb34 ),	/* Offset= -1228 (156) */
/* 1386 */	
			0x12, 0x0,	/* FC_UP */
/* 1388 */	NdrFcShort( 0xff70 ),	/* Offset= -144 (1244) */
/* 1390 */	
			0x12, 0x0,	/* FC_UP */
/* 1392 */	NdrFcShort( 0xfec2 ),	/* Offset= -318 (1074) */
/* 1394 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1396 */	NdrFcShort( 0xff9c ),	/* Offset= -100 (1296) */
/* 1398 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1400 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1404 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1404) */
/* 1406 */	0x8,		/* FC_LONG */
			0xd,		/* FC_ENUM16 */
/* 1408 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1410 */	NdrFcShort( 0xff16 ),	/* Offset= -234 (1176) */
/* 1412 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1414 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1416 */	NdrFcShort( 0x48 ),	/* 72 */
/* 1418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1420 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1420) */
/* 1422 */	0xb,		/* FC_HYPER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1424 */	0x0,		/* 0 */
			NdrFcShort( 0xfe59 ),	/* Offset= -423 (1002) */
			0x8,		/* FC_LONG */
/* 1428 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1430 */	0x40,		/* FC_STRUCTPAD4 */
			0xb,		/* FC_HYPER */
/* 1432 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1434 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1436 */	NdrFcShort( 0x70 ),	/* 112 */
/* 1438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1440 */	NdrFcShort( 0x10 ),	/* Offset= 16 (1456) */
/* 1442 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1444 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1446 */	0x0,		/* 0 */
			NdrFcShort( 0xfd9b ),	/* Offset= -613 (834) */
			0x8,		/* FC_LONG */
/* 1450 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1452 */	0x0,		/* 0 */
			NdrFcShort( 0xffd9 ),	/* Offset= -39 (1414) */
			0x5b,		/* FC_END */
/* 1456 */	
			0x12, 0x0,	/* FC_UP */
/* 1458 */	NdrFcShort( 0xfaea ),	/* Offset= -1302 (156) */
/* 1460 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 1462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1464 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1466 */	NdrFcShort( 0x94 ),	/* 148 */
/* 1468 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 1470 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 1472 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1476 */	NdrFcLong( 0x100000 ),	/* 1048576 */
/* 1480 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1484 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1486 */	0x0 , 
			0x0,		/* 0 */
/* 1488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1496 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1498 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (1434) */
/* 1500 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1502 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1504 */	NdrFcShort( 0xa8 ),	/* 168 */
/* 1506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1508 */	NdrFcShort( 0x26 ),	/* Offset= 38 (1546) */
/* 1510 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1512 */	NdrFcShort( 0xfa24 ),	/* Offset= -1500 (12) */
/* 1514 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1516 */	NdrFcShort( 0xfa20 ),	/* Offset= -1504 (12) */
/* 1518 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1520 */	0x0,		/* 0 */
			NdrFcShort( 0xfb13 ),	/* Offset= -1261 (260) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1524 */	0x0,		/* 0 */
			NdrFcShort( 0xfb0f ),	/* Offset= -1265 (260) */
			0x36,		/* FC_POINTER */
/* 1528 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1530 */	NdrFcShort( 0xfb72 ),	/* Offset= -1166 (364) */
/* 1532 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1534 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1536 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1538 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1540 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1542 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1544 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1546 */	
			0x12, 0x0,	/* FC_UP */
/* 1548 */	NdrFcShort( 0xfa90 ),	/* Offset= -1392 (156) */
/* 1550 */	
			0x12, 0x0,	/* FC_UP */
/* 1552 */	NdrFcShort( 0xfecc ),	/* Offset= -308 (1244) */
/* 1554 */	
			0x12, 0x0,	/* FC_UP */
/* 1556 */	NdrFcShort( 0xfe1e ),	/* Offset= -482 (1074) */
/* 1558 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1560 */	NdrFcShort( 0xff9c ),	/* Offset= -100 (1460) */
/* 1562 */	
			0x11, 0x0,	/* FC_RP */
/* 1564 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1566) */
/* 1566 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1568 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1570 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1572 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1574 */	0x0 , 
			0x0,		/* 0 */
/* 1576 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1580 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1584 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1586) */
/* 1586 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1588 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1590 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1594 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1598) */
/* 1596 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1595) */
/* 1598 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1600 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1604 */	NdrFcShort( 0xc ),	/* Offset= 12 (1616) */
/* 1606 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1608 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1610 */	NdrFcShort( 0xf9c2 ),	/* Offset= -1598 (12) */
/* 1612 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1614 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1616 */	
			0x11, 0x0,	/* FC_RP */
/* 1618 */	NdrFcShort( 0xfa4a ),	/* Offset= -1462 (156) */
/* 1620 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1622 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1624 */	
			0x11, 0x0,	/* FC_RP */
/* 1626 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1628) */
/* 1628 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1630 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1632 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1634 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1636 */	0x0 , 
			0x0,		/* 0 */
/* 1638 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1646 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1648) */
/* 1648 */	NdrFcShort( 0x78 ),	/* 120 */
/* 1650 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1652 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1656 */	NdrFcShort( 0x1a ),	/* Offset= 26 (1682) */
/* 1658 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1662 */	NdrFcShort( 0x2c ),	/* Offset= 44 (1706) */
/* 1664 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1663) */
/* 1666 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 1668 */	NdrFcShort( 0x54 ),	/* 84 */
/* 1670 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1672 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 1674 */	NdrFcShort( 0x54 ),	/* 84 */
/* 1676 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1678 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1666) */
/* 1680 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1682 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1684 */	NdrFcShort( 0x68 ),	/* 104 */
/* 1686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1688 */	NdrFcShort( 0xa ),	/* Offset= 10 (1698) */
/* 1690 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1692 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1694 */	NdrFcShort( 0xffea ),	/* Offset= -22 (1672) */
/* 1696 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1698 */	
			0x11, 0x0,	/* FC_RP */
/* 1700 */	NdrFcShort( 0xf9f8 ),	/* Offset= -1544 (156) */
/* 1702 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1704 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1706 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1708 */	NdrFcShort( 0x78 ),	/* 120 */
/* 1710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1712 */	NdrFcShort( 0xc ),	/* Offset= 12 (1724) */
/* 1714 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1716 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1718 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1720 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (1672) */
/* 1722 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1724 */	
			0x11, 0x0,	/* FC_RP */
/* 1726 */	NdrFcShort( 0xf9de ),	/* Offset= -1570 (156) */
/* 1728 */	
			0x12, 0x0,	/* FC_UP */
/* 1730 */	NdrFcShort( 0xf9da ),	/* Offset= -1574 (156) */
/* 1732 */	
			0x12, 0x0,	/* FC_UP */
/* 1734 */	NdrFcShort( 0xf9d6 ),	/* Offset= -1578 (156) */
/* 1736 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1738 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1740 */	
			0x11, 0x0,	/* FC_RP */
/* 1742 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1744) */
/* 1744 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1746 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1748 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1750 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1752 */	0x0 , 
			0x0,		/* 0 */
/* 1754 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1762 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1764) */
/* 1764 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1766 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1768 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1772 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1776) */
/* 1774 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1773) */
/* 1776 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1778 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1782 */	NdrFcShort( 0x8 ),	/* Offset= 8 (1790) */
/* 1784 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1786 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1788 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1790 */	
			0x11, 0x0,	/* FC_RP */
/* 1792 */	NdrFcShort( 0xf99c ),	/* Offset= -1636 (156) */
/* 1794 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1796 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1798 */	
			0x11, 0x0,	/* FC_RP */
/* 1800 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1802) */
/* 1802 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1804 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1806 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1808 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1810 */	0x0 , 
			0x0,		/* 0 */
/* 1812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1816 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1820 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1822) */
/* 1822 */	NdrFcShort( 0x80 ),	/* 128 */
/* 1824 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1826 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1830 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1834) */
/* 1832 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1831) */
/* 1834 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1836 */	NdrFcShort( 0x80 ),	/* 128 */
/* 1838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1840 */	NdrFcShort( 0x10 ),	/* Offset= 16 (1856) */
/* 1842 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1844 */	0x0,		/* 0 */
			NdrFcShort( 0xf8d7 ),	/* Offset= -1833 (12) */
			0x36,		/* FC_POINTER */
/* 1848 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1850 */	NdrFcShort( 0xff4e ),	/* Offset= -178 (1672) */
/* 1852 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1854 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1856 */	
			0x11, 0x0,	/* FC_RP */
/* 1858 */	NdrFcShort( 0xf95a ),	/* Offset= -1702 (156) */
/* 1860 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1862 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1864 */	
			0x11, 0x0,	/* FC_RP */
/* 1866 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1868) */
/* 1868 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1870 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1872 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1874 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1876 */	0x0 , 
			0x0,		/* 0 */
/* 1878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1882 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1886 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1888) */
/* 1888 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1890 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1892 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1896 */	NdrFcShort( 0x2e ),	/* Offset= 46 (1942) */
/* 1898 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1897) */
/* 1900 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1904 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1906 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1908 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 1910 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 1912 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1916 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 1920 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1924 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1926 */	0x0 , 
			0x0,		/* 0 */
/* 1928 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1932 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1936 */	
			0x12, 0x0,	/* FC_UP */
/* 1938 */	NdrFcShort( 0xf90a ),	/* Offset= -1782 (156) */
/* 1940 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1942 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1944 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1948 */	NdrFcShort( 0xe ),	/* Offset= 14 (1962) */
/* 1950 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1952 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1954 */	0x0,		/* 0 */
			NdrFcShort( 0xfc23 ),	/* Offset= -989 (966) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1958 */	0x0,		/* 0 */
			NdrFcShort( 0xf9c5 ),	/* Offset= -1595 (364) */
			0x5b,		/* FC_END */
/* 1962 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1964 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (1900) */
/* 1966 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1968 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1970) */
/* 1970 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1972 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 1974 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1976 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1978 */	0x0 , 
			0x0,		/* 0 */
/* 1980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1984 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1988 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1990) */
/* 1990 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1992 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1994 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1998 */	NdrFcShort( 0x2e ),	/* Offset= 46 (2044) */
/* 2000 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1999) */
/* 2002 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2006 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2008 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2010 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 2012 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2014 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2018 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 2022 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2026 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2028 */	0x0 , 
			0x0,		/* 0 */
/* 2030 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2034 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2038 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2040 */	NdrFcShort( 0xfbde ),	/* Offset= -1058 (982) */
/* 2042 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2044 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2046 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2050 */	NdrFcShort( 0xa ),	/* Offset= 10 (2060) */
/* 2052 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2054 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2056 */	0x0,		/* 0 */
			NdrFcShort( 0xf963 ),	/* Offset= -1693 (364) */
			0x5b,		/* FC_END */
/* 2060 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2062 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (2002) */
/* 2064 */	
			0x11, 0x0,	/* FC_RP */
/* 2066 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2068) */
/* 2068 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2070 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2072 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2074 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2076 */	0x0 , 
			0x0,		/* 0 */
/* 2078 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2086 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2088) */
/* 2088 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2090 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2092 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2096 */	NdrFcShort( 0x38 ),	/* Offset= 56 (2152) */
/* 2098 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2097) */
/* 2100 */	0xb7,		/* FC_RANGE */
			0xd,		/* 13 */
/* 2102 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2106 */	NdrFcLong( 0x7 ),	/* 7 */
/* 2110 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2114 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2118 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 2120 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2122 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2126 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 2130 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2134 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2136 */	0x0 , 
			0x0,		/* 0 */
/* 2138 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2142 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2146 */	
			0x12, 0x0,	/* FC_UP */
/* 2148 */	NdrFcShort( 0xf838 ),	/* Offset= -1992 (156) */
/* 2150 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2152 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2154 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2158 */	NdrFcShort( 0xc ),	/* Offset= 12 (2170) */
/* 2160 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2162 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2164 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2166 */	NdrFcShort( 0xffbe ),	/* Offset= -66 (2100) */
/* 2168 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2170 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2172 */	NdrFcShort( 0xffc2 ),	/* Offset= -62 (2110) */
/* 2174 */	
			0x12, 0x0,	/* FC_UP */
/* 2176 */	NdrFcShort( 0xf81c ),	/* Offset= -2020 (156) */
/* 2178 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2180 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2182) */
/* 2182 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2184 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 2186 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2188 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2190 */	0x0 , 
			0x0,		/* 0 */
/* 2192 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2200 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2202) */
/* 2202 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2204 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2206 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2210 */	NdrFcShort( 0x6e ),	/* Offset= 110 (2320) */
/* 2212 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2211) */
/* 2214 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2218 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2220 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2222 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 2224 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2230 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 2234 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2238 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2240 */	0x0 , 
			0x0,		/* 0 */
/* 2242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2246 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2250 */	
			0x12, 0x0,	/* FC_UP */
/* 2252 */	NdrFcShort( 0xf7d0 ),	/* Offset= -2096 (156) */
/* 2254 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2256 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2258 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2260 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2262 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2264 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 2266 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2268 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2272 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 2276 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2278 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2282 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2284 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2286 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 2288 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2294 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 2298 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2302 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2304 */	0x0 , 
			0x0,		/* 0 */
/* 2306 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2310 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2314 */	
			0x12, 0x0,	/* FC_UP */
/* 2316 */	NdrFcShort( 0xf770 ),	/* Offset= -2192 (124) */
/* 2318 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2320 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2322 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2326 */	NdrFcShort( 0xa ),	/* Offset= 10 (2336) */
/* 2328 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2330 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2332 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2334 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2336 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2338 */	NdrFcShort( 0xff84 ),	/* Offset= -124 (2214) */
/* 2340 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2342 */	NdrFcShort( 0xffaa ),	/* Offset= -86 (2256) */
/* 2344 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2346 */	NdrFcShort( 0xffbc ),	/* Offset= -68 (2278) */
/* 2348 */	
			0x11, 0x0,	/* FC_RP */
/* 2350 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2352) */
/* 2352 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2354 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2356 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2358 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2360 */	0x0 , 
			0x0,		/* 0 */
/* 2362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2366 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2370 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2372) */
/* 2372 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2374 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2376 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2380 */	NdrFcShort( 0xa ),	/* Offset= 10 (2390) */
/* 2382 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2386 */	NdrFcShort( 0x6c ),	/* Offset= 108 (2494) */
/* 2388 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2387) */
/* 2390 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2392 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2396 */	NdrFcShort( 0xc ),	/* Offset= 12 (2408) */
/* 2398 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2400 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2402 */	0x0,		/* 0 */
			NdrFcShort( 0xf809 ),	/* Offset= -2039 (364) */
			0x8,		/* FC_LONG */
/* 2406 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 2408 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2410 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 2412 */	
			0x12, 0x0,	/* FC_UP */
/* 2414 */	NdrFcShort( 0xfa68 ),	/* Offset= -1432 (982) */
/* 2416 */	
			0x12, 0x0,	/* FC_UP */
/* 2418 */	NdrFcShort( 0xf69a ),	/* Offset= -2406 (12) */
/* 2420 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2422 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2426 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2432) */
/* 2428 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2430 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2432 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2434 */	NdrFcShort( 0xf78a ),	/* Offset= -2166 (268) */
/* 2436 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2440 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2442 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2444 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 2446 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2448 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2452 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 2456 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2460 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2462 */	0x0 , 
			0x0,		/* 0 */
/* 2464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2468 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2472 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2474 */	NdrFcShort( 0xffca ),	/* Offset= -54 (2420) */
/* 2476 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2478 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2480 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2484 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2490) */
/* 2486 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2488 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2490 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2492 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (2436) */
/* 2494 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2496 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2500 */	NdrFcShort( 0xe ),	/* Offset= 14 (2514) */
/* 2502 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2504 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2506 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2508 */	0x0,		/* 0 */
			NdrFcShort( 0xf79f ),	/* Offset= -2145 (364) */
			0x8,		/* FC_LONG */
/* 2512 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 2514 */	
			0x12, 0x0,	/* FC_UP */
/* 2516 */	NdrFcShort( 0xf6c8 ),	/* Offset= -2360 (156) */
/* 2518 */	
			0x12, 0x0,	/* FC_UP */
/* 2520 */	NdrFcShort( 0xf9fe ),	/* Offset= -1538 (982) */
/* 2522 */	
			0x12, 0x0,	/* FC_UP */
/* 2524 */	NdrFcShort( 0xf6c0 ),	/* Offset= -2368 (156) */
/* 2526 */	
			0x12, 0x0,	/* FC_UP */
/* 2528 */	NdrFcShort( 0xf6bc ),	/* Offset= -2372 (156) */
/* 2530 */	
			0x12, 0x0,	/* FC_UP */
/* 2532 */	NdrFcShort( 0xffca ),	/* Offset= -54 (2478) */
/* 2534 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2536 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2538) */
/* 2538 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2540 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 2542 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2544 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2546 */	0x0 , 
			0x0,		/* 0 */
/* 2548 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2556 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2558) */
/* 2558 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2560 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2562 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2566 */	NdrFcShort( 0xe ),	/* Offset= 14 (2580) */
/* 2568 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2572 */	NdrFcShort( 0x20 ),	/* Offset= 32 (2604) */
/* 2574 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2573) */
/* 2576 */	
			0x12, 0x0,	/* FC_UP */
/* 2578 */	NdrFcShort( 0xf9c4 ),	/* Offset= -1596 (982) */
/* 2580 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2582 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2586 */	NdrFcShort( 0xa ),	/* Offset= 10 (2596) */
/* 2588 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2590 */	0x0,		/* 0 */
			NdrFcShort( 0xf74d ),	/* Offset= -2227 (364) */
			0x36,		/* FC_POINTER */
/* 2594 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2596 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 2598 */	NdrFcShort( 0xffea ),	/* Offset= -22 (2576) */
/* 2600 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2602 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 2604 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2606 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2610 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2616) */
/* 2612 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2614 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2616 */	
			0x12, 0x0,	/* FC_UP */
/* 2618 */	NdrFcShort( 0xf662 ),	/* Offset= -2462 (156) */
/* 2620 */	
			0x11, 0x0,	/* FC_RP */
/* 2622 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2624) */
/* 2624 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2626 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2628 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2630 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2632 */	0x0 , 
			0x0,		/* 0 */
/* 2634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2638 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2642 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2644) */
/* 2644 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2646 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2648 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2652 */	NdrFcShort( 0x1a ),	/* Offset= 26 (2678) */
/* 2654 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2653) */
/* 2656 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2658 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2660 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2662 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2664 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 2666 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2672 */	NdrFcLong( 0xa00000 ),	/* 10485760 */
/* 2676 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 2678 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2680 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2684 */	NdrFcShort( 0x8 ),	/* Offset= 8 (2692) */
/* 2686 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2688 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2690 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2692 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2694 */	NdrFcShort( 0xffda ),	/* Offset= -38 (2656) */
/* 2696 */	
			0x11, 0x0,	/* FC_RP */
/* 2698 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2700) */
/* 2700 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2702 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 2704 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2706 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2708 */	0x0 , 
			0x0,		/* 0 */
/* 2710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2718 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2720) */
/* 2720 */	NdrFcShort( 0x50 ),	/* 80 */
/* 2722 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2724 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2728 */	NdrFcShort( 0x4e ),	/* Offset= 78 (2806) */
/* 2730 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2729) */
/* 2732 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 2734 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2736 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2738 */	NdrFcShort( 0xf77a ),	/* Offset= -2182 (556) */
/* 2740 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2742 */	NdrFcShort( 0xf776 ),	/* Offset= -2186 (556) */
/* 2744 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2746 */	NdrFcShort( 0xf772 ),	/* Offset= -2190 (556) */
/* 2748 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2750 */	NdrFcShort( 0xf76e ),	/* Offset= -2194 (556) */
/* 2752 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2754 */	NdrFcShort( 0xf76a ),	/* Offset= -2198 (556) */
/* 2756 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2758 */	NdrFcShort( 0xf766 ),	/* Offset= -2202 (556) */
/* 2760 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2762 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2764 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2766 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2770 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 2772 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2774 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2778 */	NdrFcLong( 0xa00000 ),	/* 10485760 */
/* 2782 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 2784 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2786 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2788 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2790 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2792 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 2794 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2800 */	NdrFcLong( 0xa00000 ),	/* 10485760 */
/* 2804 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 2806 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 2808 */	NdrFcShort( 0x50 ),	/* 80 */
/* 2810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2812 */	NdrFcShort( 0xe ),	/* Offset= 14 (2826) */
/* 2814 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2816 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2818 */	NdrFcShort( 0xffaa ),	/* Offset= -86 (2732) */
/* 2820 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2822 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2824 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2826 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2828 */	NdrFcShort( 0xffbe ),	/* Offset= -66 (2762) */
/* 2830 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2832 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (2784) */
/* 2834 */	
			0x11, 0x0,	/* FC_RP */
/* 2836 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2838) */
/* 2838 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2840 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2842 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2844 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2846 */	0x0 , 
			0x0,		/* 0 */
/* 2848 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2852 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2856 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2858) */
/* 2858 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2860 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2862 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2866 */	NdrFcShort( 0x2e ),	/* Offset= 46 (2912) */
/* 2868 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2867) */
/* 2870 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2874 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2876 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2878 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 2880 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2882 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2886 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 2890 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2894 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2896 */	0x0 , 
			0x0,		/* 0 */
/* 2898 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2906 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2908 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2910 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2912 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2914 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2918 */	NdrFcShort( 0xa ),	/* Offset= 10 (2928) */
/* 2920 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2922 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2924 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2926 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2928 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2930 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (2870) */
/* 2932 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2934 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2936) */
/* 2936 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2938 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 2940 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2942 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2944 */	0x0 , 
			0x0,		/* 0 */
/* 2946 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2954 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2956) */
/* 2956 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2958 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2960 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2964 */	NdrFcShort( 0x54 ),	/* Offset= 84 (3048) */
/* 2966 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2965) */
/* 2968 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2970 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2974 */	NdrFcShort( 0x8 ),	/* Offset= 8 (2982) */
/* 2976 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2978 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2980 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2982 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2984 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2986 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2988 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2990 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2994 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2998 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3000 */	0x0 , 
			0x0,		/* 0 */
/* 3002 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3006 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3010 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3014 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3016 */	0x0 , 
			0x0,		/* 0 */
/* 3018 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3022 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3026 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3028 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (2968) */
/* 3030 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3032 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3034 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3038 */	NdrFcShort( 0x6 ),	/* Offset= 6 (3044) */
/* 3040 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 3042 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 3044 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3046 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (2990) */
/* 3048 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3050 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3054 */	NdrFcShort( 0x4 ),	/* Offset= 4 (3058) */
/* 3056 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 3058 */	
			0x12, 0x0,	/* FC_UP */
/* 3060 */	NdrFcShort( 0xffe4 ),	/* Offset= -28 (3032) */
/* 3062 */	
			0x11, 0x0,	/* FC_RP */
/* 3064 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3066) */
/* 3066 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 3068 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3070 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3072 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3074 */	0x0 , 
			0x0,		/* 0 */
/* 3076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3080 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3084 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3086) */
/* 3086 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3088 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3090 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3094 */	NdrFcShort( 0x2e ),	/* Offset= 46 (3140) */
/* 3096 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3095) */
/* 3098 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 3100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3102 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3104 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3106 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 3108 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 3110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3114 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 3118 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3122 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3124 */	0x0 , 
			0x0,		/* 0 */
/* 3126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3134 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3136 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3138 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3140 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3142 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3146 */	NdrFcShort( 0xa ),	/* Offset= 10 (3156) */
/* 3148 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3150 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 3152 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 3154 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3156 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3158 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3160 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3162 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (3098) */
/* 3164 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 3166 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3168) */
/* 3168 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 3170 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 3172 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3174 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3176 */	0x0 , 
			0x0,		/* 0 */
/* 3178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3186 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3188) */
/* 3188 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3190 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3192 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3196 */	NdrFcShort( 0x4 ),	/* Offset= 4 (3200) */
/* 3198 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3197) */
/* 3200 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 3202 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3204 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3206 */	
			0x11, 0x0,	/* FC_RP */
/* 3208 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3210) */
/* 3210 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 3212 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3214 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3216 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3218 */	0x0 , 
			0x0,		/* 0 */
/* 3220 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3228 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3230) */
/* 3230 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3232 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3234 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3238 */	NdrFcShort( 0x4 ),	/* Offset= 4 (3242) */
/* 3240 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3239) */
/* 3242 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3244 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3248 */	NdrFcShort( 0x8 ),	/* Offset= 8 (3256) */
/* 3250 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 3252 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 3254 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3256 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3258 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3260 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3262 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3264 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 3266 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3268) */
/* 3268 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 3270 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 3272 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3274 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3276 */	0x0 , 
			0x0,		/* 0 */
/* 3278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3286 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3288) */
/* 3288 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3290 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3292 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3296 */	NdrFcShort( 0xffa0 ),	/* Offset= -96 (3200) */
/* 3298 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3297) */
/* 3300 */	
			0x11, 0x0,	/* FC_RP */
/* 3302 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3304) */
/* 3304 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 3306 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3308 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3310 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3312 */	0x0 , 
			0x0,		/* 0 */
/* 3314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3318 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3322 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3324) */
/* 3324 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3326 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3328 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3332 */	NdrFcShort( 0x4 ),	/* Offset= 4 (3336) */
/* 3334 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3333) */
/* 3336 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3338 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3342 */	NdrFcShort( 0x4 ),	/* Offset= 4 (3346) */
/* 3344 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 3346 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3348 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3350 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 3352 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3354) */
/* 3354 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 3356 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 3358 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3360 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3362 */	0x0 , 
			0x0,		/* 0 */
/* 3364 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3372 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3374) */
/* 3374 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3376 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3378 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3382 */	NdrFcShort( 0xff4a ),	/* Offset= -182 (3200) */
/* 3384 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3383) */
/* 3386 */	
			0x11, 0x0,	/* FC_RP */
/* 3388 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3390) */
/* 3390 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 3392 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3394 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3396 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3398 */	0x0 , 
			0x0,		/* 0 */
/* 3400 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3408 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3410) */
/* 3410 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3412 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3414 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3418 */	NdrFcShort( 0x4 ),	/* Offset= 4 (3422) */
/* 3420 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3419) */
/* 3422 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3424 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3428 */	NdrFcShort( 0x6 ),	/* Offset= 6 (3434) */
/* 3430 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 3432 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 3434 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3436 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3438 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 3440 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3442) */
/* 3442 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 3444 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 3446 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3448 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3450 */	0x0 , 
			0x0,		/* 0 */
/* 3452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3460 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3462) */
/* 3462 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3464 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3466 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3470 */	NdrFcShort( 0x64 ),	/* Offset= 100 (3570) */
/* 3472 */	NdrFcLong( 0x2 ),	/* 2 */
/* 3476 */	NdrFcShort( 0xd8 ),	/* Offset= 216 (3692) */
/* 3478 */	NdrFcLong( 0x3 ),	/* 3 */
/* 3482 */	NdrFcShort( 0x14c ),	/* Offset= 332 (3814) */
/* 3484 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3488 */	NdrFcShort( 0x194 ),	/* Offset= 404 (3892) */
/* 3490 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3489) */
/* 3492 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3494 */	NdrFcShort( 0x30 ),	/* 48 */
/* 3496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3498 */	NdrFcShort( 0xa ),	/* Offset= 10 (3508) */
/* 3500 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 3502 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 3504 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 3506 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3508 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3510 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3512 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3514 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3516 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3518 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3520 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3522 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3524 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3526 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3528 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 3530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3532 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3536 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 3538 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 3540 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3544 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 3548 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3552 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3554 */	0x0 , 
			0x0,		/* 0 */
/* 3556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3564 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3566 */	NdrFcShort( 0xffb6 ),	/* Offset= -74 (3492) */
/* 3568 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3570 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3572 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3576 */	NdrFcShort( 0x6 ),	/* Offset= 6 (3582) */
/* 3578 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 3580 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 3582 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3584 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (3528) */
/* 3586 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3588 */	NdrFcShort( 0x88 ),	/* 136 */
/* 3590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3592 */	NdrFcShort( 0x1e ),	/* Offset= 30 (3622) */
/* 3594 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 3596 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 3598 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 3600 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 3602 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3604 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3606 */	NdrFcShort( 0xf1f6 ),	/* Offset= -3594 (12) */
/* 3608 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3610 */	NdrFcShort( 0xf1f2 ),	/* Offset= -3598 (12) */
/* 3612 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3614 */	NdrFcShort( 0xf1ee ),	/* Offset= -3602 (12) */
/* 3616 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3618 */	NdrFcShort( 0xf1ea ),	/* Offset= -3606 (12) */
/* 3620 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 3622 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3624 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3626 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3628 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3630 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3632 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3634 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3636 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3638 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3640 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3642 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3644 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3646 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3648 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3650 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 3652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3654 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3658 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 3660 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 3662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3666 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 3670 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3674 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3676 */	0x0 , 
			0x0,		/* 0 */
/* 3678 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3682 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3686 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3688 */	NdrFcShort( 0xff9a ),	/* Offset= -102 (3586) */
/* 3690 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3692 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3694 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3698 */	NdrFcShort( 0x6 ),	/* Offset= 6 (3704) */
/* 3700 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 3702 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 3704 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3706 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (3650) */
/* 3708 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3710 */	NdrFcShort( 0x88 ),	/* 136 */
/* 3712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3714 */	NdrFcShort( 0x1e ),	/* Offset= 30 (3744) */
/* 3716 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 3718 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 3720 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 3722 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 3724 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3726 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3728 */	0x0,		/* 0 */
			NdrFcShort( 0xf17b ),	/* Offset= -3717 (12) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3732 */	0x0,		/* 0 */
			NdrFcShort( 0xf177 ),	/* Offset= -3721 (12) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3736 */	0x0,		/* 0 */
			NdrFcShort( 0xf173 ),	/* Offset= -3725 (12) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3740 */	0x0,		/* 0 */
			NdrFcShort( 0xf16f ),	/* Offset= -3729 (12) */
			0x5b,		/* FC_END */
/* 3744 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3746 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3748 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3750 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3752 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3754 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3756 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3758 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3760 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3762 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3764 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3766 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3768 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3770 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3772 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 3774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3776 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3780 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 3782 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 3784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3788 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 3792 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3796 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3798 */	0x0 , 
			0x0,		/* 0 */
/* 3800 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3804 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3808 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3810 */	NdrFcShort( 0xff9a ),	/* Offset= -102 (3708) */
/* 3812 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3814 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3816 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3820 */	NdrFcShort( 0x6 ),	/* Offset= 6 (3826) */
/* 3822 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 3824 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 3826 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3828 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (3772) */
/* 3830 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3832 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3836 */	NdrFcShort( 0xa ),	/* Offset= 10 (3846) */
/* 3838 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3840 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3842 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3844 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 3846 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3848 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3850 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 3852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3854 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3858 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 3860 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 3862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3866 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 3870 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3874 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3876 */	0x0 , 
			0x0,		/* 0 */
/* 3878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3882 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3886 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3888 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (3830) */
/* 3890 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3892 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3894 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3898 */	NdrFcShort( 0x6 ),	/* Offset= 6 (3904) */
/* 3900 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 3902 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 3904 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3906 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (3850) */
/* 3908 */	
			0x11, 0x0,	/* FC_RP */
/* 3910 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3912) */
/* 3912 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 3914 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3916 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3918 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3920 */	0x0 , 
			0x0,		/* 0 */
/* 3922 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3926 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3930 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3932) */
/* 3932 */	NdrFcShort( 0x30 ),	/* 48 */
/* 3934 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3936 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3940 */	NdrFcShort( 0x10 ),	/* Offset= 16 (3956) */
/* 3942 */	NdrFcLong( 0x2 ),	/* 2 */
/* 3946 */	NdrFcShort( 0x2e ),	/* Offset= 46 (3992) */
/* 3948 */	NdrFcLong( 0x3 ),	/* 3 */
/* 3952 */	NdrFcShort( 0x36 ),	/* Offset= 54 (4006) */
/* 3954 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3953) */
/* 3956 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3958 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3962 */	NdrFcShort( 0x8 ),	/* Offset= 8 (3970) */
/* 3964 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3966 */	0x0,		/* 0 */
			NdrFcShort( 0xf447 ),	/* Offset= -3001 (966) */
			0x5b,		/* FC_END */
/* 3970 */	
			0x11, 0x0,	/* FC_RP */
/* 3972 */	NdrFcShort( 0xf118 ),	/* Offset= -3816 (156) */
/* 3974 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3976 */	NdrFcShort( 0x28 ),	/* 40 */
/* 3978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3980 */	NdrFcShort( 0x8 ),	/* Offset= 8 (3988) */
/* 3982 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3984 */	0x0,		/* 0 */
			NdrFcShort( 0xf445 ),	/* Offset= -3003 (982) */
			0x5b,		/* FC_END */
/* 3988 */	
			0x12, 0x0,	/* FC_UP */
/* 3990 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (3974) */
/* 3992 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3994 */	NdrFcShort( 0x28 ),	/* 40 */
/* 3996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3998 */	NdrFcShort( 0x0 ),	/* Offset= 0 (3998) */
/* 4000 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 4002 */	NdrFcShort( 0xffe4 ),	/* Offset= -28 (3974) */
/* 4004 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 4006 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 4008 */	NdrFcShort( 0x30 ),	/* 48 */
/* 4010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4012 */	NdrFcShort( 0x8 ),	/* Offset= 8 (4020) */
/* 4014 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 4016 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (3974) */
/* 4018 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 4020 */	
			0x12, 0x0,	/* FC_UP */
/* 4022 */	NdrFcShort( 0xf9f8 ),	/* Offset= -1544 (2478) */
/* 4024 */	
			0x11, 0x0,	/* FC_RP */
/* 4026 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4028) */
/* 4028 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 4030 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 4032 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4034 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 4036 */	0x0 , 
			0x0,		/* 0 */
/* 4038 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4042 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4046 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4048) */
/* 4048 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4050 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4052 */	NdrFcLong( 0x1 ),	/* 1 */
/* 4056 */	NdrFcShort( 0x10 ),	/* Offset= 16 (4072) */
/* 4058 */	NdrFcLong( 0x2 ),	/* 2 */
/* 4062 */	NdrFcShort( 0x5a ),	/* Offset= 90 (4152) */
/* 4064 */	NdrFcLong( 0x3 ),	/* 3 */
/* 4068 */	NdrFcShort( 0x1f2 ),	/* Offset= 498 (4566) */
/* 4070 */	NdrFcShort( 0xffff ),	/* Offset= -1 (4069) */
/* 4072 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 4074 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4078 */	NdrFcShort( 0x0 ),	/* Offset= 0 (4078) */
/* 4080 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 4082 */	NdrFcShort( 0xf01a ),	/* Offset= -4070 (12) */
/* 4084 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 4086 */	NdrFcShort( 0xf086 ),	/* Offset= -3962 (124) */
/* 4088 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4090 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4092 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 4094 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 4096 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 4098 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4100 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 4102 */	NdrFcShort( 0xf006 ),	/* Offset= -4090 (12) */
/* 4104 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 4106 */	NdrFcShort( 0xf072 ),	/* Offset= -3982 (124) */
/* 4108 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 4110 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 4112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4114 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 4116 */	NdrFcShort( 0x1c ),	/* 28 */
/* 4118 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 4120 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 4122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4126 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 4130 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 4134 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 4136 */	0x0 , 
			0x0,		/* 0 */
/* 4138 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4142 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4146 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 4148 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (4096) */
/* 4150 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 4152 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 4154 */	NdrFcShort( 0x28 ),	/* 40 */
/* 4156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4158 */	NdrFcShort( 0xc ),	/* Offset= 12 (4170) */
/* 4160 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 4162 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4164 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 4166 */	0x3e,		/* FC_STRUCTPAD2 */
			0x8,		/* FC_LONG */
/* 4168 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 4170 */	
			0x12, 0x0,	/* FC_UP */
/* 4172 */	NdrFcShort( 0xf050 ),	/* Offset= -4016 (156) */
/* 4174 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 4176 */	NdrFcShort( 0xffbe ),	/* Offset= -66 (4110) */
/* 4178 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 4180 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 4182 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4184 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 4186 */	0x0 , 
			0x0,		/* 0 */
/* 4188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4192 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4196 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4198) */
/* 4198 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4200 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4202 */	NdrFcLong( 0x1 ),	/* 1 */
/* 4206 */	NdrFcShort( 0x12e ),	/* Offset= 302 (4508) */
/* 4208 */	NdrFcShort( 0xffff ),	/* Offset= -1 (4207) */
/* 4210 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 4212 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 4214 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4216 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 4218 */	0x0 , 
			0x0,		/* 0 */
/* 4220 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4228 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4230) */
/* 4230 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4232 */	NdrFcShort( 0x7 ),	/* 7 */
/* 4234 */	NdrFcLong( 0x1 ),	/* 1 */
/* 4238 */	NdrFcShort( 0x4e ),	/* Offset= 78 (4316) */
/* 4240 */	NdrFcLong( 0x2 ),	/* 2 */
/* 4244 */	NdrFcShort( 0x5c ),	/* Offset= 92 (4336) */
/* 4246 */	NdrFcLong( 0x3 ),	/* 3 */
/* 4250 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (4476) */
/* 4252 */	NdrFcLong( 0x4 ),	/* 4 */
/* 4256 */	NdrFcShort( 0xee ),	/* Offset= 238 (4494) */
/* 4258 */	NdrFcLong( 0x5 ),	/* 5 */
/* 4262 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (4494) */
/* 4264 */	NdrFcLong( 0x6 ),	/* 6 */
/* 4268 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (4494) */
/* 4270 */	NdrFcLong( 0x7 ),	/* 7 */
/* 4274 */	NdrFcShort( 0xdc ),	/* Offset= 220 (4494) */
/* 4276 */	NdrFcShort( 0xffff ),	/* Offset= -1 (4275) */
/* 4278 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 4280 */	NdrFcShort( 0x28 ),	/* 40 */
/* 4282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4284 */	NdrFcShort( 0x0 ),	/* Offset= 0 (4284) */
/* 4286 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4288 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 4290 */	0x3e,		/* FC_STRUCTPAD2 */
			0x8,		/* FC_LONG */
/* 4292 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 4294 */	0x0,		/* 0 */
			NdrFcShort( 0xf27b ),	/* Offset= -3461 (834) */
			0x5b,		/* FC_END */
/* 4298 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 4300 */	NdrFcShort( 0x30 ),	/* 48 */
/* 4302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4304 */	NdrFcShort( 0x8 ),	/* Offset= 8 (4312) */
/* 4306 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 4308 */	0x0,		/* 0 */
			NdrFcShort( 0xffe1 ),	/* Offset= -31 (4278) */
			0x5b,		/* FC_END */
/* 4312 */	
			0x12, 0x0,	/* FC_UP */
/* 4314 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (4298) */
/* 4316 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 4318 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4322 */	NdrFcShort( 0xa ),	/* Offset= 10 (4332) */
/* 4324 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 4326 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 4328 */	0x0,		/* 0 */
			NdrFcShort( 0xffe1 ),	/* Offset= -31 (4298) */
			0x5b,		/* FC_END */
/* 4332 */	
			0x12, 0x0,	/* FC_UP */
/* 4334 */	NdrFcShort( 0xefae ),	/* Offset= -4178 (156) */
/* 4336 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 4338 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4342 */	NdrFcShort( 0xa ),	/* Offset= 10 (4352) */
/* 4344 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4346 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 4348 */	0x3e,		/* FC_STRUCTPAD2 */
			0x36,		/* FC_POINTER */
/* 4350 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 4352 */	
			0x12, 0x0,	/* FC_UP */
/* 4354 */	NdrFcShort( 0xef9a ),	/* Offset= -4198 (156) */
/* 4356 */	
			0x15,		/* FC_STRUCT */
			0x1,		/* 1 */
/* 4358 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4360 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 4362 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 4364 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 4366 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4368 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 4370 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4372 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 4374 */	0x0 , 
			0x0,		/* 0 */
/* 4376 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4380 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4384 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 4386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4388 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 4390 */	0x0 , 
			0x0,		/* 0 */
/* 4392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4396 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4400 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 4402 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 4404 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4408 */	NdrFcShort( 0x8 ),	/* Offset= 8 (4416) */
/* 4410 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 4412 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 4414 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 4416 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 4418 */	NdrFcShort( 0xffca ),	/* Offset= -54 (4364) */
/* 4420 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 4422 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4426 */	NdrFcShort( 0x6 ),	/* Offset= 6 (4432) */
/* 4428 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 4430 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 4432 */	
			0x12, 0x0,	/* FC_UP */
/* 4434 */	NdrFcShort( 0xfff2 ),	/* Offset= -14 (4420) */
/* 4436 */	
			0x12, 0x0,	/* FC_UP */
/* 4438 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (4402) */
/* 4440 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 4442 */	NdrFcShort( 0x30 ),	/* 48 */
/* 4444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4446 */	NdrFcShort( 0x12 ),	/* Offset= 18 (4464) */
/* 4448 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 4450 */	0x0,		/* 0 */
			NdrFcShort( 0xffa1 ),	/* Offset= -95 (4356) */
			0x6,		/* FC_SHORT */
/* 4454 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 4456 */	0x6,		/* FC_SHORT */
			0x40,		/* FC_STRUCTPAD4 */
/* 4458 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 4460 */	0x8,		/* FC_LONG */
			0x2,		/* FC_CHAR */
/* 4462 */	0x3f,		/* FC_STRUCTPAD3 */
			0x5b,		/* FC_END */
/* 4464 */	
			0x12, 0x0,	/* FC_UP */
/* 4466 */	NdrFcShort( 0xef2a ),	/* Offset= -4310 (156) */
/* 4468 */	
			0x12, 0x0,	/* FC_UP */
/* 4470 */	NdrFcShort( 0xffce ),	/* Offset= -50 (4420) */
/* 4472 */	
			0x12, 0x0,	/* FC_UP */
/* 4474 */	NdrFcShort( 0xffde ),	/* Offset= -34 (4440) */
/* 4476 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 4478 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4482 */	NdrFcShort( 0x0 ),	/* Offset= 0 (4482) */
/* 4484 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4486 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 4488 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 4490 */	NdrFcShort( 0xffce ),	/* Offset= -50 (4440) */
/* 4492 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 4494 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 4496 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4500 */	NdrFcShort( 0x0 ),	/* Offset= 0 (4500) */
/* 4502 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4504 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 4506 */	0x3e,		/* FC_STRUCTPAD2 */
			0x5b,		/* FC_END */
/* 4508 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 4510 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4514 */	NdrFcShort( 0x6 ),	/* Offset= 6 (4520) */
/* 4516 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4518 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 4520 */	
			0x12, 0x0,	/* FC_UP */
/* 4522 */	NdrFcShort( 0xfec8 ),	/* Offset= -312 (4210) */
/* 4524 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 4526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4528 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 4530 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4532 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 4534 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 4536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4540 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 4544 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 4548 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 4550 */	0x0 , 
			0x0,		/* 0 */
/* 4552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4560 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 4562 */	NdrFcShort( 0xfe2e ),	/* Offset= -466 (4096) */
/* 4564 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 4566 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 4568 */	NdrFcShort( 0x28 ),	/* 40 */
/* 4570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4572 */	NdrFcShort( 0xa ),	/* Offset= 10 (4582) */
/* 4574 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 4576 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 4578 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 4580 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 4582 */	
			0x12, 0x0,	/* FC_UP */
/* 4584 */	NdrFcShort( 0xeeb4 ),	/* Offset= -4428 (156) */
/* 4586 */	
			0x12, 0x0,	/* FC_UP */
/* 4588 */	NdrFcShort( 0xfe66 ),	/* Offset= -410 (4178) */
/* 4590 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 4592 */	NdrFcShort( 0xffbc ),	/* Offset= -68 (4524) */
/* 4594 */	
			0x11, 0x0,	/* FC_RP */
/* 4596 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4598) */
/* 4598 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 4600 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 4602 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4604 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 4606 */	0x0 , 
			0x0,		/* 0 */
/* 4608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4616 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4618) */
/* 4618 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4620 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4622 */	NdrFcLong( 0x1 ),	/* 1 */
/* 4626 */	NdrFcShort( 0x4 ),	/* Offset= 4 (4630) */
/* 4628 */	NdrFcShort( 0xffff ),	/* Offset= -1 (4627) */
/* 4630 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 4632 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4634 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4636 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 4638 */	
			0x11, 0x0,	/* FC_RP */
/* 4640 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4642) */
/* 4642 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 4644 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 4646 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4648 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 4650 */	0x0 , 
			0x0,		/* 0 */
/* 4652 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4660 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4662) */
/* 4662 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4664 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4666 */	NdrFcLong( 0x1 ),	/* 1 */
/* 4670 */	NdrFcShort( 0xa ),	/* Offset= 10 (4680) */
/* 4672 */	NdrFcLong( 0x2 ),	/* 2 */
/* 4676 */	NdrFcShort( 0x18 ),	/* Offset= 24 (4700) */
/* 4678 */	NdrFcShort( 0xffff ),	/* Offset= -1 (4677) */
/* 4680 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 4682 */	NdrFcShort( 0x20 ),	/* 32 */
/* 4684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4686 */	NdrFcShort( 0xa ),	/* Offset= 10 (4696) */
/* 4688 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 4690 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 4692 */	0x0,		/* 0 */
			NdrFcShort( 0xedb7 ),	/* Offset= -4681 (12) */
			0x5b,		/* FC_END */
/* 4696 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4698 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4700 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 4702 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4706 */	NdrFcShort( 0x10 ),	/* Offset= 16 (4722) */
/* 4708 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 4710 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 4712 */	0x0,		/* 0 */
			NdrFcShort( 0xeda3 ),	/* Offset= -4701 (12) */
			0x8,		/* FC_LONG */
/* 4716 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 4718 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 4720 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 4722 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4724 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4726 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4728 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4730 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4732 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4734 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 4736 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4738) */
/* 4738 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 4740 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 4742 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4744 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 4746 */	0x0 , 
			0x0,		/* 0 */
/* 4748 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4756 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4758) */
/* 4758 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4760 */	NdrFcShort( 0xf ),	/* 15 */
/* 4762 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4766 */	NdrFcShort( 0x58 ),	/* Offset= 88 (4854) */
/* 4768 */	NdrFcLong( 0x1 ),	/* 1 */
/* 4772 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (4972) */
/* 4774 */	NdrFcLong( 0x2 ),	/* 2 */
/* 4778 */	NdrFcShort( 0xea ),	/* Offset= 234 (5012) */
/* 4780 */	NdrFcLong( 0x3 ),	/* 3 */
/* 4784 */	NdrFcShort( 0x138 ),	/* Offset= 312 (5096) */
/* 4786 */	NdrFcLong( 0x4 ),	/* 4 */
/* 4790 */	NdrFcShort( 0x132 ),	/* Offset= 306 (5096) */
/* 4792 */	NdrFcLong( 0x5 ),	/* 5 */
/* 4796 */	NdrFcShort( 0x17e ),	/* Offset= 382 (5178) */
/* 4798 */	NdrFcLong( 0x6 ),	/* 6 */
/* 4802 */	NdrFcShort( 0x1de ),	/* Offset= 478 (5280) */
/* 4804 */	NdrFcLong( 0x7 ),	/* 7 */
/* 4808 */	NdrFcShort( 0x256 ),	/* Offset= 598 (5406) */
/* 4810 */	NdrFcLong( 0x8 ),	/* 8 */
/* 4814 */	NdrFcShort( 0x286 ),	/* Offset= 646 (5460) */
/* 4816 */	NdrFcLong( 0x9 ),	/* 9 */
/* 4820 */	NdrFcShort( 0x2d2 ),	/* Offset= 722 (5542) */
/* 4822 */	NdrFcLong( 0xa ),	/* 10 */
/* 4826 */	NdrFcShort( 0x326 ),	/* Offset= 806 (5632) */
/* 4828 */	NdrFcLong( 0xfffffffa ),	/* -6 */
/* 4832 */	NdrFcShort( 0x38e ),	/* Offset= 910 (5742) */
/* 4834 */	NdrFcLong( 0xfffffffb ),	/* -5 */
/* 4838 */	NdrFcShort( 0x3da ),	/* Offset= 986 (5824) */
/* 4840 */	NdrFcLong( 0xfffffffc ),	/* -4 */
/* 4844 */	NdrFcShort( 0x3d8 ),	/* Offset= 984 (5828) */
/* 4846 */	NdrFcLong( 0xfffffffe ),	/* -2 */
/* 4850 */	NdrFcShort( 0x4 ),	/* Offset= 4 (4854) */
/* 4852 */	NdrFcShort( 0xffff ),	/* Offset= -1 (4851) */
/* 4854 */	
			0x12, 0x0,	/* FC_UP */
/* 4856 */	NdrFcShort( 0x68 ),	/* Offset= 104 (4960) */
/* 4858 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 4860 */	NdrFcShort( 0x90 ),	/* 144 */
/* 4862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4864 */	NdrFcShort( 0x26 ),	/* Offset= 38 (4902) */
/* 4866 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 4868 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 4870 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4872 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 4874 */	NdrFcShort( 0xed02 ),	/* Offset= -4862 (12) */
/* 4876 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 4878 */	NdrFcShort( 0xecfe ),	/* Offset= -4866 (12) */
/* 4880 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 4882 */	NdrFcShort( 0xecfa ),	/* Offset= -4870 (12) */
/* 4884 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 4886 */	NdrFcShort( 0xecf6 ),	/* Offset= -4874 (12) */
/* 4888 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 4890 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 4892 */	NdrFcShort( 0xfefa ),	/* Offset= -262 (4630) */
/* 4894 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 4896 */	NdrFcShort( 0xfef6 ),	/* Offset= -266 (4630) */
/* 4898 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4900 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 4902 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4904 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4906 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4908 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4910 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4912 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4914 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4916 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4918 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 4920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4922 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 4924 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 4926 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 4928 */	0x0 , 
			0x0,		/* 0 */
/* 4930 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4934 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4938 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 4942 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 4944 */	0x0 , 
			0x0,		/* 0 */
/* 4946 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4954 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 4956 */	NdrFcShort( 0xff9e ),	/* Offset= -98 (4858) */
/* 4958 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 4960 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 4962 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4964 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (4918) */
/* 4966 */	NdrFcShort( 0x0 ),	/* Offset= 0 (4966) */
/* 4968 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4970 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 4972 */	
			0x12, 0x0,	/* FC_UP */
/* 4974 */	NdrFcShort( 0x1c ),	/* Offset= 28 (5002) */
/* 4976 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 4978 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4980 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 4982 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 4984 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 4986 */	0x0 , 
			0x0,		/* 0 */
/* 4988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4992 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4996 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 4998 */	NdrFcShort( 0xedf6 ),	/* Offset= -4618 (380) */
/* 5000 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5002 */	
			0x17,		/* FC_CSTRUCT */
			0x7,		/* 7 */
/* 5004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5006 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (4976) */
/* 5008 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5010 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5012 */	
			0x12, 0x0,	/* FC_UP */
/* 5014 */	NdrFcShort( 0x46 ),	/* Offset= 70 (5084) */
/* 5016 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 5018 */	NdrFcShort( 0x38 ),	/* 56 */
/* 5020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5022 */	NdrFcShort( 0x10 ),	/* Offset= 16 (5038) */
/* 5024 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 5026 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 5028 */	NdrFcShort( 0xfe72 ),	/* Offset= -398 (4630) */
/* 5030 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 5032 */	NdrFcShort( 0xec64 ),	/* Offset= -5020 (12) */
/* 5034 */	0x40,		/* FC_STRUCTPAD4 */
			0xb,		/* FC_HYPER */
/* 5036 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 5038 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 5040 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 5042 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 5044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5046 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 5048 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 5050 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 5052 */	0x0 , 
			0x0,		/* 0 */
/* 5054 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5058 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5062 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 5066 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 5068 */	0x0 , 
			0x0,		/* 0 */
/* 5070 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5074 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5078 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 5080 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (5016) */
/* 5082 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5084 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 5086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5088 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (5042) */
/* 5090 */	NdrFcShort( 0x0 ),	/* Offset= 0 (5090) */
/* 5092 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5094 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5096 */	
			0x12, 0x0,	/* FC_UP */
/* 5098 */	NdrFcShort( 0x44 ),	/* Offset= 68 (5166) */
/* 5100 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 5102 */	NdrFcShort( 0x28 ),	/* 40 */
/* 5104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5106 */	NdrFcShort( 0xe ),	/* Offset= 14 (5120) */
/* 5108 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 5110 */	0x0,		/* 0 */
			NdrFcShort( 0xec15 ),	/* Offset= -5099 (12) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 5114 */	0x0,		/* 0 */
			NdrFcShort( 0xfe1b ),	/* Offset= -485 (4630) */
			0x8,		/* FC_LONG */
/* 5118 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 5120 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 5122 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 5124 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 5126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5128 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 5130 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 5132 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 5134 */	0x0 , 
			0x0,		/* 0 */
/* 5136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5144 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 5148 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 5150 */	0x0 , 
			0x0,		/* 0 */
/* 5152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5156 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5160 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 5162 */	NdrFcShort( 0xffc2 ),	/* Offset= -62 (5100) */
/* 5164 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5166 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 5168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5170 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (5124) */
/* 5172 */	NdrFcShort( 0x0 ),	/* Offset= 0 (5172) */
/* 5174 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5176 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5178 */	
			0x12, 0x0,	/* FC_UP */
/* 5180 */	NdrFcShort( 0x54 ),	/* Offset= 84 (5264) */
/* 5182 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 5184 */	NdrFcShort( 0x50 ),	/* 80 */
/* 5186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5188 */	NdrFcShort( 0x16 ),	/* Offset= 22 (5210) */
/* 5190 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 5192 */	NdrFcShort( 0xfdce ),	/* Offset= -562 (4630) */
/* 5194 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5196 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 5198 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 5200 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 5202 */	0x0,		/* 0 */
			NdrFcShort( 0xebb9 ),	/* Offset= -5191 (12) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 5206 */	0x0,		/* 0 */
			NdrFcShort( 0xebb5 ),	/* Offset= -5195 (12) */
			0x5b,		/* FC_END */
/* 5210 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 5212 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 5214 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 5216 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 5218 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 5220 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 5222 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 5224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5226 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 5228 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 5230 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 5232 */	0x0 , 
			0x0,		/* 0 */
/* 5234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5242 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 5246 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 5248 */	0x0 , 
			0x0,		/* 0 */
/* 5250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5258 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 5260 */	NdrFcShort( 0xffb2 ),	/* Offset= -78 (5182) */
/* 5262 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5264 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 5266 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5268 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (5222) */
/* 5270 */	NdrFcShort( 0x0 ),	/* Offset= 0 (5270) */
/* 5272 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 5274 */	NdrFcShort( 0xfd7c ),	/* Offset= -644 (4630) */
/* 5276 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 5278 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5280 */	
			0x12, 0x0,	/* FC_UP */
/* 5282 */	NdrFcShort( 0x70 ),	/* Offset= 112 (5394) */
/* 5284 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 5286 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5288 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 5290 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5292 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 5294 */	0x0 , 
			0x0,		/* 0 */
/* 5296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5300 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5304 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 5306 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 5308 */	NdrFcShort( 0x60 ),	/* 96 */
/* 5310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5312 */	NdrFcShort( 0x1c ),	/* Offset= 28 (5340) */
/* 5314 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 5316 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 5318 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 5320 */	0x0,		/* 0 */
			NdrFcShort( 0xfd4d ),	/* Offset= -691 (4630) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 5324 */	0x0,		/* 0 */
			NdrFcShort( 0xfd49 ),	/* Offset= -695 (4630) */
			0x8,		/* FC_LONG */
/* 5328 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 5330 */	NdrFcShort( 0xfd44 ),	/* Offset= -700 (4630) */
/* 5332 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 5334 */	NdrFcShort( 0xeb36 ),	/* Offset= -5322 (12) */
/* 5336 */	0x40,		/* FC_STRUCTPAD4 */
			0xb,		/* FC_HYPER */
/* 5338 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 5340 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 5342 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 5344 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 5346 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 5348 */	
			0x14, 0x20,	/* FC_FP [maybenull_sizeis] */
/* 5350 */	NdrFcShort( 0xffbe ),	/* Offset= -66 (5284) */
/* 5352 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 5354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5356 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 5358 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 5360 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 5362 */	0x0 , 
			0x0,		/* 0 */
/* 5364 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5372 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 5376 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 5378 */	0x0 , 
			0x0,		/* 0 */
/* 5380 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5384 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5388 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 5390 */	NdrFcShort( 0xffac ),	/* Offset= -84 (5306) */
/* 5392 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5394 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 5396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5398 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (5352) */
/* 5400 */	NdrFcShort( 0x0 ),	/* Offset= 0 (5400) */
/* 5402 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5404 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5406 */	
			0x12, 0x0,	/* FC_UP */
/* 5408 */	NdrFcShort( 0x2a ),	/* Offset= 42 (5450) */
/* 5410 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 5412 */	NdrFcShort( 0x20 ),	/* 32 */
/* 5414 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 5416 */	NdrFcShort( 0xeae4 ),	/* Offset= -5404 (12) */
/* 5418 */	0xb,		/* FC_HYPER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 5420 */	0x0,		/* 0 */
			NdrFcShort( 0xfce9 ),	/* Offset= -791 (4630) */
			0x5b,		/* FC_END */
/* 5424 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 5426 */	NdrFcShort( 0x20 ),	/* 32 */
/* 5428 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 5430 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 5432 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 5434 */	0x0 , 
			0x0,		/* 0 */
/* 5436 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5444 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 5446 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (5410) */
/* 5448 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5450 */	
			0x17,		/* FC_CSTRUCT */
			0x7,		/* 7 */
/* 5452 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5454 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (5424) */
/* 5456 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5458 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5460 */	
			0x12, 0x0,	/* FC_UP */
/* 5462 */	NdrFcShort( 0x44 ),	/* Offset= 68 (5530) */
/* 5464 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 5466 */	NdrFcShort( 0x28 ),	/* 40 */
/* 5468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5470 */	NdrFcShort( 0xe ),	/* Offset= 14 (5484) */
/* 5472 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 5474 */	NdrFcShort( 0xeaaa ),	/* Offset= -5462 (12) */
/* 5476 */	0xb,		/* FC_HYPER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 5478 */	0x0,		/* 0 */
			NdrFcShort( 0xfcaf ),	/* Offset= -849 (4630) */
			0x36,		/* FC_POINTER */
/* 5482 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5484 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 5486 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 5488 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 5490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5492 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 5494 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 5496 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 5498 */	0x0 , 
			0x0,		/* 0 */
/* 5500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5504 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5508 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 5512 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 5514 */	0x0 , 
			0x0,		/* 0 */
/* 5516 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5524 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 5526 */	NdrFcShort( 0xffc2 ),	/* Offset= -62 (5464) */
/* 5528 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5530 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 5532 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5534 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (5488) */
/* 5536 */	NdrFcShort( 0x0 ),	/* Offset= 0 (5536) */
/* 5538 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5540 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5542 */	
			0x12, 0x0,	/* FC_UP */
/* 5544 */	NdrFcShort( 0x4c ),	/* Offset= 76 (5620) */
/* 5546 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 5548 */	NdrFcShort( 0x40 ),	/* 64 */
/* 5550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5552 */	NdrFcShort( 0x12 ),	/* Offset= 18 (5570) */
/* 5554 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 5556 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 5558 */	NdrFcShort( 0xfc60 ),	/* Offset= -928 (4630) */
/* 5560 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 5562 */	NdrFcShort( 0xea52 ),	/* Offset= -5550 (12) */
/* 5564 */	0x40,		/* FC_STRUCTPAD4 */
			0xb,		/* FC_HYPER */
/* 5566 */	0xb,		/* FC_HYPER */
			0x36,		/* FC_POINTER */
/* 5568 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5570 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 5572 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 5574 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 5576 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 5578 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 5580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5582 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 5584 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 5586 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 5588 */	0x0 , 
			0x0,		/* 0 */
/* 5590 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5594 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5598 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 5602 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 5604 */	0x0 , 
			0x0,		/* 0 */
/* 5606 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5610 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5614 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 5616 */	NdrFcShort( 0xffba ),	/* Offset= -70 (5546) */
/* 5618 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5620 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 5622 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5624 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (5578) */
/* 5626 */	NdrFcShort( 0x0 ),	/* Offset= 0 (5626) */
/* 5628 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5630 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5632 */	
			0x12, 0x0,	/* FC_UP */
/* 5634 */	NdrFcShort( 0x60 ),	/* Offset= 96 (5730) */
/* 5636 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 5638 */	NdrFcShort( 0x68 ),	/* 104 */
/* 5640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5642 */	NdrFcShort( 0x1e ),	/* Offset= 30 (5672) */
/* 5644 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 5646 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 5648 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 5650 */	0x0,		/* 0 */
			NdrFcShort( 0xfc03 ),	/* Offset= -1021 (4630) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 5654 */	0x0,		/* 0 */
			NdrFcShort( 0xfbff ),	/* Offset= -1025 (4630) */
			0x8,		/* FC_LONG */
/* 5658 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 5660 */	NdrFcShort( 0xfbfa ),	/* Offset= -1030 (4630) */
/* 5662 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 5664 */	NdrFcShort( 0xe9ec ),	/* Offset= -5652 (12) */
/* 5666 */	0x40,		/* FC_STRUCTPAD4 */
			0xb,		/* FC_HYPER */
/* 5668 */	0xb,		/* FC_HYPER */
			0x36,		/* FC_POINTER */
/* 5670 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5672 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 5674 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 5676 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 5678 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 5680 */	
			0x14, 0x20,	/* FC_FP [maybenull_sizeis] */
/* 5682 */	NdrFcShort( 0xfe72 ),	/* Offset= -398 (5284) */
/* 5684 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 5686 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 5688 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 5690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5692 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 5694 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 5696 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 5698 */	0x0 , 
			0x0,		/* 0 */
/* 5700 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5708 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 5712 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 5714 */	0x0 , 
			0x0,		/* 0 */
/* 5716 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5720 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5724 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 5726 */	NdrFcShort( 0xffa6 ),	/* Offset= -90 (5636) */
/* 5728 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5730 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 5732 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5734 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (5688) */
/* 5736 */	NdrFcShort( 0x0 ),	/* Offset= 0 (5736) */
/* 5738 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5740 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5742 */	
			0x12, 0x0,	/* FC_UP */
/* 5744 */	NdrFcShort( 0x44 ),	/* Offset= 68 (5812) */
/* 5746 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 5748 */	NdrFcShort( 0x30 ),	/* 48 */
/* 5750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5752 */	NdrFcShort( 0xe ),	/* Offset= 14 (5766) */
/* 5754 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 5756 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5758 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5760 */	0x40,		/* FC_STRUCTPAD4 */
			0xb,		/* FC_HYPER */
/* 5762 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 5764 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5766 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 5768 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 5770 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 5772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5774 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 5776 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 5778 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 5780 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 5782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5786 */	NdrFcLong( 0x100 ),	/* 256 */
/* 5790 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 5794 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 5796 */	0x0 , 
			0x0,		/* 0 */
/* 5798 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5802 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5806 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 5808 */	NdrFcShort( 0xffc2 ),	/* Offset= -62 (5746) */
/* 5810 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5812 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 5814 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5816 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (5770) */
/* 5818 */	NdrFcShort( 0x0 ),	/* Offset= 0 (5818) */
/* 5820 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5822 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5824 */	
			0x12, 0x0,	/* FC_UP */
/* 5826 */	NdrFcShort( 0xeade ),	/* Offset= -5410 (416) */
/* 5828 */	
			0x12, 0x0,	/* FC_UP */
/* 5830 */	NdrFcShort( 0x2c ),	/* Offset= 44 (5874) */
/* 5832 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 5834 */	NdrFcShort( 0x30 ),	/* 48 */
/* 5836 */	0xb,		/* FC_HYPER */
			0x8,		/* FC_LONG */
/* 5838 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 5840 */	0x0,		/* 0 */
			NdrFcShort( 0xe93b ),	/* Offset= -5829 (12) */
			0xb,		/* FC_HYPER */
/* 5844 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5846 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5848 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 5850 */	NdrFcShort( 0x30 ),	/* 48 */
/* 5852 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 5854 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 5856 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 5858 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 5860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5864 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 5868 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 5870 */	NdrFcShort( 0xffda ),	/* Offset= -38 (5832) */
/* 5872 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5874 */	
			0x17,		/* FC_CSTRUCT */
			0x7,		/* 7 */
/* 5876 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5878 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (5848) */
/* 5880 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 5882 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 5884 */	
			0x11, 0x0,	/* FC_RP */
/* 5886 */	NdrFcShort( 0x2 ),	/* Offset= 2 (5888) */
/* 5888 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 5890 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 5892 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5894 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 5896 */	0x0 , 
			0x0,		/* 0 */
/* 5898 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5906 */	NdrFcShort( 0x2 ),	/* Offset= 2 (5908) */
/* 5908 */	NdrFcShort( 0x60 ),	/* 96 */
/* 5910 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5912 */	NdrFcLong( 0x1 ),	/* 1 */
/* 5916 */	NdrFcShort( 0x46 ),	/* Offset= 70 (5986) */
/* 5918 */	NdrFcShort( 0xffff ),	/* Offset= -1 (5917) */
/* 5920 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 5922 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5924 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 5926 */	NdrFcShort( 0x20 ),	/* 32 */
/* 5928 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 5930 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 5932 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5936 */	NdrFcLong( 0x100 ),	/* 256 */
/* 5940 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 5942 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 5944 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5946 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 5948 */	NdrFcShort( 0x30 ),	/* 48 */
/* 5950 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 5952 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 5954 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5958 */	NdrFcLong( 0x100 ),	/* 256 */
/* 5962 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 5964 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 5966 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5968 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 5970 */	NdrFcShort( 0x40 ),	/* 64 */
/* 5972 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 5974 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 5976 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5980 */	NdrFcLong( 0x100 ),	/* 256 */
/* 5984 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 5986 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 5988 */	NdrFcShort( 0x60 ),	/* 96 */
/* 5990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5992 */	NdrFcShort( 0x14 ),	/* Offset= 20 (6012) */
/* 5994 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 5996 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 5998 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 6000 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 6002 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 6004 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 6006 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 6008 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 6010 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 6012 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6014 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6016 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6018 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6020 */	
			0x14, 0x8,	/* FC_FP [simple_pointer] */
/* 6022 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6024 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 6026 */	NdrFcShort( 0xff96 ),	/* Offset= -106 (5920) */
/* 6028 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 6030 */	NdrFcShort( 0xffa8 ),	/* Offset= -88 (5942) */
/* 6032 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 6034 */	NdrFcShort( 0xffba ),	/* Offset= -70 (5964) */
/* 6036 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6038 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6040 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6042 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6044 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 6046 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6048) */
/* 6048 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 6050 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 6052 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6054 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 6056 */	0x0 , 
			0x0,		/* 0 */
/* 6058 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6062 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6066 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6068) */
/* 6068 */	NdrFcShort( 0x4 ),	/* 4 */
/* 6070 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6072 */	NdrFcLong( 0x1 ),	/* 1 */
/* 6076 */	NdrFcShort( 0xf4c4 ),	/* Offset= -2876 (3200) */
/* 6078 */	NdrFcShort( 0xffff ),	/* Offset= -1 (6077) */
/* 6080 */	
			0x11, 0x0,	/* FC_RP */
/* 6082 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6084) */
/* 6084 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 6086 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 6088 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6090 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 6092 */	0x0 , 
			0x0,		/* 0 */
/* 6094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6098 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6102 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6104) */
/* 6104 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6106 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6108 */	NdrFcLong( 0x1 ),	/* 1 */
/* 6112 */	NdrFcShort( 0x2e ),	/* Offset= 46 (6158) */
/* 6114 */	NdrFcShort( 0xffff ),	/* Offset= -1 (6113) */
/* 6116 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 6118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6120 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 6122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6124 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 6126 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 6128 */	NdrFcLong( 0x1 ),	/* 1 */
/* 6132 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 6136 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 6140 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 6142 */	0x0 , 
			0x0,		/* 0 */
/* 6144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6148 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6152 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 6154 */	NdrFcShort( 0xf05e ),	/* Offset= -4002 (2152) */
/* 6156 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 6158 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 6160 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6164 */	NdrFcShort( 0x6 ),	/* Offset= 6 (6170) */
/* 6166 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 6168 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 6170 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 6172 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (6116) */
/* 6174 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 6176 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6178) */
/* 6178 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 6180 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 6182 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6184 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 6186 */	0x0 , 
			0x0,		/* 0 */
/* 6188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6192 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6196 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6198) */
/* 6198 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6200 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6202 */	NdrFcLong( 0x1 ),	/* 1 */
/* 6206 */	NdrFcShort( 0x2e ),	/* Offset= 46 (6252) */
/* 6208 */	NdrFcShort( 0xffff ),	/* Offset= -1 (6207) */
/* 6210 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 6212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6214 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 6216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6218 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 6220 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 6222 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6226 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 6230 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 6234 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 6236 */	0x0 , 
			0x0,		/* 0 */
/* 6238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6246 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 6248 */	NdrFcShort( 0xf0a8 ),	/* Offset= -3928 (2320) */
/* 6250 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 6252 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 6254 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6258 */	NdrFcShort( 0x6 ),	/* Offset= 6 (6264) */
/* 6260 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 6262 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 6264 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 6266 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (6210) */
/* 6268 */	
			0x11, 0x0,	/* FC_RP */
/* 6270 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6272) */
/* 6272 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 6274 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 6276 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6278 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 6280 */	0x0 , 
			0x0,		/* 0 */
/* 6282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6290 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6292) */
/* 6292 */	NdrFcShort( 0x20 ),	/* 32 */
/* 6294 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6296 */	NdrFcLong( 0x1 ),	/* 1 */
/* 6300 */	NdrFcShort( 0x4 ),	/* Offset= 4 (6304) */
/* 6302 */	NdrFcShort( 0xffff ),	/* Offset= -1 (6301) */
/* 6304 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 6306 */	NdrFcShort( 0x20 ),	/* 32 */
/* 6308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6310 */	NdrFcShort( 0xa ),	/* Offset= 10 (6320) */
/* 6312 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 6314 */	0x0,		/* 0 */
			NdrFcShort( 0xe761 ),	/* Offset= -6303 (12) */
			0x8,		/* FC_LONG */
/* 6318 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 6320 */	
			0x11, 0x0,	/* FC_RP */
/* 6322 */	NdrFcShort( 0xe7ea ),	/* Offset= -6166 (156) */
/* 6324 */	
			0x11, 0x0,	/* FC_RP */
/* 6326 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6328) */
/* 6328 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 6330 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 6332 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6334 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 6336 */	0x0 , 
			0x0,		/* 0 */
/* 6338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6346 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6348) */
/* 6348 */	NdrFcShort( 0x38 ),	/* 56 */
/* 6350 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6352 */	NdrFcLong( 0x1 ),	/* 1 */
/* 6356 */	NdrFcShort( 0xa ),	/* Offset= 10 (6366) */
/* 6358 */	NdrFcShort( 0xffff ),	/* Offset= -1 (6357) */
/* 6360 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 6362 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6364 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 6366 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 6368 */	NdrFcShort( 0x38 ),	/* 56 */
/* 6370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6372 */	NdrFcShort( 0x10 ),	/* Offset= 16 (6388) */
/* 6374 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 6376 */	NdrFcShort( 0xe724 ),	/* Offset= -6364 (12) */
/* 6378 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 6380 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 6382 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 6384 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (6360) */
/* 6386 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 6388 */	
			0x12, 0x0,	/* FC_UP */
/* 6390 */	NdrFcShort( 0xe7a6 ),	/* Offset= -6234 (156) */
/* 6392 */	
			0x12, 0x0,	/* FC_UP */
/* 6394 */	NdrFcShort( 0xe8a6 ),	/* Offset= -5978 (416) */
/* 6396 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 6398 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6400) */
/* 6400 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 6402 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 6404 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6406 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 6408 */	0x0 , 
			0x0,		/* 0 */
/* 6410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6418 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6420) */
/* 6420 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6422 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6424 */	NdrFcLong( 0x1 ),	/* 1 */
/* 6428 */	NdrFcShort( 0x2e ),	/* Offset= 46 (6474) */
/* 6430 */	NdrFcShort( 0xffff ),	/* Offset= -1 (6429) */
/* 6432 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 6434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6436 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 6438 */	NdrFcShort( 0x4 ),	/* 4 */
/* 6440 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 6442 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 6444 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6448 */	NdrFcLong( 0xa00000 ),	/* 10485760 */
/* 6452 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 6456 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 6458 */	0x0 , 
			0x0,		/* 0 */
/* 6460 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6468 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 6470 */	NdrFcShort( 0xe6c6 ),	/* Offset= -6458 (12) */
/* 6472 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 6474 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 6476 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6480 */	NdrFcShort( 0x6 ),	/* Offset= 6 (6486) */
/* 6482 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 6484 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 6486 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 6488 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (6432) */
/* 6490 */	
			0x11, 0x0,	/* FC_RP */
/* 6492 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6494) */
/* 6494 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 6496 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 6498 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6500 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 6502 */	0x0 , 
			0x0,		/* 0 */
/* 6504 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6508 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6512 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6514) */
/* 6514 */	NdrFcShort( 0x20 ),	/* 32 */
/* 6516 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6518 */	NdrFcLong( 0x1 ),	/* 1 */
/* 6522 */	NdrFcShort( 0x2e ),	/* Offset= 46 (6568) */
/* 6524 */	NdrFcShort( 0xffff ),	/* Offset= -1 (6523) */
/* 6526 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 6528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6530 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 6532 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6534 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 6536 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 6538 */	NdrFcLong( 0x1 ),	/* 1 */
/* 6542 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 6546 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 6550 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 6552 */	0x0 , 
			0x0,		/* 0 */
/* 6554 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6558 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6562 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6564 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6566 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 6568 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 6570 */	NdrFcShort( 0x20 ),	/* 32 */
/* 6572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6574 */	NdrFcShort( 0xa ),	/* Offset= 10 (6584) */
/* 6576 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 6578 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 6580 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 6582 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 6584 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6586 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6588 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 6590 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (6526) */
/* 6592 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 6594 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6596) */
/* 6596 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 6598 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 6600 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6602 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 6604 */	0x0 , 
			0x0,		/* 0 */
/* 6606 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6610 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6614 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6616) */
/* 6616 */	NdrFcShort( 0x18 ),	/* 24 */
/* 6618 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6620 */	NdrFcLong( 0x1 ),	/* 1 */
/* 6624 */	NdrFcShort( 0x2e ),	/* Offset= 46 (6670) */
/* 6626 */	NdrFcShort( 0xffff ),	/* Offset= -1 (6625) */
/* 6628 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 6630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6632 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 6634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6636 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 6638 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 6640 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6644 */	NdrFcLong( 0x2710 ),	/* 10000 */
/* 6648 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 6652 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 6654 */	0x0 , 
			0x0,		/* 0 */
/* 6656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6660 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6664 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 6666 */	NdrFcShort( 0xf80c ),	/* Offset= -2036 (4630) */
/* 6668 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 6670 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 6672 */	NdrFcShort( 0x18 ),	/* 24 */
/* 6674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6676 */	NdrFcShort( 0x8 ),	/* Offset= 8 (6684) */
/* 6678 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 6680 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 6682 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 6684 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 6686 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (6628) */
/* 6688 */	
			0x11, 0x0,	/* FC_RP */
/* 6690 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6692) */
/* 6692 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 6694 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 6696 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6698 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 6700 */	0x0 , 
			0x0,		/* 0 */
/* 6702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6710 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6712) */
/* 6712 */	NdrFcShort( 0x4 ),	/* 4 */
/* 6714 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6716 */	NdrFcLong( 0x1 ),	/* 1 */
/* 6720 */	NdrFcShort( 0xf240 ),	/* Offset= -3520 (3200) */
/* 6722 */	NdrFcShort( 0xffff ),	/* Offset= -1 (6721) */
/* 6724 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 6726 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6728) */
/* 6728 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 6730 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 6732 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6734 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 6736 */	0x0 , 
			0x0,		/* 0 */
/* 6738 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6746 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6748) */
/* 6748 */	NdrFcShort( 0x4 ),	/* 4 */
/* 6750 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6752 */	NdrFcLong( 0x1 ),	/* 1 */
/* 6756 */	NdrFcShort( 0xf21c ),	/* Offset= -3556 (3200) */
/* 6758 */	NdrFcShort( 0xffff ),	/* Offset= -1 (6757) */
/* 6760 */	
			0x11, 0x0,	/* FC_RP */
/* 6762 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6764) */
/* 6764 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 6766 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 6768 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6770 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 6772 */	0x0 , 
			0x0,		/* 0 */
/* 6774 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6778 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6782 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6784) */
/* 6784 */	NdrFcShort( 0x20 ),	/* 32 */
/* 6786 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6788 */	NdrFcLong( 0x1 ),	/* 1 */
/* 6792 */	NdrFcShort( 0x4 ),	/* Offset= 4 (6796) */
/* 6794 */	NdrFcShort( 0xffff ),	/* Offset= -1 (6793) */
/* 6796 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 6798 */	NdrFcShort( 0x20 ),	/* 32 */
/* 6800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6802 */	NdrFcShort( 0xa ),	/* Offset= 10 (6812) */
/* 6804 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 6806 */	0x0,		/* 0 */
			NdrFcShort( 0xe575 ),	/* Offset= -6795 (12) */
			0x40,		/* FC_STRUCTPAD4 */
/* 6810 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 6812 */	
			0x11, 0x0,	/* FC_RP */
/* 6814 */	NdrFcShort( 0xe5fe ),	/* Offset= -6658 (156) */
/* 6816 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 6818 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6820) */
/* 6820 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 6822 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 6824 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6826 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 6828 */	0x0 , 
			0x0,		/* 0 */
/* 6830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6838 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6840) */
/* 6840 */	NdrFcShort( 0x4 ),	/* 4 */
/* 6842 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6844 */	NdrFcLong( 0x1 ),	/* 1 */
/* 6848 */	NdrFcShort( 0xf1c0 ),	/* Offset= -3648 (3200) */
/* 6850 */	NdrFcShort( 0xffff ),	/* Offset= -1 (6849) */
/* 6852 */	
			0x11, 0x0,	/* FC_RP */
/* 6854 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6856) */
/* 6856 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 6858 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 6860 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6862 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 6864 */	0x0 , 
			0x0,		/* 0 */
/* 6866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6870 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6874 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6876) */
/* 6876 */	NdrFcShort( 0x20 ),	/* 32 */
/* 6878 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6880 */	NdrFcLong( 0x1 ),	/* 1 */
/* 6884 */	NdrFcShort( 0x4 ),	/* Offset= 4 (6888) */
/* 6886 */	NdrFcShort( 0xffff ),	/* Offset= -1 (6885) */
/* 6888 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 6890 */	NdrFcShort( 0x20 ),	/* 32 */
/* 6892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6894 */	NdrFcShort( 0xa ),	/* Offset= 10 (6904) */
/* 6896 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 6898 */	0x0,		/* 0 */
			NdrFcShort( 0xe519 ),	/* Offset= -6887 (12) */
			0x40,		/* FC_STRUCTPAD4 */
/* 6902 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 6904 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 6906 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 6908 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 6910 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6912) */
/* 6912 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 6914 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 6916 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6918 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 6920 */	0x0 , 
			0x0,		/* 0 */
/* 6922 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6926 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6930 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6932) */
/* 6932 */	NdrFcShort( 0xc ),	/* 12 */
/* 6934 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6936 */	NdrFcLong( 0x1 ),	/* 1 */
/* 6940 */	NdrFcShort( 0x4 ),	/* Offset= 4 (6944) */
/* 6942 */	NdrFcShort( 0xffff ),	/* Offset= -1 (6941) */
/* 6944 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 6946 */	NdrFcShort( 0xc ),	/* 12 */
/* 6948 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 6950 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 6952 */	
			0x11, 0x0,	/* FC_RP */
/* 6954 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6956) */
/* 6956 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 6958 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 6960 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6962 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 6964 */	0x0 , 
			0x0,		/* 0 */
/* 6966 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6970 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6974 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6976) */
/* 6976 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6978 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6980 */	NdrFcLong( 0x1 ),	/* 1 */
/* 6984 */	NdrFcShort( 0x4 ),	/* Offset= 4 (6988) */
/* 6986 */	NdrFcShort( 0xffff ),	/* Offset= -1 (6985) */
/* 6988 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 6990 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6994 */	NdrFcShort( 0x6 ),	/* Offset= 6 (7000) */
/* 6996 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 6998 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 7000 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 7002 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 7004 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 7006 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 7008 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 7010 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7012) */
/* 7012 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 7014 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 7016 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7018 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 7020 */	0x0 , 
			0x0,		/* 0 */
/* 7022 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7026 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7030 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7032) */
/* 7032 */	NdrFcShort( 0x20 ),	/* 32 */
/* 7034 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7036 */	NdrFcLong( 0x1 ),	/* 1 */
/* 7040 */	NdrFcShort( 0x1a ),	/* Offset= 26 (7066) */
/* 7042 */	NdrFcShort( 0xffff ),	/* Offset= -1 (7041) */
/* 7044 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 7046 */	NdrFcShort( 0x2 ),	/* 2 */
/* 7048 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 7050 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7052 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 7054 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 7056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7060 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 7064 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 7066 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 7068 */	NdrFcShort( 0x20 ),	/* 32 */
/* 7070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7072 */	NdrFcShort( 0x8 ),	/* Offset= 8 (7080) */
/* 7074 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 7076 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 7078 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 7080 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 7082 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 7084 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 7086 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 7088 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 7090 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (7044) */
/* 7092 */	
			0x11, 0x0,	/* FC_RP */
/* 7094 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7096) */
/* 7096 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 7098 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 7100 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7102 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 7104 */	0x0 , 
			0x0,		/* 0 */
/* 7106 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7114 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7116) */
/* 7116 */	NdrFcShort( 0x18 ),	/* 24 */
/* 7118 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7120 */	NdrFcLong( 0x1 ),	/* 1 */
/* 7124 */	NdrFcShort( 0x1a ),	/* Offset= 26 (7150) */
/* 7126 */	NdrFcShort( 0xffff ),	/* Offset= -1 (7125) */
/* 7128 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 7130 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7132 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 7134 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7136 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 7138 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 7140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7144 */	NdrFcLong( 0xffff ),	/* 65535 */
/* 7148 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 7150 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 7152 */	NdrFcShort( 0x18 ),	/* 24 */
/* 7154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7156 */	NdrFcShort( 0x8 ),	/* Offset= 8 (7164) */
/* 7158 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 7160 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 7162 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 7164 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 7166 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 7168 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 7170 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (7128) */
/* 7172 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 7174 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7176) */
/* 7176 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 7178 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 7180 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7182 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 7184 */	0x0 , 
			0x0,		/* 0 */
/* 7186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7194 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7196) */
/* 7196 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7198 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7200 */	NdrFcLong( 0x1 ),	/* 1 */
/* 7204 */	NdrFcShort( 0xf05c ),	/* Offset= -4004 (3200) */
/* 7206 */	NdrFcShort( 0xffff ),	/* Offset= -1 (7205) */
/* 7208 */	
			0x11, 0x0,	/* FC_RP */
/* 7210 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7212) */
/* 7212 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 7214 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 7216 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7218 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 7220 */	0x0 , 
			0x0,		/* 0 */
/* 7222 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7230 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7232) */
/* 7232 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7234 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7236 */	NdrFcLong( 0x1 ),	/* 1 */
/* 7240 */	NdrFcShort( 0x4 ),	/* Offset= 4 (7244) */
/* 7242 */	NdrFcShort( 0xffff ),	/* Offset= -1 (7241) */
/* 7244 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 7246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7250 */	NdrFcShort( 0x4 ),	/* Offset= 4 (7254) */
/* 7252 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 7254 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 7256 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 7258 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 7260 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7262) */
/* 7262 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 7264 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 7266 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7268 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 7270 */	0x0 , 
			0x0,		/* 0 */
/* 7272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7276 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7280 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7282) */
/* 7282 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7284 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7286 */	NdrFcLong( 0x1 ),	/* 1 */
/* 7290 */	NdrFcShort( 0x1a ),	/* Offset= 26 (7316) */
/* 7292 */	NdrFcShort( 0xffff ),	/* Offset= -1 (7291) */
/* 7294 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 7296 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7298 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 7300 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7302 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 7304 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 7306 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7310 */	NdrFcLong( 0xffff ),	/* 65535 */
/* 7314 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 7316 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 7318 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7322 */	NdrFcShort( 0x6 ),	/* Offset= 6 (7328) */
/* 7324 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 7326 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 7328 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 7330 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (7294) */
/* 7332 */	
			0x11, 0x0,	/* FC_RP */
/* 7334 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7336) */
/* 7336 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 7338 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 7340 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7342 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 7344 */	0x0 , 
			0x0,		/* 0 */
/* 7346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7354 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7356) */
/* 7356 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7358 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7360 */	NdrFcLong( 0x1 ),	/* 1 */
/* 7364 */	NdrFcShort( 0xefbc ),	/* Offset= -4164 (3200) */
/* 7366 */	NdrFcShort( 0xffff ),	/* Offset= -1 (7365) */
/* 7368 */	
			0x11, 0x0,	/* FC_RP */
/* 7370 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7372) */
/* 7372 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 7374 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 7376 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7378 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 7380 */	0x0 , 
			0x0,		/* 0 */
/* 7382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7390 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7392) */
/* 7392 */	NdrFcShort( 0x40 ),	/* 64 */
/* 7394 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7396 */	NdrFcLong( 0x1 ),	/* 1 */
/* 7400 */	NdrFcShort( 0x46 ),	/* Offset= 70 (7470) */
/* 7402 */	NdrFcShort( 0xffff ),	/* Offset= -1 (7401) */
/* 7404 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 7406 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7408 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 7410 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7412 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 7414 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 7416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7420 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 7424 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 7426 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 7428 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7430 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 7432 */	NdrFcShort( 0x20 ),	/* 32 */
/* 7434 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 7436 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 7438 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7442 */	NdrFcLong( 0xa00000 ),	/* 10485760 */
/* 7446 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 7448 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 7450 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7452 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 7454 */	NdrFcShort( 0x30 ),	/* 48 */
/* 7456 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 7458 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 7460 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7464 */	NdrFcLong( 0xa00000 ),	/* 10485760 */
/* 7468 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 7470 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 7472 */	NdrFcShort( 0x40 ),	/* 64 */
/* 7474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7476 */	NdrFcShort( 0x10 ),	/* Offset= 16 (7492) */
/* 7478 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 7480 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 7482 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 7484 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 7486 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 7488 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 7490 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 7492 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 7494 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 7496 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 7498 */	NdrFcShort( 0xffa2 ),	/* Offset= -94 (7404) */
/* 7500 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 7502 */	NdrFcShort( 0xffb4 ),	/* Offset= -76 (7426) */
/* 7504 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 7506 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (7448) */
/* 7508 */	
			0x11, 0x0,	/* FC_RP */
/* 7510 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7512) */
/* 7512 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 7514 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 7516 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7518 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 7520 */	0x0 , 
			0x0,		/* 0 */
/* 7522 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7526 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7530 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7532) */
/* 7532 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7534 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7536 */	NdrFcLong( 0x1 ),	/* 1 */
/* 7540 */	NdrFcShort( 0x1a ),	/* Offset= 26 (7566) */
/* 7542 */	NdrFcShort( 0xffff ),	/* Offset= -1 (7541) */
/* 7544 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 7546 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7548 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 7550 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7552 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 7554 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 7556 */	NdrFcLong( 0x1 ),	/* 1 */
/* 7560 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 7564 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 7566 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 7568 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7572 */	NdrFcShort( 0x6 ),	/* Offset= 6 (7578) */
/* 7574 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 7576 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 7578 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 7580 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (7544) */
/* 7582 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 7584 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7586) */
/* 7586 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 7588 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 7590 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7592 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 7594 */	0x0 , 
			0x0,		/* 0 */
/* 7596 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7600 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7604 */	NdrFcShort( 0x2 ),	/* Offset= 2 (7606) */
/* 7606 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7608 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7610 */	NdrFcLong( 0x1 ),	/* 1 */
/* 7614 */	NdrFcShort( 0x4 ),	/* Offset= 4 (7618) */
/* 7616 */	NdrFcShort( 0xffff ),	/* Offset= -1 (7615) */
/* 7618 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 7620 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7624 */	NdrFcShort( 0x6 ),	/* Offset= 6 (7630) */
/* 7626 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 7628 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 7630 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 7632 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const unsigned short drsuapi_FormatStringOffsetTable[] =
    {
    0,
    60,
    104,
    160,
    228,
    284,
    340,
    396,
    452,
    520,
    588,
    656,
    724,
    792,
    860,
    928,
    996,
    1064,
    1132,
    1188,
    1256,
    1324,
    1392,
    1448,
    1516,
    1584,
    1652,
    1720,
    1788,
    1856,
    1924
    };


static const unsigned short dsaop_FormatStringOffsetTable[] =
    {
    1992,
    2052
    };



#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for drsr.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)




#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif


#include "ndr64types.h"
#include "pshpack8.h"


typedef 
NDR64_FORMAT_CHAR
__midl_frag907_t;
extern const __midl_frag907_t __midl_frag907;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag906_t;
extern const __midl_frag906_t __midl_frag906;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag905_t;
extern const __midl_frag905_t __midl_frag905;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag904_t;
extern const __midl_frag904_t __midl_frag904;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_OPERATOR frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag903_t;
extern const __midl_frag903_t __midl_frag903;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag902_t;
extern const __midl_frag902_t __midl_frag902;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag901_t;
extern const __midl_frag901_t __midl_frag901;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag899_t;
extern const __midl_frag899_t __midl_frag899;

typedef 
NDR64_FORMAT_CHAR
__midl_frag898_t;
extern const __midl_frag898_t __midl_frag898;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag897_t;
extern const __midl_frag897_t __midl_frag897;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag896_t;
extern const __midl_frag896_t __midl_frag896;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag895_t;
extern const __midl_frag895_t __midl_frag895;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag894_t;
extern const __midl_frag894_t __midl_frag894;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag893_t;
extern const __midl_frag893_t __midl_frag893;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag892_t;
extern const __midl_frag892_t __midl_frag892;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag890_t;
extern const __midl_frag890_t __midl_frag890;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
}
__midl_frag888_t;
extern const __midl_frag888_t __midl_frag888;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag886_t;
extern const __midl_frag886_t __midl_frag886;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag885_t;
extern const __midl_frag885_t __midl_frag885;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag883_t;
extern const __midl_frag883_t __midl_frag883;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag882_t;
extern const __midl_frag882_t __midl_frag882;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag880_t;
extern const __midl_frag880_t __midl_frag880;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag879_t;
extern const __midl_frag879_t __midl_frag879;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_MEMPAD_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_MEMPAD_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_MEMPAD_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
    } frag2;
}
__midl_frag877_t;
extern const __midl_frag877_t __midl_frag877;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag875_t;
extern const __midl_frag875_t __midl_frag875;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag874_t;
extern const __midl_frag874_t __midl_frag874;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag871_t;
extern const __midl_frag871_t __midl_frag871;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag869_t;
extern const __midl_frag869_t __midl_frag869;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag868_t;
extern const __midl_frag868_t __midl_frag868;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag866_t;
extern const __midl_frag866_t __midl_frag866;

typedef 
NDR64_FORMAT_CHAR
__midl_frag864_t;
extern const __midl_frag864_t __midl_frag864;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag863_t;
extern const __midl_frag863_t __midl_frag863;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag862_t;
extern const __midl_frag862_t __midl_frag862;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag861_t;
extern const __midl_frag861_t __midl_frag861;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag859_t;
extern const __midl_frag859_t __midl_frag859;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag858_t;
extern const __midl_frag858_t __midl_frag858;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag854_t;
extern const __midl_frag854_t __midl_frag854;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag852_t;
extern const __midl_frag852_t __midl_frag852;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag851_t;
extern const __midl_frag851_t __midl_frag851;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag849_t;
extern const __midl_frag849_t __midl_frag849;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag848_t;
extern const __midl_frag848_t __midl_frag848;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag844_t;
extern const __midl_frag844_t __midl_frag844;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag843_t;
extern const __midl_frag843_t __midl_frag843;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
}
__midl_frag840_t;
extern const __midl_frag840_t __midl_frag840;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag838_t;
extern const __midl_frag838_t __midl_frag838;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag837_t;
extern const __midl_frag837_t __midl_frag837;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_MEMPAD_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag835_t;
extern const __midl_frag835_t __midl_frag835;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag833_t;
extern const __midl_frag833_t __midl_frag833;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag832_t;
extern const __midl_frag832_t __midl_frag832;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag829_t;
extern const __midl_frag829_t __midl_frag829;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
}
__midl_frag827_t;
extern const __midl_frag827_t __midl_frag827;

typedef 
NDR64_FORMAT_CHAR
__midl_frag826_t;
extern const __midl_frag826_t __midl_frag826;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag824_t;
extern const __midl_frag824_t __midl_frag824;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_MEMPAD_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
    } frag2;
}
__midl_frag821_t;
extern const __midl_frag821_t __midl_frag821;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag819_t;
extern const __midl_frag819_t __midl_frag819;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag818_t;
extern const __midl_frag818_t __midl_frag818;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        NDR64_FORMAT_CHAR frag7;
    } frag2;
}
__midl_frag813_t;
extern const __midl_frag813_t __midl_frag813;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag811_t;
extern const __midl_frag811_t __midl_frag811;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag810_t;
extern const __midl_frag810_t __midl_frag810;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag807_t;
extern const __midl_frag807_t __midl_frag807;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag805_t;
extern const __midl_frag805_t __midl_frag805;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag803_t;
extern const __midl_frag803_t __midl_frag803;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag802_t;
extern const __midl_frag802_t __midl_frag802;

typedef 
struct 
{
    struct _NDR64_FIX_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag799_t;
extern const __midl_frag799_t __midl_frag799;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag5;
        struct _NDR64_MEMPAD_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
    } frag2;
}
__midl_frag796_t;
extern const __midl_frag796_t __midl_frag796;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag794_t;
extern const __midl_frag794_t __midl_frag794;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag793_t;
extern const __midl_frag793_t __midl_frag793;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag790_t;
extern const __midl_frag790_t __midl_frag790;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag781_t;
extern const __midl_frag781_t __midl_frag781;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag5;
        struct _NDR64_MEMPAD_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
    } frag2;
}
__midl_frag780_t;
extern const __midl_frag780_t __midl_frag780;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag778_t;
extern const __midl_frag778_t __midl_frag778;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag777_t;
extern const __midl_frag777_t __midl_frag777;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag774_t;
extern const __midl_frag774_t __midl_frag774;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag760_t;
extern const __midl_frag760_t __midl_frag760;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag758_t;
extern const __midl_frag758_t __midl_frag758;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag757_t;
extern const __midl_frag757_t __midl_frag757;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag756_t;
extern const __midl_frag756_t __midl_frag756;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag755_t;
extern const __midl_frag755_t __midl_frag755;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_MEMPAD_FORMAT frag5;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
    } frag2;
}
__midl_frag754_t;
extern const __midl_frag754_t __midl_frag754;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag752_t;
extern const __midl_frag752_t __midl_frag752;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag751_t;
extern const __midl_frag751_t __midl_frag751;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
}
__midl_frag748_t;
extern const __midl_frag748_t __midl_frag748;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag746_t;
extern const __midl_frag746_t __midl_frag746;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag745_t;
extern const __midl_frag745_t __midl_frag745;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_MEMPAD_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_MEMPAD_FORMAT frag6;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
    } frag2;
}
__midl_frag743_t;
extern const __midl_frag743_t __midl_frag743;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag741_t;
extern const __midl_frag741_t __midl_frag741;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag740_t;
extern const __midl_frag740_t __midl_frag740;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag737_t;
extern const __midl_frag737_t __midl_frag737;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag735_t;
extern const __midl_frag735_t __midl_frag735;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag734_t;
extern const __midl_frag734_t __midl_frag734;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag733_t;
extern const __midl_frag733_t __midl_frag733;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag731_t;
extern const __midl_frag731_t __midl_frag731;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag730_t;
extern const __midl_frag730_t __midl_frag730;

typedef 
struct 
{
    struct _NDR64_FIX_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag727_t;
extern const __midl_frag727_t __midl_frag727;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
}
__midl_frag725_t;
extern const __midl_frag725_t __midl_frag725;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_MEMPAD_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
    } frag2;
}
__midl_frag724_t;
extern const __midl_frag724_t __midl_frag724;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag722_t;
extern const __midl_frag722_t __midl_frag722;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag721_t;
extern const __midl_frag721_t __midl_frag721;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag718_t;
extern const __midl_frag718_t __midl_frag718;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag716_t;
extern const __midl_frag716_t __midl_frag716;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag714_t;
extern const __midl_frag714_t __midl_frag714;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag713_t;
extern const __midl_frag713_t __midl_frag713;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag710_t;
extern const __midl_frag710_t __midl_frag710;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag708_t;
extern const __midl_frag708_t __midl_frag708;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag706_t;
extern const __midl_frag706_t __midl_frag706;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag705_t;
extern const __midl_frag705_t __midl_frag705;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag703_t;
extern const __midl_frag703_t __midl_frag703;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag702_t;
extern const __midl_frag702_t __midl_frag702;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag699_t;
extern const __midl_frag699_t __midl_frag699;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag698_t;
extern const __midl_frag698_t __midl_frag698;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag697_t;
extern const __midl_frag697_t __midl_frag697;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag696_t;
extern const __midl_frag696_t __midl_frag696;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag694_t;
extern const __midl_frag694_t __midl_frag694;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag693_t;
extern const __midl_frag693_t __midl_frag693;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag690_t;
extern const __midl_frag690_t __midl_frag690;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
    struct _NDR64_POINTER_FORMAT frag5;
    struct _NDR64_POINTER_FORMAT frag6;
    struct _NDR64_POINTER_FORMAT frag7;
    struct _NDR64_POINTER_FORMAT frag8;
}
__midl_frag682_t;
extern const __midl_frag682_t __midl_frag682;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag678_t;
extern const __midl_frag678_t __midl_frag678;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag677_t;
extern const __midl_frag677_t __midl_frag677;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag675_t;
extern const __midl_frag675_t __midl_frag675;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag674_t;
extern const __midl_frag674_t __midl_frag674;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag672_t;
extern const __midl_frag672_t __midl_frag672;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag671_t;
extern const __midl_frag671_t __midl_frag671;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_MEMPAD_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_MEMPAD_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
        struct _NDR64_MEMPAD_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag15;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag16;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag17;
    } frag2;
}
__midl_frag667_t;
extern const __midl_frag667_t __midl_frag667;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag665_t;
extern const __midl_frag665_t __midl_frag665;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag664_t;
extern const __midl_frag664_t __midl_frag664;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag661_t;
extern const __midl_frag661_t __midl_frag661;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag659_t;
extern const __midl_frag659_t __midl_frag659;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag658_t;
extern const __midl_frag658_t __midl_frag658;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag656_t;
extern const __midl_frag656_t __midl_frag656;

typedef 
struct 
{
    struct _NDR64_CONF_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag655_t;
extern const __midl_frag655_t __midl_frag655;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag654_t;
extern const __midl_frag654_t __midl_frag654;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag653_t;
extern const __midl_frag653_t __midl_frag653;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_MEMPAD_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_MEMPAD_FORMAT frag10;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
    } frag2;
}
__midl_frag650_t;
extern const __midl_frag650_t __midl_frag650;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag649_t;
extern const __midl_frag649_t __midl_frag649;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag648_t;
extern const __midl_frag648_t __midl_frag648;

typedef 
struct 
{
    struct _NDR64_CONF_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
    } frag2;
}
__midl_frag647_t;
extern const __midl_frag647_t __midl_frag647;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag646_t;
extern const __midl_frag646_t __midl_frag646;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
}
__midl_frag644_t;
extern const __midl_frag644_t __midl_frag644;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag641_t;
extern const __midl_frag641_t __midl_frag641;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag640_t;
extern const __midl_frag640_t __midl_frag640;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_MEMPAD_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag15;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag16;
        struct _NDR64_MEMPAD_FORMAT frag17;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag18;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag19;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag20;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag21;
    } frag2;
}
__midl_frag637_t;
extern const __midl_frag637_t __midl_frag637;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag636_t;
extern const __midl_frag636_t __midl_frag636;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag635_t;
extern const __midl_frag635_t __midl_frag635;

typedef 
struct 
{
    struct _NDR64_CONF_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
    } frag2;
}
__midl_frag634_t;
extern const __midl_frag634_t __midl_frag634;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag633_t;
extern const __midl_frag633_t __midl_frag633;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
}
__midl_frag631_t;
extern const __midl_frag631_t __midl_frag631;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag8;
        struct _NDR64_MEMPAD_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
    } frag2;
}
__midl_frag628_t;
extern const __midl_frag628_t __midl_frag628;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag626_t;
extern const __midl_frag626_t __midl_frag626;

typedef 
struct 
{
    struct _NDR64_CONF_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
    } frag2;
}
__midl_frag625_t;
extern const __midl_frag625_t __midl_frag625;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag624_t;
extern const __midl_frag624_t __midl_frag624;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag622_t;
extern const __midl_frag622_t __midl_frag622;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag619_t;
extern const __midl_frag619_t __midl_frag619;

typedef 
struct 
{
    struct _NDR64_CONF_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct 
        {
            struct _NDR64_REPEAT_FORMAT frag1;
            struct 
            {
                struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
                struct _NDR64_POINTER_FORMAT frag2;
            } frag2;
        } frag1;
        NDR64_FORMAT_CHAR frag2;
    } frag2;
}
__midl_frag617_t;
extern const __midl_frag617_t __midl_frag617;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag616_t;
extern const __midl_frag616_t __midl_frag616;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag615_t;
extern const __midl_frag615_t __midl_frag615;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag613_t;
extern const __midl_frag613_t __midl_frag613;

typedef 
struct 
{
    struct _NDR64_CONF_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag612_t;
extern const __midl_frag612_t __midl_frag612;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag611_t;
extern const __midl_frag611_t __midl_frag611;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
}
__midl_frag609_t;
extern const __midl_frag609_t __midl_frag609;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_MEMPAD_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag15;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag16;
        struct _NDR64_MEMPAD_FORMAT frag17;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag18;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag19;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag20;
    } frag2;
}
__midl_frag603_t;
extern const __midl_frag603_t __midl_frag603;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag601_t;
extern const __midl_frag601_t __midl_frag601;

typedef 
struct 
{
    struct _NDR64_CONF_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
    } frag2;
}
__midl_frag600_t;
extern const __midl_frag600_t __midl_frag600;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag599_t;
extern const __midl_frag599_t __midl_frag599;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        struct _NDR64_NO_REPEAT_FORMAT frag7;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag8;
        struct _NDR64_POINTER_FORMAT frag9;
        NDR64_FORMAT_CHAR frag10;
    } frag2;
}
__midl_frag595_t;
extern const __midl_frag595_t __midl_frag595;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag591_t;
extern const __midl_frag591_t __midl_frag591;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag3;
            struct _NDR64_POINTER_FORMAT frag4;
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
            struct _NDR64_POINTER_FORMAT frag6;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag590_t;
extern const __midl_frag590_t __midl_frag590;

typedef 
struct 
{
    struct _NDR64_CONF_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_MEMPAD_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag589_t;
extern const __midl_frag589_t __midl_frag589;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag588_t;
extern const __midl_frag588_t __midl_frag588;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag587_t;
extern const __midl_frag587_t __midl_frag587;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag585_t;
extern const __midl_frag585_t __midl_frag585;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag582_t;
extern const __midl_frag582_t __midl_frag582;

typedef 
struct 
{
    struct _NDR64_CONF_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct 
        {
            struct _NDR64_REPEAT_FORMAT frag1;
            struct 
            {
                struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
                struct _NDR64_POINTER_FORMAT frag2;
            } frag2;
        } frag1;
        NDR64_FORMAT_CHAR frag2;
    } frag2;
}
__midl_frag580_t;
extern const __midl_frag580_t __midl_frag580;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag8;
        struct _NDR64_MEMPAD_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
    } frag2;
}
__midl_frag575_t;
extern const __midl_frag575_t __midl_frag575;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag573_t;
extern const __midl_frag573_t __midl_frag573;

typedef 
struct 
{
    struct _NDR64_CONF_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
    } frag2;
}
__midl_frag572_t;
extern const __midl_frag572_t __midl_frag572;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag571_t;
extern const __midl_frag571_t __midl_frag571;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag570_t;
extern const __midl_frag570_t __midl_frag570;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag568_t;
extern const __midl_frag568_t __midl_frag568;

typedef 
struct 
{
    struct _NDR64_CONF_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag567_t;
extern const __midl_frag567_t __midl_frag567;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag566_t;
extern const __midl_frag566_t __midl_frag566;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        struct _NDR64_NO_REPEAT_FORMAT frag7;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag8;
        struct _NDR64_POINTER_FORMAT frag9;
        struct _NDR64_NO_REPEAT_FORMAT frag10;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag11;
        struct _NDR64_POINTER_FORMAT frag12;
        NDR64_FORMAT_CHAR frag13;
    } frag2;
}
__midl_frag561_t;
extern const __midl_frag561_t __midl_frag561;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag3;
            struct _NDR64_POINTER_FORMAT frag4;
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
            struct _NDR64_POINTER_FORMAT frag6;
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag7;
            struct _NDR64_POINTER_FORMAT frag8;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag555_t;
extern const __midl_frag555_t __midl_frag555;

typedef 
struct 
{
    struct _NDR64_CONF_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct 
        {
            struct _NDR64_REPEAT_FORMAT frag1;
            struct 
            {
                struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
                struct _NDR64_POINTER_FORMAT frag2;
                struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag3;
                struct _NDR64_POINTER_FORMAT frag4;
                struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
                struct _NDR64_POINTER_FORMAT frag6;
                struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag7;
                struct _NDR64_POINTER_FORMAT frag8;
            } frag2;
        } frag1;
        NDR64_FORMAT_CHAR frag2;
    } frag2;
}
__midl_frag550_t;
extern const __midl_frag550_t __midl_frag550;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    struct _NDR64_UNION_ARM frag8;
    struct _NDR64_UNION_ARM frag9;
    struct _NDR64_UNION_ARM frag10;
    struct _NDR64_UNION_ARM frag11;
    struct _NDR64_UNION_ARM frag12;
    struct _NDR64_UNION_ARM frag13;
    struct _NDR64_UNION_ARM frag14;
    struct _NDR64_UNION_ARM frag15;
    struct _NDR64_UNION_ARM frag16;
    struct _NDR64_UNION_ARM frag17;
    NDR64_UINT32 frag18;
}
__midl_frag547_t;
extern const __midl_frag547_t __midl_frag547;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag546_t;
extern const __midl_frag546_t __midl_frag546;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
}
__midl_frag542_t;
extern const __midl_frag542_t __midl_frag542;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_MEMPAD_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
        struct _NDR64_MEMPAD_FORMAT frag13;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag14;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag15;
    } frag2;
}
__midl_frag538_t;
extern const __midl_frag538_t __midl_frag538;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
    } frag2;
}
__midl_frag534_t;
extern const __midl_frag534_t __midl_frag534;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    NDR64_UINT32 frag5;
}
__midl_frag532_t;
extern const __midl_frag532_t __midl_frag532;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag531_t;
extern const __midl_frag531_t __midl_frag531;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag528_t;
extern const __midl_frag528_t __midl_frag528;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag524_t;
extern const __midl_frag524_t __midl_frag524;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag523_t;
extern const __midl_frag523_t __midl_frag523;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag520_t;
extern const __midl_frag520_t __midl_frag520;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
}
__midl_frag518_t;
extern const __midl_frag518_t __midl_frag518;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag517_t;
extern const __midl_frag517_t __midl_frag517;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag516_t;
extern const __midl_frag516_t __midl_frag516;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag515_t;
extern const __midl_frag515_t __midl_frag515;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
}
__midl_frag511_t;
extern const __midl_frag511_t __midl_frag511;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_MEMPAD_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_MEMPAD_FORMAT frag15;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag16;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag17;
    } frag2;
}
__midl_frag509_t;
extern const __midl_frag509_t __midl_frag509;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag508_t;
extern const __midl_frag508_t __midl_frag508;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_NOOP frag2;
    struct _NDR64_EXPR_CONST64 frag3;
}
__midl_frag507_t;
extern const __midl_frag507_t __midl_frag507;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_OPERATOR frag2;
    struct _NDR64_EXPR_VAR frag3;
    struct _NDR64_EXPR_CONST64 frag4;
}
__midl_frag506_t;
extern const __midl_frag506_t __midl_frag506;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_OPERATOR frag2;
    struct _NDR64_EXPR_VAR frag3;
    struct _NDR64_EXPR_CONST64 frag4;
}
__midl_frag505_t;
extern const __midl_frag505_t __midl_frag505;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag504_t;
extern const __midl_frag504_t __midl_frag504;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_MEMPAD_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag503_t;
extern const __midl_frag503_t __midl_frag503;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        NDR64_FORMAT_CHAR frag7;
    } frag2;
}
__midl_frag502_t;
extern const __midl_frag502_t __midl_frag502;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_MEMPAD_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_MEMPAD_FORMAT frag14;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag15;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag16;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag17;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag18;
        struct _NDR64_MEMPAD_FORMAT frag19;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag20;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag21;
    } frag2;
}
__midl_frag501_t;
extern const __midl_frag501_t __midl_frag501;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag500_t;
extern const __midl_frag500_t __midl_frag500;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_MEMPAD_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
    } frag2;
}
__midl_frag499_t;
extern const __midl_frag499_t __midl_frag499;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
}
__midl_frag498_t;
extern const __midl_frag498_t __midl_frag498;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag497_t;
extern const __midl_frag497_t __midl_frag497;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag496_t;
extern const __midl_frag496_t __midl_frag496;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag495_t;
extern const __midl_frag495_t __midl_frag495;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag494_t;
extern const __midl_frag494_t __midl_frag494;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        NDR64_FORMAT_CHAR frag7;
    } frag2;
}
__midl_frag493_t;
extern const __midl_frag493_t __midl_frag493;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
    } frag2;
}
__midl_frag492_t;
extern const __midl_frag492_t __midl_frag492;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_MEMPAD_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_MEMPAD_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_MEMPAD_FORMAT frag15;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag16;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag17;
    } frag2;
}
__midl_frag491_t;
extern const __midl_frag491_t __midl_frag491;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag490_t;
extern const __midl_frag490_t __midl_frag490;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    struct _NDR64_UNION_ARM frag8;
    struct _NDR64_UNION_ARM frag9;
    NDR64_UINT32 frag10;
}
__midl_frag489_t;
extern const __midl_frag489_t __midl_frag489;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag488_t;
extern const __midl_frag488_t __midl_frag488;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag486_t;
extern const __midl_frag486_t __midl_frag486;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_MEMPAD_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_MEMPAD_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
    } frag2;
}
__midl_frag485_t;
extern const __midl_frag485_t __midl_frag485;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
}
__midl_frag484_t;
extern const __midl_frag484_t __midl_frag484;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag483_t;
extern const __midl_frag483_t __midl_frag483;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag482_t;
extern const __midl_frag482_t __midl_frag482;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag481_t;
extern const __midl_frag481_t __midl_frag481;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_MEMPAD_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
    } frag2;
}
__midl_frag480_t;
extern const __midl_frag480_t __midl_frag480;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag479_t;
extern const __midl_frag479_t __midl_frag479;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    NDR64_UINT32 frag6;
}
__midl_frag477_t;
extern const __midl_frag477_t __midl_frag477;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag476_t;
extern const __midl_frag476_t __midl_frag476;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag473_t;
extern const __midl_frag473_t __midl_frag473;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag472_t;
extern const __midl_frag472_t __midl_frag472;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        struct _NDR64_NO_REPEAT_FORMAT frag7;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag8;
        struct _NDR64_POINTER_FORMAT frag9;
        struct _NDR64_NO_REPEAT_FORMAT frag10;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag11;
        struct _NDR64_POINTER_FORMAT frag12;
        NDR64_FORMAT_CHAR frag13;
    } frag2;
}
__midl_frag471_t;
extern const __midl_frag471_t __midl_frag471;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
    } frag2;
}
__midl_frag470_t;
extern const __midl_frag470_t __midl_frag470;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        struct _NDR64_NO_REPEAT_FORMAT frag7;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag8;
        struct _NDR64_POINTER_FORMAT frag9;
        NDR64_FORMAT_CHAR frag10;
    } frag2;
}
__midl_frag465_t;
extern const __midl_frag465_t __midl_frag465;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
    } frag2;
}
__midl_frag464_t;
extern const __midl_frag464_t __midl_frag464;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag461_t;
extern const __midl_frag461_t __midl_frag461;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag460_t;
extern const __midl_frag460_t __midl_frag460;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        NDR64_FORMAT_CHAR frag7;
    } frag2;
}
__midl_frag459_t;
extern const __midl_frag459_t __midl_frag459;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
    } frag2;
}
__midl_frag458_t;
extern const __midl_frag458_t __midl_frag458;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    NDR64_UINT32 frag6;
}
__midl_frag456_t;
extern const __midl_frag456_t __midl_frag456;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag455_t;
extern const __midl_frag455_t __midl_frag455;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag452_t;
extern const __midl_frag452_t __midl_frag452;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag450_t;
extern const __midl_frag450_t __midl_frag450;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag448_t;
extern const __midl_frag448_t __midl_frag448;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag445_t;
extern const __midl_frag445_t __midl_frag445;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag444_t;
extern const __midl_frag444_t __midl_frag444;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag443_t;
extern const __midl_frag443_t __midl_frag443;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        struct _NDR64_NO_REPEAT_FORMAT frag7;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag8;
        struct _NDR64_POINTER_FORMAT frag9;
        struct _NDR64_NO_REPEAT_FORMAT frag10;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag11;
        struct _NDR64_POINTER_FORMAT frag12;
        struct _NDR64_NO_REPEAT_FORMAT frag13;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag14;
        struct _NDR64_POINTER_FORMAT frag15;
        struct _NDR64_NO_REPEAT_FORMAT frag16;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag17;
        struct _NDR64_POINTER_FORMAT frag18;
        struct _NDR64_NO_REPEAT_FORMAT frag19;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag20;
        struct _NDR64_POINTER_FORMAT frag21;
        NDR64_FORMAT_CHAR frag22;
    } frag2;
}
__midl_frag435_t;
extern const __midl_frag435_t __midl_frag435;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag3;
            struct _NDR64_POINTER_FORMAT frag4;
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
            struct _NDR64_POINTER_FORMAT frag6;
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag7;
            struct _NDR64_POINTER_FORMAT frag8;
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag9;
            struct _NDR64_POINTER_FORMAT frag10;
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag11;
            struct _NDR64_POINTER_FORMAT frag12;
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag13;
            struct _NDR64_POINTER_FORMAT frag14;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag426_t;
extern const __midl_frag426_t __midl_frag426;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag425_t;
extern const __midl_frag425_t __midl_frag425;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag405_t;
extern const __midl_frag405_t __midl_frag405;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        struct _NDR64_NO_REPEAT_FORMAT frag7;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag8;
        struct _NDR64_POINTER_FORMAT frag9;
        struct _NDR64_NO_REPEAT_FORMAT frag10;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag11;
        struct _NDR64_POINTER_FORMAT frag12;
        struct _NDR64_NO_REPEAT_FORMAT frag13;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag14;
        struct _NDR64_POINTER_FORMAT frag15;
        NDR64_FORMAT_CHAR frag16;
    } frag2;
}
__midl_frag399_t;
extern const __midl_frag399_t __midl_frag399;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag3;
            struct _NDR64_POINTER_FORMAT frag4;
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
            struct _NDR64_POINTER_FORMAT frag6;
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag7;
            struct _NDR64_POINTER_FORMAT frag8;
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag9;
            struct _NDR64_POINTER_FORMAT frag10;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag392_t;
extern const __midl_frag392_t __midl_frag392;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag391_t;
extern const __midl_frag391_t __midl_frag391;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    NDR64_UINT32 frag7;
}
__midl_frag389_t;
extern const __midl_frag389_t __midl_frag389;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag388_t;
extern const __midl_frag388_t __midl_frag388;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag384_t;
extern const __midl_frag384_t __midl_frag384;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag382_t;
extern const __midl_frag382_t __midl_frag382;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag381_t;
extern const __midl_frag381_t __midl_frag381;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag378_t;
extern const __midl_frag378_t __midl_frag378;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag363_t;
extern const __midl_frag363_t __midl_frag363;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        NDR64_FORMAT_CHAR frag7;
    } frag2;
}
__midl_frag353_t;
extern const __midl_frag353_t __midl_frag353;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag351_t;
extern const __midl_frag351_t __midl_frag351;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag350_t;
extern const __midl_frag350_t __midl_frag350;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag347_t;
extern const __midl_frag347_t __midl_frag347;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
}
__midl_frag339_t;
extern const __midl_frag339_t __midl_frag339;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag337_t;
extern const __midl_frag337_t __midl_frag337;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag336_t;
extern const __midl_frag336_t __midl_frag336;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_MEMPAD_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
    } frag2;
}
__midl_frag334_t;
extern const __midl_frag334_t __midl_frag334;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag332_t;
extern const __midl_frag332_t __midl_frag332;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag331_t;
extern const __midl_frag331_t __midl_frag331;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag328_t;
extern const __midl_frag328_t __midl_frag328;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag326_t;
extern const __midl_frag326_t __midl_frag326;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag322_t;
extern const __midl_frag322_t __midl_frag322;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag320_t;
extern const __midl_frag320_t __midl_frag320;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag319_t;
extern const __midl_frag319_t __midl_frag319;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag318_t;
extern const __midl_frag318_t __midl_frag318;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag316_t;
extern const __midl_frag316_t __midl_frag316;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag315_t;
extern const __midl_frag315_t __midl_frag315;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag311_t;
extern const __midl_frag311_t __midl_frag311;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag310_t;
extern const __midl_frag310_t __midl_frag310;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag309_t;
extern const __midl_frag309_t __midl_frag309;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag307_t;
extern const __midl_frag307_t __midl_frag307;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag306_t;
extern const __midl_frag306_t __midl_frag306;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag303_t;
extern const __midl_frag303_t __midl_frag303;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
}
__midl_frag301_t;
extern const __midl_frag301_t __midl_frag301;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag298_t;
extern const __midl_frag298_t __midl_frag298;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag296_t;
extern const __midl_frag296_t __midl_frag296;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag295_t;
extern const __midl_frag295_t __midl_frag295;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_MEMPAD_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
    } frag2;
}
__midl_frag294_t;
extern const __midl_frag294_t __midl_frag294;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag292_t;
extern const __midl_frag292_t __midl_frag292;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag291_t;
extern const __midl_frag291_t __midl_frag291;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag288_t;
extern const __midl_frag288_t __midl_frag288;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag286_t;
extern const __midl_frag286_t __midl_frag286;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag285_t;
extern const __midl_frag285_t __midl_frag285;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_MEMPAD_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
    } frag2;
}
__midl_frag284_t;
extern const __midl_frag284_t __midl_frag284;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag282_t;
extern const __midl_frag282_t __midl_frag282;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag281_t;
extern const __midl_frag281_t __midl_frag281;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag278_t;
extern const __midl_frag278_t __midl_frag278;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag275_t;
extern const __midl_frag275_t __midl_frag275;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag272_t;
extern const __midl_frag272_t __midl_frag272;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag271_t;
extern const __midl_frag271_t __midl_frag271;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        struct _NDR64_NO_REPEAT_FORMAT frag7;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag8;
        struct _NDR64_POINTER_FORMAT frag9;
        NDR64_FORMAT_CHAR frag10;
    } frag2;
}
__midl_frag270_t;
extern const __midl_frag270_t __midl_frag270;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
    } frag2;
}
__midl_frag269_t;
extern const __midl_frag269_t __midl_frag269;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    NDR64_UINT32 frag5;
}
__midl_frag267_t;
extern const __midl_frag267_t __midl_frag267;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag266_t;
extern const __midl_frag266_t __midl_frag266;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag263_t;
extern const __midl_frag263_t __midl_frag263;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag262_t;
extern const __midl_frag262_t __midl_frag262;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag260_t;
extern const __midl_frag260_t __midl_frag260;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag259_t;
extern const __midl_frag259_t __midl_frag259;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag255_t;
extern const __midl_frag255_t __midl_frag255;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag254_t;
extern const __midl_frag254_t __midl_frag254;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag253_t;
extern const __midl_frag253_t __midl_frag253;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        struct _NDR64_NO_REPEAT_FORMAT frag7;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag8;
        struct _NDR64_POINTER_FORMAT frag9;
        struct _NDR64_NO_REPEAT_FORMAT frag10;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag11;
        struct _NDR64_POINTER_FORMAT frag12;
        struct _NDR64_NO_REPEAT_FORMAT frag13;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag14;
        struct _NDR64_POINTER_FORMAT frag15;
        struct _NDR64_NO_REPEAT_FORMAT frag16;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag17;
        struct _NDR64_POINTER_FORMAT frag18;
        NDR64_FORMAT_CHAR frag19;
    } frag2;
}
__midl_frag252_t;
extern const __midl_frag252_t __midl_frag252;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
    } frag2;
}
__midl_frag251_t;
extern const __midl_frag251_t __midl_frag251;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag249_t;
extern const __midl_frag249_t __midl_frag249;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        struct _NDR64_NO_REPEAT_FORMAT frag7;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag8;
        struct _NDR64_POINTER_FORMAT frag9;
        struct _NDR64_NO_REPEAT_FORMAT frag10;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag11;
        struct _NDR64_POINTER_FORMAT frag12;
        NDR64_FORMAT_CHAR frag13;
    } frag2;
}
__midl_frag247_t;
extern const __midl_frag247_t __midl_frag247;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
    } frag2;
}
__midl_frag246_t;
extern const __midl_frag246_t __midl_frag246;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    NDR64_UINT32 frag5;
}
__midl_frag244_t;
extern const __midl_frag244_t __midl_frag244;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag243_t;
extern const __midl_frag243_t __midl_frag243;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag240_t;
extern const __midl_frag240_t __midl_frag240;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
}
__midl_frag238_t;
extern const __midl_frag238_t __midl_frag238;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag237_t;
extern const __midl_frag237_t __midl_frag237;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag236_t;
extern const __midl_frag236_t __midl_frag236;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag235_t;
extern const __midl_frag235_t __midl_frag235;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag234_t;
extern const __midl_frag234_t __midl_frag234;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag231_t;
extern const __midl_frag231_t __midl_frag231;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag230_t;
extern const __midl_frag230_t __midl_frag230;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag228_t;
extern const __midl_frag228_t __midl_frag228;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_MEMPAD_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
    } frag2;
}
__midl_frag227_t;
extern const __midl_frag227_t __midl_frag227;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag225_t;
extern const __midl_frag225_t __midl_frag225;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag224_t;
extern const __midl_frag224_t __midl_frag224;

typedef 
struct _NDR64_RANGE_FORMAT
__midl_frag221_t;
extern const __midl_frag221_t __midl_frag221;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
}
__midl_frag220_t;
extern const __midl_frag220_t __midl_frag220;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag217_t;
extern const __midl_frag217_t __midl_frag217;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
    } frag2;
}
__midl_frag216_t;
extern const __midl_frag216_t __midl_frag216;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag214_t;
extern const __midl_frag214_t __midl_frag214;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag213_t;
extern const __midl_frag213_t __midl_frag213;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag210_t;
extern const __midl_frag210_t __midl_frag210;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag208_t;
extern const __midl_frag208_t __midl_frag208;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag207_t;
extern const __midl_frag207_t __midl_frag207;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
}
__midl_frag206_t;
extern const __midl_frag206_t __midl_frag206;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag204_t;
extern const __midl_frag204_t __midl_frag204;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_MEMPAD_FORMAT frag3;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_MEMPAD_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
    } frag2;
}
__midl_frag203_t;
extern const __midl_frag203_t __midl_frag203;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag201_t;
extern const __midl_frag201_t __midl_frag201;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        NDR64_FORMAT_CHAR frag7;
    } frag2;
}
__midl_frag200_t;
extern const __midl_frag200_t __midl_frag200;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
    } frag2;
}
__midl_frag199_t;
extern const __midl_frag199_t __midl_frag199;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag197_t;
extern const __midl_frag197_t __midl_frag197;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag196_t;
extern const __midl_frag196_t __midl_frag196;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag193_t;
extern const __midl_frag193_t __midl_frag193;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag192_t;
extern const __midl_frag192_t __midl_frag192;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag188_t;
extern const __midl_frag188_t __midl_frag188;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag187_t;
extern const __midl_frag187_t __midl_frag187;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        struct _NDR64_NO_REPEAT_FORMAT frag7;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag8;
        struct _NDR64_POINTER_FORMAT frag9;
        NDR64_FORMAT_CHAR frag10;
    } frag2;
}
__midl_frag186_t;
extern const __midl_frag186_t __midl_frag186;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
    } frag2;
}
__midl_frag185_t;
extern const __midl_frag185_t __midl_frag185;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag183_t;
extern const __midl_frag183_t __midl_frag183;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag182_t;
extern const __midl_frag182_t __midl_frag182;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag179_t;
extern const __midl_frag179_t __midl_frag179;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag177_t;
extern const __midl_frag177_t __midl_frag177;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        NDR64_FORMAT_CHAR frag7;
    } frag2;
}
__midl_frag176_t;
extern const __midl_frag176_t __midl_frag176;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag174_t;
extern const __midl_frag174_t __midl_frag174;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag173_t;
extern const __midl_frag173_t __midl_frag173;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag170_t;
extern const __midl_frag170_t __midl_frag170;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        NDR64_FORMAT_CHAR frag7;
    } frag2;
}
__midl_frag167_t;
extern const __midl_frag167_t __midl_frag167;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag165_t;
extern const __midl_frag165_t __midl_frag165;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag164_t;
extern const __midl_frag164_t __midl_frag164;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag161_t;
extern const __midl_frag161_t __midl_frag161;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        struct _NDR64_NO_REPEAT_FORMAT frag7;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag8;
        struct _NDR64_POINTER_FORMAT frag9;
        struct _NDR64_NO_REPEAT_FORMAT frag10;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag11;
        struct _NDR64_POINTER_FORMAT frag12;
        NDR64_FORMAT_CHAR frag13;
    } frag2;
}
__midl_frag158_t;
extern const __midl_frag158_t __midl_frag158;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        NDR64_FORMAT_CHAR frag7;
    } frag2;
}
__midl_frag156_t;
extern const __midl_frag156_t __midl_frag156;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    NDR64_UINT32 frag5;
}
__midl_frag154_t;
extern const __midl_frag154_t __midl_frag154;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag153_t;
extern const __midl_frag153_t __midl_frag153;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag150_t;
extern const __midl_frag150_t __midl_frag150;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        NDR64_FORMAT_CHAR frag7;
    } frag2;
}
__midl_frag147_t;
extern const __midl_frag147_t __midl_frag147;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag145_t;
extern const __midl_frag145_t __midl_frag145;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag144_t;
extern const __midl_frag144_t __midl_frag144;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag141_t;
extern const __midl_frag141_t __midl_frag141;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
    struct _NDR64_POINTER_FORMAT frag5;
}
__midl_frag137_t;
extern const __midl_frag137_t __midl_frag137;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
}
__midl_frag135_t;
extern const __midl_frag135_t __midl_frag135;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag134_t;
extern const __midl_frag134_t __midl_frag134;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag133_t;
extern const __midl_frag133_t __midl_frag133;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_MEMPAD_FORMAT frag3;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_MEMPAD_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_MEMPAD_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
        struct _NDR64_MEMPAD_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag15;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag16;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag17;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag18;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag19;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag20;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag21;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag22;
        struct _NDR64_MEMPAD_FORMAT frag23;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag24;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag25;
    } frag2;
}
__midl_frag132_t;
extern const __midl_frag132_t __midl_frag132;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag131_t;
extern const __midl_frag131_t __midl_frag131;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag130_t;
extern const __midl_frag130_t __midl_frag130;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag129_t;
extern const __midl_frag129_t __midl_frag129;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag128_t;
extern const __midl_frag128_t __midl_frag128;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag15;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag16;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag17;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag18;
        struct _NDR64_MEMPAD_FORMAT frag19;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag20;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag21;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag22;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag23;
        struct _NDR64_MEMPAD_FORMAT frag24;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag25;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag26;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag27;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag28;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag29;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag30;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag31;
        struct _NDR64_MEMPAD_FORMAT frag32;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag33;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag34;
    } frag2;
}
__midl_frag127_t;
extern const __midl_frag127_t __midl_frag127;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag126_t;
extern const __midl_frag126_t __midl_frag126;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag125_t;
extern const __midl_frag125_t __midl_frag125;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag124_t;
extern const __midl_frag124_t __midl_frag124;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
    struct _NDR64_POINTER_FORMAT frag5;
}
__midl_frag121_t;
extern const __midl_frag121_t __midl_frag121;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_MEMPAD_FORMAT frag3;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_MEMPAD_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_MEMPAD_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
        struct _NDR64_MEMPAD_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag15;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag16;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag17;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag18;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag19;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag20;
    } frag2;
}
__midl_frag116_t;
extern const __midl_frag116_t __midl_frag116;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag114_t;
extern const __midl_frag114_t __midl_frag114;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag109_t;
extern const __midl_frag109_t __midl_frag109;

typedef 
struct 
{
    struct _NDR64_CONF_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag108_t;
extern const __midl_frag108_t __midl_frag108;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag15;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag16;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag17;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag18;
        struct _NDR64_MEMPAD_FORMAT frag19;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag20;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag21;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag22;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag23;
        struct _NDR64_MEMPAD_FORMAT frag24;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag25;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag26;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag27;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag28;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag29;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag30;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag31;
        struct _NDR64_MEMPAD_FORMAT frag32;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag33;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag34;
    } frag2;
}
__midl_frag107_t;
extern const __midl_frag107_t __midl_frag107;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag104_t;
extern const __midl_frag104_t __midl_frag104;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag103_t;
extern const __midl_frag103_t __midl_frag103;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
}
__midl_frag100_t;
extern const __midl_frag100_t __midl_frag100;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
    struct _NDR64_POINTER_FORMAT frag5;
}
__midl_frag99_t;
extern const __midl_frag99_t __midl_frag99;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
    } frag2;
}
__midl_frag97_t;
extern const __midl_frag97_t __midl_frag97;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag96_t;
extern const __midl_frag96_t __midl_frag96;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag95_t;
extern const __midl_frag95_t __midl_frag95;

typedef 
struct 
{
    struct _NDR64_CONF_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
    } frag2;
}
__midl_frag94_t;
extern const __midl_frag94_t __midl_frag94;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag93_t;
extern const __midl_frag93_t __midl_frag93;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag92_t;
extern const __midl_frag92_t __midl_frag92;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag90_t;
extern const __midl_frag90_t __midl_frag90;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag89_t;
extern const __midl_frag89_t __midl_frag89;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag88_t;
extern const __midl_frag88_t __midl_frag88;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag86_t;
extern const __midl_frag86_t __midl_frag86;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_MEMPAD_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
    } frag2;
}
__midl_frag85_t;
extern const __midl_frag85_t __midl_frag85;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_MEMPAD_FORMAT frag4;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_MEMPAD_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_MEMPAD_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
    } frag2;
}
__midl_frag82_t;
extern const __midl_frag82_t __midl_frag82;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag15;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag16;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag17;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag18;
        struct _NDR64_MEMPAD_FORMAT frag19;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag20;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag21;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag22;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag23;
        struct _NDR64_MEMPAD_FORMAT frag24;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag25;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag26;
        struct _NDR64_MEMPAD_FORMAT frag27;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag28;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag29;
    } frag2;
}
__midl_frag79_t;
extern const __midl_frag79_t __midl_frag79;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    NDR64_UINT32 frag8;
}
__midl_frag77_t;
extern const __midl_frag77_t __midl_frag77;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag76_t;
extern const __midl_frag76_t __midl_frag76;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag73_t;
extern const __midl_frag73_t __midl_frag73;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag72_t;
extern const __midl_frag72_t __midl_frag72;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        struct _NDR64_NO_REPEAT_FORMAT frag7;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag8;
        struct _NDR64_POINTER_FORMAT frag9;
        struct _NDR64_NO_REPEAT_FORMAT frag10;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag11;
        struct _NDR64_POINTER_FORMAT frag12;
        struct _NDR64_NO_REPEAT_FORMAT frag13;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag14;
        struct _NDR64_POINTER_FORMAT frag15;
        NDR64_FORMAT_CHAR frag16;
    } frag2;
}
__midl_frag71_t;
extern const __midl_frag71_t __midl_frag71;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
    } frag2;
}
__midl_frag70_t;
extern const __midl_frag70_t __midl_frag70;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        struct _NDR64_NO_REPEAT_FORMAT frag7;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag8;
        struct _NDR64_POINTER_FORMAT frag9;
        struct _NDR64_NO_REPEAT_FORMAT frag10;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag11;
        struct _NDR64_POINTER_FORMAT frag12;
        struct _NDR64_NO_REPEAT_FORMAT frag13;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag14;
        struct _NDR64_POINTER_FORMAT frag15;
        NDR64_FORMAT_CHAR frag16;
    } frag2;
}
__midl_frag67_t;
extern const __midl_frag67_t __midl_frag67;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
    } frag2;
}
__midl_frag66_t;
extern const __midl_frag66_t __midl_frag66;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag65_t;
extern const __midl_frag65_t __midl_frag65;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag64_t;
extern const __midl_frag64_t __midl_frag64;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag63_t;
extern const __midl_frag63_t __midl_frag63;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag62_t;
extern const __midl_frag62_t __midl_frag62;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        struct _NDR64_NO_REPEAT_FORMAT frag7;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag8;
        struct _NDR64_POINTER_FORMAT frag9;
        struct _NDR64_NO_REPEAT_FORMAT frag10;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag11;
        struct _NDR64_POINTER_FORMAT frag12;
        struct _NDR64_NO_REPEAT_FORMAT frag13;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag14;
        struct _NDR64_POINTER_FORMAT frag15;
        struct _NDR64_NO_REPEAT_FORMAT frag16;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag17;
        struct _NDR64_POINTER_FORMAT frag18;
        struct _NDR64_NO_REPEAT_FORMAT frag19;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag20;
        struct _NDR64_POINTER_FORMAT frag21;
        struct _NDR64_NO_REPEAT_FORMAT frag22;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag23;
        struct _NDR64_POINTER_FORMAT frag24;
        NDR64_FORMAT_CHAR frag25;
    } frag2;
}
__midl_frag61_t;
extern const __midl_frag61_t __midl_frag61;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
    } frag2;
}
__midl_frag60_t;
extern const __midl_frag60_t __midl_frag60;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        NDR64_FORMAT_CHAR frag7;
    } frag2;
}
__midl_frag59_t;
extern const __midl_frag59_t __midl_frag59;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag58_t;
extern const __midl_frag58_t __midl_frag58;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag55_t;
extern const __midl_frag55_t __midl_frag55;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_MEMPAD_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
    } frag2;
}
__midl_frag54_t;
extern const __midl_frag54_t __midl_frag54;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag50_t;
extern const __midl_frag50_t __midl_frag50;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag49_t;
extern const __midl_frag49_t __midl_frag49;

typedef 
struct 
{
    struct _NDR64_CONF_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag48_t;
extern const __midl_frag48_t __midl_frag48;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag45_t;
extern const __midl_frag45_t __midl_frag45;

typedef 
struct 
{
    struct _NDR64_CONF_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag44_t;
extern const __midl_frag44_t __midl_frag44;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag42_t;
extern const __midl_frag42_t __midl_frag42;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag41_t;
extern const __midl_frag41_t __midl_frag41;

typedef 
struct 
{
    struct _NDR64_CONF_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag40_t;
extern const __midl_frag40_t __midl_frag40;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        struct _NDR64_NO_REPEAT_FORMAT frag7;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag8;
        struct _NDR64_POINTER_FORMAT frag9;
        struct _NDR64_NO_REPEAT_FORMAT frag10;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag11;
        struct _NDR64_POINTER_FORMAT frag12;
        struct _NDR64_NO_REPEAT_FORMAT frag13;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag14;
        struct _NDR64_POINTER_FORMAT frag15;
        NDR64_FORMAT_CHAR frag16;
    } frag2;
}
__midl_frag39_t;
extern const __midl_frag39_t __midl_frag39;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
    } frag2;
}
__midl_frag38_t;
extern const __midl_frag38_t __midl_frag38;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    NDR64_UINT32 frag8;
}
__midl_frag36_t;
extern const __midl_frag36_t __midl_frag36;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag35_t;
extern const __midl_frag35_t __midl_frag35;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag32_t;
extern const __midl_frag32_t __midl_frag32;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_OPERATOR frag3;
    struct _NDR64_EXPR_VAR frag4;
    struct _NDR64_EXPR_NOOP frag5;
    struct _NDR64_EXPR_CONST64 frag6;
}
__midl_frag28_t;
extern const __midl_frag28_t __midl_frag28;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag27_t;
extern const __midl_frag27_t __midl_frag27;

typedef 
struct 
{
    struct _NDR64_CONF_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag26_t;
extern const __midl_frag26_t __midl_frag26;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        NDR64_FORMAT_CHAR frag7;
    } frag2;
}
__midl_frag25_t;
extern const __midl_frag25_t __midl_frag25;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag23_t;
extern const __midl_frag23_t __midl_frag23;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag22_t;
extern const __midl_frag22_t __midl_frag22;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag19_t;
extern const __midl_frag19_t __midl_frag19;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag17_t;
extern const __midl_frag17_t __midl_frag17;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag16_t;
extern const __midl_frag16_t __midl_frag16;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag15_t;
extern const __midl_frag15_t __midl_frag15;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag13_t;
extern const __midl_frag13_t __midl_frag13;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag12_t;
extern const __midl_frag12_t __midl_frag12;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag11_t;
extern const __midl_frag11_t __midl_frag11;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag10_t;
extern const __midl_frag10_t __midl_frag10;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag7_t;
extern const __midl_frag7_t __midl_frag7;

typedef 
struct 
{
    struct _NDR64_CONF_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag6_t;
extern const __midl_frag6_t __midl_frag6;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag3_t;
extern const __midl_frag3_t __midl_frag3;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag2_t;
extern const __midl_frag2_t __midl_frag2;

typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag907_t __midl_frag907 =
0x5    /* FC64_INT32 */;

static const __midl_frag906_t __midl_frag906 =
{ 
/*  */
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag905
    }
};

static const __midl_frag905_t __midl_frag905 =
{ 
/* *WCHAR */
    { 
    /* *WCHAR */
        0x64,    /* FC64_CONF_WCHAR_STRING */
        { 
        /* *WCHAR */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT16) 2 /* 0x2 */
    }
};

static const __midl_frag904_t __midl_frag904 =
{ 
/* DSA_MSG_EXECUTE_SCRIPT_REPLY_V1 */
    { 
    /* DSA_MSG_EXECUTE_SCRIPT_REPLY_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DSA_MSG_EXECUTE_SCRIPT_REPLY_V1 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag906,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag903_t __midl_frag903 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_OPERATOR */
        0x4,    /* FC_EXPR_OPER */
        0x5,    /* OP_UNARY_INDIRECTION */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT8) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x8,    /* FC64_UINT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */  /* Offset */
    }
};

static const __midl_frag902_t __midl_frag902 =
{ 
/* DSA_MSG_EXECUTE_SCRIPT_REPLY */
    { 
    /* DSA_MSG_EXECUTE_SCRIPT_REPLY */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag903,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag904,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag901_t __midl_frag901 =
{ 
/* *DSA_MSG_EXECUTE_SCRIPT_REPLY */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag902
};

static const __midl_frag899_t __midl_frag899 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag907
};

static const __midl_frag898_t __midl_frag898 =
0x2    /* FC64_INT8 */;

static const __midl_frag897_t __midl_frag897 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 1 /* 0x1 */,
        (NDR64_INT64) 1024 /* 0x400 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */
    }
};

static const __midl_frag896_t __midl_frag896 =
{ 
/* *BYTE */
    { 
    /* *BYTE */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *BYTE */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag897
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag898
    }
};

static const __midl_frag895_t __midl_frag895 =
{ 
/* DSA_MSG_EXECUTE_SCRIPT_REQ_V1 */
    { 
    /* DSA_MSG_EXECUTE_SCRIPT_REQ_V1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DSA_MSG_EXECUTE_SCRIPT_REQ_V1 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *BYTE */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag896
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag894_t __midl_frag894 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */  /* Offset */
    }
};

static const __midl_frag893_t __midl_frag893 =
{ 
/* DSA_MSG_EXECUTE_SCRIPT_REQ */
    { 
    /* DSA_MSG_EXECUTE_SCRIPT_REQ */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag895,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag892_t __midl_frag892 =
{ 
/* *DSA_MSG_EXECUTE_SCRIPT_REQ */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag893
};

static const __midl_frag890_t __midl_frag890 =
{ 
/* IDL_DSAExecuteScript */
    { 
    /* IDL_DSAExecuteScript */      /* procedure IDL_DSAExecuteScript */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* dwInVersion */      /* parameter dwInVersion */
        &__midl_frag907,
        { 
        /* dwInVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgIn */      /* parameter pmsgIn */
        &__midl_frag893,
        { 
        /* pmsgIn */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pdwOutVersion */      /* parameter pdwOutVersion */
        &__midl_frag907,
        { 
        /* pdwOutVersion */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pmsgOut */      /* parameter pmsgOut */
        &__midl_frag902,
        { 
        /* pmsgOut */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag888_t __midl_frag888 =
{ 
/*  */
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag905
    },
    { 
    /* *BYTE */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag879
    },
    { 
    /* *BYTE */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag882
    },
    { 
    /* *BYTE */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag885
    }
};

static const __midl_frag886_t __midl_frag886 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 10485760 /* 0xa00000 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */
    }
};

static const __midl_frag885_t __midl_frag885 =
{ 
/* *BYTE */
    { 
    /* *BYTE */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *BYTE */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag886
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag898
    }
};

static const __midl_frag883_t __midl_frag883 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 10485760 /* 0xa00000 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */
    }
};

static const __midl_frag882_t __midl_frag882 =
{ 
/* *BYTE */
    { 
    /* *BYTE */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *BYTE */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag883
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag898
    }
};

static const __midl_frag880_t __midl_frag880 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 1024 /* 0x400 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    }
};

static const __midl_frag879_t __midl_frag879 =
{ 
/* *BYTE */
    { 
    /* *BYTE */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *BYTE */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag880
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag898
    }
};

static const __midl_frag877_t __midl_frag877 =
{ 
/* DSA_MSG_PREPARE_SCRIPT_REPLY_V1 */
    { 
    /* DSA_MSG_PREPARE_SCRIPT_REPLY_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DSA_MSG_PREPARE_SCRIPT_REPLY_V1 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 64 /* 0x40 */,
        0,
        0,
        &__midl_frag888,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag875_t __midl_frag875 =
{ 
/* DSA_MSG_PREPARE_SCRIPT_REPLY */
    { 
    /* DSA_MSG_PREPARE_SCRIPT_REPLY */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 64 /* 0x40 */,
        &__midl_frag903,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag877,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag874_t __midl_frag874 =
{ 
/* *DSA_MSG_PREPARE_SCRIPT_REPLY */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag875
};

static const __midl_frag871_t __midl_frag871 =
{ 
/* DSA_MSG_PREPARE_SCRIPT_REQ_V1 */
    { 
    /* DSA_MSG_PREPARE_SCRIPT_REQ_V1 */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* DSA_MSG_PREPARE_SCRIPT_REQ_V1 */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */
    }
};

static const __midl_frag869_t __midl_frag869 =
{ 
/* DSA_MSG_PREPARE_SCRIPT_REQ */
    { 
    /* DSA_MSG_PREPARE_SCRIPT_REQ */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 3 /* 0x3 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag871,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag868_t __midl_frag868 =
{ 
/* *DSA_MSG_PREPARE_SCRIPT_REQ */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag869
};

static const __midl_frag866_t __midl_frag866 =
{ 
/* IDL_DSAPrepareScript */
    { 
    /* IDL_DSAPrepareScript */      /* procedure IDL_DSAPrepareScript */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* dwInVersion */      /* parameter dwInVersion */
        &__midl_frag907,
        { 
        /* dwInVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgIn */      /* parameter pmsgIn */
        &__midl_frag869,
        { 
        /* pmsgIn */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pdwOutVersion */      /* parameter pdwOutVersion */
        &__midl_frag907,
        { 
        /* pdwOutVersion */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pmsgOut */      /* parameter pmsgOut */
        &__midl_frag875,
        { 
        /* pmsgOut */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag864_t __midl_frag864 =
0x10    /* FC64_CHAR */;

static const __midl_frag863_t __midl_frag863 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 65535 /* 0xffff */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */
    }
};

static const __midl_frag862_t __midl_frag862 =
{ 
/* *UCHAR */
    { 
    /* *UCHAR */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *UCHAR */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag863
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag864
    }
};

static const __midl_frag861_t __midl_frag861 =
{ 
/* DRS_MSG_READNGCKEYREPLY_V1 */
    { 
    /* DRS_MSG_READNGCKEYREPLY_V1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_READNGCKEYREPLY_V1 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *UCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag862
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag859_t __midl_frag859 =
{ 
/* DRS_MSG_READNGCKEYREPLY */
    { 
    /* DRS_MSG_READNGCKEYREPLY */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag903,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag861,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag858_t __midl_frag858 =
{ 
/* *DRS_MSG_READNGCKEYREPLY */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag859
};

static const __midl_frag854_t __midl_frag854 =
{ 
/* DRS_MSG_READNGCKEYREQ_V1 */
    { 
    /* DRS_MSG_READNGCKEYREQ_V1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_READNGCKEYREQ_V1 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag905
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag852_t __midl_frag852 =
{ 
/* DRS_MSG_READNGCKEYREQ */
    { 
    /* DRS_MSG_READNGCKEYREQ */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag854,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag851_t __midl_frag851 =
{ 
/* *DRS_MSG_READNGCKEYREQ */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag852
};

static const __midl_frag849_t __midl_frag849 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 65 /* 0x41 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag848_t __midl_frag848 =
{ 
/* IDL_DRSReadNgcKey */
    { 
    /* IDL_DRSReadNgcKey */      /* procedure IDL_DRSReadNgcKey */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hDrs */      /* parameter hDrs */
        &__midl_frag849,
        { 
        /* hDrs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* dwInVersion */      /* parameter dwInVersion */
        &__midl_frag907,
        { 
        /* dwInVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgIn */      /* parameter pmsgIn */
        &__midl_frag852,
        { 
        /* pmsgIn */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pdwOutVersion */      /* parameter pdwOutVersion */
        &__midl_frag907,
        { 
        /* pdwOutVersion */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pmsgOut */      /* parameter pmsgOut */
        &__midl_frag859,
        { 
        /* pmsgOut */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag844_t __midl_frag844 =
{ 
/* DRS_MSG_WRITENGCKEYREPLY */
    { 
    /* DRS_MSG_WRITENGCKEYREPLY */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 3 /* 0x3 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag903,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag871,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag843_t __midl_frag843 =
{ 
/* *DRS_MSG_WRITENGCKEYREPLY */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag844
};

static const __midl_frag840_t __midl_frag840 =
{ 
/*  */
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag905
    },
    { 
    /* *UCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag837
    }
};

static const __midl_frag838_t __midl_frag838 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 65535 /* 0xffff */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag837_t __midl_frag837 =
{ 
/* *UCHAR */
    { 
    /* *UCHAR */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *UCHAR */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag838
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag864
    }
};

static const __midl_frag835_t __midl_frag835 =
{ 
/* DRS_MSG_WRITENGCKEYREQ_V1 */
    { 
    /* DRS_MSG_WRITENGCKEYREQ_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_WRITENGCKEYREQ_V1 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */,
        0,
        0,
        &__midl_frag840,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag833_t __midl_frag833 =
{ 
/* DRS_MSG_WRITENGCKEYREQ */
    { 
    /* DRS_MSG_WRITENGCKEYREQ */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 24 /* 0x18 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag835,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag832_t __midl_frag832 =
{ 
/* *DRS_MSG_WRITENGCKEYREQ */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag833
};

static const __midl_frag829_t __midl_frag829 =
{ 
/* IDL_DRSWriteNgcKey */
    { 
    /* IDL_DRSWriteNgcKey */      /* procedure IDL_DRSWriteNgcKey */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hDrs */      /* parameter hDrs */
        &__midl_frag849,
        { 
        /* hDrs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* dwInVersion */      /* parameter dwInVersion */
        &__midl_frag907,
        { 
        /* dwInVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgIn */      /* parameter pmsgIn */
        &__midl_frag833,
        { 
        /* pmsgIn */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pdwOutVersion */      /* parameter pdwOutVersion */
        &__midl_frag907,
        { 
        /* pdwOutVersion */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pmsgOut */      /* parameter pmsgOut */
        &__midl_frag844,
        { 
        /* pmsgOut */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag827_t __midl_frag827 =
{ 
/*  */
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag905
    },
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag905
    },
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag824
    }
};

static const __midl_frag826_t __midl_frag826 =
0x11    /* FC64_WCHAR */;

static const __midl_frag824_t __midl_frag824 =
{ 
/* *WCHAR */
    { 
    /* *WCHAR */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *WCHAR */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag880
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag826
    }
};

static const __midl_frag821_t __midl_frag821 =
{ 
/* DRS_MSG_ADDCLONEDCREPLY_V1 */
    { 
    /* DRS_MSG_ADDCLONEDCREPLY_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_ADDCLONEDCREPLY_V1 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        0,
        0,
        &__midl_frag827,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag819_t __midl_frag819 =
{ 
/* DRS_MSG_ADDCLONEDCREPLY */
    { 
    /* DRS_MSG_ADDCLONEDCREPLY */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 32 /* 0x20 */,
        &__midl_frag903,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag821,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag818_t __midl_frag818 =
{ 
/* *DRS_MSG_ADDCLONEDCREPLY */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag819
};

static const __midl_frag813_t __midl_frag813 =
{ 
/* DRS_MSG_ADDCLONEDCREQ_V1 */
    { 
    /* DRS_MSG_ADDCLONEDCREQ_V1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_ADDCLONEDCREQ_V1 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag905
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag905
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag811_t __midl_frag811 =
{ 
/* DRS_MSG_ADDCLONEDCREQ */
    { 
    /* DRS_MSG_ADDCLONEDCREQ */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag813,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag810_t __midl_frag810 =
{ 
/* *DRS_MSG_ADDCLONEDCREQ */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag811
};

static const __midl_frag807_t __midl_frag807 =
{ 
/* IDL_DRSAddCloneDC */
    { 
    /* IDL_DRSAddCloneDC */      /* procedure IDL_DRSAddCloneDC */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hDrs */      /* parameter hDrs */
        &__midl_frag849,
        { 
        /* hDrs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* dwInVersion */      /* parameter dwInVersion */
        &__midl_frag907,
        { 
        /* dwInVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgIn */      /* parameter pmsgIn */
        &__midl_frag811,
        { 
        /* pmsgIn */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pdwOutVersion */      /* parameter pdwOutVersion */
        &__midl_frag907,
        { 
        /* pdwOutVersion */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pmsgOut */      /* parameter pmsgOut */
        &__midl_frag819,
        { 
        /* pmsgOut */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag805_t __midl_frag805 =
{ 
/* DRS_MSG_FINISH_DEMOTIONREPLY_V1 */
    { 
    /* DRS_MSG_FINISH_DEMOTIONREPLY_V1 */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* DRS_MSG_FINISH_DEMOTIONREPLY_V1 */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 12 /* 0xc */
    }
};

static const __midl_frag803_t __midl_frag803 =
{ 
/* DRS_MSG_FINISH_DEMOTIONREPLY */
    { 
    /* DRS_MSG_FINISH_DEMOTIONREPLY */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 3 /* 0x3 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 12 /* 0xc */,
        &__midl_frag903,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag805,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag802_t __midl_frag802 =
{ 
/* *DRS_MSG_FINISH_DEMOTIONREPLY */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag803
};

static const __midl_frag799_t __midl_frag799 =
{ 
/*  */
    { 
    /* struct _NDR64_FIX_ARRAY_HEADER_FORMAT */
        0x40,    /* FC64_FIX_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* struct _NDR64_FIX_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag796_t __midl_frag796 =
{ 
/* DRS_MSG_FINISH_DEMOTIONREQ_V1 */
    { 
    /* DRS_MSG_FINISH_DEMOTIONREQ_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_FINISH_DEMOTIONREQ_V1 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        0,
        0,
        &__midl_frag906,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag799
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag794_t __midl_frag794 =
{ 
/* DRS_MSG_FINISH_DEMOTIONREQ */
    { 
    /* DRS_MSG_FINISH_DEMOTIONREQ */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 32 /* 0x20 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag796,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag793_t __midl_frag793 =
{ 
/* *DRS_MSG_FINISH_DEMOTIONREQ */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag794
};

static const __midl_frag790_t __midl_frag790 =
{ 
/* IDL_DRSFinishDemotion */
    { 
    /* IDL_DRSFinishDemotion */      /* procedure IDL_DRSFinishDemotion */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hDrs */      /* parameter hDrs */
        &__midl_frag849,
        { 
        /* hDrs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* dwInVersion */      /* parameter dwInVersion */
        &__midl_frag907,
        { 
        /* dwInVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgIn */      /* parameter pmsgIn */
        &__midl_frag794,
        { 
        /* pmsgIn */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pdwOutVersion */      /* parameter pdwOutVersion */
        &__midl_frag907,
        { 
        /* pdwOutVersion */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pmsgOut */      /* parameter pmsgOut */
        &__midl_frag803,
        { 
        /* pmsgOut */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag781_t __midl_frag781 =
{ 
/*  */
    { 
    /* *DSNAME */
        0x20,    /* FC64_RP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag26
    }
};

static const __midl_frag780_t __midl_frag780 =
{ 
/* DRS_MSG_REPLICA_DEMOTIONREQ_V1 */
    { 
    /* DRS_MSG_REPLICA_DEMOTIONREQ_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_REPLICA_DEMOTIONREQ_V1 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        0,
        0,
        &__midl_frag781,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag799
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag778_t __midl_frag778 =
{ 
/* DRS_MSG_REPLICA_DEMOTIONREQ */
    { 
    /* DRS_MSG_REPLICA_DEMOTIONREQ */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 32 /* 0x20 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag780,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag777_t __midl_frag777 =
{ 
/* *DRS_MSG_REPLICA_DEMOTIONREQ */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag778
};

static const __midl_frag774_t __midl_frag774 =
{ 
/* IDL_DRSReplicaDemotion */
    { 
    /* IDL_DRSReplicaDemotion */      /* procedure IDL_DRSReplicaDemotion */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hDrs */      /* parameter hDrs */
        &__midl_frag849,
        { 
        /* hDrs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* dwInVersion */      /* parameter dwInVersion */
        &__midl_frag907,
        { 
        /* dwInVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgIn */      /* parameter pmsgIn */
        &__midl_frag778,
        { 
        /* pmsgIn */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pdwOutVersion */      /* parameter pdwOutVersion */
        &__midl_frag907,
        { 
        /* pdwOutVersion */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pmsgOut */      /* parameter pmsgOut */
        &__midl_frag844,
        { 
        /* pmsgOut */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag760_t __midl_frag760 =
{ 
/* IDL_DRSInitDemotion */
    { 
    /* IDL_DRSInitDemotion */      /* procedure IDL_DRSInitDemotion */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hDrs */      /* parameter hDrs */
        &__midl_frag849,
        { 
        /* hDrs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* dwInVersion */      /* parameter dwInVersion */
        &__midl_frag907,
        { 
        /* dwInVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgIn */      /* parameter pmsgIn */
        &__midl_frag869,
        { 
        /* pmsgIn */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pdwOutVersion */      /* parameter pdwOutVersion */
        &__midl_frag907,
        { 
        /* pdwOutVersion */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pmsgOut */      /* parameter pmsgOut */
        &__midl_frag844,
        { 
        /* pmsgOut */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag758_t __midl_frag758 =
{ 
/*  */
    { 
    /* *DRS_MSG_QUERYSITESREPLYELEMENT_V1 */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag755
    }
};

static const __midl_frag757_t __midl_frag757 =
{ 
/* DRS_MSG_QUERYSITESREPLYELEMENT_V1 */
    { 
    /* DRS_MSG_QUERYSITESREPLYELEMENT_V1 */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* DRS_MSG_QUERYSITESREPLYELEMENT_V1 */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag756_t __midl_frag756 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 10000 /* 0x2710 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag755_t __midl_frag755 =
{ 
/* *DRS_MSG_QUERYSITESREPLYELEMENT_V1 */
    { 
    /* *DRS_MSG_QUERYSITESREPLYELEMENT_V1 */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* *DRS_MSG_QUERYSITESREPLYELEMENT_V1 */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag756
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag757
    }
};

static const __midl_frag754_t __midl_frag754 =
{ 
/* DRS_MSG_QUERYSITESREPLY_V1 */
    { 
    /* DRS_MSG_QUERYSITESREPLY_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_QUERYSITESREPLY_V1 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */,
        0,
        0,
        &__midl_frag758,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* DRS_MSG_QUERYSITESREPLY_V1 */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag752_t __midl_frag752 =
{ 
/* DRS_MSG_QUERYSITESREPLY */
    { 
    /* DRS_MSG_QUERYSITESREPLY */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 24 /* 0x18 */,
        &__midl_frag903,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag754,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag751_t __midl_frag751 =
{ 
/* *DRS_MSG_QUERYSITESREPLY */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag752
};

static const __midl_frag748_t __midl_frag748 =
{ 
/*  */
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag905
    },
    { 
    /* **WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag745
    }
};

static const __midl_frag746_t __midl_frag746 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 1 /* 0x1 */,
        (NDR64_INT64) 10000 /* 0x2710 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag745_t __midl_frag745 =
{ 
/* **WCHAR */
    { 
    /* **WCHAR */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **WCHAR */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag746
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag905
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag905
    }
};

static const __midl_frag743_t __midl_frag743 =
{ 
/* DRS_MSG_QUERYSITESREQ_V1 */
    { 
    /* DRS_MSG_QUERYSITESREQ_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_QUERYSITESREQ_V1 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        0,
        0,
        &__midl_frag748,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* DRS_MSG_QUERYSITESREQ_V1 */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag741_t __midl_frag741 =
{ 
/* DRS_MSG_QUERYSITESREQ */
    { 
    /* DRS_MSG_QUERYSITESREQ */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 32 /* 0x20 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag743,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag740_t __midl_frag740 =
{ 
/* *DRS_MSG_QUERYSITESREQ */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag741
};

static const __midl_frag737_t __midl_frag737 =
{ 
/* IDL_DRSQuerySitesByCost */
    { 
    /* IDL_DRSQuerySitesByCost */      /* procedure IDL_DRSQuerySitesByCost */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hDrs */      /* parameter hDrs */
        &__midl_frag849,
        { 
        /* hDrs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* dwInVersion */      /* parameter dwInVersion */
        &__midl_frag907,
        { 
        /* dwInVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgIn */      /* parameter pmsgIn */
        &__midl_frag741,
        { 
        /* pmsgIn */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pdwOutVersion */      /* parameter pdwOutVersion */
        &__midl_frag907,
        { 
        /* pdwOutVersion */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pmsgOut */      /* parameter pmsgOut */
        &__midl_frag752,
        { 
        /* pmsgOut */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag735_t __midl_frag735 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 10485760 /* 0xa00000 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */
    }
};

static const __midl_frag734_t __midl_frag734 =
{ 
/* *UUID */
    { 
    /* *UUID */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* *UUID */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag735
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag515
    }
};

static const __midl_frag733_t __midl_frag733 =
{ 
/* DRS_MSG_EXISTREPLY_V1 */
    { 
    /* DRS_MSG_EXISTREPLY_V1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_EXISTREPLY_V1 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *UUID */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag734
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag731_t __midl_frag731 =
{ 
/* DRS_MSG_EXISTREPLY */
    { 
    /* DRS_MSG_EXISTREPLY */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag903,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag733,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag730_t __midl_frag730 =
{ 
/* *DRS_MSG_EXISTREPLY */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag731
};

static const __midl_frag727_t __midl_frag727 =
{ 
/*  */
    { 
    /* struct _NDR64_FIX_ARRAY_HEADER_FORMAT */
        0x40,    /* FC64_FIX_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* struct _NDR64_FIX_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    }
};

static const __midl_frag725_t __midl_frag725 =
{ 
/*  */
    { 
    /* *DSNAME */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag26
    },
    { 
    /* *UPTODATE_VECTOR_V1_EXT */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag44
    }
};

static const __midl_frag724_t __midl_frag724 =
{ 
/* DRS_MSG_EXISTREQ_V1 */
    { 
    /* DRS_MSG_EXISTREQ_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_EXISTREQ_V1 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 56 /* 0x38 */,
        0,
        0,
        &__midl_frag725,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag799
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag727
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag722_t __midl_frag722 =
{ 
/* DRS_MSG_EXISTREQ */
    { 
    /* DRS_MSG_EXISTREQ */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 56 /* 0x38 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag724,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag721_t __midl_frag721 =
{ 
/* *DRS_MSG_EXISTREQ */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag722
};

static const __midl_frag718_t __midl_frag718 =
{ 
/* IDL_DRSGetObjectExistence */
    { 
    /* IDL_DRSGetObjectExistence */      /* procedure IDL_DRSGetObjectExistence */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hDrs */      /* parameter hDrs */
        &__midl_frag849,
        { 
        /* hDrs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* dwInVersion */      /* parameter dwInVersion */
        &__midl_frag907,
        { 
        /* dwInVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgIn */      /* parameter pmsgIn */
        &__midl_frag722,
        { 
        /* pmsgIn */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pdwOutVersion */      /* parameter pdwOutVersion */
        &__midl_frag907,
        { 
        /* pdwOutVersion */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pmsgOut */      /* parameter pmsgOut */
        &__midl_frag731,
        { 
        /* pmsgOut */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag716_t __midl_frag716 =
{ 
/* DRS_MSG_REPVERIFYOBJ_V1 */
    { 
    /* DRS_MSG_REPVERIFYOBJ_V1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_REPVERIFYOBJ_V1 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DSNAME */
            0x20,    /* FC64_RP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag26
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag714_t __midl_frag714 =
{ 
/* DRS_MSG_REPVERIFYOBJ */
    { 
    /* DRS_MSG_REPVERIFYOBJ */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 32 /* 0x20 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag716,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag713_t __midl_frag713 =
{ 
/* *DRS_MSG_REPVERIFYOBJ */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag714
};

static const __midl_frag710_t __midl_frag710 =
{ 
/* IDL_DRSReplicaVerifyObjects */
    { 
    /* IDL_DRSReplicaVerifyObjects */      /* procedure IDL_DRSReplicaVerifyObjects */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hDrs */      /* parameter hDrs */
        &__midl_frag849,
        { 
        /* hDrs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* dwVersion */      /* parameter dwVersion */
        &__midl_frag907,
        { 
        /* dwVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgVerify */      /* parameter pmsgVerify */
        &__midl_frag714,
        { 
        /* pmsgVerify */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag708_t __midl_frag708 =
{ 
/*  */
    { 
    /* *DRS_MSG_REVMEMB_REPLY_V1 */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag706
    }
};

static const __midl_frag706_t __midl_frag706 =
{ 
/* *DRS_MSG_REVMEMB_REPLY_V1 */
    { 
    /* *DRS_MSG_REVMEMB_REPLY_V1 */
        { 
        /* *DRS_MSG_REVMEMB_REPLY_V1 */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *DRS_MSG_REVMEMB_REPLY_V1 */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag227
        },
        &__midl_frag756,
        0,
        0
    }
};

static const __midl_frag705_t __midl_frag705 =
{ 
/* DRS_MSG_GETMEMBERSHIPS2_REPLY_V1 */
    { 
    /* DRS_MSG_GETMEMBERSHIPS2_REPLY_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_GETMEMBERSHIPS2_REPLY_V1 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag708,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag703_t __midl_frag703 =
{ 
/* DRS_MSG_GETMEMBERSHIPS2_REPLY */
    { 
    /* DRS_MSG_GETMEMBERSHIPS2_REPLY */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag903,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag705,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag702_t __midl_frag702 =
{ 
/* *DRS_MSG_GETMEMBERSHIPS2_REPLY */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag703
};

static const __midl_frag699_t __midl_frag699 =
{ 
/*  */
    { 
    /* *DRS_MSG_REVMEMB_REQ_V1 */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag697
    }
};

static const __midl_frag698_t __midl_frag698 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 1 /* 0x1 */,
        (NDR64_INT64) 10000 /* 0x2710 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag697_t __midl_frag697 =
{ 
/* *DRS_MSG_REVMEMB_REQ_V1 */
    { 
    /* *DRS_MSG_REVMEMB_REQ_V1 */
        { 
        /* *DRS_MSG_REVMEMB_REQ_V1 */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *DRS_MSG_REVMEMB_REQ_V1 */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag216
        },
        &__midl_frag698,
        0,
        0
    }
};

static const __midl_frag696_t __midl_frag696 =
{ 
/* DRS_MSG_GETMEMBERSHIPS2_REQ_V1 */
    { 
    /* DRS_MSG_GETMEMBERSHIPS2_REQ_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_GETMEMBERSHIPS2_REQ_V1 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag699,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag694_t __midl_frag694 =
{ 
/* DRS_MSG_GETMEMBERSHIPS2_REQ */
    { 
    /* DRS_MSG_GETMEMBERSHIPS2_REQ */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag696,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag693_t __midl_frag693 =
{ 
/* *DRS_MSG_GETMEMBERSHIPS2_REQ */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag694
};

static const __midl_frag690_t __midl_frag690 =
{ 
/* IDL_DRSGetMemberships2 */
    { 
    /* IDL_DRSGetMemberships2 */      /* procedure IDL_DRSGetMemberships2 */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hDrs */      /* parameter hDrs */
        &__midl_frag849,
        { 
        /* hDrs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* dwInVersion */      /* parameter dwInVersion */
        &__midl_frag907,
        { 
        /* dwInVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgIn */      /* parameter pmsgIn */
        &__midl_frag694,
        { 
        /* pmsgIn */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pdwOutVersion */      /* parameter pdwOutVersion */
        &__midl_frag907,
        { 
        /* pdwOutVersion */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pmsgOut */      /* parameter pmsgOut */
        &__midl_frag703,
        { 
        /* pmsgOut */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag682_t __midl_frag682 =
{ 
/*  */
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag905
    },
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag905
    },
    { 
    /* *WCHAR */
        0x23,    /* FC64_FP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag905
    },
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag671
    },
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag674
    },
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag677
    },
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag905
    },
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag905
    }
};

static const __midl_frag678_t __midl_frag678 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 256 /* 0x100 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 64 /* 0x40 */
    }
};

static const __midl_frag677_t __midl_frag677 =
{ 
/* *WCHAR */
    { 
    /* *WCHAR */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *WCHAR */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag678
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag826
    }
};

static const __midl_frag675_t __midl_frag675 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 256 /* 0x100 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */
    }
};

static const __midl_frag674_t __midl_frag674 =
{ 
/* *WCHAR */
    { 
    /* *WCHAR */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *WCHAR */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag675
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag826
    }
};

static const __midl_frag672_t __midl_frag672 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 256 /* 0x100 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */
    }
};

static const __midl_frag671_t __midl_frag671 =
{ 
/* *WCHAR */
    { 
    /* *WCHAR */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *WCHAR */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag672
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag826
    }
};

static const __midl_frag667_t __midl_frag667 =
{ 
/* DRS_MSG_ADDSIDREQ_V1 */
    { 
    /* DRS_MSG_ADDSIDREQ_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_ADDSIDREQ_V1 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 96 /* 0x60 */,
        0,
        0,
        &__midl_frag682,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag665_t __midl_frag665 =
{ 
/* DRS_MSG_ADDSIDREQ */
    { 
    /* DRS_MSG_ADDSIDREQ */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 96 /* 0x60 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag667,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag664_t __midl_frag664 =
{ 
/* *DRS_MSG_ADDSIDREQ */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag665
};

static const __midl_frag661_t __midl_frag661 =
{ 
/* IDL_DRSAddSidHistory */
    { 
    /* IDL_DRSAddSidHistory */      /* procedure IDL_DRSAddSidHistory */
        (NDR64_UINT32) 23990336 /* 0x16e1040 */,    /* explicit handle */ /* IsIntrepreted, [ptr], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hDrs */      /* parameter hDrs */
        &__midl_frag849,
        { 
        /* hDrs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* dwInVersion */      /* parameter dwInVersion */
        &__midl_frag907,
        { 
        /* dwInVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgIn */      /* parameter pmsgIn */
        &__midl_frag665,
        { 
        /* pmsgIn */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pdwOutVersion */      /* parameter pdwOutVersion */
        &__midl_frag907,
        { 
        /* pdwOutVersion */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pmsgOut */      /* parameter pmsgOut */
        &__midl_frag844,
        { 
        /* pmsgOut */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag659_t __midl_frag659 =
{ 
/* *DS_REPL_NEIGHBORSW */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag550
};

static const __midl_frag658_t __midl_frag658 =
{ 
/* DS_REPL_CLIENT_CONTEXT */
    { 
    /* DS_REPL_CLIENT_CONTEXT */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DS_REPL_CLIENT_CONTEXT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */
    }
};

static const __midl_frag656_t __midl_frag656 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        &__midl_frag756
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 48 /* 0x30 */,
        &__midl_frag658
    }
};

static const __midl_frag655_t __midl_frag655 =
{ 
/* DS_REPL_CLIENT_CONTEXTS */
    { 
    /* DS_REPL_CLIENT_CONTEXTS */
        0x32,    /* FC64_CONF_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DS_REPL_CLIENT_CONTEXTS */
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag656
    }
};

static const __midl_frag654_t __midl_frag654 =
{ 
/* *DS_REPL_CLIENT_CONTEXTS */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag655
};

static const __midl_frag653_t __midl_frag653 =
{ 
/* *UPTODATE_VECTOR_V1_EXT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag44
};

static const __midl_frag650_t __midl_frag650 =
{ 
/* DS_REPL_SERVER_OUTGOING_CALL */
    { 
    /* DS_REPL_SERVER_OUTGOING_CALL */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DS_REPL_SERVER_OUTGOING_CALL */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        0,
        0,
        &__midl_frag906,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* DS_REPL_SERVER_OUTGOING_CALL */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag649_t __midl_frag649 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 256 /* 0x100 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag648_t __midl_frag648 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
        { 
        /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag650
        },
        &__midl_frag649,
        0,
        0
    }
};

static const __midl_frag647_t __midl_frag647 =
{ 
/* DS_REPL_SERVER_OUTGOING_CALLS */
    { 
    /* DS_REPL_SERVER_OUTGOING_CALLS */
        0x37,    /* FC64_FORCED_CONF_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DS_REPL_SERVER_OUTGOING_CALLS */
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 1 /* 0x1 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        0,
        0,
        0,
        &__midl_frag648,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag646_t __midl_frag646 =
{ 
/* *DS_REPL_SERVER_OUTGOING_CALLS */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag647
};

static const __midl_frag644_t __midl_frag644 =
{ 
/*  */
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag905
    },
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag905
    },
    { 
    /* *BYTE */
        0x23,    /* FC64_FP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag640
    },
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag905
    }
};

static const __midl_frag641_t __midl_frag641 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    }
};

static const __midl_frag640_t __midl_frag640 =
{ 
/* *BYTE */
    { 
    /* *BYTE */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *BYTE */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag641
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag898
    }
};

static const __midl_frag637_t __midl_frag637 =
{ 
/* DS_REPL_VALUE_META_DATA_2 */
    { 
    /* DS_REPL_VALUE_META_DATA_2 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DS_REPL_VALUE_META_DATA_2 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 104 /* 0x68 */,
        0,
        0,
        &__midl_frag644,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag799
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag636_t __midl_frag636 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag635_t __midl_frag635 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
        { 
        /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag637
        },
        &__midl_frag636,
        0,
        0
    }
};

static const __midl_frag634_t __midl_frag634 =
{ 
/* DS_REPL_ATTR_VALUE_META_DATA_2 */
    { 
    /* DS_REPL_ATTR_VALUE_META_DATA_2 */
        0x37,    /* FC64_FORCED_CONF_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DS_REPL_ATTR_VALUE_META_DATA_2 */
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 1 /* 0x1 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        0,
        0,
        0,
        &__midl_frag635,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag633_t __midl_frag633 =
{ 
/* *DS_REPL_ATTR_VALUE_META_DATA_2 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag634
};

static const __midl_frag631_t __midl_frag631 =
{ 
/*  */
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag905
    },
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag905
    }
};

static const __midl_frag628_t __midl_frag628 =
{ 
/* DS_REPL_ATTR_META_DATA_2 */
    { 
    /* DS_REPL_ATTR_META_DATA_2 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DS_REPL_ATTR_META_DATA_2 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 64 /* 0x40 */,
        0,
        0,
        &__midl_frag631,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag799
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag626_t __midl_frag626 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
        { 
        /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag628
        },
        &__midl_frag636,
        0,
        0
    }
};

static const __midl_frag625_t __midl_frag625 =
{ 
/* DS_REPL_OBJ_META_DATA_2 */
    { 
    /* DS_REPL_OBJ_META_DATA_2 */
        0x37,    /* FC64_FORCED_CONF_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DS_REPL_OBJ_META_DATA_2 */
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 1 /* 0x1 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        0,
        0,
        0,
        &__midl_frag626,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag624_t __midl_frag624 =
{ 
/* *DS_REPL_OBJ_META_DATA_2 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag625
};

static const __midl_frag622_t __midl_frag622 =
{ 
/* DS_REPL_CURSOR_3W */
    { 
    /* DS_REPL_CURSOR_3W */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DS_REPL_CURSOR_3W */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 32 /* 0x20 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag905
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag619_t __midl_frag619 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        &__midl_frag636
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 1 /* 0x1 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 40 /* 0x28 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 32 /* 0x20 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag905
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 40 /* 0x28 */,
        &__midl_frag622
    }
};

static const __midl_frag617_t __midl_frag617 =
{ 
/* DS_REPL_CURSORS_3W */
    { 
    /* DS_REPL_CURSORS_3W */
        0x33,    /* FC64_CONF_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DS_REPL_CURSORS_3W */
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag619
    },
    { 
    /*  */
        { 
        /*  */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                0x82,    /* FC64_VARIABLE_REPEAT */
                { 
                /* struct _NDR64_REPEAT_FORMAT */
                    (NDR64_UINT8) 1 /* 0x1 */,
                    (NDR64_UINT8) 0 /* 0x0 */
                },
                (NDR64_UINT16) 0 /* 0x0 */,
                (NDR64_UINT32) 40 /* 0x28 */,
                (NDR64_UINT32) 8 /* 0x8 */,
                (NDR64_UINT32) 1 /* 0x1 */
            },
            { 
            /*  */
                { 
                /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                    (NDR64_UINT32) 32 /* 0x20 */,
                    (NDR64_UINT32) 0 /* 0x0 */
                },
                { 
                /* *WCHAR */
                    0x21,    /* FC64_UP */
                    (NDR64_UINT8) 0 /* 0x0 */,
                    (NDR64_UINT16) 0 /* 0x0 */,
                    &__midl_frag905
                }
            }
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag616_t __midl_frag616 =
{ 
/* *DS_REPL_CURSORS_3W */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag617
};

static const __midl_frag615_t __midl_frag615 =
{ 
/* DS_REPL_CURSOR_2 */
    { 
    /* DS_REPL_CURSOR_2 */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DS_REPL_CURSOR_2 */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */
    }
};

static const __midl_frag613_t __midl_frag613 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        &__midl_frag636
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 32 /* 0x20 */,
        &__midl_frag615
    }
};

static const __midl_frag612_t __midl_frag612 =
{ 
/* DS_REPL_CURSORS_2 */
    { 
    /* DS_REPL_CURSORS_2 */
        0x32,    /* FC64_CONF_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DS_REPL_CURSORS_2 */
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag613
    }
};

static const __midl_frag611_t __midl_frag611 =
{ 
/* *DS_REPL_CURSORS_2 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag612
};

static const __midl_frag609_t __midl_frag609 =
{ 
/*  */
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag905
    },
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag905
    },
    { 
    /* *BYTE */
        0x23,    /* FC64_FP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag640
    }
};

static const __midl_frag603_t __midl_frag603 =
{ 
/* DS_REPL_VALUE_META_DATA */
    { 
    /* DS_REPL_VALUE_META_DATA */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DS_REPL_VALUE_META_DATA */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 96 /* 0x60 */,
        0,
        0,
        &__midl_frag609,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag799
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag601_t __midl_frag601 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
        { 
        /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag603
        },
        &__midl_frag636,
        0,
        0
    }
};

static const __midl_frag600_t __midl_frag600 =
{ 
/* DS_REPL_ATTR_VALUE_META_DATA */
    { 
    /* DS_REPL_ATTR_VALUE_META_DATA */
        0x37,    /* FC64_FORCED_CONF_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DS_REPL_ATTR_VALUE_META_DATA */
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 1 /* 0x1 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        0,
        0,
        0,
        &__midl_frag601,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag599_t __midl_frag599 =
{ 
/* *DS_REPL_ATTR_VALUE_META_DATA */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag600
};

static const __midl_frag595_t __midl_frag595 =
{ 
/* DS_REPL_OPW */
    { 
    /* DS_REPL_OPW */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DS_REPL_OPW */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 80 /* 0x50 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 24 /* 0x18 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag905
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 32 /* 0x20 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag905
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 40 /* 0x28 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag905
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag591_t __midl_frag591 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag590_t __midl_frag590 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 80 /* 0x50 */,
        &__midl_frag591
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 1 /* 0x1 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 80 /* 0x50 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 3 /* 0x3 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 24 /* 0x18 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag905
            },
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 32 /* 0x20 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag905
            },
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 40 /* 0x28 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag905
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 80 /* 0x50 */,
        &__midl_frag595
    }
};

static const __midl_frag589_t __midl_frag589 =
{ 
/* DS_REPL_PENDING_OPSW */
    { 
    /* DS_REPL_PENDING_OPSW */
        0x37,    /* FC64_FORCED_CONF_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DS_REPL_PENDING_OPSW */
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 1 /* 0x1 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        0,
        &__midl_frag590,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag588_t __midl_frag588 =
{ 
/* *DS_REPL_PENDING_OPSW */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag589
};

static const __midl_frag587_t __midl_frag587 =
{ 
/* *DS_REPL_KCC_DSA_FAILURESW */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag580
};

static const __midl_frag585_t __midl_frag585 =
{ 
/* DS_REPL_KCC_DSA_FAILUREW */
    { 
    /* DS_REPL_KCC_DSA_FAILUREW */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DS_REPL_KCC_DSA_FAILUREW */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag905
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag582_t __midl_frag582 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        &__midl_frag636
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 1 /* 0x1 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 40 /* 0x28 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag905
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 40 /* 0x28 */,
        &__midl_frag585
    }
};

static const __midl_frag580_t __midl_frag580 =
{ 
/* DS_REPL_KCC_DSA_FAILURESW */
    { 
    /* DS_REPL_KCC_DSA_FAILURESW */
        0x33,    /* FC64_CONF_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DS_REPL_KCC_DSA_FAILURESW */
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag582
    },
    { 
    /*  */
        { 
        /*  */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                0x82,    /* FC64_VARIABLE_REPEAT */
                { 
                /* struct _NDR64_REPEAT_FORMAT */
                    (NDR64_UINT8) 1 /* 0x1 */,
                    (NDR64_UINT8) 0 /* 0x0 */
                },
                (NDR64_UINT16) 0 /* 0x0 */,
                (NDR64_UINT32) 40 /* 0x28 */,
                (NDR64_UINT32) 8 /* 0x8 */,
                (NDR64_UINT32) 1 /* 0x1 */
            },
            { 
            /*  */
                { 
                /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                    (NDR64_UINT32) 0 /* 0x0 */,
                    (NDR64_UINT32) 0 /* 0x0 */
                },
                { 
                /* *WCHAR */
                    0x21,    /* FC64_UP */
                    (NDR64_UINT8) 0 /* 0x0 */,
                    (NDR64_UINT16) 0 /* 0x0 */,
                    &__midl_frag905
                }
            }
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag575_t __midl_frag575 =
{ 
/* DS_REPL_ATTR_META_DATA */
    { 
    /* DS_REPL_ATTR_META_DATA */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DS_REPL_ATTR_META_DATA */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 56 /* 0x38 */,
        0,
        0,
        &__midl_frag906,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag799
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag573_t __midl_frag573 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
        { 
        /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag575
        },
        &__midl_frag636,
        0,
        0
    }
};

static const __midl_frag572_t __midl_frag572 =
{ 
/* DS_REPL_OBJ_META_DATA */
    { 
    /* DS_REPL_OBJ_META_DATA */
        0x37,    /* FC64_FORCED_CONF_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DS_REPL_OBJ_META_DATA */
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 1 /* 0x1 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        0,
        0,
        0,
        &__midl_frag573,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag571_t __midl_frag571 =
{ 
/* *DS_REPL_OBJ_META_DATA */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag572
};

static const __midl_frag570_t __midl_frag570 =
{ 
/* DS_REPL_CURSOR */
    { 
    /* DS_REPL_CURSOR */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DS_REPL_CURSOR */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */
    }
};

static const __midl_frag568_t __midl_frag568 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */,
        &__midl_frag636
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 24 /* 0x18 */,
        &__midl_frag570
    }
};

static const __midl_frag567_t __midl_frag567 =
{ 
/* DS_REPL_CURSORS */
    { 
    /* DS_REPL_CURSORS */
        0x32,    /* FC64_CONF_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DS_REPL_CURSORS */
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag568
    }
};

static const __midl_frag566_t __midl_frag566 =
{ 
/* *DS_REPL_CURSORS */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag567
};

static const __midl_frag561_t __midl_frag561 =
{ 
/* DS_REPL_NEIGHBORW */
    { 
    /* DS_REPL_NEIGHBORW */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DS_REPL_NEIGHBORW */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 144 /* 0x90 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag905
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag905
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag905
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 24 /* 0x18 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag905
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag555_t __midl_frag555 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 144 /* 0x90 */,
        &__midl_frag636
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 1 /* 0x1 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 144 /* 0x90 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 4 /* 0x4 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag905
            },
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 8 /* 0x8 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag905
            },
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 16 /* 0x10 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag905
            },
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 24 /* 0x18 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag905
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 144 /* 0x90 */,
        &__midl_frag561
    }
};

static const __midl_frag550_t __midl_frag550 =
{ 
/* DS_REPL_NEIGHBORSW */
    { 
    /* DS_REPL_NEIGHBORSW */
        0x33,    /* FC64_CONF_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DS_REPL_NEIGHBORSW */
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag555
    },
    { 
    /*  */
        { 
        /*  */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                0x82,    /* FC64_VARIABLE_REPEAT */
                { 
                /* struct _NDR64_REPEAT_FORMAT */
                    (NDR64_UINT8) 1 /* 0x1 */,
                    (NDR64_UINT8) 0 /* 0x0 */
                },
                (NDR64_UINT16) 0 /* 0x0 */,
                (NDR64_UINT32) 144 /* 0x90 */,
                (NDR64_UINT32) 8 /* 0x8 */,
                (NDR64_UINT32) 4 /* 0x4 */
            },
            { 
            /*  */
                { 
                /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                    (NDR64_UINT32) 0 /* 0x0 */,
                    (NDR64_UINT32) 0 /* 0x0 */
                },
                { 
                /* *WCHAR */
                    0x21,    /* FC64_UP */
                    (NDR64_UINT8) 0 /* 0x0 */,
                    (NDR64_UINT16) 0 /* 0x0 */,
                    &__midl_frag905
                },
                { 
                /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                    (NDR64_UINT32) 8 /* 0x8 */,
                    (NDR64_UINT32) 0 /* 0x0 */
                },
                { 
                /* *WCHAR */
                    0x21,    /* FC64_UP */
                    (NDR64_UINT8) 0 /* 0x0 */,
                    (NDR64_UINT16) 0 /* 0x0 */,
                    &__midl_frag905
                },
                { 
                /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                    (NDR64_UINT32) 16 /* 0x10 */,
                    (NDR64_UINT32) 0 /* 0x0 */
                },
                { 
                /* *WCHAR */
                    0x21,    /* FC64_UP */
                    (NDR64_UINT8) 0 /* 0x0 */,
                    (NDR64_UINT16) 0 /* 0x0 */,
                    &__midl_frag905
                },
                { 
                /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                    (NDR64_UINT32) 24 /* 0x18 */,
                    (NDR64_UINT32) 0 /* 0x0 */
                },
                { 
                /* *WCHAR */
                    0x21,    /* FC64_UP */
                    (NDR64_UINT8) 0 /* 0x0 */,
                    (NDR64_UINT16) 0 /* 0x0 */,
                    &__midl_frag905
                }
            }
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag547_t __midl_frag547 =
{ 
/* DRS_MSG_GETREPLINFO_REPLY */
    { 
    /* DRS_MSG_GETREPLINFO_REPLY */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag903,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 15 /* 0xf */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 0 /* 0x0 */,
        &__midl_frag659,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag566,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag571,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag587,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag587,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 5 /* 0x5 */,
        &__midl_frag588,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 6 /* 0x6 */,
        &__midl_frag599,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 7 /* 0x7 */,
        &__midl_frag611,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 8 /* 0x8 */,
        &__midl_frag616,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 9 /* 0x9 */,
        &__midl_frag624,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 10 /* 0xa */,
        &__midl_frag633,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) -6 /* 0xfffffffffffffffa */,
        &__midl_frag646,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) -5 /* 0xfffffffffffffffb */,
        &__midl_frag653,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) -4 /* 0xfffffffffffffffc */,
        &__midl_frag654,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) -2 /* 0xfffffffffffffffe */,
        &__midl_frag659,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag546_t __midl_frag546 =
{ 
/* *DRS_MSG_GETREPLINFO_REPLY */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag547
};

static const __midl_frag542_t __midl_frag542 =
{ 
/*  */
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag905
    },
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag905
    },
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag905
    }
};

static const __midl_frag538_t __midl_frag538 =
{ 
/* DRS_MSG_GETREPLINFO_REQ_V2 */
    { 
    /* DRS_MSG_GETREPLINFO_REQ_V2 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_GETREPLINFO_REQ_V2 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 64 /* 0x40 */,
        0,
        0,
        &__midl_frag542,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag799
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* DRS_MSG_GETREPLINFO_REQ_V2 */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag534_t __midl_frag534 =
{ 
/* DRS_MSG_GETREPLINFO_REQ_V1 */
    { 
    /* DRS_MSG_GETREPLINFO_REQ_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_GETREPLINFO_REQ_V1 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        0,
        0,
        &__midl_frag906,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag799
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag532_t __midl_frag532 =
{ 
/* DRS_MSG_GETREPLINFO_REQ */
    { 
    /* DRS_MSG_GETREPLINFO_REQ */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 64 /* 0x40 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag534,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag538,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag531_t __midl_frag531 =
{ 
/* *DRS_MSG_GETREPLINFO_REQ */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag532
};

static const __midl_frag528_t __midl_frag528 =
{ 
/* IDL_DRSGetReplInfo */
    { 
    /* IDL_DRSGetReplInfo */      /* procedure IDL_DRSGetReplInfo */
        (NDR64_UINT32) 23990336 /* 0x16e1040 */,    /* explicit handle */ /* IsIntrepreted, [ptr], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hDrs */      /* parameter hDrs */
        &__midl_frag849,
        { 
        /* hDrs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* dwInVersion */      /* parameter dwInVersion */
        &__midl_frag907,
        { 
        /* dwInVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgIn */      /* parameter pmsgIn */
        &__midl_frag532,
        { 
        /* pmsgIn */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pdwOutVersion */      /* parameter pdwOutVersion */
        &__midl_frag907,
        { 
        /* pdwOutVersion */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pmsgOut */      /* parameter pmsgOut */
        &__midl_frag547,
        { 
        /* pmsgOut */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag524_t __midl_frag524 =
{ 
/* DRS_MSG_KCC_EXECUTE */
    { 
    /* DRS_MSG_KCC_EXECUTE */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 3 /* 0x3 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag757,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag523_t __midl_frag523 =
{ 
/* *DRS_MSG_KCC_EXECUTE */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag524
};

static const __midl_frag520_t __midl_frag520 =
{ 
/* IDL_DRSExecuteKCC */
    { 
    /* IDL_DRSExecuteKCC */      /* procedure IDL_DRSExecuteKCC */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hDrs */      /* parameter hDrs */
        &__midl_frag849,
        { 
        /* hDrs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* dwInVersion */      /* parameter dwInVersion */
        &__midl_frag907,
        { 
        /* dwInVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgIn */      /* parameter pmsgIn */
        &__midl_frag524,
        { 
        /* pmsgIn */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag518_t __midl_frag518 =
{ 
/*  */
    { 
    /* *DSNAME */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag26
    },
    { 
    /* *DRS_ERROR_DATA */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag486
    },
    { 
    /* *ADDENTRY_REPLY_INFO */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag516
    }
};

static const __midl_frag517_t __midl_frag517 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 10000 /* 0x2710 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */
    }
};

static const __midl_frag516_t __midl_frag516 =
{ 
/* *ADDENTRY_REPLY_INFO */
    { 
    /* *ADDENTRY_REPLY_INFO */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* *ADDENTRY_REPLY_INFO */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 44 /* 0x2c */,
        &__midl_frag517
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 44 /* 0x2c */,
        &__midl_frag483
    }
};

static const __midl_frag515_t __midl_frag515 =
{ 
/* SYSERR_DRS_WIRE_V1 */
    { 
    /* SYSERR_DRS_WIRE_V1 */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* SYSERR_DRS_WIRE_V1 */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    }
};

static const __midl_frag511_t __midl_frag511 =
{ 
/*  */
    { 
    /* *DSNAME */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag26
    },
    { 
    /* *DSA_ADDRESS_LIST_DRS_WIRE_V1 */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag502
    },
    { 
    /* *CONTREF_DRS_WIRE_V1 */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag509
    }
};

static const __midl_frag509_t __midl_frag509 =
{ 
/* CONTREF_DRS_WIRE_V1 */
    { 
    /* CONTREF_DRS_WIRE_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* CONTREF_DRS_WIRE_V1 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        0,
        0,
        &__midl_frag511,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* NAMERESOP_DRS_WIRE_V1 */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x10,    /* FC64_CHAR */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x10,    /* FC64_CHAR */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x10,    /* FC64_CHAR */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 3 /* 0x3 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* CONTREF_DRS_WIRE_V1 */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag508_t __midl_frag508 =
{ 
/*  */
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag504
    }
};

static const __midl_frag507_t __midl_frag507 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_NOOP */
        0x5,    /* FC_EXPR_PAD */
        (NDR64_UINT8) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_CONST64 */
        0x2,    /* FC_EXPR_CONST64 */
        0x7,    /* FC64_INT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT64) 0 /* 0x0 */
    }
};

static const __midl_frag506_t __midl_frag506 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_OPERATOR */
        0x4,    /* FC_EXPR_OPER */
        0x11,    /* OP_SLASH */
        0x0,    /* FC64_ZERO */
        (NDR64_UINT8) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x3,    /* FC64_UINT16 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_CONST64 */
        0x2,    /* FC_EXPR_CONST64 */
        0x7,    /* FC64_INT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT64) 2 /* 0x2 */
    }
};

static const __midl_frag505_t __midl_frag505 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_OPERATOR */
        0x4,    /* FC_EXPR_OPER */
        0x11,    /* OP_SLASH */
        0x0,    /* FC64_ZERO */
        (NDR64_UINT8) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x3,    /* FC64_UINT16 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */
    },
    { 
    /* struct _NDR64_EXPR_CONST64 */
        0x2,    /* FC_EXPR_CONST64 */
        0x7,    /* FC64_INT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT64) 2 /* 0x2 */
    }
};

static const __midl_frag504_t __midl_frag504 =
{ 
/* *WCHAR */
    { 
    /* *WCHAR */
        0x43,    /* FC64_CONFVAR_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *WCHAR */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag505,
        &__midl_frag506
    }
};

static const __midl_frag503_t __midl_frag503 =
{ 
/* RPC_UNICODE_STRING */
    { 
    /* RPC_UNICODE_STRING */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_UNICODE_STRING */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag508,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag502_t __midl_frag502 =
{ 
/* DSA_ADDRESS_LIST_DRS_WIRE_V1 */
    { 
    /* DSA_ADDRESS_LIST_DRS_WIRE_V1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DSA_ADDRESS_LIST_DRS_WIRE_V1 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DSA_ADDRESS_LIST_DRS_WIRE_V1 */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag502
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *RPC_UNICODE_STRING */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag503
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag501_t __midl_frag501 =
{ 
/* REFERR_DRS_WIRE_V1 */
    { 
    /* REFERR_DRS_WIRE_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* REFERR_DRS_WIRE_V1 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 64 /* 0x40 */,
        0,
        0,
        &__midl_frag511,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* NAMERESOP_DRS_WIRE_V1 */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x10,    /* FC64_CHAR */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x10,    /* FC64_CHAR */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x10,    /* FC64_CHAR */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 3 /* 0x3 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* CONTREF_DRS_WIRE_V1 */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag500_t __midl_frag500 =
{ 
/*  */
    { 
    /* *DSNAME */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag26
    }
};

static const __midl_frag499_t __midl_frag499 =
{ 
/* NAMERR_DRS_WIRE_V1 */
    { 
    /* NAMERR_DRS_WIRE_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* NAMERR_DRS_WIRE_V1 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */,
        0,
        0,
        &__midl_frag500,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 2 /* 0x2 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag498_t __midl_frag498 =
{ 
/*  */
    { 
    /* *DSNAME */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag26
    },
    { 
    /* *PROBLEMLIST_DRS_WIRE_V1 */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag492
    },
    { 
    /* *UCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag496
    }
};

static const __midl_frag497_t __midl_frag497 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 26214400 /* 0x1900000 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */
    }
};

static const __midl_frag496_t __midl_frag496 =
{ 
/* *UCHAR */
    { 
    /* *UCHAR */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *UCHAR */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag497
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag864
    }
};

static const __midl_frag495_t __midl_frag495 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 26214400 /* 0x1900000 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */
    }
};

static const __midl_frag494_t __midl_frag494 =
{ 
/* *UCHAR */
    { 
    /* *UCHAR */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *UCHAR */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag495
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag864
    }
};

static const __midl_frag493_t __midl_frag493 =
{ 
/* PROBLEMLIST_DRS_WIRE_V1 */
    { 
    /* PROBLEMLIST_DRS_WIRE_V1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* PROBLEMLIST_DRS_WIRE_V1 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *PROBLEMLIST_DRS_WIRE_V1 */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag492
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 40 /* 0x28 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *UCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag494
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag492_t __midl_frag492 =
{ 
/* PROBLEMLIST_DRS_WIRE_V1 */
    { 
    /* PROBLEMLIST_DRS_WIRE_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* PROBLEMLIST_DRS_WIRE_V1 */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag493
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag491_t __midl_frag491 =
{ 
/* ATRERR_DRS_WIRE_V1 */
    { 
    /* ATRERR_DRS_WIRE_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* ATRERR_DRS_WIRE_V1 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 64 /* 0x40 */,
        0,
        0,
        &__midl_frag498,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* INTFORMPROB_DRS_WIRE_V1 */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 2 /* 0x2 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* ATTRVAL */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag490_t __midl_frag490 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */
    }
};

static const __midl_frag489_t __midl_frag489 =
{ 
/* DIRERR_DRS_WIRE_V1 */
    { 
    /* DIRERR_DRS_WIRE_V1 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 64 /* 0x40 */,
        &__midl_frag490,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 7 /* 0x7 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag491,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag499,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag501,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag515,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 5 /* 0x5 */,
        &__midl_frag515,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 6 /* 0x6 */,
        &__midl_frag515,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 7 /* 0x7 */,
        &__midl_frag515,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag488_t __midl_frag488 =
{ 
/* DRS_ERROR_DATA_V1 */
    { 
    /* DRS_ERROR_DATA_V1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_ERROR_DATA_V1 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DIRERR_DRS_WIRE_V1 */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag489
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag486_t __midl_frag486 =
{ 
/* DRS_ERROR_DATA */
    { 
    /* DRS_ERROR_DATA */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag591,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag488,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag485_t __midl_frag485 =
{ 
/* DRS_MSG_ADDENTRYREPLY_V3 */
    { 
    /* DRS_MSG_ADDENTRYREPLY_V3 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_ADDENTRYREPLY_V3 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        0,
        0,
        &__midl_frag518,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag484_t __midl_frag484 =
{ 
/*  */
    { 
    /* *DSNAME */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag26
    },
    { 
    /* *ADDENTRY_REPLY_INFO */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag481
    }
};

static const __midl_frag483_t __midl_frag483 =
{ 
/* ADDENTRY_REPLY_INFO */
    { 
    /* ADDENTRY_REPLY_INFO */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* ADDENTRY_REPLY_INFO */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 44 /* 0x2c */
    }
};

static const __midl_frag482_t __midl_frag482 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 10000 /* 0x2710 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 28 /* 0x1c */
    }
};

static const __midl_frag481_t __midl_frag481 =
{ 
/* *ADDENTRY_REPLY_INFO */
    { 
    /* *ADDENTRY_REPLY_INFO */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* *ADDENTRY_REPLY_INFO */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 44 /* 0x2c */,
        &__midl_frag482
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 44 /* 0x2c */,
        &__midl_frag483
    }
};

static const __midl_frag480_t __midl_frag480 =
{ 
/* DRS_MSG_ADDENTRYREPLY_V2 */
    { 
    /* DRS_MSG_ADDENTRYREPLY_V2 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_ADDENTRYREPLY_V2 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        0,
        0,
        &__midl_frag484,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 2 /* 0x2 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag479_t __midl_frag479 =
{ 
/* DRS_MSG_ADDENTRYREPLY_V1 */
    { 
    /* DRS_MSG_ADDENTRYREPLY_V1 */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* DRS_MSG_ADDENTRYREPLY_V1 */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 64 /* 0x40 */
    }
};

static const __midl_frag477_t __midl_frag477 =
{ 
/* DRS_MSG_ADDENTRYREPLY */
    { 
    /* DRS_MSG_ADDENTRYREPLY */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 64 /* 0x40 */,
        &__midl_frag903,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 3 /* 0x3 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag479,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag480,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag485,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag476_t __midl_frag476 =
{ 
/* *DRS_MSG_ADDENTRYREPLY */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag477
};

static const __midl_frag473_t __midl_frag473 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 1048576 /* 0x100000 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */
    }
};

static const __midl_frag472_t __midl_frag472 =
{ 
/* *ATTR */
    { 
    /* *ATTR */
        { 
        /* *ATTR */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *ATTR */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag85
        },
        &__midl_frag473,
        0,
        0
    }
};

static const __midl_frag471_t __midl_frag471 =
{ 
/* DRS_MSG_ADDENTRYREQ_V3 */
    { 
    /* DRS_MSG_ADDENTRYREQ_V3 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_ADDENTRYREQ_V3 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *ENTINFLIST */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag464
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DSNAME */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag26
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 32 /* 0x20 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *ATTR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag472
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 40 /* 0x28 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DRS_SecBufferDesc */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag253
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag470_t __midl_frag470 =
{ 
/* DRS_MSG_ADDENTRYREQ_V3 */
    { 
    /* DRS_MSG_ADDENTRYREQ_V3 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_ADDENTRYREQ_V3 */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag471
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag465_t __midl_frag465 =
{ 
/* ENTINFLIST */
    { 
    /* ENTINFLIST */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* ENTINFLIST */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *ENTINFLIST */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag464
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DSNAME */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag26
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 32 /* 0x20 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *ATTR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag472
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag464_t __midl_frag464 =
{ 
/* ENTINFLIST */
    { 
    /* ENTINFLIST */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* ENTINFLIST */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag465
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag461_t __midl_frag461 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 1048576 /* 0x100000 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag460_t __midl_frag460 =
{ 
/* *ATTR */
    { 
    /* *ATTR */
        { 
        /* *ATTR */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *ATTR */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag85
        },
        &__midl_frag461,
        0,
        0
    }
};

static const __midl_frag459_t __midl_frag459 =
{ 
/* DRS_MSG_ADDENTRYREQ_V1 */
    { 
    /* DRS_MSG_ADDENTRYREQ_V1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_ADDENTRYREQ_V1 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DSNAME */
            0x20,    /* FC64_RP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag26
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *ATTR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag460
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag458_t __midl_frag458 =
{ 
/* DRS_MSG_ADDENTRYREQ_V1 */
    { 
    /* DRS_MSG_ADDENTRYREQ_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_ADDENTRYREQ_V1 */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag459
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag456_t __midl_frag456 =
{ 
/* DRS_MSG_ADDENTRYREQ */
    { 
    /* DRS_MSG_ADDENTRYREQ */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 48 /* 0x30 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 3 /* 0x3 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag458,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag464,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag470,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag455_t __midl_frag455 =
{ 
/* *DRS_MSG_ADDENTRYREQ */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag456
};

static const __midl_frag452_t __midl_frag452 =
{ 
/* IDL_DRSAddEntry */
    { 
    /* IDL_DRSAddEntry */      /* procedure IDL_DRSAddEntry */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hDrs */      /* parameter hDrs */
        &__midl_frag849,
        { 
        /* hDrs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* dwInVersion */      /* parameter dwInVersion */
        &__midl_frag907,
        { 
        /* dwInVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgIn */      /* parameter pmsgIn */
        &__midl_frag456,
        { 
        /* pmsgIn */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pdwOutVersion */      /* parameter pdwOutVersion */
        &__midl_frag907,
        { 
        /* pdwOutVersion */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pmsgOut */      /* parameter pmsgOut */
        &__midl_frag477,
        { 
        /* pmsgOut */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag450_t __midl_frag450 =
{ 
/*  */
    { 
    /* *DS_DOMAIN_CONTROLLER_INFO_FFFFFFFFW */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag445
    }
};

static const __midl_frag448_t __midl_frag448 =
{ 
/* DS_DOMAIN_CONTROLLER_INFO_FFFFFFFFW */
    { 
    /* DS_DOMAIN_CONTROLLER_INFO_FFFFFFFFW */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DS_DOMAIN_CONTROLLER_INFO_FFFFFFFFW */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 24 /* 0x18 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag905
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag445_t __midl_frag445 =
{ 
/* *DS_DOMAIN_CONTROLLER_INFO_FFFFFFFFW */
    { 
    /* *DS_DOMAIN_CONTROLLER_INFO_FFFFFFFFW */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* *DS_DOMAIN_CONTROLLER_INFO_FFFFFFFFW */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        &__midl_frag756
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 1 /* 0x1 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 32 /* 0x20 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 24 /* 0x18 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag905
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 32 /* 0x20 */,
        &__midl_frag448
    }
};

static const __midl_frag444_t __midl_frag444 =
{ 
/* DRS_MSG_DCINFOREPLY_VFFFFFFFF */
    { 
    /* DRS_MSG_DCINFOREPLY_VFFFFFFFF */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_DCINFOREPLY_VFFFFFFFF */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag450,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag443_t __midl_frag443 =
{ 
/*  */
    { 
    /* *DS_DOMAIN_CONTROLLER_INFO_3W */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag426
    }
};

static const __midl_frag435_t __midl_frag435 =
{ 
/* DS_DOMAIN_CONTROLLER_INFO_3W */
    { 
    /* DS_DOMAIN_CONTROLLER_INFO_3W */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DS_DOMAIN_CONTROLLER_INFO_3W */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 136 /* 0x88 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag905
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag905
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag905
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 24 /* 0x18 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag905
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 32 /* 0x20 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag905
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 40 /* 0x28 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag905
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 48 /* 0x30 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag905
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag426_t __midl_frag426 =
{ 
/* *DS_DOMAIN_CONTROLLER_INFO_3W */
    { 
    /* *DS_DOMAIN_CONTROLLER_INFO_3W */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* *DS_DOMAIN_CONTROLLER_INFO_3W */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 136 /* 0x88 */,
        &__midl_frag756
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 1 /* 0x1 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 136 /* 0x88 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 7 /* 0x7 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag905
            },
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 8 /* 0x8 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag905
            },
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 16 /* 0x10 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag905
            },
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 24 /* 0x18 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag905
            },
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 32 /* 0x20 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag905
            },
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 40 /* 0x28 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag905
            },
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 48 /* 0x30 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag905
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 136 /* 0x88 */,
        &__midl_frag435
    }
};

static const __midl_frag425_t __midl_frag425 =
{ 
/* DRS_MSG_DCINFOREPLY_V3 */
    { 
    /* DRS_MSG_DCINFOREPLY_V3 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_DCINFOREPLY_V3 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag443,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag405_t __midl_frag405 =
{ 
/*  */
    { 
    /* *DS_DOMAIN_CONTROLLER_INFO_1W */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag392
    }
};

static const __midl_frag399_t __midl_frag399 =
{ 
/* DS_DOMAIN_CONTROLLER_INFO_1W */
    { 
    /* DS_DOMAIN_CONTROLLER_INFO_1W */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DS_DOMAIN_CONTROLLER_INFO_1W */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag905
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag905
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag905
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 24 /* 0x18 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag905
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 32 /* 0x20 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag905
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag392_t __midl_frag392 =
{ 
/* *DS_DOMAIN_CONTROLLER_INFO_1W */
    { 
    /* *DS_DOMAIN_CONTROLLER_INFO_1W */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* *DS_DOMAIN_CONTROLLER_INFO_1W */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        &__midl_frag756
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 1 /* 0x1 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 48 /* 0x30 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 5 /* 0x5 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag905
            },
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 8 /* 0x8 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag905
            },
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 16 /* 0x10 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag905
            },
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 24 /* 0x18 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag905
            },
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 32 /* 0x20 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag905
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 48 /* 0x30 */,
        &__midl_frag399
    }
};

static const __midl_frag391_t __midl_frag391 =
{ 
/* DRS_MSG_DCINFOREPLY_V1 */
    { 
    /* DRS_MSG_DCINFOREPLY_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_DCINFOREPLY_V1 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag405,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag389_t __midl_frag389 =
{ 
/* DRS_MSG_DCINFOREPLY */
    { 
    /* DRS_MSG_DCINFOREPLY */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag903,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag391,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag425,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag425,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) -1 /* 0xffffffffffffffff */,
        &__midl_frag444,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag388_t __midl_frag388 =
{ 
/* *DRS_MSG_DCINFOREPLY */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag389
};

static const __midl_frag384_t __midl_frag384 =
{ 
/* DRS_MSG_DCINFOREQ_V1 */
    { 
    /* DRS_MSG_DCINFOREQ_V1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_DCINFOREQ_V1 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag905
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag382_t __midl_frag382 =
{ 
/* DRS_MSG_DCINFOREQ */
    { 
    /* DRS_MSG_DCINFOREQ */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag384,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag381_t __midl_frag381 =
{ 
/* *DRS_MSG_DCINFOREQ */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag382
};

static const __midl_frag378_t __midl_frag378 =
{ 
/* IDL_DRSDomainControllerInfo */
    { 
    /* IDL_DRSDomainControllerInfo */      /* procedure IDL_DRSDomainControllerInfo */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hDrs */      /* parameter hDrs */
        &__midl_frag849,
        { 
        /* hDrs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* dwInVersion */      /* parameter dwInVersion */
        &__midl_frag907,
        { 
        /* dwInVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgIn */      /* parameter pmsgIn */
        &__midl_frag382,
        { 
        /* pmsgIn */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pdwOutVersion */      /* parameter pdwOutVersion */
        &__midl_frag907,
        { 
        /* pdwOutVersion */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pmsgOut */      /* parameter pmsgOut */
        &__midl_frag389,
        { 
        /* pmsgOut */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag363_t __midl_frag363 =
{ 
/* IDL_DRSRemoveDsDomain */
    { 
    /* IDL_DRSRemoveDsDomain */      /* procedure IDL_DRSRemoveDsDomain */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hDrs */      /* parameter hDrs */
        &__midl_frag849,
        { 
        /* hDrs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* dwInVersion */      /* parameter dwInVersion */
        &__midl_frag907,
        { 
        /* dwInVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgIn */      /* parameter pmsgIn */
        &__midl_frag852,
        { 
        /* pmsgIn */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pdwOutVersion */      /* parameter pdwOutVersion */
        &__midl_frag907,
        { 
        /* pdwOutVersion */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pmsgOut */      /* parameter pmsgOut */
        &__midl_frag844,
        { 
        /* pmsgOut */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag353_t __midl_frag353 =
{ 
/* DRS_MSG_RMSVRREQ_V1 */
    { 
    /* DRS_MSG_RMSVRREQ_V1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_RMSVRREQ_V1 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag905
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag905
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag351_t __midl_frag351 =
{ 
/* DRS_MSG_RMSVRREQ */
    { 
    /* DRS_MSG_RMSVRREQ */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 24 /* 0x18 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag353,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag350_t __midl_frag350 =
{ 
/* *DRS_MSG_RMSVRREQ */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag351
};

static const __midl_frag347_t __midl_frag347 =
{ 
/* IDL_DRSRemoveDsServer */
    { 
    /* IDL_DRSRemoveDsServer */      /* procedure IDL_DRSRemoveDsServer */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hDrs */      /* parameter hDrs */
        &__midl_frag849,
        { 
        /* hDrs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* dwInVersion */      /* parameter dwInVersion */
        &__midl_frag907,
        { 
        /* dwInVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgIn */      /* parameter pmsgIn */
        &__midl_frag351,
        { 
        /* pmsgIn */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pdwOutVersion */      /* parameter pdwOutVersion */
        &__midl_frag907,
        { 
        /* pdwOutVersion */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pmsgOut */      /* parameter pmsgOut */
        &__midl_frag844,
        { 
        /* pmsgOut */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag339_t __midl_frag339 =
{ 
/*  */
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag905
    },
    { 
    /* **WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag336
    }
};

static const __midl_frag337_t __midl_frag337 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 10000 /* 0x2710 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    }
};

static const __midl_frag336_t __midl_frag336 =
{ 
/* **WCHAR */
    { 
    /* **WCHAR */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **WCHAR */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag337
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag905
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag905
    }
};

static const __midl_frag334_t __midl_frag334 =
{ 
/* DRS_MSG_SPNREQ_V1 */
    { 
    /* DRS_MSG_SPNREQ_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_SPNREQ_V1 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        0,
        0,
        &__midl_frag339,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag332_t __midl_frag332 =
{ 
/* DRS_MSG_SPNREQ */
    { 
    /* DRS_MSG_SPNREQ */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 32 /* 0x20 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag334,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag331_t __midl_frag331 =
{ 
/* *DRS_MSG_SPNREQ */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag332
};

static const __midl_frag328_t __midl_frag328 =
{ 
/* IDL_DRSWriteSPN */
    { 
    /* IDL_DRSWriteSPN */      /* procedure IDL_DRSWriteSPN */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hDrs */      /* parameter hDrs */
        &__midl_frag849,
        { 
        /* hDrs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* dwInVersion */      /* parameter dwInVersion */
        &__midl_frag907,
        { 
        /* dwInVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgIn */      /* parameter pmsgIn */
        &__midl_frag332,
        { 
        /* pmsgIn */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pdwOutVersion */      /* parameter pdwOutVersion */
        &__midl_frag907,
        { 
        /* pdwOutVersion */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pmsgOut */      /* parameter pmsgOut */
        &__midl_frag844,
        { 
        /* pmsgOut */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag326_t __midl_frag326 =
{ 
/*  */
    { 
    /* *__MIDL_ntdsapi_import_0008 */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag320
    }
};

static const __midl_frag322_t __midl_frag322 =
{ 
/* __MIDL_ntdsapi_import_0008 */
    { 
    /* __MIDL_ntdsapi_import_0008 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* __MIDL_ntdsapi_import_0008 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */,
        0,
        0,
        &__midl_frag631,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag320_t __midl_frag320 =
{ 
/* *__MIDL_ntdsapi_import_0008 */
    { 
    /* *__MIDL_ntdsapi_import_0008 */
        { 
        /* *__MIDL_ntdsapi_import_0008 */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *__MIDL_ntdsapi_import_0008 */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag322
        },
        &__midl_frag636,
        0,
        0
    }
};

static const __midl_frag319_t __midl_frag319 =
{ 
/* DS_NAME_RESULTW */
    { 
    /* DS_NAME_RESULTW */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DS_NAME_RESULTW */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag326,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag318_t __midl_frag318 =
{ 
/* DRS_MSG_CRACKREPLY_V1 */
    { 
    /* DRS_MSG_CRACKREPLY_V1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_CRACKREPLY_V1 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DS_NAME_RESULTW */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag319
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag316_t __midl_frag316 =
{ 
/* DRS_MSG_CRACKREPLY */
    { 
    /* DRS_MSG_CRACKREPLY */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag903,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag318,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag315_t __midl_frag315 =
{ 
/* *DRS_MSG_CRACKREPLY */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag316
};

static const __midl_frag311_t __midl_frag311 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 1 /* 0x1 */,
        (NDR64_INT64) 10000 /* 0x2710 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 20 /* 0x14 */
    }
};

static const __midl_frag310_t __midl_frag310 =
{ 
/* **WCHAR */
    { 
    /* **WCHAR */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **WCHAR */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag311
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag905
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag905
    }
};

static const __midl_frag309_t __midl_frag309 =
{ 
/* DRS_MSG_CRACKREQ_V1 */
    { 
    /* DRS_MSG_CRACKREQ_V1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_CRACKREQ_V1 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 24 /* 0x18 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* **WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag310
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag307_t __midl_frag307 =
{ 
/* DRS_MSG_CRACKREQ */
    { 
    /* DRS_MSG_CRACKREQ */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 32 /* 0x20 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag309,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag306_t __midl_frag306 =
{ 
/* *DRS_MSG_CRACKREQ */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag307
};

static const __midl_frag303_t __midl_frag303 =
{ 
/* IDL_DRSCrackNames */
    { 
    /* IDL_DRSCrackNames */      /* procedure IDL_DRSCrackNames */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hDrs */      /* parameter hDrs */
        &__midl_frag849,
        { 
        /* hDrs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* dwInVersion */      /* parameter dwInVersion */
        &__midl_frag907,
        { 
        /* dwInVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgIn */      /* parameter pmsgIn */
        &__midl_frag307,
        { 
        /* pmsgIn */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pdwOutVersion */      /* parameter pdwOutVersion */
        &__midl_frag907,
        { 
        /* pdwOutVersion */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pmsgOut */      /* parameter pmsgOut */
        &__midl_frag316,
        { 
        /* pmsgOut */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag301_t __midl_frag301 =
{ 
/*  */
    { 
    /* *BYTE */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag295
    },
    { 
    /* *BYTE */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag298
    }
};

static const __midl_frag298_t __midl_frag298 =
{ 
/* *BYTE */
    { 
    /* *BYTE */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *BYTE */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag735
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag898
    }
};

static const __midl_frag296_t __midl_frag296 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 10485760 /* 0xa00000 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag295_t __midl_frag295 =
{ 
/* *BYTE */
    { 
    /* *BYTE */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *BYTE */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag296
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag898
    }
};

static const __midl_frag294_t __midl_frag294 =
{ 
/* DRS_MSG_NT4_CHGLOG_REPLY_V1 */
    { 
    /* DRS_MSG_NT4_CHGLOG_REPLY_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_NT4_CHGLOG_REPLY_V1 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 80 /* 0x50 */,
        0,
        0,
        &__midl_frag301,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag292_t __midl_frag292 =
{ 
/* DRS_MSG_NT4_CHGLOG_REPLY */
    { 
    /* DRS_MSG_NT4_CHGLOG_REPLY */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 80 /* 0x50 */,
        &__midl_frag903,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag294,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag291_t __midl_frag291 =
{ 
/* *DRS_MSG_NT4_CHGLOG_REPLY */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag292
};

static const __midl_frag288_t __midl_frag288 =
{ 
/*  */
    { 
    /* *BYTE */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag285
    }
};

static const __midl_frag286_t __midl_frag286 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 10485760 /* 0xa00000 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag285_t __midl_frag285 =
{ 
/* *BYTE */
    { 
    /* *BYTE */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *BYTE */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag286
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag898
    }
};

static const __midl_frag284_t __midl_frag284 =
{ 
/* DRS_MSG_NT4_CHGLOG_REQ_V1 */
    { 
    /* DRS_MSG_NT4_CHGLOG_REQ_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_NT4_CHGLOG_REQ_V1 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */,
        0,
        0,
        &__midl_frag288,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag282_t __midl_frag282 =
{ 
/* DRS_MSG_NT4_CHGLOG_REQ */
    { 
    /* DRS_MSG_NT4_CHGLOG_REQ */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 24 /* 0x18 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag284,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag281_t __midl_frag281 =
{ 
/* *DRS_MSG_NT4_CHGLOG_REQ */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag282
};

static const __midl_frag278_t __midl_frag278 =
{ 
/* IDL_DRSGetNT4ChangeLog */
    { 
    /* IDL_DRSGetNT4ChangeLog */      /* procedure IDL_DRSGetNT4ChangeLog */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hDrs */      /* parameter hDrs */
        &__midl_frag849,
        { 
        /* hDrs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* dwInVersion */      /* parameter dwInVersion */
        &__midl_frag907,
        { 
        /* dwInVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgIn */      /* parameter pmsgIn */
        &__midl_frag282,
        { 
        /* pmsgIn */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pdwOutVersion */      /* parameter pdwOutVersion */
        &__midl_frag907,
        { 
        /* pdwOutVersion */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pmsgOut */      /* parameter pmsgOut */
        &__midl_frag292,
        { 
        /* pmsgOut */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag275_t __midl_frag275 =
{ 
/* DRS_MSG_MOVEREPLY_V2 */
    { 
    /* DRS_MSG_MOVEREPLY_V2 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_MOVEREPLY_V2 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag500,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag272_t __midl_frag272 =
{ 
/* *PrefixTableEntry */
    { 
    /* *PrefixTableEntry */
        { 
        /* *PrefixTableEntry */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *PrefixTableEntry */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag54
        },
        &__midl_frag461,
        0,
        0
    }
};

static const __midl_frag271_t __midl_frag271 =
{ 
/* *ENTINF */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag203
};

static const __midl_frag270_t __midl_frag270 =
{ 
/* DRS_MSG_MOVEREPLY_V1 */
    { 
    /* DRS_MSG_MOVEREPLY_V1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_MOVEREPLY_V1 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* **ENTINF */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 16 /* 0x10 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag271
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *PrefixTableEntry */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag272
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 24 /* 0x18 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *ULONG */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 8 /* 0x8 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag907
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag269_t __midl_frag269 =
{ 
/* DRS_MSG_MOVEREPLY_V1 */
    { 
    /* DRS_MSG_MOVEREPLY_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_MOVEREPLY_V1 */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag270
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag267_t __midl_frag267 =
{ 
/* DRS_MSG_MOVEREPLY */
    { 
    /* DRS_MSG_MOVEREPLY */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 32 /* 0x20 */,
        &__midl_frag903,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag269,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag275,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag266_t __midl_frag266 =
{ 
/* *DRS_MSG_MOVEREPLY */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag267
};

static const __midl_frag263_t __midl_frag263 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 1048576 /* 0x100000 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */
    }
};

static const __midl_frag262_t __midl_frag262 =
{ 
/* *PrefixTableEntry */
    { 
    /* *PrefixTableEntry */
        { 
        /* *PrefixTableEntry */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *PrefixTableEntry */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag54
        },
        &__midl_frag263,
        0,
        0
    }
};

static const __midl_frag260_t __midl_frag260 =
{ 
/* *BYTE */
    { 
    /* *BYTE */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *BYTE */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag756
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag898
    }
};

static const __midl_frag259_t __midl_frag259 =
{ 
/* DRS_SecBuffer */
    { 
    /* DRS_SecBuffer */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_SecBuffer */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *BYTE */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag260
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag255_t __midl_frag255 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 10000 /* 0x2710 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */
    }
};

static const __midl_frag254_t __midl_frag254 =
{ 
/* *DRS_SecBuffer */
    { 
    /* *DRS_SecBuffer */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* *DRS_SecBuffer */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag255
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 1 /* 0x1 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 8 /* 0x8 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *BYTE */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 32 /* 0x20 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag260
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag259
    }
};

static const __midl_frag253_t __midl_frag253 =
{ 
/* DRS_SecBufferDesc */
    { 
    /* DRS_SecBufferDesc */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_SecBufferDesc */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DRS_SecBuffer */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag254
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag252_t __midl_frag252 =
{ 
/* DRS_MSG_MOVEREQ_V2 */
    { 
    /* DRS_MSG_MOVEREQ_V2 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_MOVEREQ_V2 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 64 /* 0x40 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DSNAME */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag26
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *ENTINF */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag203
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DSNAME */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag26
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 24 /* 0x18 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DSNAME */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag26
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 32 /* 0x20 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DRS_SecBufferDesc */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag253
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 48 /* 0x30 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *PrefixTableEntry */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag262
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag251_t __midl_frag251 =
{ 
/* DRS_MSG_MOVEREQ_V2 */
    { 
    /* DRS_MSG_MOVEREQ_V2 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_MOVEREQ_V2 */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 64 /* 0x40 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag252
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag249_t __midl_frag249 =
{ 
/* *PrefixTableEntry */
    { 
    /* *PrefixTableEntry */
        { 
        /* *PrefixTableEntry */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *PrefixTableEntry */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag54
        },
        &__midl_frag473,
        0,
        0
    }
};

static const __midl_frag247_t __midl_frag247 =
{ 
/* DRS_MSG_MOVEREQ_V1 */
    { 
    /* DRS_MSG_MOVEREQ_V1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_MOVEREQ_V1 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *char */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 8 /* 0x8 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag864
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *ENTINF */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag203
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *UUID */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag515
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 32 /* 0x20 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *PrefixTableEntry */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag249
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag246_t __midl_frag246 =
{ 
/* DRS_MSG_MOVEREQ_V1 */
    { 
    /* DRS_MSG_MOVEREQ_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_MOVEREQ_V1 */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag247
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag244_t __midl_frag244 =
{ 
/* DRS_MSG_MOVEREQ */
    { 
    /* DRS_MSG_MOVEREQ */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 64 /* 0x40 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag246,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag251,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag243_t __midl_frag243 =
{ 
/* *DRS_MSG_MOVEREQ */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag244
};

static const __midl_frag240_t __midl_frag240 =
{ 
/* IDL_DRSInterDomainMove */
    { 
    /* IDL_DRSInterDomainMove */      /* procedure IDL_DRSInterDomainMove */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hDrs */      /* parameter hDrs */
        &__midl_frag849,
        { 
        /* hDrs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* dwInVersion */      /* parameter dwInVersion */
        &__midl_frag907,
        { 
        /* dwInVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgIn */      /* parameter pmsgIn */
        &__midl_frag244,
        { 
        /* pmsgIn */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pdwOutVersion */      /* parameter pdwOutVersion */
        &__midl_frag907,
        { 
        /* pdwOutVersion */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pmsgOut */      /* parameter pmsgOut */
        &__midl_frag267,
        { 
        /* pmsgOut */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag238_t __midl_frag238 =
{ 
/*  */
    { 
    /* **DSNAME */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag228
    },
    { 
    /* *DWORD */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag231
    },
    { 
    /* **NT4SID */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag234
    }
};

static const __midl_frag237_t __midl_frag237 =
{ 
/* *NT4SID */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag236
};

static const __midl_frag236_t __midl_frag236 =
{ 
/* NT4SID */
    { 
    /* NT4SID */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* NT4SID */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 28 /* 0x1c */
    }
};

static const __midl_frag235_t __midl_frag235 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 10000 /* 0x2710 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag234_t __midl_frag234 =
{ 
/* **NT4SID */
    { 
    /* **NT4SID */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **NT4SID */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag235
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *NT4SID */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag236
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag237
    }
};

static const __midl_frag231_t __midl_frag231 =
{ 
/* *DWORD */
    { 
    /* *DWORD */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* *DWORD */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag255
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag907
    }
};

static const __midl_frag230_t __midl_frag230 =
{ 
/* *DSNAME */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag26
};

static const __midl_frag228_t __midl_frag228 =
{ 
/* **DSNAME */
    { 
    /* **DSNAME */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **DSNAME */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag255
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *DSNAME */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag26
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag230
    }
};

static const __midl_frag227_t __midl_frag227 =
{ 
/* DRS_MSG_REVMEMB_REPLY_V1 */
    { 
    /* DRS_MSG_REVMEMB_REPLY_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_REVMEMB_REPLY_V1 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        0,
        0,
        &__midl_frag238,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag225_t __midl_frag225 =
{ 
/* DRS_MSG_REVMEMB_REPLY */
    { 
    /* DRS_MSG_REVMEMB_REPLY */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 40 /* 0x28 */,
        &__midl_frag903,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag227,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag224_t __midl_frag224 =
{ 
/* *DRS_MSG_REVMEMB_REPLY */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag225
};

static const __midl_frag221_t __midl_frag221 =
{ 
/* REVERSE_MEMBERSHIP_OPERATION_TYPE */
    0xa4,    /* FC64_RANGE */
    0x5,    /* FC64_INT32 */
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_INT64) 1 /* 0x1 */,
    (NDR64_INT64) 7 /* 0x7 */
};

static const __midl_frag220_t __midl_frag220 =
{ 
/*  */
    { 
    /* **DSNAME */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag217
    },
    { 
    /* *DSNAME */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag26
    }
};

static const __midl_frag217_t __midl_frag217 =
{ 
/* **DSNAME */
    { 
    /* **DSNAME */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **DSNAME */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag698
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *DSNAME */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag26
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag230
    }
};

static const __midl_frag216_t __midl_frag216 =
{ 
/* DRS_MSG_REVMEMB_REQ_V1 */
    { 
    /* DRS_MSG_REVMEMB_REQ_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_REVMEMB_REQ_V1 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        0,
        0,
        &__midl_frag220,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag221
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag214_t __midl_frag214 =
{ 
/* DRS_MSG_REVMEMB_REQ */
    { 
    /* DRS_MSG_REVMEMB_REQ */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 32 /* 0x20 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag216,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag213_t __midl_frag213 =
{ 
/* *DRS_MSG_REVMEMB_REQ */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag214
};

static const __midl_frag210_t __midl_frag210 =
{ 
/* IDL_DRSGetMemberships */
    { 
    /* IDL_DRSGetMemberships */      /* procedure IDL_DRSGetMemberships */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hDrs */      /* parameter hDrs */
        &__midl_frag849,
        { 
        /* hDrs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* dwInVersion */      /* parameter dwInVersion */
        &__midl_frag907,
        { 
        /* dwInVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgIn */      /* parameter pmsgIn */
        &__midl_frag214,
        { 
        /* pmsgIn */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pdwOutVersion */      /* parameter pdwOutVersion */
        &__midl_frag907,
        { 
        /* pdwOutVersion */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pmsgOut */      /* parameter pmsgOut */
        &__midl_frag225,
        { 
        /* pmsgOut */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag208_t __midl_frag208 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 1048576 /* 0x100000 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    }
};

static const __midl_frag207_t __midl_frag207 =
{ 
/* *PrefixTableEntry */
    { 
    /* *PrefixTableEntry */
        { 
        /* *PrefixTableEntry */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *PrefixTableEntry */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag54
        },
        &__midl_frag208,
        0,
        0
    }
};

static const __midl_frag206_t __midl_frag206 =
{ 
/*  */
    { 
    /* *DSNAME */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag26
    },
    { 
    /* *ATTR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag204
    }
};

static const __midl_frag204_t __midl_frag204 =
{ 
/* *ATTR */
    { 
    /* *ATTR */
        { 
        /* *ATTR */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *ATTR */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag85
        },
        &__midl_frag208,
        0,
        0
    }
};

static const __midl_frag203_t __midl_frag203 =
{ 
/* ENTINF */
    { 
    /* ENTINF */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* ENTINF */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        0,
        0,
        &__midl_frag206,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* ATTRBLOCK */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag201_t __midl_frag201 =
{ 
/* *ENTINF */
    { 
    /* *ENTINF */
        { 
        /* *ENTINF */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *ENTINF */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag203
        },
        &__midl_frag255,
        0,
        0
    }
};

static const __midl_frag200_t __midl_frag200 =
{ 
/* DRS_MSG_VERIFYREPLY_V1 */
    { 
    /* DRS_MSG_VERIFYREPLY_V1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* DRS_MSG_VERIFYREPLY_V1 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *ENTINF */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag201
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 24 /* 0x18 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *PrefixTableEntry */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag207
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag199_t __midl_frag199 =
{ 
/* DRS_MSG_VERIFYREPLY_V1 */
    { 
    /* DRS_MSG_VERIFYREPLY_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_VERIFYREPLY_V1 */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag200
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag197_t __midl_frag197 =
{ 
/* DRS_MSG_VERIFYREPLY */
    { 
    /* DRS_MSG_VERIFYREPLY */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 32 /* 0x20 */,
        &__midl_frag903,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag199,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag196_t __midl_frag196 =
{ 
/* *DRS_MSG_VERIFYREPLY */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag197
};

static const __midl_frag193_t __midl_frag193 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 1048576 /* 0x100000 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */
    }
};

static const __midl_frag192_t __midl_frag192 =
{ 
/* *PrefixTableEntry */
    { 
    /* *PrefixTableEntry */
        { 
        /* *PrefixTableEntry */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *PrefixTableEntry */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag54
        },
        &__midl_frag193,
        0,
        0
    }
};

static const __midl_frag188_t __midl_frag188 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 1 /* 0x1 */,
        (NDR64_INT64) 10000 /* 0x2710 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */
    }
};

static const __midl_frag187_t __midl_frag187 =
{ 
/* **DSNAME */
    { 
    /* **DSNAME */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **DSNAME */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag188
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *DSNAME */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag26
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag230
    }
};

static const __midl_frag186_t __midl_frag186 =
{ 
/* DRS_MSG_VERIFYREQ_V1 */
    { 
    /* DRS_MSG_VERIFYREQ_V1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* DRS_MSG_VERIFYREQ_V1 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* **DSNAME */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag187
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 24 /* 0x18 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *ATTR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag204
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 40 /* 0x28 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *PrefixTableEntry */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag192
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag185_t __midl_frag185 =
{ 
/* DRS_MSG_VERIFYREQ_V1 */
    { 
    /* DRS_MSG_VERIFYREQ_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_VERIFYREQ_V1 */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag186
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag183_t __midl_frag183 =
{ 
/* DRS_MSG_VERIFYREQ */
    { 
    /* DRS_MSG_VERIFYREQ */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 48 /* 0x30 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag185,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag182_t __midl_frag182 =
{ 
/* *DRS_MSG_VERIFYREQ */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag183
};

static const __midl_frag179_t __midl_frag179 =
{ 
/* IDL_DRSVerifyNames */
    { 
    /* IDL_DRSVerifyNames */      /* procedure IDL_DRSVerifyNames */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hDrs */      /* parameter hDrs */
        &__midl_frag849,
        { 
        /* hDrs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* dwInVersion */      /* parameter dwInVersion */
        &__midl_frag907,
        { 
        /* dwInVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgIn */      /* parameter pmsgIn */
        &__midl_frag183,
        { 
        /* pmsgIn */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pdwOutVersion */      /* parameter pdwOutVersion */
        &__midl_frag907,
        { 
        /* pdwOutVersion */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pmsgOut */      /* parameter pmsgOut */
        &__midl_frag197,
        { 
        /* pmsgOut */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag177_t __midl_frag177 =
{ 
/* *char */
    { 
    /* *char */
        0x63,    /* FC64_CONF_CHAR_STRING */
        { 
        /* *char */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT16) 1 /* 0x1 */
    }
};

static const __midl_frag176_t __midl_frag176 =
{ 
/* DRS_MSG_REPMOD_V1 */
    { 
    /* DRS_MSG_REPMOD_V1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_REPMOD_V1 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 128 /* 0x80 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DSNAME */
            0x20,    /* FC64_RP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag26
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 24 /* 0x18 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *char */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag177
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag174_t __midl_frag174 =
{ 
/* DRS_MSG_REPMOD */
    { 
    /* DRS_MSG_REPMOD */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 128 /* 0x80 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag176,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag173_t __midl_frag173 =
{ 
/* *DRS_MSG_REPMOD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag174
};

static const __midl_frag170_t __midl_frag170 =
{ 
/* IDL_DRSReplicaModify */
    { 
    /* IDL_DRSReplicaModify */      /* procedure IDL_DRSReplicaModify */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hDrs */      /* parameter hDrs */
        &__midl_frag849,
        { 
        /* hDrs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* dwVersion */      /* parameter dwVersion */
        &__midl_frag907,
        { 
        /* dwVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgMod */      /* parameter pmsgMod */
        &__midl_frag174,
        { 
        /* pmsgMod */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag167_t __midl_frag167 =
{ 
/* DRS_MSG_REPDEL_V1 */
    { 
    /* DRS_MSG_REPDEL_V1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_REPDEL_V1 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DSNAME */
            0x20,    /* FC64_RP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag26
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *char */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag177
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag165_t __midl_frag165 =
{ 
/* DRS_MSG_REPDEL */
    { 
    /* DRS_MSG_REPDEL */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 24 /* 0x18 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag167,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag164_t __midl_frag164 =
{ 
/* *DRS_MSG_REPDEL */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag165
};

static const __midl_frag161_t __midl_frag161 =
{ 
/* IDL_DRSReplicaDel */
    { 
    /* IDL_DRSReplicaDel */      /* procedure IDL_DRSReplicaDel */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hDrs */      /* parameter hDrs */
        &__midl_frag849,
        { 
        /* hDrs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* dwVersion */      /* parameter dwVersion */
        &__midl_frag907,
        { 
        /* dwVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgDel */      /* parameter pmsgDel */
        &__midl_frag165,
        { 
        /* pmsgDel */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag158_t __midl_frag158 =
{ 
/* DRS_MSG_REPADD_V2 */
    { 
    /* DRS_MSG_REPADD_V2 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_REPADD_V2 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 120 /* 0x78 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DSNAME */
            0x20,    /* FC64_RP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag26
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DSNAME */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag26
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DSNAME */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag26
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 24 /* 0x18 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *char */
            0x20,    /* FC64_RP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag177
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag156_t __midl_frag156 =
{ 
/* DRS_MSG_REPADD_V1 */
    { 
    /* DRS_MSG_REPADD_V1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_REPADD_V1 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 104 /* 0x68 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DSNAME */
            0x20,    /* FC64_RP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag26
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *char */
            0x20,    /* FC64_RP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag177
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag154_t __midl_frag154 =
{ 
/* DRS_MSG_REPADD */
    { 
    /* DRS_MSG_REPADD */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 120 /* 0x78 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag156,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag158,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag153_t __midl_frag153 =
{ 
/* *DRS_MSG_REPADD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag154
};

static const __midl_frag150_t __midl_frag150 =
{ 
/* IDL_DRSReplicaAdd */
    { 
    /* IDL_DRSReplicaAdd */      /* procedure IDL_DRSReplicaAdd */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hDrs */      /* parameter hDrs */
        &__midl_frag849,
        { 
        /* hDrs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* dwVersion */      /* parameter dwVersion */
        &__midl_frag907,
        { 
        /* dwVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgAdd */      /* parameter pmsgAdd */
        &__midl_frag154,
        { 
        /* pmsgAdd */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag147_t __midl_frag147 =
{ 
/* DRS_MSG_UPDREFS_V1 */
    { 
    /* DRS_MSG_UPDREFS_V1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_UPDREFS_V1 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DSNAME */
            0x20,    /* FC64_RP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag26
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *char */
            0x20,    /* FC64_RP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag177
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag145_t __midl_frag145 =
{ 
/* DRS_MSG_UPDREFS */
    { 
    /* DRS_MSG_UPDREFS */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 40 /* 0x28 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag147,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag144_t __midl_frag144 =
{ 
/* *DRS_MSG_UPDREFS */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag145
};

static const __midl_frag141_t __midl_frag141 =
{ 
/* IDL_DRSUpdateRefs */
    { 
    /* IDL_DRSUpdateRefs */      /* procedure IDL_DRSUpdateRefs */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hDrs */      /* parameter hDrs */
        &__midl_frag849,
        { 
        /* hDrs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* dwVersion */      /* parameter dwVersion */
        &__midl_frag907,
        { 
        /* dwVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgUpdRefs */      /* parameter pmsgUpdRefs */
        &__midl_frag145,
        { 
        /* pmsgUpdRefs */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag137_t __midl_frag137 =
{ 
/*  */
    { 
    /* *DSNAME */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag26
    },
    { 
    /* *UPTODATE_VECTOR_V2_EXT */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag108
    },
    { 
    /* *PrefixTableEntry */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag128
    },
    { 
    /* *REPLENTINFLIST */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag82
    },
    { 
    /* *REPLVALINF_V3 */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag130
    }
};

static const __midl_frag135_t __midl_frag135 =
{ 
/*  */
    { 
    /* *DSNAME */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag26
    },
    { 
    /* *UCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag133
    }
};

static const __midl_frag134_t __midl_frag134 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 26214400 /* 0x1900000 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    }
};

static const __midl_frag133_t __midl_frag133 =
{ 
/* *UCHAR */
    { 
    /* *UCHAR */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *UCHAR */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag134
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag864
    }
};

static const __midl_frag132_t __midl_frag132 =
{ 
/* REPLVALINF_V3 */
    { 
    /* REPLVALINF_V3 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* REPLVALINF_V3 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 112 /* 0x70 */,
        0,
        0,
        &__midl_frag135,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* ATTRVAL */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* PROPERTY_META_DATA_EXT */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag799
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag131_t __midl_frag131 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 1048576 /* 0x100000 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 148 /* 0x94 */
    }
};

static const __midl_frag130_t __midl_frag130 =
{ 
/* *REPLVALINF_V3 */
    { 
    /* *REPLVALINF_V3 */
        { 
        /* *REPLVALINF_V3 */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *REPLVALINF_V3 */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag132
        },
        &__midl_frag131,
        0,
        0
    }
};

static const __midl_frag129_t __midl_frag129 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 1048576 /* 0x100000 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 96 /* 0x60 */
    }
};

static const __midl_frag128_t __midl_frag128 =
{ 
/* *PrefixTableEntry */
    { 
    /* *PrefixTableEntry */
        { 
        /* *PrefixTableEntry */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *PrefixTableEntry */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag54
        },
        &__midl_frag129,
        0,
        0
    }
};

static const __midl_frag127_t __midl_frag127 =
{ 
/* DRS_MSG_GETCHGREPLY_V9 */
    { 
    /* DRS_MSG_GETCHGREPLY_V9 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_GETCHGREPLY_V9 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 168 /* 0xa8 */,
        0,
        0,
        &__midl_frag137,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag799
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag799
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* SCHEMA_PREFIX_TABLE */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* DRS_MSG_GETCHGREPLY_V9 */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag126_t __midl_frag126 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 12 /* 0xc */
    }
};

static const __midl_frag125_t __midl_frag125 =
{ 
/* *BYTE */
    { 
    /* *BYTE */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *BYTE */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag126
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag898
    }
};

static const __midl_frag124_t __midl_frag124 =
{ 
/* DRS_MSG_GETCHGREPLY_V7 */
    { 
    /* DRS_MSG_GETCHGREPLY_V7 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_GETCHGREPLY_V7 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *BYTE */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag125
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag121_t __midl_frag121 =
{ 
/*  */
    { 
    /* *DSNAME */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag26
    },
    { 
    /* *UPTODATE_VECTOR_V2_EXT */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag108
    },
    { 
    /* *PrefixTableEntry */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag128
    },
    { 
    /* *REPLENTINFLIST */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag82
    },
    { 
    /* *REPLVALINF_V1 */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag114
    }
};

static const __midl_frag116_t __midl_frag116 =
{ 
/* REPLVALINF_V1 */
    { 
    /* REPLVALINF_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* REPLVALINF_V1 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 88 /* 0x58 */,
        0,
        0,
        &__midl_frag135,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* ATTRVAL */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* PROPERTY_META_DATA_EXT */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag799
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag114_t __midl_frag114 =
{ 
/* *REPLVALINF_V1 */
    { 
    /* *REPLVALINF_V1 */
        { 
        /* *REPLVALINF_V1 */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *REPLVALINF_V1 */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag116
        },
        &__midl_frag131,
        0,
        0
    }
};

static const __midl_frag109_t __midl_frag109 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        &__midl_frag461
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 32 /* 0x20 */,
        &__midl_frag615
    }
};

static const __midl_frag108_t __midl_frag108 =
{ 
/* UPTODATE_VECTOR_V2_EXT */
    { 
    /* UPTODATE_VECTOR_V2_EXT */
        0x32,    /* FC64_CONF_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* UPTODATE_VECTOR_V2_EXT */
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag109
    }
};

static const __midl_frag107_t __midl_frag107 =
{ 
/* DRS_MSG_GETCHGREPLY_V6 */
    { 
    /* DRS_MSG_GETCHGREPLY_V6 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_GETCHGREPLY_V6 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 168 /* 0xa8 */,
        0,
        0,
        &__midl_frag121,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag799
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag799
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* SCHEMA_PREFIX_TABLE */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* DRS_MSG_GETCHGREPLY_V6 */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag104_t __midl_frag104 =
{ 
/* *BYTE */
    { 
    /* *BYTE */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *BYTE */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag490
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag898
    }
};

static const __midl_frag103_t __midl_frag103 =
{ 
/* DRS_MSG_GETCHGREPLY_V2 */
    { 
    /* DRS_MSG_GETCHGREPLY_V2 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_GETCHGREPLY_V2 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *BYTE */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag104
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag100_t __midl_frag100 =
{ 
/*  */
    { 
    /* *DSNAME */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag26
    },
    { 
    /* *UPTODATE_VECTOR_V1_EXT */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag44
    },
    { 
    /* *PrefixTableEntry */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag128
    },
    { 
    /* *REPLENTINFLIST */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag82
    }
};

static const __midl_frag99_t __midl_frag99 =
{ 
/*  */
    { 
    /* *REPLENTINFLIST */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag82
    },
    { 
    /* *DSNAME */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag26
    },
    { 
    /* *ATTR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag472
    },
    { 
    /* *UUID */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag515
    },
    { 
    /* *PROPERTY_META_DATA_EXT_VECTOR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag94
    }
};

static const __midl_frag97_t __midl_frag97 =
{ 
/* PROPERTY_META_DATA_EXT */
    { 
    /* PROPERTY_META_DATA_EXT */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* PROPERTY_META_DATA_EXT */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag799
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag96_t __midl_frag96 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 1048576 /* 0x100000 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag95_t __midl_frag95 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
        { 
        /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag97
        },
        &__midl_frag96,
        0,
        0
    }
};

static const __midl_frag94_t __midl_frag94 =
{ 
/* PROPERTY_META_DATA_EXT_VECTOR */
    { 
    /* PROPERTY_META_DATA_EXT_VECTOR */
        0x37,    /* FC64_FORCED_CONF_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* PROPERTY_META_DATA_EXT_VECTOR */
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 1 /* 0x1 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        0,
        0,
        0,
        &__midl_frag95,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag93_t __midl_frag93 =
{ 
/*  */
    { 
    /* *ATTRVAL */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag86
    }
};

static const __midl_frag92_t __midl_frag92 =
{ 
/*  */
    { 
    /* *UCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag89
    }
};

static const __midl_frag90_t __midl_frag90 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 26214400 /* 0x1900000 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag89_t __midl_frag89 =
{ 
/* *UCHAR */
    { 
    /* *UCHAR */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *UCHAR */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag90
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag864
    }
};

static const __midl_frag88_t __midl_frag88 =
{ 
/* ATTRVAL */
    { 
    /* ATTRVAL */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* ATTRVAL */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag92,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag86_t __midl_frag86 =
{ 
/* *ATTRVAL */
    { 
    /* *ATTRVAL */
        { 
        /* *ATTRVAL */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *ATTRVAL */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag88
        },
        &__midl_frag286,
        0,
        0
    }
};

static const __midl_frag85_t __midl_frag85 =
{ 
/* ATTR */
    { 
    /* ATTR */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* ATTR */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */,
        0,
        0,
        &__midl_frag93,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* ATTRVALBLOCK */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag82_t __midl_frag82 =
{ 
/* REPLENTINFLIST */
    { 
    /* REPLENTINFLIST */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* REPLENTINFLIST */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 64 /* 0x40 */,
        0,
        0,
        &__midl_frag99,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* ATTRBLOCK */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag79_t __midl_frag79 =
{ 
/* DRS_MSG_GETCHGREPLY_V1 */
    { 
    /* DRS_MSG_GETCHGREPLY_V1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_GETCHGREPLY_V1 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 144 /* 0x90 */,
        0,
        0,
        &__midl_frag100,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag799
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag799
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* SCHEMA_PREFIX_TABLE */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* DRS_MSG_GETCHGREPLY_V1 */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag77_t __midl_frag77 =
{ 
/* DRS_MSG_GETCHGREPLY */
    { 
    /* DRS_MSG_GETCHGREPLY */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 168 /* 0xa8 */,
        &__midl_frag903,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 5 /* 0x5 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag79,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag103,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 6 /* 0x6 */,
        &__midl_frag107,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 7 /* 0x7 */,
        &__midl_frag124,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 9 /* 0x9 */,
        &__midl_frag127,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag76_t __midl_frag76 =
{ 
/* *DRS_MSG_GETCHGREPLY */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag77
};

static const __midl_frag73_t __midl_frag73 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 1048576 /* 0x100000 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 112 /* 0x70 */
    }
};

static const __midl_frag72_t __midl_frag72 =
{ 
/* *PrefixTableEntry */
    { 
    /* *PrefixTableEntry */
        { 
        /* *PrefixTableEntry */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *PrefixTableEntry */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag54
        },
        &__midl_frag73,
        0,
        0
    }
};

static const __midl_frag71_t __midl_frag71 =
{ 
/* DRS_MSG_GETCHGREQ_V10 */
    { 
    /* DRS_MSG_GETCHGREQ_V10 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* DRS_MSG_GETCHGREQ_V10 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 136 /* 0x88 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 32 /* 0x20 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DSNAME */
            0x20,    /* FC64_RP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag26
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 64 /* 0x40 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *UPTODATE_VECTOR_V1_EXT */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag44
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 96 /* 0x60 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *PARTIAL_ATTR_VECTOR_V1_EXT */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag48
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 104 /* 0x68 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *PARTIAL_ATTR_VECTOR_V1_EXT */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag48
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 120 /* 0x78 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *PrefixTableEntry */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag72
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag70_t __midl_frag70 =
{ 
/* DRS_MSG_GETCHGREQ_V10 */
    { 
    /* DRS_MSG_GETCHGREQ_V10 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_GETCHGREQ_V10 */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 136 /* 0x88 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag71
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag67_t __midl_frag67 =
{ 
/* DRS_MSG_GETCHGREQ_V8 */
    { 
    /* DRS_MSG_GETCHGREQ_V8 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* DRS_MSG_GETCHGREQ_V8 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 128 /* 0x80 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 32 /* 0x20 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DSNAME */
            0x20,    /* FC64_RP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag26
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 64 /* 0x40 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *UPTODATE_VECTOR_V1_EXT */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag44
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 96 /* 0x60 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *PARTIAL_ATTR_VECTOR_V1_EXT */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag48
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 104 /* 0x68 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *PARTIAL_ATTR_VECTOR_V1_EXT */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag48
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 120 /* 0x78 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *PrefixTableEntry */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag72
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag66_t __midl_frag66 =
{ 
/* DRS_MSG_GETCHGREQ_V8 */
    { 
    /* DRS_MSG_GETCHGREQ_V8 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_GETCHGREQ_V8 */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 128 /* 0x80 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag67
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag65_t __midl_frag65 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 1048576 /* 0x100000 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 152 /* 0x98 */
    }
};

static const __midl_frag64_t __midl_frag64 =
{ 
/* *PrefixTableEntry */
    { 
    /* *PrefixTableEntry */
        { 
        /* *PrefixTableEntry */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *PrefixTableEntry */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag54
        },
        &__midl_frag65,
        0,
        0
    }
};

static const __midl_frag63_t __midl_frag63 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 1048576 /* 0x100000 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 104 /* 0x68 */
    }
};

static const __midl_frag62_t __midl_frag62 =
{ 
/* *PrefixTableEntry */
    { 
    /* *PrefixTableEntry */
        { 
        /* *PrefixTableEntry */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *PrefixTableEntry */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag54
        },
        &__midl_frag63,
        0,
        0
    }
};

static const __midl_frag61_t __midl_frag61 =
{ 
/* DRS_MSG_GETCHGREQ_V7 */
    { 
    /* DRS_MSG_GETCHGREQ_V7 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* DRS_MSG_GETCHGREQ_V7 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 168 /* 0xa8 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *MTX_ADDR */
            0x20,    /* FC64_RP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag40
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 56 /* 0x38 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DSNAME */
            0x20,    /* FC64_RP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag26
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 88 /* 0x58 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *UPTODATE_VECTOR_V1_EXT */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag44
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 96 /* 0x60 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *PARTIAL_ATTR_VECTOR_V1_EXT */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag48
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 112 /* 0x70 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *PrefixTableEntry */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag62
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 136 /* 0x88 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *PARTIAL_ATTR_VECTOR_V1_EXT */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag48
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 144 /* 0x90 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *PARTIAL_ATTR_VECTOR_V1_EXT */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag48
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 160 /* 0xa0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *PrefixTableEntry */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag64
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag60_t __midl_frag60 =
{ 
/* DRS_MSG_GETCHGREQ_V7 */
    { 
    /* DRS_MSG_GETCHGREQ_V7 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_GETCHGREQ_V7 */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 168 /* 0xa8 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag61
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag59_t __midl_frag59 =
{ 
/* DRS_MSG_GETCHGREQ_V5 */
    { 
    /* DRS_MSG_GETCHGREQ_V5 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_GETCHGREQ_V5 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 96 /* 0x60 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 32 /* 0x20 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DSNAME */
            0x20,    /* FC64_RP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag26
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 64 /* 0x40 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *UPTODATE_VECTOR_V1_EXT */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag44
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag58_t __midl_frag58 =
{ 
/*  */
    { 
    /* *BYTE */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag55
    }
};

static const __midl_frag55_t __midl_frag55 =
{ 
/* *BYTE */
    { 
    /* *BYTE */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *BYTE */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag235
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag898
    }
};

static const __midl_frag54_t __midl_frag54 =
{ 
/* PrefixTableEntry */
    { 
    /* PrefixTableEntry */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* PrefixTableEntry */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */,
        0,
        0,
        &__midl_frag58,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* OID_t */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag50_t __midl_frag50 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 1 /* 0x1 */,
        (NDR64_INT64) 1048576 /* 0x100000 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag49_t __midl_frag49 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag50
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag907
    }
};

static const __midl_frag48_t __midl_frag48 =
{ 
/* PARTIAL_ATTR_VECTOR_V1_EXT */
    { 
    /* PARTIAL_ATTR_VECTOR_V1_EXT */
        0x32,    /* FC64_CONF_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* PARTIAL_ATTR_VECTOR_V1_EXT */
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 12 /* 0xc */,
        &__midl_frag49
    }
};

static const __midl_frag45_t __midl_frag45 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */,
        &__midl_frag461
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 24 /* 0x18 */,
        &__midl_frag570
    }
};

static const __midl_frag44_t __midl_frag44 =
{ 
/* UPTODATE_VECTOR_V1_EXT */
    { 
    /* UPTODATE_VECTOR_V1_EXT */
        0x32,    /* FC64_CONF_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* UPTODATE_VECTOR_V1_EXT */
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag45
    }
};

static const __midl_frag42_t __midl_frag42 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 1 /* 0x1 */,
        (NDR64_INT64) 256 /* 0x100 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag41_t __midl_frag41 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag42
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag864
    }
};

static const __midl_frag40_t __midl_frag40 =
{ 
/* MTX_ADDR */
    { 
    /* MTX_ADDR */
        0x32,    /* FC64_CONF_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* MTX_ADDR */
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag41
    }
};

static const __midl_frag39_t __midl_frag39 =
{ 
/* DRS_MSG_GETCHGREQ_V4 */
    { 
    /* DRS_MSG_GETCHGREQ_V4 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* DRS_MSG_GETCHGREQ_V4 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 136 /* 0x88 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *MTX_ADDR */
            0x20,    /* FC64_RP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag40
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 56 /* 0x38 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DSNAME */
            0x20,    /* FC64_RP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag26
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 88 /* 0x58 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *UPTODATE_VECTOR_V1_EXT */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag44
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 96 /* 0x60 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *PARTIAL_ATTR_VECTOR_V1_EXT */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag48
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 112 /* 0x70 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *PrefixTableEntry */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag62
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag38_t __midl_frag38 =
{ 
/* DRS_MSG_GETCHGREQ_V4 */
    { 
    /* DRS_MSG_GETCHGREQ_V4 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_GETCHGREQ_V4 */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 136 /* 0x88 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag39
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag36_t __midl_frag36 =
{ 
/* DRS_MSG_GETCHGREQ */
    { 
    /* DRS_MSG_GETCHGREQ */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 168 /* 0xa8 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 5 /* 0x5 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag38,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 5 /* 0x5 */,
        &__midl_frag59,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 7 /* 0x7 */,
        &__midl_frag60,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 8 /* 0x8 */,
        &__midl_frag66,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 10 /* 0xa */,
        &__midl_frag70,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag35_t __midl_frag35 =
{ 
/* *DRS_MSG_GETCHGREQ */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag36
};

static const __midl_frag32_t __midl_frag32 =
{ 
/* IDL_DRSGetNCChanges */
    { 
    /* IDL_DRSGetNCChanges */      /* procedure IDL_DRSGetNCChanges */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hDrs */      /* parameter hDrs */
        &__midl_frag849,
        { 
        /* hDrs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* dwInVersion */      /* parameter dwInVersion */
        &__midl_frag907,
        { 
        /* dwInVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgIn */      /* parameter pmsgIn */
        &__midl_frag36,
        { 
        /* pmsgIn */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pdwOutVersion */      /* parameter pdwOutVersion */
        &__midl_frag907,
        { 
        /* pdwOutVersion */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pmsgOut */      /* parameter pmsgOut */
        &__midl_frag77,
        { 
        /* pmsgOut */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag28_t __midl_frag28 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 10485761 /* 0xa00001 */
    },
    { 
    /* struct _NDR64_EXPR_OPERATOR */
        0x4,    /* FC_EXPR_OPER */
        0xe,    /* OP_PLUS */
        0x0,    /* FC64_ZERO */
        (NDR64_UINT8) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 52 /* 0x34 */
    },
    { 
    /* struct _NDR64_EXPR_NOOP */
        0x5,    /* FC_EXPR_PAD */
        (NDR64_UINT8) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_CONST64 */
        0x2,    /* FC_EXPR_CONST64 */
        0x7,    /* FC64_INT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT64) 1 /* 0x1 */
    }
};

static const __midl_frag27_t __midl_frag27 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag28
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag826
    }
};

static const __midl_frag26_t __midl_frag26 =
{ 
/* DSNAME */
    { 
    /* DSNAME */
        0x32,    /* FC64_CONF_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* DSNAME */
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 56 /* 0x38 */,
        &__midl_frag27
    }
};

static const __midl_frag25_t __midl_frag25 =
{ 
/* DRS_MSG_REPSYNC_V1 */
    { 
    /* DRS_MSG_REPSYNC_V1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRS_MSG_REPSYNC_V1 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DSNAME */
            0x20,    /* FC64_RP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag26
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 24 /* 0x18 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *char */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag177
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag23_t __midl_frag23 =
{ 
/* DRS_MSG_REPSYNC */
    { 
    /* DRS_MSG_REPSYNC */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 40 /* 0x28 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag25,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag22_t __midl_frag22 =
{ 
/* *DRS_MSG_REPSYNC */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag23
};

static const __midl_frag19_t __midl_frag19 =
{ 
/* IDL_DRSReplicaSync */
    { 
    /* IDL_DRSReplicaSync */      /* procedure IDL_DRSReplicaSync */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hDrs */      /* parameter hDrs */
        &__midl_frag849,
        { 
        /* hDrs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* dwVersion */      /* parameter dwVersion */
        &__midl_frag907,
        { 
        /* dwVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pmsgSync */      /* parameter pmsgSync */
        &__midl_frag23,
        { 
        /* pmsgSync */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag17_t __midl_frag17 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 225 /* 0xe1 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag16_t __midl_frag16 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag17
};

static const __midl_frag15_t __midl_frag15 =
{ 
/* IDL_DRSUnbind */
    { 
    /* IDL_DRSUnbind */      /* procedure IDL_DRSUnbind */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 60 /* 0x3c */,
        (NDR64_UINT32) 68 /* 0x44 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 224 /* 0xe0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* phDrs */      /* parameter phDrs */
        &__midl_frag17,
        { 
        /* phDrs */
            0,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag13_t __midl_frag13 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 160 /* 0xa0 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag12_t __midl_frag12 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag13
};

static const __midl_frag11_t __midl_frag11 =
{ 
/* *DRS_EXTENSIONS */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag6
};

static const __midl_frag10_t __midl_frag10 =
{ 
/* **DRS_EXTENSIONS */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag11
};

static const __midl_frag7_t __midl_frag7 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag698
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag898
    }
};

static const __midl_frag6_t __midl_frag6 =
{ 
/* DRS_EXTENSIONS */
    { 
    /* DRS_EXTENSIONS */
        0x32,    /* FC64_CONF_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* DRS_EXTENSIONS */
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag7
    }
};

static const __midl_frag3_t __midl_frag3 =
{ 
/* *UUID */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag515
};

static const __midl_frag2_t __midl_frag2 =
{ 
/* IDL_DRSBind */
    { 
    /* IDL_DRSBind */      /* procedure IDL_DRSBind */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT32) 68 /* 0x44 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* puuidClientDsa */      /* parameter puuidClientDsa */
        &__midl_frag3,
        { 
        /* puuidClientDsa */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pextClient */      /* parameter pextClient */
        &__midl_frag11,
        { 
        /* pextClient */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* ppextServer */      /* parameter ppextServer */
        &__midl_frag10,
        { 
        /* ppextServer */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* phDrs */      /* parameter phDrs */
        &__midl_frag13,
        { 
        /* phDrs */
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ULONG */      /* parameter ULONG */
        &__midl_frag907,
        { 
        /* ULONG */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;


#include "poppack.h"


static const FormatInfoRef drsuapi_Ndr64ProcTable[] =
    {
    &__midl_frag2,
    &__midl_frag15,
    &__midl_frag19,
    &__midl_frag32,
    &__midl_frag141,
    &__midl_frag150,
    &__midl_frag161,
    &__midl_frag170,
    &__midl_frag179,
    &__midl_frag210,
    &__midl_frag240,
    &__midl_frag278,
    &__midl_frag303,
    &__midl_frag328,
    &__midl_frag347,
    &__midl_frag363,
    &__midl_frag378,
    &__midl_frag452,
    &__midl_frag520,
    &__midl_frag528,
    &__midl_frag661,
    &__midl_frag690,
    &__midl_frag710,
    &__midl_frag718,
    &__midl_frag737,
    &__midl_frag760,
    &__midl_frag774,
    &__midl_frag790,
    &__midl_frag807,
    &__midl_frag829,
    &__midl_frag848
    };


static const MIDL_STUB_DESC drsuapi_StubDesc = 
    {
    (void *)& drsuapi___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &drsuapi__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    drsr__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    (void *)& drsuapi_ProxyInfo,   /* proxy/server info */
    0
    };

static const MIDL_SYNTAX_INFO drsuapi_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    drsr__MIDL_ProcFormatString.Format,
    drsuapi_FormatStringOffsetTable,
    drsr__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) drsuapi_Ndr64ProcTable,
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO drsuapi_ProxyInfo =
    {
    &drsuapi_StubDesc,
    drsr__MIDL_ProcFormatString.Format,
    drsuapi_FormatStringOffsetTable,
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)drsuapi_SyntaxInfo
    
    };


static const FormatInfoRef dsaop_Ndr64ProcTable[] =
    {
    &__midl_frag866,
    &__midl_frag890
    };


static const MIDL_STUB_DESC dsaop_StubDesc = 
    {
    (void *)& dsaop___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &dsaop__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    drsr__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    (void *)& dsaop_ProxyInfo,   /* proxy/server info */
    0
    };

static const MIDL_SYNTAX_INFO dsaop_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    drsr__MIDL_ProcFormatString.Format,
    dsaop_FormatStringOffsetTable,
    drsr__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) dsaop_Ndr64ProcTable,
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO dsaop_ProxyInfo =
    {
    &dsaop_StubDesc,
    drsr__MIDL_ProcFormatString.Format,
    dsaop_FormatStringOffsetTable,
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)dsaop_SyntaxInfo
    
    };

#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

