#if !defined(__cplusplus) || defined(CINTERFACE)
// Include the full header file that works for C
#include "mshtmlc.h"
#else


/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0499 */
/* Compiler settings for mshtml.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data
    VC __declspec() decoration level:
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __mshtml_h__
#define __mshtml_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once

#endif

/* Forward Declarations */

#ifndef __IHTMLFiltersCollection_FWD_DEFINED__
#define __IHTMLFiltersCollection_FWD_DEFINED__
typedef interface IHTMLFiltersCollection IHTMLFiltersCollection;
#endif 	/* __IHTMLFiltersCollection_FWD_DEFINED__ */


#ifndef __IHTMLEventObj_FWD_DEFINED__
#define __IHTMLEventObj_FWD_DEFINED__
typedef interface IHTMLEventObj IHTMLEventObj;
#endif 	/* __IHTMLEventObj_FWD_DEFINED__ */


#ifndef __IElementBehaviorSite_FWD_DEFINED__
#define __IElementBehaviorSite_FWD_DEFINED__
typedef interface IElementBehaviorSite IElementBehaviorSite;
#endif 	/* __IElementBehaviorSite_FWD_DEFINED__ */


#ifndef __IElementBehavior_FWD_DEFINED__
#define __IElementBehavior_FWD_DEFINED__
typedef interface IElementBehavior IElementBehavior;
#endif 	/* __IElementBehavior_FWD_DEFINED__ */


#ifndef __IElementBehaviorFactory_FWD_DEFINED__
#define __IElementBehaviorFactory_FWD_DEFINED__
typedef interface IElementBehaviorFactory IElementBehaviorFactory;
#endif 	/* __IElementBehaviorFactory_FWD_DEFINED__ */


#ifndef __IElementBehaviorSiteOM_FWD_DEFINED__
#define __IElementBehaviorSiteOM_FWD_DEFINED__
typedef interface IElementBehaviorSiteOM IElementBehaviorSiteOM;
#endif 	/* __IElementBehaviorSiteOM_FWD_DEFINED__ */


#ifndef __IElementBehaviorRender_FWD_DEFINED__
#define __IElementBehaviorRender_FWD_DEFINED__
typedef interface IElementBehaviorRender IElementBehaviorRender;
#endif 	/* __IElementBehaviorRender_FWD_DEFINED__ */


#ifndef __IElementBehaviorSiteRender_FWD_DEFINED__
#define __IElementBehaviorSiteRender_FWD_DEFINED__
typedef interface IElementBehaviorSiteRender IElementBehaviorSiteRender;
#endif 	/* __IElementBehaviorSiteRender_FWD_DEFINED__ */


#ifndef __IHTMLStyle_FWD_DEFINED__
#define __IHTMLStyle_FWD_DEFINED__
typedef interface IHTMLStyle IHTMLStyle;
#endif 	/* __IHTMLStyle_FWD_DEFINED__ */


#ifndef __IHTMLStyle2_FWD_DEFINED__
#define __IHTMLStyle2_FWD_DEFINED__
typedef interface IHTMLStyle2 IHTMLStyle2;
#endif 	/* __IHTMLStyle2_FWD_DEFINED__ */


#ifndef __IHTMLStyle3_FWD_DEFINED__
#define __IHTMLStyle3_FWD_DEFINED__
typedef interface IHTMLStyle3 IHTMLStyle3;
#endif 	/* __IHTMLStyle3_FWD_DEFINED__ */


#ifndef __IHTMLStyle4_FWD_DEFINED__
#define __IHTMLStyle4_FWD_DEFINED__
typedef interface IHTMLStyle4 IHTMLStyle4;
#endif 	/* __IHTMLStyle4_FWD_DEFINED__ */


#ifndef __IHTMLStyle5_FWD_DEFINED__
#define __IHTMLStyle5_FWD_DEFINED__
typedef interface IHTMLStyle5 IHTMLStyle5;
#endif 	/* __IHTMLStyle5_FWD_DEFINED__ */


#ifndef __IHTMLRuleStyle_FWD_DEFINED__
#define __IHTMLRuleStyle_FWD_DEFINED__
typedef interface IHTMLRuleStyle IHTMLRuleStyle;
#endif 	/* __IHTMLRuleStyle_FWD_DEFINED__ */


#ifndef __IHTMLRuleStyle2_FWD_DEFINED__
#define __IHTMLRuleStyle2_FWD_DEFINED__
typedef interface IHTMLRuleStyle2 IHTMLRuleStyle2;
#endif 	/* __IHTMLRuleStyle2_FWD_DEFINED__ */


#ifndef __IHTMLRuleStyle3_FWD_DEFINED__
#define __IHTMLRuleStyle3_FWD_DEFINED__
typedef interface IHTMLRuleStyle3 IHTMLRuleStyle3;
#endif 	/* __IHTMLRuleStyle3_FWD_DEFINED__ */


#ifndef __IHTMLRuleStyle4_FWD_DEFINED__
#define __IHTMLRuleStyle4_FWD_DEFINED__
typedef interface IHTMLRuleStyle4 IHTMLRuleStyle4;
#endif 	/* __IHTMLRuleStyle4_FWD_DEFINED__ */


#ifndef __IHTMLRuleStyle5_FWD_DEFINED__
#define __IHTMLRuleStyle5_FWD_DEFINED__
typedef interface IHTMLRuleStyle5 IHTMLRuleStyle5;
#endif 	/* __IHTMLRuleStyle5_FWD_DEFINED__ */


#ifndef __DispHTMLStyle_FWD_DEFINED__
#define __DispHTMLStyle_FWD_DEFINED__
typedef interface DispHTMLStyle DispHTMLStyle;
#endif 	/* __DispHTMLStyle_FWD_DEFINED__ */


#ifndef __HTMLStyle_FWD_DEFINED__
#define __HTMLStyle_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLStyle HTMLStyle;
#else
typedef struct HTMLStyle HTMLStyle;
#endif /* __cplusplus */

#endif 	/* __HTMLStyle_FWD_DEFINED__ */


#ifndef __DispHTMLRuleStyle_FWD_DEFINED__
#define __DispHTMLRuleStyle_FWD_DEFINED__
typedef interface DispHTMLRuleStyle DispHTMLRuleStyle;
#endif 	/* __DispHTMLRuleStyle_FWD_DEFINED__ */


#ifndef __HTMLRuleStyle_FWD_DEFINED__
#define __HTMLRuleStyle_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLRuleStyle HTMLRuleStyle;
#else
typedef struct HTMLRuleStyle HTMLRuleStyle;
#endif /* __cplusplus */

#endif 	/* __HTMLRuleStyle_FWD_DEFINED__ */


#ifndef __IHTMLRenderStyle_FWD_DEFINED__
#define __IHTMLRenderStyle_FWD_DEFINED__
typedef interface IHTMLRenderStyle IHTMLRenderStyle;
#endif 	/* __IHTMLRenderStyle_FWD_DEFINED__ */


#ifndef __DispHTMLRenderStyle_FWD_DEFINED__
#define __DispHTMLRenderStyle_FWD_DEFINED__
typedef interface DispHTMLRenderStyle DispHTMLRenderStyle;
#endif 	/* __DispHTMLRenderStyle_FWD_DEFINED__ */


#ifndef __HTMLRenderStyle_FWD_DEFINED__
#define __HTMLRenderStyle_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLRenderStyle HTMLRenderStyle;
#else
typedef struct HTMLRenderStyle HTMLRenderStyle;
#endif /* __cplusplus */

#endif 	/* __HTMLRenderStyle_FWD_DEFINED__ */


#ifndef __IHTMLCurrentStyle_FWD_DEFINED__
#define __IHTMLCurrentStyle_FWD_DEFINED__
typedef interface IHTMLCurrentStyle IHTMLCurrentStyle;
#endif 	/* __IHTMLCurrentStyle_FWD_DEFINED__ */


#ifndef __IHTMLCurrentStyle2_FWD_DEFINED__
#define __IHTMLCurrentStyle2_FWD_DEFINED__
typedef interface IHTMLCurrentStyle2 IHTMLCurrentStyle2;
#endif 	/* __IHTMLCurrentStyle2_FWD_DEFINED__ */


#ifndef __IHTMLCurrentStyle3_FWD_DEFINED__
#define __IHTMLCurrentStyle3_FWD_DEFINED__
typedef interface IHTMLCurrentStyle3 IHTMLCurrentStyle3;
#endif 	/* __IHTMLCurrentStyle3_FWD_DEFINED__ */


#ifndef __IHTMLCurrentStyle4_FWD_DEFINED__
#define __IHTMLCurrentStyle4_FWD_DEFINED__
typedef interface IHTMLCurrentStyle4 IHTMLCurrentStyle4;
#endif 	/* __IHTMLCurrentStyle4_FWD_DEFINED__ */


#ifndef __DispHTMLCurrentStyle_FWD_DEFINED__
#define __DispHTMLCurrentStyle_FWD_DEFINED__
typedef interface DispHTMLCurrentStyle DispHTMLCurrentStyle;
#endif 	/* __DispHTMLCurrentStyle_FWD_DEFINED__ */


#ifndef __HTMLCurrentStyle_FWD_DEFINED__
#define __HTMLCurrentStyle_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLCurrentStyle HTMLCurrentStyle;
#else
typedef struct HTMLCurrentStyle HTMLCurrentStyle;
#endif /* __cplusplus */

#endif 	/* __HTMLCurrentStyle_FWD_DEFINED__ */


#ifndef __IHTMLElement_FWD_DEFINED__
#define __IHTMLElement_FWD_DEFINED__
typedef interface IHTMLElement IHTMLElement;
#endif 	/* __IHTMLElement_FWD_DEFINED__ */


#ifndef __IHTMLRect_FWD_DEFINED__
#define __IHTMLRect_FWD_DEFINED__
typedef interface IHTMLRect IHTMLRect;
#endif 	/* __IHTMLRect_FWD_DEFINED__ */


#ifndef __IHTMLRectCollection_FWD_DEFINED__
#define __IHTMLRectCollection_FWD_DEFINED__
typedef interface IHTMLRectCollection IHTMLRectCollection;
#endif 	/* __IHTMLRectCollection_FWD_DEFINED__ */


#ifndef __IHTMLDOMNode_FWD_DEFINED__
#define __IHTMLDOMNode_FWD_DEFINED__
typedef interface IHTMLDOMNode IHTMLDOMNode;
#endif 	/* __IHTMLDOMNode_FWD_DEFINED__ */


#ifndef __IHTMLDOMNode2_FWD_DEFINED__
#define __IHTMLDOMNode2_FWD_DEFINED__
typedef interface IHTMLDOMNode2 IHTMLDOMNode2;
#endif 	/* __IHTMLDOMNode2_FWD_DEFINED__ */


#ifndef __IHTMLDOMAttribute_FWD_DEFINED__
#define __IHTMLDOMAttribute_FWD_DEFINED__
typedef interface IHTMLDOMAttribute IHTMLDOMAttribute;
#endif 	/* __IHTMLDOMAttribute_FWD_DEFINED__ */


#ifndef __IHTMLDOMAttribute2_FWD_DEFINED__
#define __IHTMLDOMAttribute2_FWD_DEFINED__
typedef interface IHTMLDOMAttribute2 IHTMLDOMAttribute2;
#endif 	/* __IHTMLDOMAttribute2_FWD_DEFINED__ */


#ifndef __IHTMLDOMTextNode_FWD_DEFINED__
#define __IHTMLDOMTextNode_FWD_DEFINED__
typedef interface IHTMLDOMTextNode IHTMLDOMTextNode;
#endif 	/* __IHTMLDOMTextNode_FWD_DEFINED__ */


#ifndef __IHTMLDOMTextNode2_FWD_DEFINED__
#define __IHTMLDOMTextNode2_FWD_DEFINED__
typedef interface IHTMLDOMTextNode2 IHTMLDOMTextNode2;
#endif 	/* __IHTMLDOMTextNode2_FWD_DEFINED__ */


#ifndef __IHTMLDOMImplementation_FWD_DEFINED__
#define __IHTMLDOMImplementation_FWD_DEFINED__
typedef interface IHTMLDOMImplementation IHTMLDOMImplementation;
#endif 	/* __IHTMLDOMImplementation_FWD_DEFINED__ */


#ifndef __DispHTMLDOMAttribute_FWD_DEFINED__
#define __DispHTMLDOMAttribute_FWD_DEFINED__
typedef interface DispHTMLDOMAttribute DispHTMLDOMAttribute;
#endif 	/* __DispHTMLDOMAttribute_FWD_DEFINED__ */


#ifndef __HTMLDOMAttribute_FWD_DEFINED__
#define __HTMLDOMAttribute_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLDOMAttribute HTMLDOMAttribute;
#else
typedef struct HTMLDOMAttribute HTMLDOMAttribute;
#endif /* __cplusplus */

#endif 	/* __HTMLDOMAttribute_FWD_DEFINED__ */


#ifndef __DispHTMLDOMTextNode_FWD_DEFINED__
#define __DispHTMLDOMTextNode_FWD_DEFINED__
typedef interface DispHTMLDOMTextNode DispHTMLDOMTextNode;
#endif 	/* __DispHTMLDOMTextNode_FWD_DEFINED__ */


#ifndef __HTMLDOMTextNode_FWD_DEFINED__
#define __HTMLDOMTextNode_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLDOMTextNode HTMLDOMTextNode;
#else
typedef struct HTMLDOMTextNode HTMLDOMTextNode;
#endif /* __cplusplus */

#endif 	/* __HTMLDOMTextNode_FWD_DEFINED__ */


#ifndef __DispHTMLDOMImplementation_FWD_DEFINED__
#define __DispHTMLDOMImplementation_FWD_DEFINED__
typedef interface DispHTMLDOMImplementation DispHTMLDOMImplementation;
#endif 	/* __DispHTMLDOMImplementation_FWD_DEFINED__ */


#ifndef __HTMLDOMImplementation_FWD_DEFINED__
#define __HTMLDOMImplementation_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLDOMImplementation HTMLDOMImplementation;
#else
typedef struct HTMLDOMImplementation HTMLDOMImplementation;
#endif /* __cplusplus */

#endif 	/* __HTMLDOMImplementation_FWD_DEFINED__ */


#ifndef __IHTMLAttributeCollection_FWD_DEFINED__
#define __IHTMLAttributeCollection_FWD_DEFINED__
typedef interface IHTMLAttributeCollection IHTMLAttributeCollection;
#endif 	/* __IHTMLAttributeCollection_FWD_DEFINED__ */


#ifndef __IHTMLAttributeCollection2_FWD_DEFINED__
#define __IHTMLAttributeCollection2_FWD_DEFINED__
typedef interface IHTMLAttributeCollection2 IHTMLAttributeCollection2;
#endif 	/* __IHTMLAttributeCollection2_FWD_DEFINED__ */


#ifndef __IHTMLDOMChildrenCollection_FWD_DEFINED__
#define __IHTMLDOMChildrenCollection_FWD_DEFINED__
typedef interface IHTMLDOMChildrenCollection IHTMLDOMChildrenCollection;
#endif 	/* __IHTMLDOMChildrenCollection_FWD_DEFINED__ */


#ifndef __DispHTMLAttributeCollection_FWD_DEFINED__
#define __DispHTMLAttributeCollection_FWD_DEFINED__
typedef interface DispHTMLAttributeCollection DispHTMLAttributeCollection;
#endif 	/* __DispHTMLAttributeCollection_FWD_DEFINED__ */


#ifndef __HTMLAttributeCollection_FWD_DEFINED__
#define __HTMLAttributeCollection_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLAttributeCollection HTMLAttributeCollection;
#else
typedef struct HTMLAttributeCollection HTMLAttributeCollection;
#endif /* __cplusplus */

#endif 	/* __HTMLAttributeCollection_FWD_DEFINED__ */


#ifndef __DispDOMChildrenCollection_FWD_DEFINED__
#define __DispDOMChildrenCollection_FWD_DEFINED__
typedef interface DispDOMChildrenCollection DispDOMChildrenCollection;
#endif 	/* __DispDOMChildrenCollection_FWD_DEFINED__ */


#ifndef __DOMChildrenCollection_FWD_DEFINED__
#define __DOMChildrenCollection_FWD_DEFINED__

#ifdef __cplusplus
typedef class DOMChildrenCollection DOMChildrenCollection;
#else
typedef struct DOMChildrenCollection DOMChildrenCollection;
#endif /* __cplusplus */

#endif 	/* __DOMChildrenCollection_FWD_DEFINED__ */


#ifndef __HTMLElementEvents2_FWD_DEFINED__
#define __HTMLElementEvents2_FWD_DEFINED__
typedef interface HTMLElementEvents2 HTMLElementEvents2;
#endif 	/* __HTMLElementEvents2_FWD_DEFINED__ */


#ifndef __HTMLElementEvents_FWD_DEFINED__
#define __HTMLElementEvents_FWD_DEFINED__
typedef interface HTMLElementEvents HTMLElementEvents;
#endif 	/* __HTMLElementEvents_FWD_DEFINED__ */


#ifndef __IHTMLElementCollection_FWD_DEFINED__
#define __IHTMLElementCollection_FWD_DEFINED__
typedef interface IHTMLElementCollection IHTMLElementCollection;
#endif 	/* __IHTMLElementCollection_FWD_DEFINED__ */


#ifndef __IHTMLFiltersCollection_FWD_DEFINED__
#define __IHTMLFiltersCollection_FWD_DEFINED__
typedef interface IHTMLFiltersCollection IHTMLFiltersCollection;
#endif 	/* __IHTMLFiltersCollection_FWD_DEFINED__ */


#ifndef __IHTMLElement2_FWD_DEFINED__
#define __IHTMLElement2_FWD_DEFINED__
typedef interface IHTMLElement2 IHTMLElement2;
#endif 	/* __IHTMLElement2_FWD_DEFINED__ */


#ifndef __IHTMLElement3_FWD_DEFINED__
#define __IHTMLElement3_FWD_DEFINED__
typedef interface IHTMLElement3 IHTMLElement3;
#endif 	/* __IHTMLElement3_FWD_DEFINED__ */


#ifndef __IHTMLElement4_FWD_DEFINED__
#define __IHTMLElement4_FWD_DEFINED__
typedef interface IHTMLElement4 IHTMLElement4;
#endif 	/* __IHTMLElement4_FWD_DEFINED__ */


#ifndef __IHTMLElementRender_FWD_DEFINED__
#define __IHTMLElementRender_FWD_DEFINED__
typedef interface IHTMLElementRender IHTMLElementRender;
#endif 	/* __IHTMLElementRender_FWD_DEFINED__ */


#ifndef __IHTMLUniqueName_FWD_DEFINED__
#define __IHTMLUniqueName_FWD_DEFINED__
typedef interface IHTMLUniqueName IHTMLUniqueName;
#endif 	/* __IHTMLUniqueName_FWD_DEFINED__ */


#ifndef __IHTMLDatabinding_FWD_DEFINED__
#define __IHTMLDatabinding_FWD_DEFINED__
typedef interface IHTMLDatabinding IHTMLDatabinding;
#endif 	/* __IHTMLDatabinding_FWD_DEFINED__ */


#ifndef __IHTMLDocument_FWD_DEFINED__
#define __IHTMLDocument_FWD_DEFINED__
typedef interface IHTMLDocument IHTMLDocument;
#endif 	/* __IHTMLDocument_FWD_DEFINED__ */


#ifndef __IHTMLElementDefaults_FWD_DEFINED__
#define __IHTMLElementDefaults_FWD_DEFINED__
typedef interface IHTMLElementDefaults IHTMLElementDefaults;
#endif 	/* __IHTMLElementDefaults_FWD_DEFINED__ */


#ifndef __DispHTMLDefaults_FWD_DEFINED__
#define __DispHTMLDefaults_FWD_DEFINED__
typedef interface DispHTMLDefaults DispHTMLDefaults;
#endif 	/* __DispHTMLDefaults_FWD_DEFINED__ */


#ifndef __HTMLDefaults_FWD_DEFINED__
#define __HTMLDefaults_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLDefaults HTMLDefaults;
#else
typedef struct HTMLDefaults HTMLDefaults;
#endif /* __cplusplus */

#endif 	/* __HTMLDefaults_FWD_DEFINED__ */


#ifndef __IHTCDefaultDispatch_FWD_DEFINED__
#define __IHTCDefaultDispatch_FWD_DEFINED__
typedef interface IHTCDefaultDispatch IHTCDefaultDispatch;
#endif 	/* __IHTCDefaultDispatch_FWD_DEFINED__ */


#ifndef __IHTCPropertyBehavior_FWD_DEFINED__
#define __IHTCPropertyBehavior_FWD_DEFINED__
typedef interface IHTCPropertyBehavior IHTCPropertyBehavior;
#endif 	/* __IHTCPropertyBehavior_FWD_DEFINED__ */


#ifndef __IHTCMethodBehavior_FWD_DEFINED__
#define __IHTCMethodBehavior_FWD_DEFINED__
typedef interface IHTCMethodBehavior IHTCMethodBehavior;
#endif 	/* __IHTCMethodBehavior_FWD_DEFINED__ */


#ifndef __IHTCEventBehavior_FWD_DEFINED__
#define __IHTCEventBehavior_FWD_DEFINED__
typedef interface IHTCEventBehavior IHTCEventBehavior;
#endif 	/* __IHTCEventBehavior_FWD_DEFINED__ */


#ifndef __IHTCAttachBehavior_FWD_DEFINED__
#define __IHTCAttachBehavior_FWD_DEFINED__
typedef interface IHTCAttachBehavior IHTCAttachBehavior;
#endif 	/* __IHTCAttachBehavior_FWD_DEFINED__ */


#ifndef __IHTCAttachBehavior2_FWD_DEFINED__
#define __IHTCAttachBehavior2_FWD_DEFINED__
typedef interface IHTCAttachBehavior2 IHTCAttachBehavior2;
#endif 	/* __IHTCAttachBehavior2_FWD_DEFINED__ */


#ifndef __IHTCDescBehavior_FWD_DEFINED__
#define __IHTCDescBehavior_FWD_DEFINED__
typedef interface IHTCDescBehavior IHTCDescBehavior;
#endif 	/* __IHTCDescBehavior_FWD_DEFINED__ */


#ifndef __DispHTCDefaultDispatch_FWD_DEFINED__
#define __DispHTCDefaultDispatch_FWD_DEFINED__
typedef interface DispHTCDefaultDispatch DispHTCDefaultDispatch;
#endif 	/* __DispHTCDefaultDispatch_FWD_DEFINED__ */


#ifndef __HTCDefaultDispatch_FWD_DEFINED__
#define __HTCDefaultDispatch_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTCDefaultDispatch HTCDefaultDispatch;
#else
typedef struct HTCDefaultDispatch HTCDefaultDispatch;
#endif /* __cplusplus */

#endif 	/* __HTCDefaultDispatch_FWD_DEFINED__ */


#ifndef __DispHTCPropertyBehavior_FWD_DEFINED__
#define __DispHTCPropertyBehavior_FWD_DEFINED__
typedef interface DispHTCPropertyBehavior DispHTCPropertyBehavior;
#endif 	/* __DispHTCPropertyBehavior_FWD_DEFINED__ */


#ifndef __HTCPropertyBehavior_FWD_DEFINED__
#define __HTCPropertyBehavior_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTCPropertyBehavior HTCPropertyBehavior;
#else
typedef struct HTCPropertyBehavior HTCPropertyBehavior;
#endif /* __cplusplus */

#endif 	/* __HTCPropertyBehavior_FWD_DEFINED__ */


#ifndef __DispHTCMethodBehavior_FWD_DEFINED__
#define __DispHTCMethodBehavior_FWD_DEFINED__
typedef interface DispHTCMethodBehavior DispHTCMethodBehavior;
#endif 	/* __DispHTCMethodBehavior_FWD_DEFINED__ */


#ifndef __HTCMethodBehavior_FWD_DEFINED__
#define __HTCMethodBehavior_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTCMethodBehavior HTCMethodBehavior;
#else
typedef struct HTCMethodBehavior HTCMethodBehavior;
#endif /* __cplusplus */

#endif 	/* __HTCMethodBehavior_FWD_DEFINED__ */


#ifndef __DispHTCEventBehavior_FWD_DEFINED__
#define __DispHTCEventBehavior_FWD_DEFINED__
typedef interface DispHTCEventBehavior DispHTCEventBehavior;
#endif 	/* __DispHTCEventBehavior_FWD_DEFINED__ */


#ifndef __HTCEventBehavior_FWD_DEFINED__
#define __HTCEventBehavior_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTCEventBehavior HTCEventBehavior;
#else
typedef struct HTCEventBehavior HTCEventBehavior;
#endif /* __cplusplus */

#endif 	/* __HTCEventBehavior_FWD_DEFINED__ */


#ifndef __DispHTCAttachBehavior_FWD_DEFINED__
#define __DispHTCAttachBehavior_FWD_DEFINED__
typedef interface DispHTCAttachBehavior DispHTCAttachBehavior;
#endif 	/* __DispHTCAttachBehavior_FWD_DEFINED__ */


#ifndef __HTCAttachBehavior_FWD_DEFINED__
#define __HTCAttachBehavior_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTCAttachBehavior HTCAttachBehavior;
#else
typedef struct HTCAttachBehavior HTCAttachBehavior;
#endif /* __cplusplus */

#endif 	/* __HTCAttachBehavior_FWD_DEFINED__ */


#ifndef __DispHTCDescBehavior_FWD_DEFINED__
#define __DispHTCDescBehavior_FWD_DEFINED__
typedef interface DispHTCDescBehavior DispHTCDescBehavior;
#endif 	/* __DispHTCDescBehavior_FWD_DEFINED__ */


#ifndef __HTCDescBehavior_FWD_DEFINED__
#define __HTCDescBehavior_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTCDescBehavior HTCDescBehavior;
#else
typedef struct HTCDescBehavior HTCDescBehavior;
#endif /* __cplusplus */

#endif 	/* __HTCDescBehavior_FWD_DEFINED__ */


#ifndef __IHTMLUrnCollection_FWD_DEFINED__
#define __IHTMLUrnCollection_FWD_DEFINED__
typedef interface IHTMLUrnCollection IHTMLUrnCollection;
#endif 	/* __IHTMLUrnCollection_FWD_DEFINED__ */


#ifndef __HTMLUrnCollection_FWD_DEFINED__
#define __HTMLUrnCollection_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLUrnCollection HTMLUrnCollection;
#else
typedef struct HTMLUrnCollection HTMLUrnCollection;
#endif /* __cplusplus */

#endif 	/* __HTMLUrnCollection_FWD_DEFINED__ */


#ifndef __IHTMLGenericElement_FWD_DEFINED__
#define __IHTMLGenericElement_FWD_DEFINED__
typedef interface IHTMLGenericElement IHTMLGenericElement;
#endif 	/* __IHTMLGenericElement_FWD_DEFINED__ */


#ifndef __DispHTMLGenericElement_FWD_DEFINED__
#define __DispHTMLGenericElement_FWD_DEFINED__
typedef interface DispHTMLGenericElement DispHTMLGenericElement;
#endif 	/* __DispHTMLGenericElement_FWD_DEFINED__ */


#ifndef __HTMLGenericElement_FWD_DEFINED__
#define __HTMLGenericElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLGenericElement HTMLGenericElement;
#else
typedef struct HTMLGenericElement HTMLGenericElement;
#endif /* __cplusplus */

#endif 	/* __HTMLGenericElement_FWD_DEFINED__ */


#ifndef __IHTMLStyleSheetRule_FWD_DEFINED__
#define __IHTMLStyleSheetRule_FWD_DEFINED__
typedef interface IHTMLStyleSheetRule IHTMLStyleSheetRule;
#endif 	/* __IHTMLStyleSheetRule_FWD_DEFINED__ */


#ifndef __IHTMLStyleSheetRulesCollection_FWD_DEFINED__
#define __IHTMLStyleSheetRulesCollection_FWD_DEFINED__
typedef interface IHTMLStyleSheetRulesCollection IHTMLStyleSheetRulesCollection;
#endif 	/* __IHTMLStyleSheetRulesCollection_FWD_DEFINED__ */


#ifndef __HTMLStyleSheetRule_FWD_DEFINED__
#define __HTMLStyleSheetRule_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLStyleSheetRule HTMLStyleSheetRule;
#else
typedef struct HTMLStyleSheetRule HTMLStyleSheetRule;
#endif /* __cplusplus */

#endif 	/* __HTMLStyleSheetRule_FWD_DEFINED__ */


#ifndef __HTMLStyleSheetRulesCollection_FWD_DEFINED__
#define __HTMLStyleSheetRulesCollection_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLStyleSheetRulesCollection HTMLStyleSheetRulesCollection;
#else
typedef struct HTMLStyleSheetRulesCollection HTMLStyleSheetRulesCollection;
#endif /* __cplusplus */

#endif 	/* __HTMLStyleSheetRulesCollection_FWD_DEFINED__ */


#ifndef __IHTMLStyleSheetPage_FWD_DEFINED__
#define __IHTMLStyleSheetPage_FWD_DEFINED__
typedef interface IHTMLStyleSheetPage IHTMLStyleSheetPage;
#endif 	/* __IHTMLStyleSheetPage_FWD_DEFINED__ */


#ifndef __IHTMLStyleSheetPagesCollection_FWD_DEFINED__
#define __IHTMLStyleSheetPagesCollection_FWD_DEFINED__
typedef interface IHTMLStyleSheetPagesCollection IHTMLStyleSheetPagesCollection;
#endif 	/* __IHTMLStyleSheetPagesCollection_FWD_DEFINED__ */


#ifndef __HTMLStyleSheetPage_FWD_DEFINED__
#define __HTMLStyleSheetPage_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLStyleSheetPage HTMLStyleSheetPage;
#else
typedef struct HTMLStyleSheetPage HTMLStyleSheetPage;
#endif /* __cplusplus */

#endif 	/* __HTMLStyleSheetPage_FWD_DEFINED__ */


#ifndef __HTMLStyleSheetPagesCollection_FWD_DEFINED__
#define __HTMLStyleSheetPagesCollection_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLStyleSheetPagesCollection HTMLStyleSheetPagesCollection;
#else
typedef struct HTMLStyleSheetPagesCollection HTMLStyleSheetPagesCollection;
#endif /* __cplusplus */

#endif 	/* __HTMLStyleSheetPagesCollection_FWD_DEFINED__ */


#ifndef __IHTMLStyleSheetsCollection_FWD_DEFINED__
#define __IHTMLStyleSheetsCollection_FWD_DEFINED__
typedef interface IHTMLStyleSheetsCollection IHTMLStyleSheetsCollection;
#endif 	/* __IHTMLStyleSheetsCollection_FWD_DEFINED__ */


#ifndef __IHTMLStyleSheet_FWD_DEFINED__
#define __IHTMLStyleSheet_FWD_DEFINED__
typedef interface IHTMLStyleSheet IHTMLStyleSheet;
#endif 	/* __IHTMLStyleSheet_FWD_DEFINED__ */


#ifndef __IHTMLStyleSheet2_FWD_DEFINED__
#define __IHTMLStyleSheet2_FWD_DEFINED__
typedef interface IHTMLStyleSheet2 IHTMLStyleSheet2;
#endif 	/* __IHTMLStyleSheet2_FWD_DEFINED__ */


#ifndef __DispHTMLStyleSheet_FWD_DEFINED__
#define __DispHTMLStyleSheet_FWD_DEFINED__
typedef interface DispHTMLStyleSheet DispHTMLStyleSheet;
#endif 	/* __DispHTMLStyleSheet_FWD_DEFINED__ */


#ifndef __HTMLStyleSheet_FWD_DEFINED__
#define __HTMLStyleSheet_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLStyleSheet HTMLStyleSheet;
#else
typedef struct HTMLStyleSheet HTMLStyleSheet;
#endif /* __cplusplus */

#endif 	/* __HTMLStyleSheet_FWD_DEFINED__ */


#ifndef __HTMLStyleSheetsCollection_FWD_DEFINED__
#define __HTMLStyleSheetsCollection_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLStyleSheetsCollection HTMLStyleSheetsCollection;
#else
typedef struct HTMLStyleSheetsCollection HTMLStyleSheetsCollection;
#endif /* __cplusplus */

#endif 	/* __HTMLStyleSheetsCollection_FWD_DEFINED__ */


#ifndef __HTMLLinkElementEvents2_FWD_DEFINED__
#define __HTMLLinkElementEvents2_FWD_DEFINED__
typedef interface HTMLLinkElementEvents2 HTMLLinkElementEvents2;
#endif 	/* __HTMLLinkElementEvents2_FWD_DEFINED__ */


#ifndef __HTMLLinkElementEvents_FWD_DEFINED__
#define __HTMLLinkElementEvents_FWD_DEFINED__
typedef interface HTMLLinkElementEvents HTMLLinkElementEvents;
#endif 	/* __HTMLLinkElementEvents_FWD_DEFINED__ */


#ifndef __IHTMLLinkElement_FWD_DEFINED__
#define __IHTMLLinkElement_FWD_DEFINED__
typedef interface IHTMLLinkElement IHTMLLinkElement;
#endif 	/* __IHTMLLinkElement_FWD_DEFINED__ */


#ifndef __IHTMLLinkElement2_FWD_DEFINED__
#define __IHTMLLinkElement2_FWD_DEFINED__
typedef interface IHTMLLinkElement2 IHTMLLinkElement2;
#endif 	/* __IHTMLLinkElement2_FWD_DEFINED__ */


#ifndef __IHTMLLinkElement3_FWD_DEFINED__
#define __IHTMLLinkElement3_FWD_DEFINED__
typedef interface IHTMLLinkElement3 IHTMLLinkElement3;
#endif 	/* __IHTMLLinkElement3_FWD_DEFINED__ */


#ifndef __DispHTMLLinkElement_FWD_DEFINED__
#define __DispHTMLLinkElement_FWD_DEFINED__
typedef interface DispHTMLLinkElement DispHTMLLinkElement;
#endif 	/* __DispHTMLLinkElement_FWD_DEFINED__ */


#ifndef __HTMLLinkElement_FWD_DEFINED__
#define __HTMLLinkElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLLinkElement HTMLLinkElement;
#else
typedef struct HTMLLinkElement HTMLLinkElement;
#endif /* __cplusplus */

#endif 	/* __HTMLLinkElement_FWD_DEFINED__ */


#ifndef __IHTMLTxtRange_FWD_DEFINED__
#define __IHTMLTxtRange_FWD_DEFINED__
typedef interface IHTMLTxtRange IHTMLTxtRange;
#endif 	/* __IHTMLTxtRange_FWD_DEFINED__ */


#ifndef __IHTMLTextRangeMetrics_FWD_DEFINED__
#define __IHTMLTextRangeMetrics_FWD_DEFINED__
typedef interface IHTMLTextRangeMetrics IHTMLTextRangeMetrics;
#endif 	/* __IHTMLTextRangeMetrics_FWD_DEFINED__ */


#ifndef __IHTMLTextRangeMetrics2_FWD_DEFINED__
#define __IHTMLTextRangeMetrics2_FWD_DEFINED__
typedef interface IHTMLTextRangeMetrics2 IHTMLTextRangeMetrics2;
#endif 	/* __IHTMLTextRangeMetrics2_FWD_DEFINED__ */


#ifndef __IHTMLTxtRangeCollection_FWD_DEFINED__
#define __IHTMLTxtRangeCollection_FWD_DEFINED__
typedef interface IHTMLTxtRangeCollection IHTMLTxtRangeCollection;
#endif 	/* __IHTMLTxtRangeCollection_FWD_DEFINED__ */


#ifndef __HTMLFormElementEvents2_FWD_DEFINED__
#define __HTMLFormElementEvents2_FWD_DEFINED__
typedef interface HTMLFormElementEvents2 HTMLFormElementEvents2;
#endif 	/* __HTMLFormElementEvents2_FWD_DEFINED__ */


#ifndef __HTMLFormElementEvents_FWD_DEFINED__
#define __HTMLFormElementEvents_FWD_DEFINED__
typedef interface HTMLFormElementEvents HTMLFormElementEvents;
#endif 	/* __HTMLFormElementEvents_FWD_DEFINED__ */


#ifndef __IHTMLFormElement_FWD_DEFINED__
#define __IHTMLFormElement_FWD_DEFINED__
typedef interface IHTMLFormElement IHTMLFormElement;
#endif 	/* __IHTMLFormElement_FWD_DEFINED__ */


#ifndef __IHTMLFormElement2_FWD_DEFINED__
#define __IHTMLFormElement2_FWD_DEFINED__
typedef interface IHTMLFormElement2 IHTMLFormElement2;
#endif 	/* __IHTMLFormElement2_FWD_DEFINED__ */


#ifndef __IHTMLFormElement3_FWD_DEFINED__
#define __IHTMLFormElement3_FWD_DEFINED__
typedef interface IHTMLFormElement3 IHTMLFormElement3;
#endif 	/* __IHTMLFormElement3_FWD_DEFINED__ */


#ifndef __IHTMLSubmitData_FWD_DEFINED__
#define __IHTMLSubmitData_FWD_DEFINED__
typedef interface IHTMLSubmitData IHTMLSubmitData;
#endif 	/* __IHTMLSubmitData_FWD_DEFINED__ */


#ifndef __DispHTMLFormElement_FWD_DEFINED__
#define __DispHTMLFormElement_FWD_DEFINED__
typedef interface DispHTMLFormElement DispHTMLFormElement;
#endif 	/* __DispHTMLFormElement_FWD_DEFINED__ */


#ifndef __HTMLFormElement_FWD_DEFINED__
#define __HTMLFormElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLFormElement HTMLFormElement;
#else
typedef struct HTMLFormElement HTMLFormElement;
#endif /* __cplusplus */

#endif 	/* __HTMLFormElement_FWD_DEFINED__ */


#ifndef __HTMLControlElementEvents2_FWD_DEFINED__
#define __HTMLControlElementEvents2_FWD_DEFINED__
typedef interface HTMLControlElementEvents2 HTMLControlElementEvents2;
#endif 	/* __HTMLControlElementEvents2_FWD_DEFINED__ */


#ifndef __HTMLControlElementEvents_FWD_DEFINED__
#define __HTMLControlElementEvents_FWD_DEFINED__
typedef interface HTMLControlElementEvents HTMLControlElementEvents;
#endif 	/* __HTMLControlElementEvents_FWD_DEFINED__ */


#ifndef __IHTMLControlElement_FWD_DEFINED__
#define __IHTMLControlElement_FWD_DEFINED__
typedef interface IHTMLControlElement IHTMLControlElement;
#endif 	/* __IHTMLControlElement_FWD_DEFINED__ */


#ifndef __IHTMLTextElement_FWD_DEFINED__
#define __IHTMLTextElement_FWD_DEFINED__
typedef interface IHTMLTextElement IHTMLTextElement;
#endif 	/* __IHTMLTextElement_FWD_DEFINED__ */


#ifndef __DispHTMLTextElement_FWD_DEFINED__
#define __DispHTMLTextElement_FWD_DEFINED__
typedef interface DispHTMLTextElement DispHTMLTextElement;
#endif 	/* __DispHTMLTextElement_FWD_DEFINED__ */


#ifndef __HTMLTextElement_FWD_DEFINED__
#define __HTMLTextElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLTextElement HTMLTextElement;
#else
typedef struct HTMLTextElement HTMLTextElement;
#endif /* __cplusplus */

#endif 	/* __HTMLTextElement_FWD_DEFINED__ */


#ifndef __HTMLTextContainerEvents2_FWD_DEFINED__
#define __HTMLTextContainerEvents2_FWD_DEFINED__
typedef interface HTMLTextContainerEvents2 HTMLTextContainerEvents2;
#endif 	/* __HTMLTextContainerEvents2_FWD_DEFINED__ */


#ifndef __HTMLTextContainerEvents_FWD_DEFINED__
#define __HTMLTextContainerEvents_FWD_DEFINED__
typedef interface HTMLTextContainerEvents HTMLTextContainerEvents;
#endif 	/* __HTMLTextContainerEvents_FWD_DEFINED__ */


#ifndef __IHTMLTextContainer_FWD_DEFINED__
#define __IHTMLTextContainer_FWD_DEFINED__
typedef interface IHTMLTextContainer IHTMLTextContainer;
#endif 	/* __IHTMLTextContainer_FWD_DEFINED__ */


#ifndef __IHTMLControlRange_FWD_DEFINED__
#define __IHTMLControlRange_FWD_DEFINED__
typedef interface IHTMLControlRange IHTMLControlRange;
#endif 	/* __IHTMLControlRange_FWD_DEFINED__ */


#ifndef __IHTMLControlRange2_FWD_DEFINED__
#define __IHTMLControlRange2_FWD_DEFINED__
typedef interface IHTMLControlRange2 IHTMLControlRange2;
#endif 	/* __IHTMLControlRange2_FWD_DEFINED__ */


#ifndef __HTMLImgEvents2_FWD_DEFINED__
#define __HTMLImgEvents2_FWD_DEFINED__
typedef interface HTMLImgEvents2 HTMLImgEvents2;
#endif 	/* __HTMLImgEvents2_FWD_DEFINED__ */


#ifndef __HTMLImgEvents_FWD_DEFINED__
#define __HTMLImgEvents_FWD_DEFINED__
typedef interface HTMLImgEvents HTMLImgEvents;
#endif 	/* __HTMLImgEvents_FWD_DEFINED__ */


#ifndef __IHTMLImgElement_FWD_DEFINED__
#define __IHTMLImgElement_FWD_DEFINED__
typedef interface IHTMLImgElement IHTMLImgElement;
#endif 	/* __IHTMLImgElement_FWD_DEFINED__ */


#ifndef __IHTMLImgElement2_FWD_DEFINED__
#define __IHTMLImgElement2_FWD_DEFINED__
typedef interface IHTMLImgElement2 IHTMLImgElement2;
#endif 	/* __IHTMLImgElement2_FWD_DEFINED__ */


#ifndef __IHTMLImageElementFactory_FWD_DEFINED__
#define __IHTMLImageElementFactory_FWD_DEFINED__
typedef interface IHTMLImageElementFactory IHTMLImageElementFactory;
#endif 	/* __IHTMLImageElementFactory_FWD_DEFINED__ */


#ifndef __DispHTMLImg_FWD_DEFINED__
#define __DispHTMLImg_FWD_DEFINED__
typedef interface DispHTMLImg DispHTMLImg;
#endif 	/* __DispHTMLImg_FWD_DEFINED__ */


#ifndef __HTMLImg_FWD_DEFINED__
#define __HTMLImg_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLImg HTMLImg;
#else
typedef struct HTMLImg HTMLImg;
#endif /* __cplusplus */

#endif 	/* __HTMLImg_FWD_DEFINED__ */


#ifndef __HTMLImageElementFactory_FWD_DEFINED__
#define __HTMLImageElementFactory_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLImageElementFactory HTMLImageElementFactory;
#else
typedef struct HTMLImageElementFactory HTMLImageElementFactory;
#endif /* __cplusplus */

#endif 	/* __HTMLImageElementFactory_FWD_DEFINED__ */


#ifndef __IHTMLXMLHttpRequest_FWD_DEFINED__
#define __IHTMLXMLHttpRequest_FWD_DEFINED__
typedef interface IHTMLXMLHttpRequest IHTMLXMLHttpRequest;
#endif 	/* __IHTMLXMLHttpRequest_FWD_DEFINED__ */


#ifndef __IHTMLXMLHttpRequestFactory_FWD_DEFINED__
#define __IHTMLXMLHttpRequestFactory_FWD_DEFINED__
typedef interface IHTMLXMLHttpRequestFactory IHTMLXMLHttpRequestFactory;
#endif 	/* __IHTMLXMLHttpRequestFactory_FWD_DEFINED__ */


#ifndef __DispHTMLXMLHttpRequest_FWD_DEFINED__
#define __DispHTMLXMLHttpRequest_FWD_DEFINED__
typedef interface DispHTMLXMLHttpRequest DispHTMLXMLHttpRequest;
#endif 	/* __DispHTMLXMLHttpRequest_FWD_DEFINED__ */


#ifndef __HTMLXMLHttpRequest_FWD_DEFINED__
#define __HTMLXMLHttpRequest_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLXMLHttpRequest HTMLXMLHttpRequest;
#else
typedef struct HTMLXMLHttpRequest HTMLXMLHttpRequest;
#endif /* __cplusplus */

#endif 	/* __HTMLXMLHttpRequest_FWD_DEFINED__ */


#ifndef __HTMLXMLHttpRequestFactory_FWD_DEFINED__
#define __HTMLXMLHttpRequestFactory_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLXMLHttpRequestFactory HTMLXMLHttpRequestFactory;
#else
typedef struct HTMLXMLHttpRequestFactory HTMLXMLHttpRequestFactory;
#endif /* __cplusplus */

#endif 	/* __HTMLXMLHttpRequestFactory_FWD_DEFINED__ */


#ifndef __IHTMLBodyElement_FWD_DEFINED__
#define __IHTMLBodyElement_FWD_DEFINED__
typedef interface IHTMLBodyElement IHTMLBodyElement;
#endif 	/* __IHTMLBodyElement_FWD_DEFINED__ */


#ifndef __IHTMLBodyElement2_FWD_DEFINED__
#define __IHTMLBodyElement2_FWD_DEFINED__
typedef interface IHTMLBodyElement2 IHTMLBodyElement2;
#endif 	/* __IHTMLBodyElement2_FWD_DEFINED__ */


#ifndef __DispHTMLBody_FWD_DEFINED__
#define __DispHTMLBody_FWD_DEFINED__
typedef interface DispHTMLBody DispHTMLBody;
#endif 	/* __DispHTMLBody_FWD_DEFINED__ */


#ifndef __HTMLBody_FWD_DEFINED__
#define __HTMLBody_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLBody HTMLBody;
#else
typedef struct HTMLBody HTMLBody;
#endif /* __cplusplus */

#endif 	/* __HTMLBody_FWD_DEFINED__ */


#ifndef __IHTMLFontElement_FWD_DEFINED__
#define __IHTMLFontElement_FWD_DEFINED__
typedef interface IHTMLFontElement IHTMLFontElement;
#endif 	/* __IHTMLFontElement_FWD_DEFINED__ */


#ifndef __DispHTMLFontElement_FWD_DEFINED__
#define __DispHTMLFontElement_FWD_DEFINED__
typedef interface DispHTMLFontElement DispHTMLFontElement;
#endif 	/* __DispHTMLFontElement_FWD_DEFINED__ */


#ifndef __HTMLFontElement_FWD_DEFINED__
#define __HTMLFontElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLFontElement HTMLFontElement;
#else
typedef struct HTMLFontElement HTMLFontElement;
#endif /* __cplusplus */

#endif 	/* __HTMLFontElement_FWD_DEFINED__ */


#ifndef __HTMLAnchorEvents2_FWD_DEFINED__
#define __HTMLAnchorEvents2_FWD_DEFINED__
typedef interface HTMLAnchorEvents2 HTMLAnchorEvents2;
#endif 	/* __HTMLAnchorEvents2_FWD_DEFINED__ */


#ifndef __HTMLAnchorEvents_FWD_DEFINED__
#define __HTMLAnchorEvents_FWD_DEFINED__
typedef interface HTMLAnchorEvents HTMLAnchorEvents;
#endif 	/* __HTMLAnchorEvents_FWD_DEFINED__ */


#ifndef __IHTMLAnchorElement_FWD_DEFINED__
#define __IHTMLAnchorElement_FWD_DEFINED__
typedef interface IHTMLAnchorElement IHTMLAnchorElement;
#endif 	/* __IHTMLAnchorElement_FWD_DEFINED__ */


#ifndef __IHTMLAnchorElement2_FWD_DEFINED__
#define __IHTMLAnchorElement2_FWD_DEFINED__
typedef interface IHTMLAnchorElement2 IHTMLAnchorElement2;
#endif 	/* __IHTMLAnchorElement2_FWD_DEFINED__ */


#ifndef __DispHTMLAnchorElement_FWD_DEFINED__
#define __DispHTMLAnchorElement_FWD_DEFINED__
typedef interface DispHTMLAnchorElement DispHTMLAnchorElement;
#endif 	/* __DispHTMLAnchorElement_FWD_DEFINED__ */


#ifndef __HTMLAnchorElement_FWD_DEFINED__
#define __HTMLAnchorElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLAnchorElement HTMLAnchorElement;
#else
typedef struct HTMLAnchorElement HTMLAnchorElement;
#endif /* __cplusplus */

#endif 	/* __HTMLAnchorElement_FWD_DEFINED__ */


#ifndef __HTMLLabelEvents2_FWD_DEFINED__
#define __HTMLLabelEvents2_FWD_DEFINED__
typedef interface HTMLLabelEvents2 HTMLLabelEvents2;
#endif 	/* __HTMLLabelEvents2_FWD_DEFINED__ */


#ifndef __HTMLLabelEvents_FWD_DEFINED__
#define __HTMLLabelEvents_FWD_DEFINED__
typedef interface HTMLLabelEvents HTMLLabelEvents;
#endif 	/* __HTMLLabelEvents_FWD_DEFINED__ */


#ifndef __IHTMLLabelElement_FWD_DEFINED__
#define __IHTMLLabelElement_FWD_DEFINED__
typedef interface IHTMLLabelElement IHTMLLabelElement;
#endif 	/* __IHTMLLabelElement_FWD_DEFINED__ */


#ifndef __IHTMLLabelElement2_FWD_DEFINED__
#define __IHTMLLabelElement2_FWD_DEFINED__
typedef interface IHTMLLabelElement2 IHTMLLabelElement2;
#endif 	/* __IHTMLLabelElement2_FWD_DEFINED__ */


#ifndef __DispHTMLLabelElement_FWD_DEFINED__
#define __DispHTMLLabelElement_FWD_DEFINED__
typedef interface DispHTMLLabelElement DispHTMLLabelElement;
#endif 	/* __DispHTMLLabelElement_FWD_DEFINED__ */


#ifndef __HTMLLabelElement_FWD_DEFINED__
#define __HTMLLabelElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLLabelElement HTMLLabelElement;
#else
typedef struct HTMLLabelElement HTMLLabelElement;
#endif /* __cplusplus */

#endif 	/* __HTMLLabelElement_FWD_DEFINED__ */


#ifndef __IHTMLListElement_FWD_DEFINED__
#define __IHTMLListElement_FWD_DEFINED__
typedef interface IHTMLListElement IHTMLListElement;
#endif 	/* __IHTMLListElement_FWD_DEFINED__ */


#ifndef __IHTMLListElement2_FWD_DEFINED__
#define __IHTMLListElement2_FWD_DEFINED__
typedef interface IHTMLListElement2 IHTMLListElement2;
#endif 	/* __IHTMLListElement2_FWD_DEFINED__ */


#ifndef __DispHTMLListElement_FWD_DEFINED__
#define __DispHTMLListElement_FWD_DEFINED__
typedef interface DispHTMLListElement DispHTMLListElement;
#endif 	/* __DispHTMLListElement_FWD_DEFINED__ */


#ifndef __HTMLListElement_FWD_DEFINED__
#define __HTMLListElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLListElement HTMLListElement;
#else
typedef struct HTMLListElement HTMLListElement;
#endif /* __cplusplus */

#endif 	/* __HTMLListElement_FWD_DEFINED__ */


#ifndef __IHTMLUListElement_FWD_DEFINED__
#define __IHTMLUListElement_FWD_DEFINED__
typedef interface IHTMLUListElement IHTMLUListElement;
#endif 	/* __IHTMLUListElement_FWD_DEFINED__ */


#ifndef __DispHTMLUListElement_FWD_DEFINED__
#define __DispHTMLUListElement_FWD_DEFINED__
typedef interface DispHTMLUListElement DispHTMLUListElement;
#endif 	/* __DispHTMLUListElement_FWD_DEFINED__ */


#ifndef __HTMLUListElement_FWD_DEFINED__
#define __HTMLUListElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLUListElement HTMLUListElement;
#else
typedef struct HTMLUListElement HTMLUListElement;
#endif /* __cplusplus */

#endif 	/* __HTMLUListElement_FWD_DEFINED__ */


#ifndef __IHTMLOListElement_FWD_DEFINED__
#define __IHTMLOListElement_FWD_DEFINED__
typedef interface IHTMLOListElement IHTMLOListElement;
#endif 	/* __IHTMLOListElement_FWD_DEFINED__ */


#ifndef __DispHTMLOListElement_FWD_DEFINED__
#define __DispHTMLOListElement_FWD_DEFINED__
typedef interface DispHTMLOListElement DispHTMLOListElement;
#endif 	/* __DispHTMLOListElement_FWD_DEFINED__ */


#ifndef __HTMLOListElement_FWD_DEFINED__
#define __HTMLOListElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLOListElement HTMLOListElement;
#else
typedef struct HTMLOListElement HTMLOListElement;
#endif /* __cplusplus */

#endif 	/* __HTMLOListElement_FWD_DEFINED__ */


#ifndef __IHTMLLIElement_FWD_DEFINED__
#define __IHTMLLIElement_FWD_DEFINED__
typedef interface IHTMLLIElement IHTMLLIElement;
#endif 	/* __IHTMLLIElement_FWD_DEFINED__ */


#ifndef __DispHTMLLIElement_FWD_DEFINED__
#define __DispHTMLLIElement_FWD_DEFINED__
typedef interface DispHTMLLIElement DispHTMLLIElement;
#endif 	/* __DispHTMLLIElement_FWD_DEFINED__ */


#ifndef __HTMLLIElement_FWD_DEFINED__
#define __HTMLLIElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLLIElement HTMLLIElement;
#else
typedef struct HTMLLIElement HTMLLIElement;
#endif /* __cplusplus */

#endif 	/* __HTMLLIElement_FWD_DEFINED__ */


#ifndef __IHTMLBlockElement_FWD_DEFINED__
#define __IHTMLBlockElement_FWD_DEFINED__
typedef interface IHTMLBlockElement IHTMLBlockElement;
#endif 	/* __IHTMLBlockElement_FWD_DEFINED__ */


#ifndef __IHTMLBlockElement2_FWD_DEFINED__
#define __IHTMLBlockElement2_FWD_DEFINED__
typedef interface IHTMLBlockElement2 IHTMLBlockElement2;
#endif 	/* __IHTMLBlockElement2_FWD_DEFINED__ */


#ifndef __DispHTMLBlockElement_FWD_DEFINED__
#define __DispHTMLBlockElement_FWD_DEFINED__
typedef interface DispHTMLBlockElement DispHTMLBlockElement;
#endif 	/* __DispHTMLBlockElement_FWD_DEFINED__ */


#ifndef __HTMLBlockElement_FWD_DEFINED__
#define __HTMLBlockElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLBlockElement HTMLBlockElement;
#else
typedef struct HTMLBlockElement HTMLBlockElement;
#endif /* __cplusplus */

#endif 	/* __HTMLBlockElement_FWD_DEFINED__ */


#ifndef __IHTMLDivElement_FWD_DEFINED__
#define __IHTMLDivElement_FWD_DEFINED__
typedef interface IHTMLDivElement IHTMLDivElement;
#endif 	/* __IHTMLDivElement_FWD_DEFINED__ */


#ifndef __DispHTMLDivElement_FWD_DEFINED__
#define __DispHTMLDivElement_FWD_DEFINED__
typedef interface DispHTMLDivElement DispHTMLDivElement;
#endif 	/* __DispHTMLDivElement_FWD_DEFINED__ */


#ifndef __HTMLDivElement_FWD_DEFINED__
#define __HTMLDivElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLDivElement HTMLDivElement;
#else
typedef struct HTMLDivElement HTMLDivElement;
#endif /* __cplusplus */

#endif 	/* __HTMLDivElement_FWD_DEFINED__ */


#ifndef __IHTMLDDElement_FWD_DEFINED__
#define __IHTMLDDElement_FWD_DEFINED__
typedef interface IHTMLDDElement IHTMLDDElement;
#endif 	/* __IHTMLDDElement_FWD_DEFINED__ */


#ifndef __DispHTMLDDElement_FWD_DEFINED__
#define __DispHTMLDDElement_FWD_DEFINED__
typedef interface DispHTMLDDElement DispHTMLDDElement;
#endif 	/* __DispHTMLDDElement_FWD_DEFINED__ */


#ifndef __HTMLDDElement_FWD_DEFINED__
#define __HTMLDDElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLDDElement HTMLDDElement;
#else
typedef struct HTMLDDElement HTMLDDElement;
#endif /* __cplusplus */

#endif 	/* __HTMLDDElement_FWD_DEFINED__ */


#ifndef __IHTMLDTElement_FWD_DEFINED__
#define __IHTMLDTElement_FWD_DEFINED__
typedef interface IHTMLDTElement IHTMLDTElement;
#endif 	/* __IHTMLDTElement_FWD_DEFINED__ */


#ifndef __DispHTMLDTElement_FWD_DEFINED__
#define __DispHTMLDTElement_FWD_DEFINED__
typedef interface DispHTMLDTElement DispHTMLDTElement;
#endif 	/* __DispHTMLDTElement_FWD_DEFINED__ */


#ifndef __HTMLDTElement_FWD_DEFINED__
#define __HTMLDTElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLDTElement HTMLDTElement;
#else
typedef struct HTMLDTElement HTMLDTElement;
#endif /* __cplusplus */

#endif 	/* __HTMLDTElement_FWD_DEFINED__ */


#ifndef __IHTMLBRElement_FWD_DEFINED__
#define __IHTMLBRElement_FWD_DEFINED__
typedef interface IHTMLBRElement IHTMLBRElement;
#endif 	/* __IHTMLBRElement_FWD_DEFINED__ */


#ifndef __DispHTMLBRElement_FWD_DEFINED__
#define __DispHTMLBRElement_FWD_DEFINED__
typedef interface DispHTMLBRElement DispHTMLBRElement;
#endif 	/* __DispHTMLBRElement_FWD_DEFINED__ */


#ifndef __HTMLBRElement_FWD_DEFINED__
#define __HTMLBRElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLBRElement HTMLBRElement;
#else
typedef struct HTMLBRElement HTMLBRElement;
#endif /* __cplusplus */

#endif 	/* __HTMLBRElement_FWD_DEFINED__ */


#ifndef __IHTMLDListElement_FWD_DEFINED__
#define __IHTMLDListElement_FWD_DEFINED__
typedef interface IHTMLDListElement IHTMLDListElement;
#endif 	/* __IHTMLDListElement_FWD_DEFINED__ */


#ifndef __DispHTMLDListElement_FWD_DEFINED__
#define __DispHTMLDListElement_FWD_DEFINED__
typedef interface DispHTMLDListElement DispHTMLDListElement;
#endif 	/* __DispHTMLDListElement_FWD_DEFINED__ */


#ifndef __HTMLDListElement_FWD_DEFINED__
#define __HTMLDListElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLDListElement HTMLDListElement;
#else
typedef struct HTMLDListElement HTMLDListElement;
#endif /* __cplusplus */

#endif 	/* __HTMLDListElement_FWD_DEFINED__ */


#ifndef __IHTMLHRElement_FWD_DEFINED__
#define __IHTMLHRElement_FWD_DEFINED__
typedef interface IHTMLHRElement IHTMLHRElement;
#endif 	/* __IHTMLHRElement_FWD_DEFINED__ */


#ifndef __DispHTMLHRElement_FWD_DEFINED__
#define __DispHTMLHRElement_FWD_DEFINED__
typedef interface DispHTMLHRElement DispHTMLHRElement;
#endif 	/* __DispHTMLHRElement_FWD_DEFINED__ */


#ifndef __HTMLHRElement_FWD_DEFINED__
#define __HTMLHRElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLHRElement HTMLHRElement;
#else
typedef struct HTMLHRElement HTMLHRElement;
#endif /* __cplusplus */

#endif 	/* __HTMLHRElement_FWD_DEFINED__ */


#ifndef __IHTMLParaElement_FWD_DEFINED__
#define __IHTMLParaElement_FWD_DEFINED__
typedef interface IHTMLParaElement IHTMLParaElement;
#endif 	/* __IHTMLParaElement_FWD_DEFINED__ */


#ifndef __DispHTMLParaElement_FWD_DEFINED__
#define __DispHTMLParaElement_FWD_DEFINED__
typedef interface DispHTMLParaElement DispHTMLParaElement;
#endif 	/* __DispHTMLParaElement_FWD_DEFINED__ */


#ifndef __HTMLParaElement_FWD_DEFINED__
#define __HTMLParaElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLParaElement HTMLParaElement;
#else
typedef struct HTMLParaElement HTMLParaElement;
#endif /* __cplusplus */

#endif 	/* __HTMLParaElement_FWD_DEFINED__ */


#ifndef __IHTMLElementCollection2_FWD_DEFINED__
#define __IHTMLElementCollection2_FWD_DEFINED__
typedef interface IHTMLElementCollection2 IHTMLElementCollection2;
#endif 	/* __IHTMLElementCollection2_FWD_DEFINED__ */


#ifndef __IHTMLElementCollection3_FWD_DEFINED__
#define __IHTMLElementCollection3_FWD_DEFINED__
typedef interface IHTMLElementCollection3 IHTMLElementCollection3;
#endif 	/* __IHTMLElementCollection3_FWD_DEFINED__ */


#ifndef __DispHTMLElementCollection_FWD_DEFINED__
#define __DispHTMLElementCollection_FWD_DEFINED__
typedef interface DispHTMLElementCollection DispHTMLElementCollection;
#endif 	/* __DispHTMLElementCollection_FWD_DEFINED__ */


#ifndef __HTMLElementCollection_FWD_DEFINED__
#define __HTMLElementCollection_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLElementCollection HTMLElementCollection;
#else
typedef struct HTMLElementCollection HTMLElementCollection;
#endif /* __cplusplus */

#endif 	/* __HTMLElementCollection_FWD_DEFINED__ */


#ifndef __IHTMLHeaderElement_FWD_DEFINED__
#define __IHTMLHeaderElement_FWD_DEFINED__
typedef interface IHTMLHeaderElement IHTMLHeaderElement;
#endif 	/* __IHTMLHeaderElement_FWD_DEFINED__ */


#ifndef __DispHTMLHeaderElement_FWD_DEFINED__
#define __DispHTMLHeaderElement_FWD_DEFINED__
typedef interface DispHTMLHeaderElement DispHTMLHeaderElement;
#endif 	/* __DispHTMLHeaderElement_FWD_DEFINED__ */


#ifndef __HTMLHeaderElement_FWD_DEFINED__
#define __HTMLHeaderElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLHeaderElement HTMLHeaderElement;
#else
typedef struct HTMLHeaderElement HTMLHeaderElement;
#endif /* __cplusplus */

#endif 	/* __HTMLHeaderElement_FWD_DEFINED__ */


#ifndef __HTMLSelectElementEvents2_FWD_DEFINED__
#define __HTMLSelectElementEvents2_FWD_DEFINED__
typedef interface HTMLSelectElementEvents2 HTMLSelectElementEvents2;
#endif 	/* __HTMLSelectElementEvents2_FWD_DEFINED__ */


#ifndef __HTMLSelectElementEvents_FWD_DEFINED__
#define __HTMLSelectElementEvents_FWD_DEFINED__
typedef interface HTMLSelectElementEvents HTMLSelectElementEvents;
#endif 	/* __HTMLSelectElementEvents_FWD_DEFINED__ */


#ifndef __IHTMLSelectElementEx_FWD_DEFINED__
#define __IHTMLSelectElementEx_FWD_DEFINED__
typedef interface IHTMLSelectElementEx IHTMLSelectElementEx;
#endif 	/* __IHTMLSelectElementEx_FWD_DEFINED__ */


#ifndef __IHTMLSelectElement_FWD_DEFINED__
#define __IHTMLSelectElement_FWD_DEFINED__
typedef interface IHTMLSelectElement IHTMLSelectElement;
#endif 	/* __IHTMLSelectElement_FWD_DEFINED__ */


#ifndef __IHTMLSelectElement2_FWD_DEFINED__
#define __IHTMLSelectElement2_FWD_DEFINED__
typedef interface IHTMLSelectElement2 IHTMLSelectElement2;
#endif 	/* __IHTMLSelectElement2_FWD_DEFINED__ */


#ifndef __IHTMLSelectElement4_FWD_DEFINED__
#define __IHTMLSelectElement4_FWD_DEFINED__
typedef interface IHTMLSelectElement4 IHTMLSelectElement4;
#endif 	/* __IHTMLSelectElement4_FWD_DEFINED__ */


#ifndef __DispHTMLSelectElement_FWD_DEFINED__
#define __DispHTMLSelectElement_FWD_DEFINED__
typedef interface DispHTMLSelectElement DispHTMLSelectElement;
#endif 	/* __DispHTMLSelectElement_FWD_DEFINED__ */


#ifndef __HTMLSelectElement_FWD_DEFINED__
#define __HTMLSelectElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLSelectElement HTMLSelectElement;
#else
typedef struct HTMLSelectElement HTMLSelectElement;
#endif /* __cplusplus */

#endif 	/* __HTMLSelectElement_FWD_DEFINED__ */


#ifndef __DispHTMLWndSelectElement_FWD_DEFINED__
#define __DispHTMLWndSelectElement_FWD_DEFINED__
typedef interface DispHTMLWndSelectElement DispHTMLWndSelectElement;
#endif 	/* __DispHTMLWndSelectElement_FWD_DEFINED__ */


#ifndef __HTMLWndSelectElement_FWD_DEFINED__
#define __HTMLWndSelectElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLWndSelectElement HTMLWndSelectElement;
#else
typedef struct HTMLWndSelectElement HTMLWndSelectElement;
#endif /* __cplusplus */

#endif 	/* __HTMLWndSelectElement_FWD_DEFINED__ */


#ifndef __IHTMLSelectionObject_FWD_DEFINED__
#define __IHTMLSelectionObject_FWD_DEFINED__
typedef interface IHTMLSelectionObject IHTMLSelectionObject;
#endif 	/* __IHTMLSelectionObject_FWD_DEFINED__ */


#ifndef __IHTMLSelectionObject2_FWD_DEFINED__
#define __IHTMLSelectionObject2_FWD_DEFINED__
typedef interface IHTMLSelectionObject2 IHTMLSelectionObject2;
#endif 	/* __IHTMLSelectionObject2_FWD_DEFINED__ */


#ifndef __IHTMLOptionElement_FWD_DEFINED__
#define __IHTMLOptionElement_FWD_DEFINED__
typedef interface IHTMLOptionElement IHTMLOptionElement;
#endif 	/* __IHTMLOptionElement_FWD_DEFINED__ */


#ifndef __IHTMLOptionElement3_FWD_DEFINED__
#define __IHTMLOptionElement3_FWD_DEFINED__
typedef interface IHTMLOptionElement3 IHTMLOptionElement3;
#endif 	/* __IHTMLOptionElement3_FWD_DEFINED__ */


#ifndef __IHTMLOptionElementFactory_FWD_DEFINED__
#define __IHTMLOptionElementFactory_FWD_DEFINED__
typedef interface IHTMLOptionElementFactory IHTMLOptionElementFactory;
#endif 	/* __IHTMLOptionElementFactory_FWD_DEFINED__ */


#ifndef __DispHTMLOptionElement_FWD_DEFINED__
#define __DispHTMLOptionElement_FWD_DEFINED__
typedef interface DispHTMLOptionElement DispHTMLOptionElement;
#endif 	/* __DispHTMLOptionElement_FWD_DEFINED__ */


#ifndef __HTMLOptionElement_FWD_DEFINED__
#define __HTMLOptionElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLOptionElement HTMLOptionElement;
#else
typedef struct HTMLOptionElement HTMLOptionElement;
#endif /* __cplusplus */

#endif 	/* __HTMLOptionElement_FWD_DEFINED__ */


#ifndef __HTMLOptionElementFactory_FWD_DEFINED__
#define __HTMLOptionElementFactory_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLOptionElementFactory HTMLOptionElementFactory;
#else
typedef struct HTMLOptionElementFactory HTMLOptionElementFactory;
#endif /* __cplusplus */

#endif 	/* __HTMLOptionElementFactory_FWD_DEFINED__ */


#ifndef __DispHTMLWndOptionElement_FWD_DEFINED__
#define __DispHTMLWndOptionElement_FWD_DEFINED__
typedef interface DispHTMLWndOptionElement DispHTMLWndOptionElement;
#endif 	/* __DispHTMLWndOptionElement_FWD_DEFINED__ */


#ifndef __HTMLWndOptionElement_FWD_DEFINED__
#define __HTMLWndOptionElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLWndOptionElement HTMLWndOptionElement;
#else
typedef struct HTMLWndOptionElement HTMLWndOptionElement;
#endif /* __cplusplus */

#endif 	/* __HTMLWndOptionElement_FWD_DEFINED__ */


#ifndef __HTMLButtonElementEvents2_FWD_DEFINED__
#define __HTMLButtonElementEvents2_FWD_DEFINED__
typedef interface HTMLButtonElementEvents2 HTMLButtonElementEvents2;
#endif 	/* __HTMLButtonElementEvents2_FWD_DEFINED__ */


#ifndef __HTMLButtonElementEvents_FWD_DEFINED__
#define __HTMLButtonElementEvents_FWD_DEFINED__
typedef interface HTMLButtonElementEvents HTMLButtonElementEvents;
#endif 	/* __HTMLButtonElementEvents_FWD_DEFINED__ */


#ifndef __HTMLInputTextElementEvents2_FWD_DEFINED__
#define __HTMLInputTextElementEvents2_FWD_DEFINED__
typedef interface HTMLInputTextElementEvents2 HTMLInputTextElementEvents2;
#endif 	/* __HTMLInputTextElementEvents2_FWD_DEFINED__ */


#ifndef __HTMLOptionButtonElementEvents2_FWD_DEFINED__
#define __HTMLOptionButtonElementEvents2_FWD_DEFINED__
typedef interface HTMLOptionButtonElementEvents2 HTMLOptionButtonElementEvents2;
#endif 	/* __HTMLOptionButtonElementEvents2_FWD_DEFINED__ */


#ifndef __HTMLInputFileElementEvents2_FWD_DEFINED__
#define __HTMLInputFileElementEvents2_FWD_DEFINED__
typedef interface HTMLInputFileElementEvents2 HTMLInputFileElementEvents2;
#endif 	/* __HTMLInputFileElementEvents2_FWD_DEFINED__ */


#ifndef __HTMLInputImageEvents2_FWD_DEFINED__
#define __HTMLInputImageEvents2_FWD_DEFINED__
typedef interface HTMLInputImageEvents2 HTMLInputImageEvents2;
#endif 	/* __HTMLInputImageEvents2_FWD_DEFINED__ */


#ifndef __HTMLInputTextElementEvents_FWD_DEFINED__
#define __HTMLInputTextElementEvents_FWD_DEFINED__
typedef interface HTMLInputTextElementEvents HTMLInputTextElementEvents;
#endif 	/* __HTMLInputTextElementEvents_FWD_DEFINED__ */


#ifndef __HTMLOptionButtonElementEvents_FWD_DEFINED__
#define __HTMLOptionButtonElementEvents_FWD_DEFINED__
typedef interface HTMLOptionButtonElementEvents HTMLOptionButtonElementEvents;
#endif 	/* __HTMLOptionButtonElementEvents_FWD_DEFINED__ */


#ifndef __HTMLInputFileElementEvents_FWD_DEFINED__
#define __HTMLInputFileElementEvents_FWD_DEFINED__
typedef interface HTMLInputFileElementEvents HTMLInputFileElementEvents;
#endif 	/* __HTMLInputFileElementEvents_FWD_DEFINED__ */


#ifndef __HTMLInputImageEvents_FWD_DEFINED__
#define __HTMLInputImageEvents_FWD_DEFINED__
typedef interface HTMLInputImageEvents HTMLInputImageEvents;
#endif 	/* __HTMLInputImageEvents_FWD_DEFINED__ */


#ifndef __IHTMLInputElement_FWD_DEFINED__
#define __IHTMLInputElement_FWD_DEFINED__
typedef interface IHTMLInputElement IHTMLInputElement;
#endif 	/* __IHTMLInputElement_FWD_DEFINED__ */


#ifndef __IHTMLInputElement2_FWD_DEFINED__
#define __IHTMLInputElement2_FWD_DEFINED__
typedef interface IHTMLInputElement2 IHTMLInputElement2;
#endif 	/* __IHTMLInputElement2_FWD_DEFINED__ */


#ifndef __IHTMLInputButtonElement_FWD_DEFINED__
#define __IHTMLInputButtonElement_FWD_DEFINED__
typedef interface IHTMLInputButtonElement IHTMLInputButtonElement;
#endif 	/* __IHTMLInputButtonElement_FWD_DEFINED__ */


#ifndef __IHTMLInputHiddenElement_FWD_DEFINED__
#define __IHTMLInputHiddenElement_FWD_DEFINED__
typedef interface IHTMLInputHiddenElement IHTMLInputHiddenElement;
#endif 	/* __IHTMLInputHiddenElement_FWD_DEFINED__ */


#ifndef __IHTMLInputTextElement_FWD_DEFINED__
#define __IHTMLInputTextElement_FWD_DEFINED__
typedef interface IHTMLInputTextElement IHTMLInputTextElement;
#endif 	/* __IHTMLInputTextElement_FWD_DEFINED__ */


#ifndef __IHTMLInputFileElement_FWD_DEFINED__
#define __IHTMLInputFileElement_FWD_DEFINED__
typedef interface IHTMLInputFileElement IHTMLInputFileElement;
#endif 	/* __IHTMLInputFileElement_FWD_DEFINED__ */


#ifndef __IHTMLOptionButtonElement_FWD_DEFINED__
#define __IHTMLOptionButtonElement_FWD_DEFINED__
typedef interface IHTMLOptionButtonElement IHTMLOptionButtonElement;
#endif 	/* __IHTMLOptionButtonElement_FWD_DEFINED__ */


#ifndef __IHTMLInputImage_FWD_DEFINED__
#define __IHTMLInputImage_FWD_DEFINED__
typedef interface IHTMLInputImage IHTMLInputImage;
#endif 	/* __IHTMLInputImage_FWD_DEFINED__ */


#ifndef __DispHTMLInputElement_FWD_DEFINED__
#define __DispHTMLInputElement_FWD_DEFINED__
typedef interface DispHTMLInputElement DispHTMLInputElement;
#endif 	/* __DispHTMLInputElement_FWD_DEFINED__ */


#ifndef __HTMLInputElement_FWD_DEFINED__
#define __HTMLInputElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLInputElement HTMLInputElement;
#else
typedef struct HTMLInputElement HTMLInputElement;
#endif /* __cplusplus */

#endif 	/* __HTMLInputElement_FWD_DEFINED__ */


#ifndef __IHTMLTextAreaElement_FWD_DEFINED__
#define __IHTMLTextAreaElement_FWD_DEFINED__
typedef interface IHTMLTextAreaElement IHTMLTextAreaElement;
#endif 	/* __IHTMLTextAreaElement_FWD_DEFINED__ */


#ifndef __DispHTMLTextAreaElement_FWD_DEFINED__
#define __DispHTMLTextAreaElement_FWD_DEFINED__
typedef interface DispHTMLTextAreaElement DispHTMLTextAreaElement;
#endif 	/* __DispHTMLTextAreaElement_FWD_DEFINED__ */


#ifndef __HTMLTextAreaElement_FWD_DEFINED__
#define __HTMLTextAreaElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLTextAreaElement HTMLTextAreaElement;
#else
typedef struct HTMLTextAreaElement HTMLTextAreaElement;
#endif /* __cplusplus */

#endif 	/* __HTMLTextAreaElement_FWD_DEFINED__ */


#ifndef __DispHTMLRichtextElement_FWD_DEFINED__
#define __DispHTMLRichtextElement_FWD_DEFINED__
typedef interface DispHTMLRichtextElement DispHTMLRichtextElement;
#endif 	/* __DispHTMLRichtextElement_FWD_DEFINED__ */


#ifndef __HTMLRichtextElement_FWD_DEFINED__
#define __HTMLRichtextElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLRichtextElement HTMLRichtextElement;
#else
typedef struct HTMLRichtextElement HTMLRichtextElement;
#endif /* __cplusplus */

#endif 	/* __HTMLRichtextElement_FWD_DEFINED__ */


#ifndef __IHTMLButtonElement_FWD_DEFINED__
#define __IHTMLButtonElement_FWD_DEFINED__
typedef interface IHTMLButtonElement IHTMLButtonElement;
#endif 	/* __IHTMLButtonElement_FWD_DEFINED__ */


#ifndef __DispHTMLButtonElement_FWD_DEFINED__
#define __DispHTMLButtonElement_FWD_DEFINED__
typedef interface DispHTMLButtonElement DispHTMLButtonElement;
#endif 	/* __DispHTMLButtonElement_FWD_DEFINED__ */


#ifndef __HTMLButtonElement_FWD_DEFINED__
#define __HTMLButtonElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLButtonElement HTMLButtonElement;
#else
typedef struct HTMLButtonElement HTMLButtonElement;
#endif /* __cplusplus */

#endif 	/* __HTMLButtonElement_FWD_DEFINED__ */


#ifndef __HTMLMarqueeElementEvents2_FWD_DEFINED__
#define __HTMLMarqueeElementEvents2_FWD_DEFINED__
typedef interface HTMLMarqueeElementEvents2 HTMLMarqueeElementEvents2;
#endif 	/* __HTMLMarqueeElementEvents2_FWD_DEFINED__ */


#ifndef __HTMLMarqueeElementEvents_FWD_DEFINED__
#define __HTMLMarqueeElementEvents_FWD_DEFINED__
typedef interface HTMLMarqueeElementEvents HTMLMarqueeElementEvents;
#endif 	/* __HTMLMarqueeElementEvents_FWD_DEFINED__ */


#ifndef __IHTMLMarqueeElement_FWD_DEFINED__
#define __IHTMLMarqueeElement_FWD_DEFINED__
typedef interface IHTMLMarqueeElement IHTMLMarqueeElement;
#endif 	/* __IHTMLMarqueeElement_FWD_DEFINED__ */


#ifndef __DispHTMLMarqueeElement_FWD_DEFINED__
#define __DispHTMLMarqueeElement_FWD_DEFINED__
typedef interface DispHTMLMarqueeElement DispHTMLMarqueeElement;
#endif 	/* __DispHTMLMarqueeElement_FWD_DEFINED__ */


#ifndef __HTMLMarqueeElement_FWD_DEFINED__
#define __HTMLMarqueeElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLMarqueeElement HTMLMarqueeElement;
#else
typedef struct HTMLMarqueeElement HTMLMarqueeElement;
#endif /* __cplusplus */

#endif 	/* __HTMLMarqueeElement_FWD_DEFINED__ */


#ifndef __IHTMLHtmlElement_FWD_DEFINED__
#define __IHTMLHtmlElement_FWD_DEFINED__
typedef interface IHTMLHtmlElement IHTMLHtmlElement;
#endif 	/* __IHTMLHtmlElement_FWD_DEFINED__ */


#ifndef __IHTMLHeadElement_FWD_DEFINED__
#define __IHTMLHeadElement_FWD_DEFINED__
typedef interface IHTMLHeadElement IHTMLHeadElement;
#endif 	/* __IHTMLHeadElement_FWD_DEFINED__ */


#ifndef __IHTMLTitleElement_FWD_DEFINED__
#define __IHTMLTitleElement_FWD_DEFINED__
typedef interface IHTMLTitleElement IHTMLTitleElement;
#endif 	/* __IHTMLTitleElement_FWD_DEFINED__ */


#ifndef __IHTMLMetaElement_FWD_DEFINED__
#define __IHTMLMetaElement_FWD_DEFINED__
typedef interface IHTMLMetaElement IHTMLMetaElement;
#endif 	/* __IHTMLMetaElement_FWD_DEFINED__ */


#ifndef __IHTMLMetaElement2_FWD_DEFINED__
#define __IHTMLMetaElement2_FWD_DEFINED__
typedef interface IHTMLMetaElement2 IHTMLMetaElement2;
#endif 	/* __IHTMLMetaElement2_FWD_DEFINED__ */


#ifndef __IHTMLBaseElement_FWD_DEFINED__
#define __IHTMLBaseElement_FWD_DEFINED__
typedef interface IHTMLBaseElement IHTMLBaseElement;
#endif 	/* __IHTMLBaseElement_FWD_DEFINED__ */


#ifndef __IHTMLIsIndexElement_FWD_DEFINED__
#define __IHTMLIsIndexElement_FWD_DEFINED__
typedef interface IHTMLIsIndexElement IHTMLIsIndexElement;
#endif 	/* __IHTMLIsIndexElement_FWD_DEFINED__ */


#ifndef __IHTMLIsIndexElement2_FWD_DEFINED__
#define __IHTMLIsIndexElement2_FWD_DEFINED__
typedef interface IHTMLIsIndexElement2 IHTMLIsIndexElement2;
#endif 	/* __IHTMLIsIndexElement2_FWD_DEFINED__ */


#ifndef __IHTMLNextIdElement_FWD_DEFINED__
#define __IHTMLNextIdElement_FWD_DEFINED__
typedef interface IHTMLNextIdElement IHTMLNextIdElement;
#endif 	/* __IHTMLNextIdElement_FWD_DEFINED__ */


#ifndef __DispHTMLHtmlElement_FWD_DEFINED__
#define __DispHTMLHtmlElement_FWD_DEFINED__
typedef interface DispHTMLHtmlElement DispHTMLHtmlElement;
#endif 	/* __DispHTMLHtmlElement_FWD_DEFINED__ */


#ifndef __HTMLHtmlElement_FWD_DEFINED__
#define __HTMLHtmlElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLHtmlElement HTMLHtmlElement;
#else
typedef struct HTMLHtmlElement HTMLHtmlElement;
#endif /* __cplusplus */

#endif 	/* __HTMLHtmlElement_FWD_DEFINED__ */


#ifndef __DispHTMLHeadElement_FWD_DEFINED__
#define __DispHTMLHeadElement_FWD_DEFINED__
typedef interface DispHTMLHeadElement DispHTMLHeadElement;
#endif 	/* __DispHTMLHeadElement_FWD_DEFINED__ */


#ifndef __HTMLHeadElement_FWD_DEFINED__
#define __HTMLHeadElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLHeadElement HTMLHeadElement;
#else
typedef struct HTMLHeadElement HTMLHeadElement;
#endif /* __cplusplus */

#endif 	/* __HTMLHeadElement_FWD_DEFINED__ */


#ifndef __DispHTMLTitleElement_FWD_DEFINED__
#define __DispHTMLTitleElement_FWD_DEFINED__
typedef interface DispHTMLTitleElement DispHTMLTitleElement;
#endif 	/* __DispHTMLTitleElement_FWD_DEFINED__ */


#ifndef __HTMLTitleElement_FWD_DEFINED__
#define __HTMLTitleElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLTitleElement HTMLTitleElement;
#else
typedef struct HTMLTitleElement HTMLTitleElement;
#endif /* __cplusplus */

#endif 	/* __HTMLTitleElement_FWD_DEFINED__ */


#ifndef __DispHTMLMetaElement_FWD_DEFINED__
#define __DispHTMLMetaElement_FWD_DEFINED__
typedef interface DispHTMLMetaElement DispHTMLMetaElement;
#endif 	/* __DispHTMLMetaElement_FWD_DEFINED__ */


#ifndef __HTMLMetaElement_FWD_DEFINED__
#define __HTMLMetaElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLMetaElement HTMLMetaElement;
#else
typedef struct HTMLMetaElement HTMLMetaElement;
#endif /* __cplusplus */

#endif 	/* __HTMLMetaElement_FWD_DEFINED__ */


#ifndef __DispHTMLBaseElement_FWD_DEFINED__
#define __DispHTMLBaseElement_FWD_DEFINED__
typedef interface DispHTMLBaseElement DispHTMLBaseElement;
#endif 	/* __DispHTMLBaseElement_FWD_DEFINED__ */


#ifndef __HTMLBaseElement_FWD_DEFINED__
#define __HTMLBaseElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLBaseElement HTMLBaseElement;
#else
typedef struct HTMLBaseElement HTMLBaseElement;
#endif /* __cplusplus */

#endif 	/* __HTMLBaseElement_FWD_DEFINED__ */


#ifndef __DispHTMLIsIndexElement_FWD_DEFINED__
#define __DispHTMLIsIndexElement_FWD_DEFINED__
typedef interface DispHTMLIsIndexElement DispHTMLIsIndexElement;
#endif 	/* __DispHTMLIsIndexElement_FWD_DEFINED__ */


#ifndef __HTMLIsIndexElement_FWD_DEFINED__
#define __HTMLIsIndexElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLIsIndexElement HTMLIsIndexElement;
#else
typedef struct HTMLIsIndexElement HTMLIsIndexElement;
#endif /* __cplusplus */

#endif 	/* __HTMLIsIndexElement_FWD_DEFINED__ */


#ifndef __DispHTMLNextIdElement_FWD_DEFINED__
#define __DispHTMLNextIdElement_FWD_DEFINED__
typedef interface DispHTMLNextIdElement DispHTMLNextIdElement;
#endif 	/* __DispHTMLNextIdElement_FWD_DEFINED__ */


#ifndef __HTMLNextIdElement_FWD_DEFINED__
#define __HTMLNextIdElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLNextIdElement HTMLNextIdElement;
#else
typedef struct HTMLNextIdElement HTMLNextIdElement;
#endif /* __cplusplus */

#endif 	/* __HTMLNextIdElement_FWD_DEFINED__ */


#ifndef __IHTMLBaseFontElement_FWD_DEFINED__
#define __IHTMLBaseFontElement_FWD_DEFINED__
typedef interface IHTMLBaseFontElement IHTMLBaseFontElement;
#endif 	/* __IHTMLBaseFontElement_FWD_DEFINED__ */


#ifndef __DispHTMLBaseFontElement_FWD_DEFINED__
#define __DispHTMLBaseFontElement_FWD_DEFINED__
typedef interface DispHTMLBaseFontElement DispHTMLBaseFontElement;
#endif 	/* __DispHTMLBaseFontElement_FWD_DEFINED__ */


#ifndef __HTMLBaseFontElement_FWD_DEFINED__
#define __HTMLBaseFontElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLBaseFontElement HTMLBaseFontElement;
#else
typedef struct HTMLBaseFontElement HTMLBaseFontElement;
#endif /* __cplusplus */

#endif 	/* __HTMLBaseFontElement_FWD_DEFINED__ */


#ifndef __IHTMLUnknownElement_FWD_DEFINED__
#define __IHTMLUnknownElement_FWD_DEFINED__
typedef interface IHTMLUnknownElement IHTMLUnknownElement;
#endif 	/* __IHTMLUnknownElement_FWD_DEFINED__ */


#ifndef __DispHTMLUnknownElement_FWD_DEFINED__
#define __DispHTMLUnknownElement_FWD_DEFINED__
typedef interface DispHTMLUnknownElement DispHTMLUnknownElement;
#endif 	/* __DispHTMLUnknownElement_FWD_DEFINED__ */


#ifndef __HTMLUnknownElement_FWD_DEFINED__
#define __HTMLUnknownElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLUnknownElement HTMLUnknownElement;
#else
typedef struct HTMLUnknownElement HTMLUnknownElement;
#endif /* __cplusplus */

#endif 	/* __HTMLUnknownElement_FWD_DEFINED__ */


#ifndef __IOmHistory_FWD_DEFINED__
#define __IOmHistory_FWD_DEFINED__
typedef interface IOmHistory IOmHistory;
#endif 	/* __IOmHistory_FWD_DEFINED__ */


#ifndef __IHTMLMimeTypesCollection_FWD_DEFINED__
#define __IHTMLMimeTypesCollection_FWD_DEFINED__
typedef interface IHTMLMimeTypesCollection IHTMLMimeTypesCollection;
#endif 	/* __IHTMLMimeTypesCollection_FWD_DEFINED__ */


#ifndef __IHTMLPluginsCollection_FWD_DEFINED__
#define __IHTMLPluginsCollection_FWD_DEFINED__
typedef interface IHTMLPluginsCollection IHTMLPluginsCollection;
#endif 	/* __IHTMLPluginsCollection_FWD_DEFINED__ */


#ifndef __IHTMLOpsProfile_FWD_DEFINED__
#define __IHTMLOpsProfile_FWD_DEFINED__
typedef interface IHTMLOpsProfile IHTMLOpsProfile;
#endif 	/* __IHTMLOpsProfile_FWD_DEFINED__ */


#ifndef __IOmNavigator_FWD_DEFINED__
#define __IOmNavigator_FWD_DEFINED__
typedef interface IOmNavigator IOmNavigator;
#endif 	/* __IOmNavigator_FWD_DEFINED__ */


#ifndef __IHTMLLocation_FWD_DEFINED__
#define __IHTMLLocation_FWD_DEFINED__
typedef interface IHTMLLocation IHTMLLocation;
#endif 	/* __IHTMLLocation_FWD_DEFINED__ */


#ifndef __HTMLHistory_FWD_DEFINED__
#define __HTMLHistory_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLHistory HTMLHistory;
#else
typedef struct HTMLHistory HTMLHistory;
#endif /* __cplusplus */

#endif 	/* __HTMLHistory_FWD_DEFINED__ */


#ifndef __CMimeTypes_FWD_DEFINED__
#define __CMimeTypes_FWD_DEFINED__

#ifdef __cplusplus
typedef class CMimeTypes CMimeTypes;
#else
typedef struct CMimeTypes CMimeTypes;
#endif /* __cplusplus */

#endif 	/* __CMimeTypes_FWD_DEFINED__ */


#ifndef __CPlugins_FWD_DEFINED__
#define __CPlugins_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPlugins CPlugins;
#else
typedef struct CPlugins CPlugins;
#endif /* __cplusplus */

#endif 	/* __CPlugins_FWD_DEFINED__ */


#ifndef __COpsProfile_FWD_DEFINED__
#define __COpsProfile_FWD_DEFINED__

#ifdef __cplusplus
typedef class COpsProfile COpsProfile;
#else
typedef struct COpsProfile COpsProfile;
#endif /* __cplusplus */

#endif 	/* __COpsProfile_FWD_DEFINED__ */


#ifndef __HTMLNavigator_FWD_DEFINED__
#define __HTMLNavigator_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLNavigator HTMLNavigator;
#else
typedef struct HTMLNavigator HTMLNavigator;
#endif /* __cplusplus */

#endif 	/* __HTMLNavigator_FWD_DEFINED__ */


#ifndef __HTMLLocation_FWD_DEFINED__
#define __HTMLLocation_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLLocation HTMLLocation;
#else
typedef struct HTMLLocation HTMLLocation;
#endif /* __cplusplus */

#endif 	/* __HTMLLocation_FWD_DEFINED__ */


#ifndef __IHTMLBookmarkCollection_FWD_DEFINED__
#define __IHTMLBookmarkCollection_FWD_DEFINED__
typedef interface IHTMLBookmarkCollection IHTMLBookmarkCollection;
#endif 	/* __IHTMLBookmarkCollection_FWD_DEFINED__ */


#ifndef __IHTMLDataTransfer_FWD_DEFINED__
#define __IHTMLDataTransfer_FWD_DEFINED__
typedef interface IHTMLDataTransfer IHTMLDataTransfer;
#endif 	/* __IHTMLDataTransfer_FWD_DEFINED__ */


#ifndef __IHTMLEventObj2_FWD_DEFINED__
#define __IHTMLEventObj2_FWD_DEFINED__
typedef interface IHTMLEventObj2 IHTMLEventObj2;
#endif 	/* __IHTMLEventObj2_FWD_DEFINED__ */


#ifndef __IHTMLEventObj3_FWD_DEFINED__
#define __IHTMLEventObj3_FWD_DEFINED__
typedef interface IHTMLEventObj3 IHTMLEventObj3;
#endif 	/* __IHTMLEventObj3_FWD_DEFINED__ */


#ifndef __IHTMLEventObj4_FWD_DEFINED__
#define __IHTMLEventObj4_FWD_DEFINED__
typedef interface IHTMLEventObj4 IHTMLEventObj4;
#endif 	/* __IHTMLEventObj4_FWD_DEFINED__ */


#ifndef __DispCEventObj_FWD_DEFINED__
#define __DispCEventObj_FWD_DEFINED__
typedef interface DispCEventObj DispCEventObj;
#endif 	/* __DispCEventObj_FWD_DEFINED__ */


#ifndef __CEventObj_FWD_DEFINED__
#define __CEventObj_FWD_DEFINED__

#ifdef __cplusplus
typedef class CEventObj CEventObj;
#else
typedef struct CEventObj CEventObj;
#endif /* __cplusplus */

#endif 	/* __CEventObj_FWD_DEFINED__ */


#ifndef __HTMLWindowEvents2_FWD_DEFINED__
#define __HTMLWindowEvents2_FWD_DEFINED__
typedef interface HTMLWindowEvents2 HTMLWindowEvents2;
#endif 	/* __HTMLWindowEvents2_FWD_DEFINED__ */


#ifndef __HTMLWindowEvents_FWD_DEFINED__
#define __HTMLWindowEvents_FWD_DEFINED__
typedef interface HTMLWindowEvents HTMLWindowEvents;
#endif 	/* __HTMLWindowEvents_FWD_DEFINED__ */


#ifndef __IHTMLDocument2_FWD_DEFINED__
#define __IHTMLDocument2_FWD_DEFINED__
typedef interface IHTMLDocument2 IHTMLDocument2;
#endif 	/* __IHTMLDocument2_FWD_DEFINED__ */


#ifndef __IHTMLFramesCollection2_FWD_DEFINED__
#define __IHTMLFramesCollection2_FWD_DEFINED__
typedef interface IHTMLFramesCollection2 IHTMLFramesCollection2;
#endif 	/* __IHTMLFramesCollection2_FWD_DEFINED__ */


#ifndef __IHTMLWindow2_FWD_DEFINED__
#define __IHTMLWindow2_FWD_DEFINED__
typedef interface IHTMLWindow2 IHTMLWindow2;
#endif 	/* __IHTMLWindow2_FWD_DEFINED__ */


#ifndef __IHTMLWindow3_FWD_DEFINED__
#define __IHTMLWindow3_FWD_DEFINED__
typedef interface IHTMLWindow3 IHTMLWindow3;
#endif 	/* __IHTMLWindow3_FWD_DEFINED__ */


#ifndef __IHTMLFrameBase_FWD_DEFINED__
#define __IHTMLFrameBase_FWD_DEFINED__
typedef interface IHTMLFrameBase IHTMLFrameBase;
#endif 	/* __IHTMLFrameBase_FWD_DEFINED__ */


#ifndef __IHTMLScreen_FWD_DEFINED__
#define __IHTMLScreen_FWD_DEFINED__
typedef interface IHTMLScreen IHTMLScreen;
#endif 	/* __IHTMLScreen_FWD_DEFINED__ */


#ifndef __IHTMLScreen2_FWD_DEFINED__
#define __IHTMLScreen2_FWD_DEFINED__
typedef interface IHTMLScreen2 IHTMLScreen2;
#endif 	/* __IHTMLScreen2_FWD_DEFINED__ */


#ifndef __IHTMLWindow4_FWD_DEFINED__
#define __IHTMLWindow4_FWD_DEFINED__
typedef interface IHTMLWindow4 IHTMLWindow4;
#endif 	/* __IHTMLWindow4_FWD_DEFINED__ */


#ifndef __IHTMLWindow5_FWD_DEFINED__
#define __IHTMLWindow5_FWD_DEFINED__
typedef interface IHTMLWindow5 IHTMLWindow5;
#endif 	/* __IHTMLWindow5_FWD_DEFINED__ */


#ifndef __FramesCollection_FWD_DEFINED__
#define __FramesCollection_FWD_DEFINED__

#ifdef __cplusplus
typedef class FramesCollection FramesCollection;
#else
typedef struct FramesCollection FramesCollection;
#endif /* __cplusplus */

#endif 	/* __FramesCollection_FWD_DEFINED__ */


#ifndef __DispHTMLScreen_FWD_DEFINED__
#define __DispHTMLScreen_FWD_DEFINED__
typedef interface DispHTMLScreen DispHTMLScreen;
#endif 	/* __DispHTMLScreen_FWD_DEFINED__ */


#ifndef __HTMLScreen_FWD_DEFINED__
#define __HTMLScreen_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLScreen HTMLScreen;
#else
typedef struct HTMLScreen HTMLScreen;
#endif /* __cplusplus */

#endif 	/* __HTMLScreen_FWD_DEFINED__ */


#ifndef __DispHTMLWindow2_FWD_DEFINED__
#define __DispHTMLWindow2_FWD_DEFINED__
typedef interface DispHTMLWindow2 DispHTMLWindow2;
#endif 	/* __DispHTMLWindow2_FWD_DEFINED__ */


#ifndef __HTMLWindow2_FWD_DEFINED__
#define __HTMLWindow2_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLWindow2 HTMLWindow2;
#else
typedef struct HTMLWindow2 HTMLWindow2;
#endif /* __cplusplus */

#endif 	/* __HTMLWindow2_FWD_DEFINED__ */


#ifndef __DispHTMLWindowProxy_FWD_DEFINED__
#define __DispHTMLWindowProxy_FWD_DEFINED__
typedef interface DispHTMLWindowProxy DispHTMLWindowProxy;
#endif 	/* __DispHTMLWindowProxy_FWD_DEFINED__ */


#ifndef __HTMLWindowProxy_FWD_DEFINED__
#define __HTMLWindowProxy_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLWindowProxy HTMLWindowProxy;
#else
typedef struct HTMLWindowProxy HTMLWindowProxy;
#endif /* __cplusplus */

#endif 	/* __HTMLWindowProxy_FWD_DEFINED__ */


#ifndef __HTMLDocumentEvents2_FWD_DEFINED__
#define __HTMLDocumentEvents2_FWD_DEFINED__
typedef interface HTMLDocumentEvents2 HTMLDocumentEvents2;
#endif 	/* __HTMLDocumentEvents2_FWD_DEFINED__ */


#ifndef __HTMLDocumentEvents_FWD_DEFINED__
#define __HTMLDocumentEvents_FWD_DEFINED__
typedef interface HTMLDocumentEvents HTMLDocumentEvents;
#endif 	/* __HTMLDocumentEvents_FWD_DEFINED__ */


#ifndef __IHTMLDocument3_FWD_DEFINED__
#define __IHTMLDocument3_FWD_DEFINED__
typedef interface IHTMLDocument3 IHTMLDocument3;
#endif 	/* __IHTMLDocument3_FWD_DEFINED__ */


#ifndef __IHTMLDocument4_FWD_DEFINED__
#define __IHTMLDocument4_FWD_DEFINED__
typedef interface IHTMLDocument4 IHTMLDocument4;
#endif 	/* __IHTMLDocument4_FWD_DEFINED__ */


#ifndef __IHTMLDocument5_FWD_DEFINED__
#define __IHTMLDocument5_FWD_DEFINED__
typedef interface IHTMLDocument5 IHTMLDocument5;
#endif 	/* __IHTMLDocument5_FWD_DEFINED__ */


#ifndef __DispHTMLDocument_FWD_DEFINED__
#define __DispHTMLDocument_FWD_DEFINED__
typedef interface DispHTMLDocument DispHTMLDocument;
#endif 	/* __DispHTMLDocument_FWD_DEFINED__ */


#ifndef __HTMLDocument_FWD_DEFINED__
#define __HTMLDocument_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLDocument HTMLDocument;
#else
typedef struct HTMLDocument HTMLDocument;
#endif /* __cplusplus */

#endif 	/* __HTMLDocument_FWD_DEFINED__ */


#ifndef __DWebBridgeEvents_FWD_DEFINED__
#define __DWebBridgeEvents_FWD_DEFINED__
typedef interface DWebBridgeEvents DWebBridgeEvents;
#endif 	/* __DWebBridgeEvents_FWD_DEFINED__ */


#ifndef __IWebBridge_FWD_DEFINED__
#define __IWebBridge_FWD_DEFINED__
typedef interface IWebBridge IWebBridge;
#endif 	/* __IWebBridge_FWD_DEFINED__ */


#ifndef __IWBScriptControl_FWD_DEFINED__
#define __IWBScriptControl_FWD_DEFINED__
typedef interface IWBScriptControl IWBScriptControl;
#endif 	/* __IWBScriptControl_FWD_DEFINED__ */


#ifndef __Scriptlet_FWD_DEFINED__
#define __Scriptlet_FWD_DEFINED__

#ifdef __cplusplus
typedef class Scriptlet Scriptlet;
#else
typedef struct Scriptlet Scriptlet;
#endif /* __cplusplus */

#endif 	/* __Scriptlet_FWD_DEFINED__ */


#ifndef __IHTMLEmbedElement_FWD_DEFINED__
#define __IHTMLEmbedElement_FWD_DEFINED__
typedef interface IHTMLEmbedElement IHTMLEmbedElement;
#endif 	/* __IHTMLEmbedElement_FWD_DEFINED__ */


#ifndef __DispHTMLEmbed_FWD_DEFINED__
#define __DispHTMLEmbed_FWD_DEFINED__
typedef interface DispHTMLEmbed DispHTMLEmbed;
#endif 	/* __DispHTMLEmbed_FWD_DEFINED__ */


#ifndef __HTMLEmbed_FWD_DEFINED__
#define __HTMLEmbed_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLEmbed HTMLEmbed;
#else
typedef struct HTMLEmbed HTMLEmbed;
#endif /* __cplusplus */

#endif 	/* __HTMLEmbed_FWD_DEFINED__ */


#ifndef __HTMLMapEvents2_FWD_DEFINED__
#define __HTMLMapEvents2_FWD_DEFINED__
typedef interface HTMLMapEvents2 HTMLMapEvents2;
#endif 	/* __HTMLMapEvents2_FWD_DEFINED__ */


#ifndef __HTMLMapEvents_FWD_DEFINED__
#define __HTMLMapEvents_FWD_DEFINED__
typedef interface HTMLMapEvents HTMLMapEvents;
#endif 	/* __HTMLMapEvents_FWD_DEFINED__ */


#ifndef __IHTMLAreasCollection_FWD_DEFINED__
#define __IHTMLAreasCollection_FWD_DEFINED__
typedef interface IHTMLAreasCollection IHTMLAreasCollection;
#endif 	/* __IHTMLAreasCollection_FWD_DEFINED__ */


#ifndef __IHTMLAreasCollection2_FWD_DEFINED__
#define __IHTMLAreasCollection2_FWD_DEFINED__
typedef interface IHTMLAreasCollection2 IHTMLAreasCollection2;
#endif 	/* __IHTMLAreasCollection2_FWD_DEFINED__ */


#ifndef __IHTMLAreasCollection3_FWD_DEFINED__
#define __IHTMLAreasCollection3_FWD_DEFINED__
typedef interface IHTMLAreasCollection3 IHTMLAreasCollection3;
#endif 	/* __IHTMLAreasCollection3_FWD_DEFINED__ */


#ifndef __IHTMLMapElement_FWD_DEFINED__
#define __IHTMLMapElement_FWD_DEFINED__
typedef interface IHTMLMapElement IHTMLMapElement;
#endif 	/* __IHTMLMapElement_FWD_DEFINED__ */


#ifndef __DispHTMLAreasCollection_FWD_DEFINED__
#define __DispHTMLAreasCollection_FWD_DEFINED__
typedef interface DispHTMLAreasCollection DispHTMLAreasCollection;
#endif 	/* __DispHTMLAreasCollection_FWD_DEFINED__ */


#ifndef __HTMLAreasCollection_FWD_DEFINED__
#define __HTMLAreasCollection_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLAreasCollection HTMLAreasCollection;
#else
typedef struct HTMLAreasCollection HTMLAreasCollection;
#endif /* __cplusplus */

#endif 	/* __HTMLAreasCollection_FWD_DEFINED__ */


#ifndef __DispHTMLMapElement_FWD_DEFINED__
#define __DispHTMLMapElement_FWD_DEFINED__
typedef interface DispHTMLMapElement DispHTMLMapElement;
#endif 	/* __DispHTMLMapElement_FWD_DEFINED__ */


#ifndef __HTMLMapElement_FWD_DEFINED__
#define __HTMLMapElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLMapElement HTMLMapElement;
#else
typedef struct HTMLMapElement HTMLMapElement;
#endif /* __cplusplus */

#endif 	/* __HTMLMapElement_FWD_DEFINED__ */


#ifndef __HTMLAreaEvents2_FWD_DEFINED__
#define __HTMLAreaEvents2_FWD_DEFINED__
typedef interface HTMLAreaEvents2 HTMLAreaEvents2;
#endif 	/* __HTMLAreaEvents2_FWD_DEFINED__ */


#ifndef __HTMLAreaEvents_FWD_DEFINED__
#define __HTMLAreaEvents_FWD_DEFINED__
typedef interface HTMLAreaEvents HTMLAreaEvents;
#endif 	/* __HTMLAreaEvents_FWD_DEFINED__ */


#ifndef __IHTMLAreaElement_FWD_DEFINED__
#define __IHTMLAreaElement_FWD_DEFINED__
typedef interface IHTMLAreaElement IHTMLAreaElement;
#endif 	/* __IHTMLAreaElement_FWD_DEFINED__ */


#ifndef __DispHTMLAreaElement_FWD_DEFINED__
#define __DispHTMLAreaElement_FWD_DEFINED__
typedef interface DispHTMLAreaElement DispHTMLAreaElement;
#endif 	/* __DispHTMLAreaElement_FWD_DEFINED__ */


#ifndef __HTMLAreaElement_FWD_DEFINED__
#define __HTMLAreaElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLAreaElement HTMLAreaElement;
#else
typedef struct HTMLAreaElement HTMLAreaElement;
#endif /* __cplusplus */

#endif 	/* __HTMLAreaElement_FWD_DEFINED__ */


#ifndef __IHTMLTableCaption_FWD_DEFINED__
#define __IHTMLTableCaption_FWD_DEFINED__
typedef interface IHTMLTableCaption IHTMLTableCaption;
#endif 	/* __IHTMLTableCaption_FWD_DEFINED__ */


#ifndef __DispHTMLTableCaption_FWD_DEFINED__
#define __DispHTMLTableCaption_FWD_DEFINED__
typedef interface DispHTMLTableCaption DispHTMLTableCaption;
#endif 	/* __DispHTMLTableCaption_FWD_DEFINED__ */


#ifndef __HTMLTableCaption_FWD_DEFINED__
#define __HTMLTableCaption_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLTableCaption HTMLTableCaption;
#else
typedef struct HTMLTableCaption HTMLTableCaption;
#endif /* __cplusplus */

#endif 	/* __HTMLTableCaption_FWD_DEFINED__ */


#ifndef __IHTMLCommentElement_FWD_DEFINED__
#define __IHTMLCommentElement_FWD_DEFINED__
typedef interface IHTMLCommentElement IHTMLCommentElement;
#endif 	/* __IHTMLCommentElement_FWD_DEFINED__ */


#ifndef __IHTMLCommentElement2_FWD_DEFINED__
#define __IHTMLCommentElement2_FWD_DEFINED__
typedef interface IHTMLCommentElement2 IHTMLCommentElement2;
#endif 	/* __IHTMLCommentElement2_FWD_DEFINED__ */


#ifndef __DispHTMLCommentElement_FWD_DEFINED__
#define __DispHTMLCommentElement_FWD_DEFINED__
typedef interface DispHTMLCommentElement DispHTMLCommentElement;
#endif 	/* __DispHTMLCommentElement_FWD_DEFINED__ */


#ifndef __HTMLCommentElement_FWD_DEFINED__
#define __HTMLCommentElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLCommentElement HTMLCommentElement;
#else
typedef struct HTMLCommentElement HTMLCommentElement;
#endif /* __cplusplus */

#endif 	/* __HTMLCommentElement_FWD_DEFINED__ */


#ifndef __IHTMLPhraseElement_FWD_DEFINED__
#define __IHTMLPhraseElement_FWD_DEFINED__
typedef interface IHTMLPhraseElement IHTMLPhraseElement;
#endif 	/* __IHTMLPhraseElement_FWD_DEFINED__ */


#ifndef __IHTMLPhraseElement2_FWD_DEFINED__
#define __IHTMLPhraseElement2_FWD_DEFINED__
typedef interface IHTMLPhraseElement2 IHTMLPhraseElement2;
#endif 	/* __IHTMLPhraseElement2_FWD_DEFINED__ */


#ifndef __IHTMLSpanElement_FWD_DEFINED__
#define __IHTMLSpanElement_FWD_DEFINED__
typedef interface IHTMLSpanElement IHTMLSpanElement;
#endif 	/* __IHTMLSpanElement_FWD_DEFINED__ */


#ifndef __DispHTMLPhraseElement_FWD_DEFINED__
#define __DispHTMLPhraseElement_FWD_DEFINED__
typedef interface DispHTMLPhraseElement DispHTMLPhraseElement;
#endif 	/* __DispHTMLPhraseElement_FWD_DEFINED__ */


#ifndef __HTMLPhraseElement_FWD_DEFINED__
#define __HTMLPhraseElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLPhraseElement HTMLPhraseElement;
#else
typedef struct HTMLPhraseElement HTMLPhraseElement;
#endif /* __cplusplus */

#endif 	/* __HTMLPhraseElement_FWD_DEFINED__ */


#ifndef __DispHTMLSpanElement_FWD_DEFINED__
#define __DispHTMLSpanElement_FWD_DEFINED__
typedef interface DispHTMLSpanElement DispHTMLSpanElement;
#endif 	/* __DispHTMLSpanElement_FWD_DEFINED__ */


#ifndef __HTMLSpanElement_FWD_DEFINED__
#define __HTMLSpanElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLSpanElement HTMLSpanElement;
#else
typedef struct HTMLSpanElement HTMLSpanElement;
#endif /* __cplusplus */

#endif 	/* __HTMLSpanElement_FWD_DEFINED__ */


#ifndef __HTMLTableEvents2_FWD_DEFINED__
#define __HTMLTableEvents2_FWD_DEFINED__
typedef interface HTMLTableEvents2 HTMLTableEvents2;
#endif 	/* __HTMLTableEvents2_FWD_DEFINED__ */


#ifndef __HTMLTableEvents_FWD_DEFINED__
#define __HTMLTableEvents_FWD_DEFINED__
typedef interface HTMLTableEvents HTMLTableEvents;
#endif 	/* __HTMLTableEvents_FWD_DEFINED__ */


#ifndef __IHTMLTableSection_FWD_DEFINED__
#define __IHTMLTableSection_FWD_DEFINED__
typedef interface IHTMLTableSection IHTMLTableSection;
#endif 	/* __IHTMLTableSection_FWD_DEFINED__ */


#ifndef __IHTMLTable_FWD_DEFINED__
#define __IHTMLTable_FWD_DEFINED__
typedef interface IHTMLTable IHTMLTable;
#endif 	/* __IHTMLTable_FWD_DEFINED__ */


#ifndef __IHTMLTable2_FWD_DEFINED__
#define __IHTMLTable2_FWD_DEFINED__
typedef interface IHTMLTable2 IHTMLTable2;
#endif 	/* __IHTMLTable2_FWD_DEFINED__ */


#ifndef __IHTMLTable3_FWD_DEFINED__
#define __IHTMLTable3_FWD_DEFINED__
typedef interface IHTMLTable3 IHTMLTable3;
#endif 	/* __IHTMLTable3_FWD_DEFINED__ */


#ifndef __IHTMLTableCol_FWD_DEFINED__
#define __IHTMLTableCol_FWD_DEFINED__
typedef interface IHTMLTableCol IHTMLTableCol;
#endif 	/* __IHTMLTableCol_FWD_DEFINED__ */


#ifndef __IHTMLTableCol2_FWD_DEFINED__
#define __IHTMLTableCol2_FWD_DEFINED__
typedef interface IHTMLTableCol2 IHTMLTableCol2;
#endif 	/* __IHTMLTableCol2_FWD_DEFINED__ */


#ifndef __IHTMLTableSection2_FWD_DEFINED__
#define __IHTMLTableSection2_FWD_DEFINED__
typedef interface IHTMLTableSection2 IHTMLTableSection2;
#endif 	/* __IHTMLTableSection2_FWD_DEFINED__ */


#ifndef __IHTMLTableSection3_FWD_DEFINED__
#define __IHTMLTableSection3_FWD_DEFINED__
typedef interface IHTMLTableSection3 IHTMLTableSection3;
#endif 	/* __IHTMLTableSection3_FWD_DEFINED__ */


#ifndef __IHTMLTableRow_FWD_DEFINED__
#define __IHTMLTableRow_FWD_DEFINED__
typedef interface IHTMLTableRow IHTMLTableRow;
#endif 	/* __IHTMLTableRow_FWD_DEFINED__ */


#ifndef __IHTMLTableRow2_FWD_DEFINED__
#define __IHTMLTableRow2_FWD_DEFINED__
typedef interface IHTMLTableRow2 IHTMLTableRow2;
#endif 	/* __IHTMLTableRow2_FWD_DEFINED__ */


#ifndef __IHTMLTableRow3_FWD_DEFINED__
#define __IHTMLTableRow3_FWD_DEFINED__
typedef interface IHTMLTableRow3 IHTMLTableRow3;
#endif 	/* __IHTMLTableRow3_FWD_DEFINED__ */


#ifndef __IHTMLTableRowMetrics_FWD_DEFINED__
#define __IHTMLTableRowMetrics_FWD_DEFINED__
typedef interface IHTMLTableRowMetrics IHTMLTableRowMetrics;
#endif 	/* __IHTMLTableRowMetrics_FWD_DEFINED__ */


#ifndef __IHTMLTableCell_FWD_DEFINED__
#define __IHTMLTableCell_FWD_DEFINED__
typedef interface IHTMLTableCell IHTMLTableCell;
#endif 	/* __IHTMLTableCell_FWD_DEFINED__ */


#ifndef __IHTMLTableCell2_FWD_DEFINED__
#define __IHTMLTableCell2_FWD_DEFINED__
typedef interface IHTMLTableCell2 IHTMLTableCell2;
#endif 	/* __IHTMLTableCell2_FWD_DEFINED__ */


#ifndef __DispHTMLTable_FWD_DEFINED__
#define __DispHTMLTable_FWD_DEFINED__
typedef interface DispHTMLTable DispHTMLTable;
#endif 	/* __DispHTMLTable_FWD_DEFINED__ */


#ifndef __HTMLTable_FWD_DEFINED__
#define __HTMLTable_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLTable HTMLTable;
#else
typedef struct HTMLTable HTMLTable;
#endif /* __cplusplus */

#endif 	/* __HTMLTable_FWD_DEFINED__ */


#ifndef __DispHTMLTableCol_FWD_DEFINED__
#define __DispHTMLTableCol_FWD_DEFINED__
typedef interface DispHTMLTableCol DispHTMLTableCol;
#endif 	/* __DispHTMLTableCol_FWD_DEFINED__ */


#ifndef __HTMLTableCol_FWD_DEFINED__
#define __HTMLTableCol_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLTableCol HTMLTableCol;
#else
typedef struct HTMLTableCol HTMLTableCol;
#endif /* __cplusplus */

#endif 	/* __HTMLTableCol_FWD_DEFINED__ */


#ifndef __DispHTMLTableSection_FWD_DEFINED__
#define __DispHTMLTableSection_FWD_DEFINED__
typedef interface DispHTMLTableSection DispHTMLTableSection;
#endif 	/* __DispHTMLTableSection_FWD_DEFINED__ */


#ifndef __HTMLTableSection_FWD_DEFINED__
#define __HTMLTableSection_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLTableSection HTMLTableSection;
#else
typedef struct HTMLTableSection HTMLTableSection;
#endif /* __cplusplus */

#endif 	/* __HTMLTableSection_FWD_DEFINED__ */


#ifndef __DispHTMLTableRow_FWD_DEFINED__
#define __DispHTMLTableRow_FWD_DEFINED__
typedef interface DispHTMLTableRow DispHTMLTableRow;
#endif 	/* __DispHTMLTableRow_FWD_DEFINED__ */


#ifndef __HTMLTableRow_FWD_DEFINED__
#define __HTMLTableRow_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLTableRow HTMLTableRow;
#else
typedef struct HTMLTableRow HTMLTableRow;
#endif /* __cplusplus */

#endif 	/* __HTMLTableRow_FWD_DEFINED__ */


#ifndef __DispHTMLTableCell_FWD_DEFINED__
#define __DispHTMLTableCell_FWD_DEFINED__
typedef interface DispHTMLTableCell DispHTMLTableCell;
#endif 	/* __DispHTMLTableCell_FWD_DEFINED__ */


#ifndef __HTMLTableCell_FWD_DEFINED__
#define __HTMLTableCell_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLTableCell HTMLTableCell;
#else
typedef struct HTMLTableCell HTMLTableCell;
#endif /* __cplusplus */

#endif 	/* __HTMLTableCell_FWD_DEFINED__ */


#ifndef __HTMLScriptEvents2_FWD_DEFINED__
#define __HTMLScriptEvents2_FWD_DEFINED__
typedef interface HTMLScriptEvents2 HTMLScriptEvents2;
#endif 	/* __HTMLScriptEvents2_FWD_DEFINED__ */


#ifndef __HTMLScriptEvents_FWD_DEFINED__
#define __HTMLScriptEvents_FWD_DEFINED__
typedef interface HTMLScriptEvents HTMLScriptEvents;
#endif 	/* __HTMLScriptEvents_FWD_DEFINED__ */


#ifndef __IHTMLScriptElement_FWD_DEFINED__
#define __IHTMLScriptElement_FWD_DEFINED__
typedef interface IHTMLScriptElement IHTMLScriptElement;
#endif 	/* __IHTMLScriptElement_FWD_DEFINED__ */


#ifndef __IHTMLScriptElement2_FWD_DEFINED__
#define __IHTMLScriptElement2_FWD_DEFINED__
typedef interface IHTMLScriptElement2 IHTMLScriptElement2;
#endif 	/* __IHTMLScriptElement2_FWD_DEFINED__ */


#ifndef __DispHTMLScriptElement_FWD_DEFINED__
#define __DispHTMLScriptElement_FWD_DEFINED__
typedef interface DispHTMLScriptElement DispHTMLScriptElement;
#endif 	/* __DispHTMLScriptElement_FWD_DEFINED__ */


#ifndef __HTMLScriptElement_FWD_DEFINED__
#define __HTMLScriptElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLScriptElement HTMLScriptElement;
#else
typedef struct HTMLScriptElement HTMLScriptElement;
#endif /* __cplusplus */

#endif 	/* __HTMLScriptElement_FWD_DEFINED__ */


#ifndef __IHTMLNoShowElement_FWD_DEFINED__
#define __IHTMLNoShowElement_FWD_DEFINED__
typedef interface IHTMLNoShowElement IHTMLNoShowElement;
#endif 	/* __IHTMLNoShowElement_FWD_DEFINED__ */


#ifndef __DispHTMLNoShowElement_FWD_DEFINED__
#define __DispHTMLNoShowElement_FWD_DEFINED__
typedef interface DispHTMLNoShowElement DispHTMLNoShowElement;
#endif 	/* __DispHTMLNoShowElement_FWD_DEFINED__ */


#ifndef __HTMLNoShowElement_FWD_DEFINED__
#define __HTMLNoShowElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLNoShowElement HTMLNoShowElement;
#else
typedef struct HTMLNoShowElement HTMLNoShowElement;
#endif /* __cplusplus */

#endif 	/* __HTMLNoShowElement_FWD_DEFINED__ */


#ifndef __HTMLObjectElementEvents2_FWD_DEFINED__
#define __HTMLObjectElementEvents2_FWD_DEFINED__
typedef interface HTMLObjectElementEvents2 HTMLObjectElementEvents2;
#endif 	/* __HTMLObjectElementEvents2_FWD_DEFINED__ */


#ifndef __HTMLObjectElementEvents_FWD_DEFINED__
#define __HTMLObjectElementEvents_FWD_DEFINED__
typedef interface HTMLObjectElementEvents HTMLObjectElementEvents;
#endif 	/* __HTMLObjectElementEvents_FWD_DEFINED__ */


#ifndef __IHTMLObjectElement_FWD_DEFINED__
#define __IHTMLObjectElement_FWD_DEFINED__
typedef interface IHTMLObjectElement IHTMLObjectElement;
#endif 	/* __IHTMLObjectElement_FWD_DEFINED__ */


#ifndef __IHTMLObjectElement2_FWD_DEFINED__
#define __IHTMLObjectElement2_FWD_DEFINED__
typedef interface IHTMLObjectElement2 IHTMLObjectElement2;
#endif 	/* __IHTMLObjectElement2_FWD_DEFINED__ */


#ifndef __IHTMLObjectElement3_FWD_DEFINED__
#define __IHTMLObjectElement3_FWD_DEFINED__
typedef interface IHTMLObjectElement3 IHTMLObjectElement3;
#endif 	/* __IHTMLObjectElement3_FWD_DEFINED__ */


#ifndef __IHTMLParamElement_FWD_DEFINED__
#define __IHTMLParamElement_FWD_DEFINED__
typedef interface IHTMLParamElement IHTMLParamElement;
#endif 	/* __IHTMLParamElement_FWD_DEFINED__ */


#ifndef __DispHTMLObjectElement_FWD_DEFINED__
#define __DispHTMLObjectElement_FWD_DEFINED__
typedef interface DispHTMLObjectElement DispHTMLObjectElement;
#endif 	/* __DispHTMLObjectElement_FWD_DEFINED__ */


#ifndef __HTMLObjectElement_FWD_DEFINED__
#define __HTMLObjectElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLObjectElement HTMLObjectElement;
#else
typedef struct HTMLObjectElement HTMLObjectElement;
#endif /* __cplusplus */

#endif 	/* __HTMLObjectElement_FWD_DEFINED__ */


#ifndef __DispHTMLParamElement_FWD_DEFINED__
#define __DispHTMLParamElement_FWD_DEFINED__
typedef interface DispHTMLParamElement DispHTMLParamElement;
#endif 	/* __DispHTMLParamElement_FWD_DEFINED__ */


#ifndef __HTMLParamElement_FWD_DEFINED__
#define __HTMLParamElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLParamElement HTMLParamElement;
#else
typedef struct HTMLParamElement HTMLParamElement;
#endif /* __cplusplus */

#endif 	/* __HTMLParamElement_FWD_DEFINED__ */


#ifndef __HTMLFrameSiteEvents2_FWD_DEFINED__
#define __HTMLFrameSiteEvents2_FWD_DEFINED__
typedef interface HTMLFrameSiteEvents2 HTMLFrameSiteEvents2;
#endif 	/* __HTMLFrameSiteEvents2_FWD_DEFINED__ */


#ifndef __HTMLFrameSiteEvents_FWD_DEFINED__
#define __HTMLFrameSiteEvents_FWD_DEFINED__
typedef interface HTMLFrameSiteEvents HTMLFrameSiteEvents;
#endif 	/* __HTMLFrameSiteEvents_FWD_DEFINED__ */


#ifndef __IHTMLFrameBase2_FWD_DEFINED__
#define __IHTMLFrameBase2_FWD_DEFINED__
typedef interface IHTMLFrameBase2 IHTMLFrameBase2;
#endif 	/* __IHTMLFrameBase2_FWD_DEFINED__ */


#ifndef __IHTMLFrameBase3_FWD_DEFINED__
#define __IHTMLFrameBase3_FWD_DEFINED__
typedef interface IHTMLFrameBase3 IHTMLFrameBase3;
#endif 	/* __IHTMLFrameBase3_FWD_DEFINED__ */


#ifndef __DispHTMLFrameBase_FWD_DEFINED__
#define __DispHTMLFrameBase_FWD_DEFINED__
typedef interface DispHTMLFrameBase DispHTMLFrameBase;
#endif 	/* __DispHTMLFrameBase_FWD_DEFINED__ */


#ifndef __HTMLFrameBase_FWD_DEFINED__
#define __HTMLFrameBase_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLFrameBase HTMLFrameBase;
#else
typedef struct HTMLFrameBase HTMLFrameBase;
#endif /* __cplusplus */

#endif 	/* __HTMLFrameBase_FWD_DEFINED__ */


#ifndef __IHTMLFrameElement_FWD_DEFINED__
#define __IHTMLFrameElement_FWD_DEFINED__
typedef interface IHTMLFrameElement IHTMLFrameElement;
#endif 	/* __IHTMLFrameElement_FWD_DEFINED__ */


#ifndef __IHTMLFrameElement2_FWD_DEFINED__
#define __IHTMLFrameElement2_FWD_DEFINED__
typedef interface IHTMLFrameElement2 IHTMLFrameElement2;
#endif 	/* __IHTMLFrameElement2_FWD_DEFINED__ */


#ifndef __DispHTMLFrameElement_FWD_DEFINED__
#define __DispHTMLFrameElement_FWD_DEFINED__
typedef interface DispHTMLFrameElement DispHTMLFrameElement;
#endif 	/* __DispHTMLFrameElement_FWD_DEFINED__ */


#ifndef __HTMLFrameElement_FWD_DEFINED__
#define __HTMLFrameElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLFrameElement HTMLFrameElement;
#else
typedef struct HTMLFrameElement HTMLFrameElement;
#endif /* __cplusplus */

#endif 	/* __HTMLFrameElement_FWD_DEFINED__ */


#ifndef __IHTMLIFrameElement_FWD_DEFINED__
#define __IHTMLIFrameElement_FWD_DEFINED__
typedef interface IHTMLIFrameElement IHTMLIFrameElement;
#endif 	/* __IHTMLIFrameElement_FWD_DEFINED__ */


#ifndef __IHTMLIFrameElement2_FWD_DEFINED__
#define __IHTMLIFrameElement2_FWD_DEFINED__
typedef interface IHTMLIFrameElement2 IHTMLIFrameElement2;
#endif 	/* __IHTMLIFrameElement2_FWD_DEFINED__ */


#ifndef __DispHTMLIFrame_FWD_DEFINED__
#define __DispHTMLIFrame_FWD_DEFINED__
typedef interface DispHTMLIFrame DispHTMLIFrame;
#endif 	/* __DispHTMLIFrame_FWD_DEFINED__ */


#ifndef __HTMLIFrame_FWD_DEFINED__
#define __HTMLIFrame_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLIFrame HTMLIFrame;
#else
typedef struct HTMLIFrame HTMLIFrame;
#endif /* __cplusplus */

#endif 	/* __HTMLIFrame_FWD_DEFINED__ */


#ifndef __IHTMLDivPosition_FWD_DEFINED__
#define __IHTMLDivPosition_FWD_DEFINED__
typedef interface IHTMLDivPosition IHTMLDivPosition;
#endif 	/* __IHTMLDivPosition_FWD_DEFINED__ */


#ifndef __IHTMLFieldSetElement_FWD_DEFINED__
#define __IHTMLFieldSetElement_FWD_DEFINED__
typedef interface IHTMLFieldSetElement IHTMLFieldSetElement;
#endif 	/* __IHTMLFieldSetElement_FWD_DEFINED__ */


#ifndef __IHTMLFieldSetElement2_FWD_DEFINED__
#define __IHTMLFieldSetElement2_FWD_DEFINED__
typedef interface IHTMLFieldSetElement2 IHTMLFieldSetElement2;
#endif 	/* __IHTMLFieldSetElement2_FWD_DEFINED__ */


#ifndef __IHTMLLegendElement_FWD_DEFINED__
#define __IHTMLLegendElement_FWD_DEFINED__
typedef interface IHTMLLegendElement IHTMLLegendElement;
#endif 	/* __IHTMLLegendElement_FWD_DEFINED__ */


#ifndef __IHTMLLegendElement2_FWD_DEFINED__
#define __IHTMLLegendElement2_FWD_DEFINED__
typedef interface IHTMLLegendElement2 IHTMLLegendElement2;
#endif 	/* __IHTMLLegendElement2_FWD_DEFINED__ */


#ifndef __DispHTMLDivPosition_FWD_DEFINED__
#define __DispHTMLDivPosition_FWD_DEFINED__
typedef interface DispHTMLDivPosition DispHTMLDivPosition;
#endif 	/* __DispHTMLDivPosition_FWD_DEFINED__ */


#ifndef __HTMLDivPosition_FWD_DEFINED__
#define __HTMLDivPosition_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLDivPosition HTMLDivPosition;
#else
typedef struct HTMLDivPosition HTMLDivPosition;
#endif /* __cplusplus */

#endif 	/* __HTMLDivPosition_FWD_DEFINED__ */


#ifndef __DispHTMLFieldSetElement_FWD_DEFINED__
#define __DispHTMLFieldSetElement_FWD_DEFINED__
typedef interface DispHTMLFieldSetElement DispHTMLFieldSetElement;
#endif 	/* __DispHTMLFieldSetElement_FWD_DEFINED__ */


#ifndef __HTMLFieldSetElement_FWD_DEFINED__
#define __HTMLFieldSetElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLFieldSetElement HTMLFieldSetElement;
#else
typedef struct HTMLFieldSetElement HTMLFieldSetElement;
#endif /* __cplusplus */

#endif 	/* __HTMLFieldSetElement_FWD_DEFINED__ */


#ifndef __DispHTMLLegendElement_FWD_DEFINED__
#define __DispHTMLLegendElement_FWD_DEFINED__
typedef interface DispHTMLLegendElement DispHTMLLegendElement;
#endif 	/* __DispHTMLLegendElement_FWD_DEFINED__ */


#ifndef __HTMLLegendElement_FWD_DEFINED__
#define __HTMLLegendElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLLegendElement HTMLLegendElement;
#else
typedef struct HTMLLegendElement HTMLLegendElement;
#endif /* __cplusplus */

#endif 	/* __HTMLLegendElement_FWD_DEFINED__ */


#ifndef __IHTMLSpanFlow_FWD_DEFINED__
#define __IHTMLSpanFlow_FWD_DEFINED__
typedef interface IHTMLSpanFlow IHTMLSpanFlow;
#endif 	/* __IHTMLSpanFlow_FWD_DEFINED__ */


#ifndef __DispHTMLSpanFlow_FWD_DEFINED__
#define __DispHTMLSpanFlow_FWD_DEFINED__
typedef interface DispHTMLSpanFlow DispHTMLSpanFlow;
#endif 	/* __DispHTMLSpanFlow_FWD_DEFINED__ */


#ifndef __HTMLSpanFlow_FWD_DEFINED__
#define __HTMLSpanFlow_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLSpanFlow HTMLSpanFlow;
#else
typedef struct HTMLSpanFlow HTMLSpanFlow;
#endif /* __cplusplus */

#endif 	/* __HTMLSpanFlow_FWD_DEFINED__ */


#ifndef __IHTMLFrameSetElement_FWD_DEFINED__
#define __IHTMLFrameSetElement_FWD_DEFINED__
typedef interface IHTMLFrameSetElement IHTMLFrameSetElement;
#endif 	/* __IHTMLFrameSetElement_FWD_DEFINED__ */


#ifndef __IHTMLFrameSetElement2_FWD_DEFINED__
#define __IHTMLFrameSetElement2_FWD_DEFINED__
typedef interface IHTMLFrameSetElement2 IHTMLFrameSetElement2;
#endif 	/* __IHTMLFrameSetElement2_FWD_DEFINED__ */


#ifndef __DispHTMLFrameSetSite_FWD_DEFINED__
#define __DispHTMLFrameSetSite_FWD_DEFINED__
typedef interface DispHTMLFrameSetSite DispHTMLFrameSetSite;
#endif 	/* __DispHTMLFrameSetSite_FWD_DEFINED__ */


#ifndef __HTMLFrameSetSite_FWD_DEFINED__
#define __HTMLFrameSetSite_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLFrameSetSite HTMLFrameSetSite;
#else
typedef struct HTMLFrameSetSite HTMLFrameSetSite;
#endif /* __cplusplus */

#endif 	/* __HTMLFrameSetSite_FWD_DEFINED__ */


#ifndef __IHTMLBGsound_FWD_DEFINED__
#define __IHTMLBGsound_FWD_DEFINED__
typedef interface IHTMLBGsound IHTMLBGsound;
#endif 	/* __IHTMLBGsound_FWD_DEFINED__ */


#ifndef __DispHTMLBGsound_FWD_DEFINED__
#define __DispHTMLBGsound_FWD_DEFINED__
typedef interface DispHTMLBGsound DispHTMLBGsound;
#endif 	/* __DispHTMLBGsound_FWD_DEFINED__ */


#ifndef __HTMLBGsound_FWD_DEFINED__
#define __HTMLBGsound_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLBGsound HTMLBGsound;
#else
typedef struct HTMLBGsound HTMLBGsound;
#endif /* __cplusplus */

#endif 	/* __HTMLBGsound_FWD_DEFINED__ */


#ifndef __IHTMLFontNamesCollection_FWD_DEFINED__
#define __IHTMLFontNamesCollection_FWD_DEFINED__
typedef interface IHTMLFontNamesCollection IHTMLFontNamesCollection;
#endif 	/* __IHTMLFontNamesCollection_FWD_DEFINED__ */


#ifndef __IHTMLFontSizesCollection_FWD_DEFINED__
#define __IHTMLFontSizesCollection_FWD_DEFINED__
typedef interface IHTMLFontSizesCollection IHTMLFontSizesCollection;
#endif 	/* __IHTMLFontSizesCollection_FWD_DEFINED__ */


#ifndef __IHTMLOptionsHolder_FWD_DEFINED__
#define __IHTMLOptionsHolder_FWD_DEFINED__
typedef interface IHTMLOptionsHolder IHTMLOptionsHolder;
#endif 	/* __IHTMLOptionsHolder_FWD_DEFINED__ */


#ifndef __HTMLStyleElementEvents2_FWD_DEFINED__
#define __HTMLStyleElementEvents2_FWD_DEFINED__
typedef interface HTMLStyleElementEvents2 HTMLStyleElementEvents2;
#endif 	/* __HTMLStyleElementEvents2_FWD_DEFINED__ */


#ifndef __HTMLStyleElementEvents_FWD_DEFINED__
#define __HTMLStyleElementEvents_FWD_DEFINED__
typedef interface HTMLStyleElementEvents HTMLStyleElementEvents;
#endif 	/* __HTMLStyleElementEvents_FWD_DEFINED__ */


#ifndef __IHTMLStyleElement_FWD_DEFINED__
#define __IHTMLStyleElement_FWD_DEFINED__
typedef interface IHTMLStyleElement IHTMLStyleElement;
#endif 	/* __IHTMLStyleElement_FWD_DEFINED__ */


#ifndef __DispHTMLStyleElement_FWD_DEFINED__
#define __DispHTMLStyleElement_FWD_DEFINED__
typedef interface DispHTMLStyleElement DispHTMLStyleElement;
#endif 	/* __DispHTMLStyleElement_FWD_DEFINED__ */


#ifndef __HTMLStyleElement_FWD_DEFINED__
#define __HTMLStyleElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLStyleElement HTMLStyleElement;
#else
typedef struct HTMLStyleElement HTMLStyleElement;
#endif /* __cplusplus */

#endif 	/* __HTMLStyleElement_FWD_DEFINED__ */


#ifndef __IHTMLStyleFontFace_FWD_DEFINED__
#define __IHTMLStyleFontFace_FWD_DEFINED__
typedef interface IHTMLStyleFontFace IHTMLStyleFontFace;
#endif 	/* __IHTMLStyleFontFace_FWD_DEFINED__ */


#ifndef __HTMLStyleFontFace_FWD_DEFINED__
#define __HTMLStyleFontFace_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLStyleFontFace HTMLStyleFontFace;
#else
typedef struct HTMLStyleFontFace HTMLStyleFontFace;
#endif /* __cplusplus */

#endif 	/* __HTMLStyleFontFace_FWD_DEFINED__ */


#ifndef __ICSSFilterSite_FWD_DEFINED__
#define __ICSSFilterSite_FWD_DEFINED__
typedef interface ICSSFilterSite ICSSFilterSite;
#endif 	/* __ICSSFilterSite_FWD_DEFINED__ */


#ifndef __IMarkupPointer_FWD_DEFINED__
#define __IMarkupPointer_FWD_DEFINED__
typedef interface IMarkupPointer IMarkupPointer;
#endif 	/* __IMarkupPointer_FWD_DEFINED__ */


#ifndef __IMarkupContainer_FWD_DEFINED__
#define __IMarkupContainer_FWD_DEFINED__
typedef interface IMarkupContainer IMarkupContainer;
#endif 	/* __IMarkupContainer_FWD_DEFINED__ */


#ifndef __IMarkupContainer2_FWD_DEFINED__
#define __IMarkupContainer2_FWD_DEFINED__
typedef interface IMarkupContainer2 IMarkupContainer2;
#endif 	/* __IMarkupContainer2_FWD_DEFINED__ */


#ifndef __IHTMLChangeLog_FWD_DEFINED__
#define __IHTMLChangeLog_FWD_DEFINED__
typedef interface IHTMLChangeLog IHTMLChangeLog;
#endif 	/* __IHTMLChangeLog_FWD_DEFINED__ */


#ifndef __IHTMLChangeSink_FWD_DEFINED__
#define __IHTMLChangeSink_FWD_DEFINED__
typedef interface IHTMLChangeSink IHTMLChangeSink;
#endif 	/* __IHTMLChangeSink_FWD_DEFINED__ */


#ifndef __IActiveIMMApp_FWD_DEFINED__
#define __IActiveIMMApp_FWD_DEFINED__
typedef interface IActiveIMMApp IActiveIMMApp;
#endif 	/* __IActiveIMMApp_FWD_DEFINED__ */


#ifndef __ISegmentList_FWD_DEFINED__
#define __ISegmentList_FWD_DEFINED__
typedef interface ISegmentList ISegmentList;
#endif 	/* __ISegmentList_FWD_DEFINED__ */


#ifndef __ISegmentListIterator_FWD_DEFINED__
#define __ISegmentListIterator_FWD_DEFINED__
typedef interface ISegmentListIterator ISegmentListIterator;
#endif 	/* __ISegmentListIterator_FWD_DEFINED__ */


#ifndef __IHTMLCaret_FWD_DEFINED__
#define __IHTMLCaret_FWD_DEFINED__
typedef interface IHTMLCaret IHTMLCaret;
#endif 	/* __IHTMLCaret_FWD_DEFINED__ */


#ifndef __ISegment_FWD_DEFINED__
#define __ISegment_FWD_DEFINED__
typedef interface ISegment ISegment;
#endif 	/* __ISegment_FWD_DEFINED__ */


#ifndef __IElementSegment_FWD_DEFINED__
#define __IElementSegment_FWD_DEFINED__
typedef interface IElementSegment IElementSegment;
#endif 	/* __IElementSegment_FWD_DEFINED__ */


#ifndef __IHighlightSegment_FWD_DEFINED__
#define __IHighlightSegment_FWD_DEFINED__
typedef interface IHighlightSegment IHighlightSegment;
#endif 	/* __IHighlightSegment_FWD_DEFINED__ */


#ifndef __IHighlightRenderingServices_FWD_DEFINED__
#define __IHighlightRenderingServices_FWD_DEFINED__
typedef interface IHighlightRenderingServices IHighlightRenderingServices;
#endif 	/* __IHighlightRenderingServices_FWD_DEFINED__ */


#ifndef __ILineInfo_FWD_DEFINED__
#define __ILineInfo_FWD_DEFINED__
typedef interface ILineInfo ILineInfo;
#endif 	/* __ILineInfo_FWD_DEFINED__ */


#ifndef __IDisplayPointer_FWD_DEFINED__
#define __IDisplayPointer_FWD_DEFINED__
typedef interface IDisplayPointer IDisplayPointer;
#endif 	/* __IDisplayPointer_FWD_DEFINED__ */


#ifndef __IDisplayServices_FWD_DEFINED__
#define __IDisplayServices_FWD_DEFINED__
typedef interface IDisplayServices IDisplayServices;
#endif 	/* __IDisplayServices_FWD_DEFINED__ */


#ifndef __IHtmlDlgSafeHelper_FWD_DEFINED__
#define __IHtmlDlgSafeHelper_FWD_DEFINED__
typedef interface IHtmlDlgSafeHelper IHtmlDlgSafeHelper;
#endif 	/* __IHtmlDlgSafeHelper_FWD_DEFINED__ */


#ifndef __IBlockFormats_FWD_DEFINED__
#define __IBlockFormats_FWD_DEFINED__
typedef interface IBlockFormats IBlockFormats;
#endif 	/* __IBlockFormats_FWD_DEFINED__ */


#ifndef __IFontNames_FWD_DEFINED__
#define __IFontNames_FWD_DEFINED__
typedef interface IFontNames IFontNames;
#endif 	/* __IFontNames_FWD_DEFINED__ */


#ifndef __ICSSFilter_FWD_DEFINED__
#define __ICSSFilter_FWD_DEFINED__
typedef interface ICSSFilter ICSSFilter;
#endif 	/* __ICSSFilter_FWD_DEFINED__ */


#ifndef __ISecureUrlHost_FWD_DEFINED__
#define __ISecureUrlHost_FWD_DEFINED__
typedef interface ISecureUrlHost ISecureUrlHost;
#endif 	/* __ISecureUrlHost_FWD_DEFINED__ */


#ifndef __IMarkupServices_FWD_DEFINED__
#define __IMarkupServices_FWD_DEFINED__
typedef interface IMarkupServices IMarkupServices;
#endif 	/* __IMarkupServices_FWD_DEFINED__ */


#ifndef __IMarkupServices2_FWD_DEFINED__
#define __IMarkupServices2_FWD_DEFINED__
typedef interface IMarkupServices2 IMarkupServices2;
#endif 	/* __IMarkupServices2_FWD_DEFINED__ */


#ifndef __IHTMLChangePlayback_FWD_DEFINED__
#define __IHTMLChangePlayback_FWD_DEFINED__
typedef interface IHTMLChangePlayback IHTMLChangePlayback;
#endif 	/* __IHTMLChangePlayback_FWD_DEFINED__ */


#ifndef __IMarkupPointer2_FWD_DEFINED__
#define __IMarkupPointer2_FWD_DEFINED__
typedef interface IMarkupPointer2 IMarkupPointer2;
#endif 	/* __IMarkupPointer2_FWD_DEFINED__ */


#ifndef __IMarkupTextFrags_FWD_DEFINED__
#define __IMarkupTextFrags_FWD_DEFINED__
typedef interface IMarkupTextFrags IMarkupTextFrags;
#endif 	/* __IMarkupTextFrags_FWD_DEFINED__ */


#ifndef __IXMLGenericParse_FWD_DEFINED__
#define __IXMLGenericParse_FWD_DEFINED__
typedef interface IXMLGenericParse IXMLGenericParse;
#endif 	/* __IXMLGenericParse_FWD_DEFINED__ */


#ifndef __IHTMLEditHost_FWD_DEFINED__
#define __IHTMLEditHost_FWD_DEFINED__
typedef interface IHTMLEditHost IHTMLEditHost;
#endif 	/* __IHTMLEditHost_FWD_DEFINED__ */


#ifndef __IHTMLEditHost2_FWD_DEFINED__
#define __IHTMLEditHost2_FWD_DEFINED__
typedef interface IHTMLEditHost2 IHTMLEditHost2;
#endif 	/* __IHTMLEditHost2_FWD_DEFINED__ */


#ifndef __ISequenceNumber_FWD_DEFINED__
#define __ISequenceNumber_FWD_DEFINED__
typedef interface ISequenceNumber ISequenceNumber;
#endif 	/* __ISequenceNumber_FWD_DEFINED__ */


#ifndef __IIMEServices_FWD_DEFINED__
#define __IIMEServices_FWD_DEFINED__
typedef interface IIMEServices IIMEServices;
#endif 	/* __IIMEServices_FWD_DEFINED__ */


#ifndef __ISelectionServicesListener_FWD_DEFINED__
#define __ISelectionServicesListener_FWD_DEFINED__
typedef interface ISelectionServicesListener ISelectionServicesListener;
#endif 	/* __ISelectionServicesListener_FWD_DEFINED__ */


#ifndef __ISelectionServices_FWD_DEFINED__
#define __ISelectionServices_FWD_DEFINED__
typedef interface ISelectionServices ISelectionServices;
#endif 	/* __ISelectionServices_FWD_DEFINED__ */


#ifndef __IHTMLEditDesigner_FWD_DEFINED__
#define __IHTMLEditDesigner_FWD_DEFINED__
typedef interface IHTMLEditDesigner IHTMLEditDesigner;
#endif 	/* __IHTMLEditDesigner_FWD_DEFINED__ */


#ifndef __IHTMLEditServices_FWD_DEFINED__
#define __IHTMLEditServices_FWD_DEFINED__
typedef interface IHTMLEditServices IHTMLEditServices;
#endif 	/* __IHTMLEditServices_FWD_DEFINED__ */


#ifndef __IHTMLEditServices2_FWD_DEFINED__
#define __IHTMLEditServices2_FWD_DEFINED__
typedef interface IHTMLEditServices2 IHTMLEditServices2;
#endif 	/* __IHTMLEditServices2_FWD_DEFINED__ */


#ifndef __IHTMLComputedStyle_FWD_DEFINED__
#define __IHTMLComputedStyle_FWD_DEFINED__
typedef interface IHTMLComputedStyle IHTMLComputedStyle;
#endif 	/* __IHTMLComputedStyle_FWD_DEFINED__ */


#ifndef __HtmlDlgSafeHelper_FWD_DEFINED__
#define __HtmlDlgSafeHelper_FWD_DEFINED__

#ifdef __cplusplus
typedef class HtmlDlgSafeHelper HtmlDlgSafeHelper;
#else
typedef struct HtmlDlgSafeHelper HtmlDlgSafeHelper;
#endif /* __cplusplus */

#endif 	/* __HtmlDlgSafeHelper_FWD_DEFINED__ */


#ifndef __BlockFormats_FWD_DEFINED__
#define __BlockFormats_FWD_DEFINED__

#ifdef __cplusplus
typedef class BlockFormats BlockFormats;
#else
typedef struct BlockFormats BlockFormats;
#endif /* __cplusplus */

#endif 	/* __BlockFormats_FWD_DEFINED__ */


#ifndef __FontNames_FWD_DEFINED__
#define __FontNames_FWD_DEFINED__

#ifdef __cplusplus
typedef class FontNames FontNames;
#else
typedef struct FontNames FontNames;
#endif /* __cplusplus */

#endif 	/* __FontNames_FWD_DEFINED__ */


#ifndef __HTMLNamespaceEvents_FWD_DEFINED__
#define __HTMLNamespaceEvents_FWD_DEFINED__
typedef interface HTMLNamespaceEvents HTMLNamespaceEvents;
#endif 	/* __HTMLNamespaceEvents_FWD_DEFINED__ */


#ifndef __IHTMLNamespace_FWD_DEFINED__
#define __IHTMLNamespace_FWD_DEFINED__
typedef interface IHTMLNamespace IHTMLNamespace;
#endif 	/* __IHTMLNamespace_FWD_DEFINED__ */


#ifndef __IHTMLNamespaceCollection_FWD_DEFINED__
#define __IHTMLNamespaceCollection_FWD_DEFINED__
typedef interface IHTMLNamespaceCollection IHTMLNamespaceCollection;
#endif 	/* __IHTMLNamespaceCollection_FWD_DEFINED__ */


#ifndef __HTMLNamespace_FWD_DEFINED__
#define __HTMLNamespace_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLNamespace HTMLNamespace;
#else
typedef struct HTMLNamespace HTMLNamespace;
#endif /* __cplusplus */

#endif 	/* __HTMLNamespace_FWD_DEFINED__ */


#ifndef __HTMLNamespaceCollection_FWD_DEFINED__
#define __HTMLNamespaceCollection_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLNamespaceCollection HTMLNamespaceCollection;
#else
typedef struct HTMLNamespaceCollection HTMLNamespaceCollection;
#endif /* __cplusplus */

#endif 	/* __HTMLNamespaceCollection_FWD_DEFINED__ */


#ifndef __IHTMLPainter_FWD_DEFINED__
#define __IHTMLPainter_FWD_DEFINED__
typedef interface IHTMLPainter IHTMLPainter;
#endif 	/* __IHTMLPainter_FWD_DEFINED__ */


#ifndef __IHTMLPaintSite_FWD_DEFINED__
#define __IHTMLPaintSite_FWD_DEFINED__
typedef interface IHTMLPaintSite IHTMLPaintSite;
#endif 	/* __IHTMLPaintSite_FWD_DEFINED__ */


#ifndef __IHTMLPainterEventInfo_FWD_DEFINED__
#define __IHTMLPainterEventInfo_FWD_DEFINED__
typedef interface IHTMLPainterEventInfo IHTMLPainterEventInfo;
#endif 	/* __IHTMLPainterEventInfo_FWD_DEFINED__ */


#ifndef __IHTMLPainterOverlay_FWD_DEFINED__
#define __IHTMLPainterOverlay_FWD_DEFINED__
typedef interface IHTMLPainterOverlay IHTMLPainterOverlay;
#endif 	/* __IHTMLPainterOverlay_FWD_DEFINED__ */


#ifndef __IHTMLIPrintCollection_FWD_DEFINED__
#define __IHTMLIPrintCollection_FWD_DEFINED__
typedef interface IHTMLIPrintCollection IHTMLIPrintCollection;
#endif 	/* __IHTMLIPrintCollection_FWD_DEFINED__ */


#ifndef __IEnumPrivacyRecords_FWD_DEFINED__
#define __IEnumPrivacyRecords_FWD_DEFINED__
typedef interface IEnumPrivacyRecords IEnumPrivacyRecords;
#endif 	/* __IEnumPrivacyRecords_FWD_DEFINED__ */


#ifndef __IWPCBlockedUrls_FWD_DEFINED__
#define __IWPCBlockedUrls_FWD_DEFINED__
typedef interface IWPCBlockedUrls IWPCBlockedUrls;
#endif 	/* __IWPCBlockedUrls_FWD_DEFINED__ */


#ifndef __IHTMLDialog_FWD_DEFINED__
#define __IHTMLDialog_FWD_DEFINED__
typedef interface IHTMLDialog IHTMLDialog;
#endif 	/* __IHTMLDialog_FWD_DEFINED__ */


#ifndef __IHTMLDialog2_FWD_DEFINED__
#define __IHTMLDialog2_FWD_DEFINED__
typedef interface IHTMLDialog2 IHTMLDialog2;
#endif 	/* __IHTMLDialog2_FWD_DEFINED__ */


#ifndef __IHTMLDialog3_FWD_DEFINED__
#define __IHTMLDialog3_FWD_DEFINED__
typedef interface IHTMLDialog3 IHTMLDialog3;
#endif 	/* __IHTMLDialog3_FWD_DEFINED__ */


#ifndef __IHTMLModelessInit_FWD_DEFINED__
#define __IHTMLModelessInit_FWD_DEFINED__
typedef interface IHTMLModelessInit IHTMLModelessInit;
#endif 	/* __IHTMLModelessInit_FWD_DEFINED__ */


#ifndef __ThreadDialogProcParam_FWD_DEFINED__
#define __ThreadDialogProcParam_FWD_DEFINED__

#ifdef __cplusplus
typedef class ThreadDialogProcParam ThreadDialogProcParam;
#else
typedef struct ThreadDialogProcParam ThreadDialogProcParam;
#endif /* __cplusplus */

#endif 	/* __ThreadDialogProcParam_FWD_DEFINED__ */


#ifndef __HTMLDialog_FWD_DEFINED__
#define __HTMLDialog_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLDialog HTMLDialog;
#else
typedef struct HTMLDialog HTMLDialog;
#endif /* __cplusplus */

#endif 	/* __HTMLDialog_FWD_DEFINED__ */


#ifndef __IHTMLPopup_FWD_DEFINED__
#define __IHTMLPopup_FWD_DEFINED__
typedef interface IHTMLPopup IHTMLPopup;
#endif 	/* __IHTMLPopup_FWD_DEFINED__ */


#ifndef __DispHTMLPopup_FWD_DEFINED__
#define __DispHTMLPopup_FWD_DEFINED__
typedef interface DispHTMLPopup DispHTMLPopup;
#endif 	/* __DispHTMLPopup_FWD_DEFINED__ */


#ifndef __HTMLPopup_FWD_DEFINED__
#define __HTMLPopup_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLPopup HTMLPopup;
#else
typedef struct HTMLPopup HTMLPopup;
#endif /* __cplusplus */

#endif 	/* __HTMLPopup_FWD_DEFINED__ */


#ifndef __IHTMLAppBehavior_FWD_DEFINED__
#define __IHTMLAppBehavior_FWD_DEFINED__
typedef interface IHTMLAppBehavior IHTMLAppBehavior;
#endif 	/* __IHTMLAppBehavior_FWD_DEFINED__ */


#ifndef __IHTMLAppBehavior2_FWD_DEFINED__
#define __IHTMLAppBehavior2_FWD_DEFINED__
typedef interface IHTMLAppBehavior2 IHTMLAppBehavior2;
#endif 	/* __IHTMLAppBehavior2_FWD_DEFINED__ */


#ifndef __IHTMLAppBehavior3_FWD_DEFINED__
#define __IHTMLAppBehavior3_FWD_DEFINED__
typedef interface IHTMLAppBehavior3 IHTMLAppBehavior3;
#endif 	/* __IHTMLAppBehavior3_FWD_DEFINED__ */


#ifndef __DispHTMLAppBehavior_FWD_DEFINED__
#define __DispHTMLAppBehavior_FWD_DEFINED__
typedef interface DispHTMLAppBehavior DispHTMLAppBehavior;
#endif 	/* __DispHTMLAppBehavior_FWD_DEFINED__ */


#ifndef __HTMLAppBehavior_FWD_DEFINED__
#define __HTMLAppBehavior_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLAppBehavior HTMLAppBehavior;
#else
typedef struct HTMLAppBehavior HTMLAppBehavior;
#endif /* __cplusplus */

#endif 	/* __HTMLAppBehavior_FWD_DEFINED__ */


#ifndef __OldHTMLDocument_FWD_DEFINED__
#define __OldHTMLDocument_FWD_DEFINED__

#ifdef __cplusplus
typedef class OldHTMLDocument OldHTMLDocument;
#else
typedef struct OldHTMLDocument OldHTMLDocument;
#endif /* __cplusplus */

#endif 	/* __OldHTMLDocument_FWD_DEFINED__ */


#ifndef __OldHTMLFormElement_FWD_DEFINED__
#define __OldHTMLFormElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class OldHTMLFormElement OldHTMLFormElement;
#else
typedef struct OldHTMLFormElement OldHTMLFormElement;
#endif /* __cplusplus */

#endif 	/* __OldHTMLFormElement_FWD_DEFINED__ */


#ifndef __DispIHTMLInputButtonElement_FWD_DEFINED__
#define __DispIHTMLInputButtonElement_FWD_DEFINED__
typedef interface DispIHTMLInputButtonElement DispIHTMLInputButtonElement;
#endif 	/* __DispIHTMLInputButtonElement_FWD_DEFINED__ */


#ifndef __HTMLInputButtonElement_FWD_DEFINED__
#define __HTMLInputButtonElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLInputButtonElement HTMLInputButtonElement;
#else
typedef struct HTMLInputButtonElement HTMLInputButtonElement;
#endif /* __cplusplus */

#endif 	/* __HTMLInputButtonElement_FWD_DEFINED__ */


#ifndef __DispIHTMLInputTextElement_FWD_DEFINED__
#define __DispIHTMLInputTextElement_FWD_DEFINED__
typedef interface DispIHTMLInputTextElement DispIHTMLInputTextElement;
#endif 	/* __DispIHTMLInputTextElement_FWD_DEFINED__ */


#ifndef __HTMLInputTextElement_FWD_DEFINED__
#define __HTMLInputTextElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLInputTextElement HTMLInputTextElement;
#else
typedef struct HTMLInputTextElement HTMLInputTextElement;
#endif /* __cplusplus */

#endif 	/* __HTMLInputTextElement_FWD_DEFINED__ */


#ifndef __DispIHTMLInputFileElement_FWD_DEFINED__
#define __DispIHTMLInputFileElement_FWD_DEFINED__
typedef interface DispIHTMLInputFileElement DispIHTMLInputFileElement;
#endif 	/* __DispIHTMLInputFileElement_FWD_DEFINED__ */


#ifndef __HTMLInputFileElement_FWD_DEFINED__
#define __HTMLInputFileElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLInputFileElement HTMLInputFileElement;
#else
typedef struct HTMLInputFileElement HTMLInputFileElement;
#endif /* __cplusplus */

#endif 	/* __HTMLInputFileElement_FWD_DEFINED__ */


#ifndef __DispIHTMLOptionButtonElement_FWD_DEFINED__
#define __DispIHTMLOptionButtonElement_FWD_DEFINED__
typedef interface DispIHTMLOptionButtonElement DispIHTMLOptionButtonElement;
#endif 	/* __DispIHTMLOptionButtonElement_FWD_DEFINED__ */


#ifndef __HTMLOptionButtonElement_FWD_DEFINED__
#define __HTMLOptionButtonElement_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLOptionButtonElement HTMLOptionButtonElement;
#else
typedef struct HTMLOptionButtonElement HTMLOptionButtonElement;
#endif /* __cplusplus */

#endif 	/* __HTMLOptionButtonElement_FWD_DEFINED__ */


#ifndef __DispIHTMLInputImage_FWD_DEFINED__
#define __DispIHTMLInputImage_FWD_DEFINED__
typedef interface DispIHTMLInputImage DispIHTMLInputImage;
#endif 	/* __DispIHTMLInputImage_FWD_DEFINED__ */


#ifndef __HTMLInputImage_FWD_DEFINED__
#define __HTMLInputImage_FWD_DEFINED__

#ifdef __cplusplus
typedef class HTMLInputImage HTMLInputImage;
#else
typedef struct HTMLInputImage HTMLInputImage;
#endif /* __cplusplus */

#endif 	/* __HTMLInputImage_FWD_DEFINED__ */


#ifndef __IElementNamespace_FWD_DEFINED__
#define __IElementNamespace_FWD_DEFINED__
typedef interface IElementNamespace IElementNamespace;
#endif 	/* __IElementNamespace_FWD_DEFINED__ */


#ifndef __IElementNamespaceTable_FWD_DEFINED__
#define __IElementNamespaceTable_FWD_DEFINED__
typedef interface IElementNamespaceTable IElementNamespaceTable;
#endif 	/* __IElementNamespaceTable_FWD_DEFINED__ */


#ifndef __IElementNamespaceFactory_FWD_DEFINED__
#define __IElementNamespaceFactory_FWD_DEFINED__
typedef interface IElementNamespaceFactory IElementNamespaceFactory;
#endif 	/* __IElementNamespaceFactory_FWD_DEFINED__ */


#ifndef __IElementNamespaceFactory2_FWD_DEFINED__
#define __IElementNamespaceFactory2_FWD_DEFINED__
typedef interface IElementNamespaceFactory2 IElementNamespaceFactory2;
#endif 	/* __IElementNamespaceFactory2_FWD_DEFINED__ */


#ifndef __IElementNamespaceFactoryCallback_FWD_DEFINED__
#define __IElementNamespaceFactoryCallback_FWD_DEFINED__
typedef interface IElementNamespaceFactoryCallback IElementNamespaceFactoryCallback;
#endif 	/* __IElementNamespaceFactoryCallback_FWD_DEFINED__ */


#ifndef __IElementBehaviorSiteOM2_FWD_DEFINED__
#define __IElementBehaviorSiteOM2_FWD_DEFINED__
typedef interface IElementBehaviorSiteOM2 IElementBehaviorSiteOM2;
#endif 	/* __IElementBehaviorSiteOM2_FWD_DEFINED__ */


#ifndef __IElementBehaviorCategory_FWD_DEFINED__
#define __IElementBehaviorCategory_FWD_DEFINED__
typedef interface IElementBehaviorCategory IElementBehaviorCategory;
#endif 	/* __IElementBehaviorCategory_FWD_DEFINED__ */


#ifndef __IElementBehaviorSiteCategory_FWD_DEFINED__
#define __IElementBehaviorSiteCategory_FWD_DEFINED__
typedef interface IElementBehaviorSiteCategory IElementBehaviorSiteCategory;
#endif 	/* __IElementBehaviorSiteCategory_FWD_DEFINED__ */


#ifndef __IElementBehaviorSubmit_FWD_DEFINED__
#define __IElementBehaviorSubmit_FWD_DEFINED__
typedef interface IElementBehaviorSubmit IElementBehaviorSubmit;
#endif 	/* __IElementBehaviorSubmit_FWD_DEFINED__ */


#ifndef __IElementBehaviorFocus_FWD_DEFINED__
#define __IElementBehaviorFocus_FWD_DEFINED__
typedef interface IElementBehaviorFocus IElementBehaviorFocus;
#endif 	/* __IElementBehaviorFocus_FWD_DEFINED__ */


#ifndef __IElementBehaviorLayout_FWD_DEFINED__
#define __IElementBehaviorLayout_FWD_DEFINED__
typedef interface IElementBehaviorLayout IElementBehaviorLayout;
#endif 	/* __IElementBehaviorLayout_FWD_DEFINED__ */


#ifndef __IElementBehaviorLayout2_FWD_DEFINED__
#define __IElementBehaviorLayout2_FWD_DEFINED__
typedef interface IElementBehaviorLayout2 IElementBehaviorLayout2;
#endif 	/* __IElementBehaviorLayout2_FWD_DEFINED__ */


#ifndef __IElementBehaviorSiteLayout_FWD_DEFINED__
#define __IElementBehaviorSiteLayout_FWD_DEFINED__
typedef interface IElementBehaviorSiteLayout IElementBehaviorSiteLayout;
#endif 	/* __IElementBehaviorSiteLayout_FWD_DEFINED__ */


#ifndef __IElementBehaviorSiteLayout2_FWD_DEFINED__
#define __IElementBehaviorSiteLayout2_FWD_DEFINED__
typedef interface IElementBehaviorSiteLayout2 IElementBehaviorSiteLayout2;
#endif 	/* __IElementBehaviorSiteLayout2_FWD_DEFINED__ */


#ifndef __IHostBehaviorInit_FWD_DEFINED__
#define __IHostBehaviorInit_FWD_DEFINED__
typedef interface IHostBehaviorInit IHostBehaviorInit;
#endif 	/* __IHostBehaviorInit_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"
#include "dImm.h"
#include "shtypes.h"

#ifdef __cplusplus
extern "C"{
#endif


/* interface __MIDL_itf_mshtml_0000_0000 */
/* [local] */


#include <olectl.h>
EXTERN_C const GUID CMDSETID_Forms3;
EXTERN_C const GUID CLSID_MHTMLDocument;
EXTERN_C const GUID CLSID_HTADocument;
EXTERN_C const GUID CLSID_HTMLApplication;
EXTERN_C const GUID CLSID_HTMLPluginDocument;
DEFINE_GUID(SID_SEditCommandTarget,0x3050f4b5,0x98b5,0x11cf,0xbb,0x82,0x00,0xaa,0x00,0xbd,0xce,0x0b);
DEFINE_GUID(CGID_EditStateCommands,0x3050f4b6,0x98b5,0x11cf,0xbb,0x82,0x00,0xaa,0x00,0xbd,0xce,0x0b);
DEFINE_GUID(SID_SHTMLEditHost,0x3050f6a0,0x98b5,0x11cf,0xbb,0x82,0x00,0xaa,0x00,0xbd,0xce,0x0b);
DEFINE_GUID(SID_SHTMLEditServices,0x3050f7f9,0x98b5,0x11cf,0xbb,0x82,0x00,0xaa,0x00,0xbd,0xce,0x0b);
#define SID_SHTMLWindow IID_IHTMLWindow2
#define SID_SElementBehaviorFactory IID_IElementBehaviorFactory
// This information will be the LOWORD of the privacy flags stored in the privacy record
#define COOKIEACTION_NONE           0x00000000
#define COOKIEACTION_ACCEPT         0x00000001
#define COOKIEACTION_REJECT         0x00000002
#define COOKIEACTION_DOWNGRADE      0x00000004
#define COOKIEACTION_LEASH          0x00000008
#define COOKIEACTION_SUPPRESS       0x00000010
#define COOKIEACTION_READ           0x00000020
// Privacy info related to the url
// This information will be the HIWORD of the privacy flags stored in the privacy record
#define PRIVACY_URLISTOPLEVEL          0x00010000                   // Is this a top level url?
#define PRIVACY_URLHASCOMPACTPOLICY    0x00020000                   // Did the url have a compact policy used for privacy evaluations
#define PRIVACY_URLHASPOSTDATA         0x00080000                   // Is this a POST request?
#define PRIVACY_URLHASPOLICYREFLINK    0x00100000                   // Did the url have a privacy ref url in a link tag
#define PRIVACY_URLHASPOLICYREFHEADER  0x00200000                   // Did the url have a privacy ref url in a header tag
#define PRIVACY_URLHASP3PHEADER        0x00400000                   // Did the url have a privacy ref url in a header tag


extern RPC_IF_HANDLE __MIDL_itf_mshtml_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mshtml_0000_0000_v0_0_s_ifspec;

#ifndef __IHTMLFiltersCollection_INTERFACE_DEFINED__
#define __IHTMLFiltersCollection_INTERFACE_DEFINED__

/* interface IHTMLFiltersCollection */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLFiltersCollection;


    MIDL_INTERFACE("3050f3ee-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLFiltersCollection : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_length(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [restricted][hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get__newEnum(
            /* [out][retval] */ __RPC__deref_out_opt IUnknown **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE item(
            /* [in] */ __RPC__in VARIANT *pvarIndex,
            /* [out][retval] */ __RPC__out VARIANT *pvarResult) = 0;

    };





#endif 	/* __IHTMLFiltersCollection_INTERFACE_DEFINED__ */



#ifndef __MSHTML_LIBRARY_DEFINED__
#define __MSHTML_LIBRARY_DEFINED__

/* library MSHTML */
/* [uuid][version][helpstring][lcid] */












typedef
enum _htmlDesignMode
    {	htmlDesignModeInherit	= -2,
	htmlDesignModeOn	= -1,
	htmlDesignModeOff	= 0,
	htmlDesignMode_Max	= 2147483647L
    } 	htmlDesignMode;

typedef
enum _htmlZOrder
    {	htmlZOrderFront	= 0,
	htmlZOrderBack	= 1,
	htmlZOrder_Max	= 2147483647L
    } 	htmlZOrder;

typedef
enum _htmlClear
    {	htmlClearNotSet	= 0,
	htmlClearAll	= 1,
	htmlClearLeft	= 2,
	htmlClearRight	= 3,
	htmlClearBoth	= 4,
	htmlClearNone	= 5,
	htmlClear_Max	= 2147483647L
    } 	htmlClear;

typedef
enum _htmlControlAlign
    {	htmlControlAlignNotSet	= 0,
	htmlControlAlignLeft	= 1,
	htmlControlAlignCenter	= 2,
	htmlControlAlignRight	= 3,
	htmlControlAlignTextTop	= 4,
	htmlControlAlignAbsMiddle	= 5,
	htmlControlAlignBaseline	= 6,
	htmlControlAlignAbsBottom	= 7,
	htmlControlAlignBottom	= 8,
	htmlControlAlignMiddle	= 9,
	htmlControlAlignTop	= 10,
	htmlControlAlign_Max	= 2147483647L
    } 	htmlControlAlign;

typedef
enum _htmlBlockAlign
    {	htmlBlockAlignNotSet	= 0,
	htmlBlockAlignLeft	= 1,
	htmlBlockAlignCenter	= 2,
	htmlBlockAlignRight	= 3,
	htmlBlockAlignJustify	= 4,
	htmlBlockAlign_Max	= 2147483647L
    } 	htmlBlockAlign;

typedef
enum _htmlReadyState
    {	htmlReadyStateuninitialized	= 0,
	htmlReadyStateloading	= 1,
	htmlReadyStateloaded	= 2,
	htmlReadyStateinteractive	= 3,
	htmlReadyStatecomplete	= 4,
	htmlReadyState_Max	= 2147483647L
    } 	htmlReadyState;

typedef
enum _htmlLoop
    {	htmlLoopLoopInfinite	= -1,
	htmlLoop_Max	= 2147483647L
    } 	htmlLoop;

typedef
enum _mediaType
    {	mediaTypeNotSet	= 0,
	mediaTypeAll	= 511,
	mediaTypeAural	= 1,
	mediaTypeBraille	= 2,
	mediaTypeEmbossed	= 4,
	mediaTypeHandheld	= 8,
	mediaTypePrint	= 16,
	mediaTypeProjection	= 32,
	mediaTypeScreen	= 64,
	mediaTypeTty	= 128,
	mediaTypeTv	= 256,
	mediaType_Max	= 2147483647L
    } 	mediaType;

typedef
enum _styleTextTransform
    {	styleTextTransformNotSet	= 0,
	styleTextTransformCapitalize	= 1,
	styleTextTransformLowercase	= 2,
	styleTextTransformUppercase	= 3,
	styleTextTransformNone	= 4,
	styleTextTransform_Max	= 2147483647L
    } 	styleTextTransform;

typedef
enum _styleDataRepeat
    {	styleDataRepeatNone	= 0,
	styleDataRepeatInner	= 1,
	styleDataRepeat_Max	= 2147483647L
    } 	styleDataRepeat;

typedef
enum _styleOverflow
    {	styleOverflowNotSet	= 0,
	styleOverflowAuto	= 1,
	styleOverflowHidden	= 2,
	styleOverflowVisible	= 3,
	styleOverflowScroll	= 4,
	styleOverflow_Max	= 2147483647L
    } 	styleOverflow;

typedef
enum _styleTableLayout
    {	styleTableLayoutNotSet	= 0,
	styleTableLayoutAuto	= 1,
	styleTableLayoutFixed	= 2,
	styleTableLayout_Max	= 2147483647L
    } 	styleTableLayout;

typedef
enum _styleBorderCollapse
    {	styleBorderCollapseNotSet	= 0,
	styleBorderCollapseSeparate	= 1,
	styleBorderCollapseCollapse	= 2,
	styleBorderCollapse_Max	= 2147483647L
    } 	styleBorderCollapse;

typedef
enum _styleFontStyle
    {	styleFontStyleNotSet	= 0,
	styleFontStyleItalic	= 1,
	styleFontStyleOblique	= 2,
	styleFontStyleNormal	= 3,
	styleFontStyle_Max	= 2147483647L
    } 	styleFontStyle;

typedef
enum _styleFontVariant
    {	styleFontVariantNotSet	= 0,
	styleFontVariantSmallCaps	= 1,
	styleFontVariantNormal	= 2,
	styleFontVariant_Max	= 2147483647L
    } 	styleFontVariant;

typedef
enum _styleBackgroundRepeat
    {	styleBackgroundRepeatRepeat	= 0,
	styleBackgroundRepeatRepeatX	= 1,
	styleBackgroundRepeatRepeatY	= 2,
	styleBackgroundRepeatNoRepeat	= 3,
	styleBackgroundRepeatNotSet	= 4,
	styleBackgroundRepeat_Max	= 2147483647L
    } 	styleBackgroundRepeat;

typedef
enum _styleBackgroundAttachment
    {	styleBackgroundAttachmentFixed	= 0,
	styleBackgroundAttachmentScroll	= 1,
	styleBackgroundAttachmentNotSet	= 2,
	styleBackgroundAttachment_Max	= 2147483647L
    } 	styleBackgroundAttachment;

typedef
enum _styleVerticalAlign
    {	styleVerticalAlignAuto	= 0,
	styleVerticalAlignBaseline	= 1,
	styleVerticalAlignSub	= 2,
	styleVerticalAlignSuper	= 3,
	styleVerticalAlignTop	= 4,
	styleVerticalAlignTextTop	= 5,
	styleVerticalAlignMiddle	= 6,
	styleVerticalAlignBottom	= 7,
	styleVerticalAlignTextBottom	= 8,
	styleVerticalAlignInherit	= 9,
	styleVerticalAlignNotSet	= 10,
	styleVerticalAlign_Max	= 2147483647L
    } 	styleVerticalAlign;

typedef
enum _styleFontWeight
    {	styleFontWeightNotSet	= 0,
	styleFontWeight100	= 1,
	styleFontWeight200	= 2,
	styleFontWeight300	= 3,
	styleFontWeight400	= 4,
	styleFontWeight500	= 5,
	styleFontWeight600	= 6,
	styleFontWeight700	= 7,
	styleFontWeight800	= 8,
	styleFontWeight900	= 9,
	styleFontWeightNormal	= 10,
	styleFontWeightBold	= 11,
	styleFontWeightBolder	= 12,
	styleFontWeightLighter	= 13,
	styleFontWeight_Max	= 2147483647L
    } 	styleFontWeight;

typedef
enum _styleBackgroundPositionX
    {	styleBackgroundPositionXNotSet	= 0,
	styleBackgroundPositionXLeft	= 1,
	styleBackgroundPositionXCenter	= 2,
	styleBackgroundPositionXRight	= 3,
	styleBackgroundPositionX_Max	= 2147483647L
    } 	styleBackgroundPositionX;

typedef
enum _styleBackgroundPositionY
    {	styleBackgroundPositionYNotSet	= 0,
	styleBackgroundPositionYTop	= 1,
	styleBackgroundPositionYCenter	= 2,
	styleBackgroundPositionYBottom	= 3,
	styleBackgroundPositionY_Max	= 2147483647L
    } 	styleBackgroundPositionY;

typedef
enum _styleFontSize
    {	styleFontSizeXXSmall	= 0,
	styleFontSizeXSmall	= 1,
	styleFontSizeSmall	= 2,
	styleFontSizeMedium	= 3,
	styleFontSizeLarge	= 4,
	styleFontSizeXLarge	= 5,
	styleFontSizeXXLarge	= 6,
	styleFontSizeSmaller	= 7,
	styleFontSizeLarger	= 8,
	styleFontSize_Max	= 2147483647L
    } 	styleFontSize;

typedef
enum _styleAuto
    {	styleAutoAuto	= 0,
	styleAuto_Max	= 2147483647L
    } 	styleAuto;

typedef
enum _styleNone
    {	styleNoneNone	= 0,
	styleNone_Max	= 2147483647L
    } 	styleNone;

typedef
enum _styleNormal
    {	styleNormalNormal	= 0,
	styleNormal_Max	= 2147483647L
    } 	styleNormal;

typedef
enum _styleBorderWidth
    {	styleBorderWidthThin	= 0,
	styleBorderWidthMedium	= 1,
	styleBorderWidthThick	= 2,
	styleBorderWidth_Max	= 2147483647L
    } 	styleBorderWidth;

typedef
enum _stylePosition
    {	stylePositionNotSet	= 0,
	stylePositionstatic	= 1,
	stylePositionrelative	= 2,
	stylePositionabsolute	= 3,
	stylePositionfixed	= 4,
	stylePosition_Max	= 2147483647L
    } 	stylePosition;

typedef
enum _styleBorderStyle
    {	styleBorderStyleNotSet	= 0,
	styleBorderStyleDotted	= 1,
	styleBorderStyleDashed	= 2,
	styleBorderStyleSolid	= 3,
	styleBorderStyleDouble	= 4,
	styleBorderStyleGroove	= 5,
	styleBorderStyleRidge	= 6,
	styleBorderStyleInset	= 7,
	styleBorderStyleOutset	= 8,
	styleBorderStyleWindowInset	= 9,
	styleBorderStyleNone	= 10,
	styleBorderStyle_Max	= 2147483647L
    } 	styleBorderStyle;

typedef
enum _styleStyleFloat
    {	styleStyleFloatNotSet	= 0,
	styleStyleFloatLeft	= 1,
	styleStyleFloatRight	= 2,
	styleStyleFloatNone	= 3,
	styleStyleFloat_Max	= 2147483647L
    } 	styleStyleFloat;

typedef
enum _styleDisplay
    {	styleDisplayNotSet	= 0,
	styleDisplayBlock	= 1,
	styleDisplayInline	= 2,
	styleDisplayListItem	= 3,
	styleDisplayNone	= 4,
	styleDisplayTableHeaderGroup	= 5,
	styleDisplayTableFooterGroup	= 6,
	styleDisplayInlineBlock	= 7,
	styleDisplay_Max	= 2147483647L
    } 	styleDisplay;

typedef
enum _styleVisibility
    {	styleVisibilityNotSet	= 0,
	styleVisibilityInherit	= 1,
	styleVisibilityVisible	= 2,
	styleVisibilityHidden	= 3,
	styleVisibility_Max	= 2147483647L
    } 	styleVisibility;

typedef
enum _styleListStyleType
    {	styleListStyleTypeNotSet	= 0,
	styleListStyleTypeDisc	= 1,
	styleListStyleTypeCircle	= 2,
	styleListStyleTypeSquare	= 3,
	styleListStyleTypeDecimal	= 4,
	styleListStyleTypeLowerRoman	= 5,
	styleListStyleTypeUpperRoman	= 6,
	styleListStyleTypeLowerAlpha	= 7,
	styleListStyleTypeUpperAlpha	= 8,
	styleListStyleTypeNone	= 9,
	styleListStyleType_Max	= 2147483647L
    } 	styleListStyleType;

typedef
enum _styleListStylePosition
    {	styleListStylePositionNotSet	= 0,
	styleListStylePositionInside	= 1,
	styleListStylePositionOutSide	= 2,
	styleListStylePosition_Max	= 2147483647L
    } 	styleListStylePosition;

typedef
enum _styleWhiteSpace
    {	styleWhiteSpaceNotSet	= 0,
	styleWhiteSpaceNormal	= 1,
	styleWhiteSpacePre	= 2,
	styleWhiteSpaceNowrap	= 3,
	styleWhiteSpace_Max	= 2147483647L
    } 	styleWhiteSpace;

typedef
enum _stylePageBreak
    {	stylePageBreakNotSet	= 0,
	stylePageBreakAuto	= 1,
	stylePageBreakAlways	= 2,
	stylePageBreakLeft	= 3,
	stylePageBreakRight	= 4,
	stylePageBreak_Max	= 2147483647L
    } 	stylePageBreak;

typedef
enum _styleCursor
    {	styleCursorAuto	= 0,
	styleCursorCrosshair	= 1,
	styleCursorDefault	= 2,
	styleCursorHand	= 3,
	styleCursorMove	= 4,
	styleCursorE_resize	= 5,
	styleCursorNe_resize	= 6,
	styleCursorNw_resize	= 7,
	styleCursorN_resize	= 8,
	styleCursorSe_resize	= 9,
	styleCursorSw_resize	= 10,
	styleCursorS_resize	= 11,
	styleCursorW_resize	= 12,
	styleCursorText	= 13,
	styleCursorWait	= 14,
	styleCursorHelp	= 15,
	styleCursorPointer	= 16,
	styleCursorProgress	= 17,
	styleCursorNot_allowed	= 18,
	styleCursorNo_drop	= 19,
	styleCursorVertical_text	= 20,
	styleCursorall_scroll	= 21,
	styleCursorcol_resize	= 22,
	styleCursorrow_resize	= 23,
	styleCursorcustom	= 24,
	styleCursorNotSet	= 25,
	styleCursor_Max	= 2147483647L
    } 	styleCursor;

typedef
enum _styleDir
    {	styleDirNotSet	= 0,
	styleDirLeftToRight	= 1,
	styleDirRightToLeft	= 2,
	styleDirInherit	= 3,
	styleDir_Max	= 2147483647L
    } 	styleDir;

typedef
enum _styleBidi
    {	styleBidiNotSet	= 0,
	styleBidiNormal	= 1,
	styleBidiEmbed	= 2,
	styleBidiOverride	= 3,
	styleBidiInherit	= 4,
	styleBidi_Max	= 2147483647L
    } 	styleBidi;

typedef
enum _styleImeMode
    {	styleImeModeAuto	= 0,
	styleImeModeActive	= 1,
	styleImeModeInactive	= 2,
	styleImeModeDisabled	= 3,
	styleImeModeNotSet	= 4,
	styleImeMode_Max	= 2147483647L
    } 	styleImeMode;

typedef
enum _styleRubyAlign
    {	styleRubyAlignNotSet	= 0,
	styleRubyAlignAuto	= 1,
	styleRubyAlignLeft	= 2,
	styleRubyAlignCenter	= 3,
	styleRubyAlignRight	= 4,
	styleRubyAlignDistributeLetter	= 5,
	styleRubyAlignDistributeSpace	= 6,
	styleRubyAlignLineEdge	= 7,
	styleRubyAlign_Max	= 2147483647L
    } 	styleRubyAlign;

typedef
enum _styleRubyPosition
    {	styleRubyPositionNotSet	= 0,
	styleRubyPositionAbove	= 1,
	styleRubyPositionInline	= 2,
	styleRubyPosition_Max	= 2147483647L
    } 	styleRubyPosition;

typedef
enum _styleRubyOverhang
    {	styleRubyOverhangNotSet	= 0,
	styleRubyOverhangAuto	= 1,
	styleRubyOverhangWhitespace	= 2,
	styleRubyOverhangNone	= 3,
	styleRubyOverhang_Max	= 2147483647L
    } 	styleRubyOverhang;

typedef
enum _styleLayoutGridChar
    {	styleLayoutGridCharNotSet	= 0,
	styleLayoutGridCharAuto	= 1,
	styleLayoutGridCharNone	= 2,
	styleLayoutGridChar_Max	= 2147483647L
    } 	styleLayoutGridChar;

typedef
enum _styleLayoutGridLine
    {	styleLayoutGridLineNotSet	= 0,
	styleLayoutGridLineAuto	= 1,
	styleLayoutGridLineNone	= 2,
	styleLayoutGridLine_Max	= 2147483647L
    } 	styleLayoutGridLine;

typedef
enum _styleLayoutGridMode
    {	styleLayoutGridModeNotSet	= 0,
	styleLayoutGridModeChar	= 1,
	styleLayoutGridModeLine	= 2,
	styleLayoutGridModeBoth	= 3,
	styleLayoutGridModeNone	= 4,
	styleLayoutGridMode_Max	= 2147483647L
    } 	styleLayoutGridMode;

typedef
enum _styleLayoutGridType
    {	styleLayoutGridTypeNotSet	= 0,
	styleLayoutGridTypeLoose	= 1,
	styleLayoutGridTypeStrict	= 2,
	styleLayoutGridTypeFixed	= 3,
	styleLayoutGridType_Max	= 2147483647L
    } 	styleLayoutGridType;

typedef
enum _styleLineBreak
    {	styleLineBreakNotSet	= 0,
	styleLineBreakNormal	= 1,
	styleLineBreakStrict	= 2,
	styleLineBreak_Max	= 2147483647L
    } 	styleLineBreak;

typedef
enum _styleWordBreak
    {	styleWordBreakNotSet	= 0,
	styleWordBreakNormal	= 1,
	styleWordBreakBreakAll	= 2,
	styleWordBreakKeepAll	= 3,
	styleWordBreak_Max	= 2147483647L
    } 	styleWordBreak;

typedef
enum _styleWordWrap
    {	styleWordWrapNotSet	= 0,
	styleWordWrapOff	= 1,
	styleWordWrapOn	= 2,
	styleWordWrap_Max	= 2147483647L
    } 	styleWordWrap;

typedef
enum _styleTextJustify
    {	styleTextJustifyNotSet	= 0,
	styleTextJustifyInterWord	= 1,
	styleTextJustifyNewspaper	= 2,
	styleTextJustifyDistribute	= 3,
	styleTextJustifyDistributeAllLines	= 4,
	styleTextJustifyInterIdeograph	= 5,
	styleTextJustifyInterCluster	= 6,
	styleTextJustifyKashida	= 7,
	styleTextJustifyAuto	= 8,
	styleTextJustify_Max	= 2147483647L
    } 	styleTextJustify;

typedef
enum _styleTextAlignLast
    {	styleTextAlignLastNotSet	= 0,
	styleTextAlignLastLeft	= 1,
	styleTextAlignLastCenter	= 2,
	styleTextAlignLastRight	= 3,
	styleTextAlignLastJustify	= 4,
	styleTextAlignLastAuto	= 5,
	styleTextAlignLast_Max	= 2147483647L
    } 	styleTextAlignLast;

typedef
enum _styleTextJustifyTrim
    {	styleTextJustifyTrimNotSet	= 0,
	styleTextJustifyTrimNone	= 1,
	styleTextJustifyTrimPunctuation	= 2,
	styleTextJustifyTrimPunctAndKana	= 3,
	styleTextJustifyTrim_Max	= 2147483647L
    } 	styleTextJustifyTrim;

typedef
enum _styleAccelerator
    {	styleAcceleratorFalse	= 0,
	styleAcceleratorTrue	= 1,
	styleAccelerator_Max	= 2147483647L
    } 	styleAccelerator;

typedef
enum _styleLayoutFlow
    {	styleLayoutFlowHorizontal	= 0,
	styleLayoutFlowVerticalIdeographic	= 1,
	styleLayoutFlowNotSet	= 2,
	styleLayoutFlow_Max	= 2147483647L
    } 	styleLayoutFlow;

typedef
enum _styleWritingMode
    {	styleWritingModeLrtb	= 0,
	styleWritingModeTbrl	= 1,
	styleWritingModeRltb	= 2,
	styleWritingModeBtrl	= 3,
	styleWritingModeNotSet	= 4,
	styleWritingMode_Max	= 2147483647L
    } 	styleWritingMode;

typedef
enum _styleBool
    {	styleBoolFalse	= 0,
	styleBoolTrue	= 1,
	styleBool_Max	= 2147483647L
    } 	styleBool;

typedef
enum _styleTextUnderlinePosition
    {	styleTextUnderlinePositionBelow	= 0,
	styleTextUnderlinePositionAbove	= 1,
	styleTextUnderlinePositionAuto	= 2,
	styleTextUnderlinePositionNotSet	= 3,
	styleTextUnderlinePosition_Max	= 2147483647L
    } 	styleTextUnderlinePosition;

typedef
enum _styleTextOverflow
    {	styleTextOverflowClip	= 0,
	styleTextOverflowEllipsis	= 1,
	styleTextOverflowNotSet	= 2,
	styleTextOverflow_Max	= 2147483647L
    } 	styleTextOverflow;

typedef
enum _styleInterpolation
    {	styleInterpolationNotSet	= 0,
	styleInterpolationNN	= 1,
	styleInterpolationBCH	= 2,
	styleInterpolation_Max	= 2147483647L
    } 	styleInterpolation;

EXTERN_C const GUID CLSID_CStyle;
EXTERN_C const GUID CLSID_CRuleStyle;
typedef
enum _styleTextLineThroughStyle
    {	styleTextLineThroughStyleUndefined	= 0,
	styleTextLineThroughStyleSingle	= 1,
	styleTextLineThroughStyleDouble	= 2,
	styleTextLineThroughStyle_Max	= 2147483647L
    } 	styleTextLineThroughStyle;

typedef
enum _styleTextUnderlineStyle
    {	styleTextUnderlineStyleUndefined	= 0,
	styleTextUnderlineStyleSingle	= 1,
	styleTextUnderlineStyleDouble	= 2,
	styleTextUnderlineStyleWords	= 3,
	styleTextUnderlineStyleDotted	= 4,
	styleTextUnderlineStyleThick	= 5,
	styleTextUnderlineStyleDash	= 6,
	styleTextUnderlineStyleDotDash	= 7,
	styleTextUnderlineStyleDotDotDash	= 8,
	styleTextUnderlineStyleWave	= 9,
	styleTextUnderlineStyleSingleAccounting	= 10,
	styleTextUnderlineStyleDoubleAccounting	= 11,
	styleTextUnderlineStyleThickDash	= 12,
	styleTextUnderlineStyle_Max	= 2147483647L
    } 	styleTextUnderlineStyle;

typedef
enum _styleTextEffect
    {	styleTextEffectNone	= 0,
	styleTextEffectEmboss	= 1,
	styleTextEffectEngrave	= 2,
	styleTextEffectOutline	= 3,
	styleTextEffect_Max	= 2147483647L
    } 	styleTextEffect;

typedef
enum _styleDefaultTextSelection
    {	styleDefaultTextSelectionFalse	= 0,
	styleDefaultTextSelectionTrue	= 1,
	styleDefaultTextSelection_Max	= 2147483647L
    } 	styleDefaultTextSelection;

typedef
enum _styleTextDecoration
    {	styleTextDecorationNone	= 0,
	styleTextDecorationUnderline	= 1,
	styleTextDecorationOverline	= 2,
	styleTextDecorationLineThrough	= 3,
	styleTextDecorationBlink	= 4,
	styleTextDecoration_Max	= 2147483647L
    } 	styleTextDecoration;

EXTERN_C const GUID CLSID_CRenderStyle;
typedef
enum _textDecoration
    {	textDecorationNone	= 0,
	textDecorationUnderline	= 1,
	textDecorationOverline	= 2,
	textDecorationLineThrough	= 3,
	textDecorationBlink	= 4,
	textDecoration_Max	= 2147483647L
    } 	textDecoration;

EXTERN_C const GUID CLSID_CCurrentStyle;

EXTERN_C const GUID CLSID_CAttribute;
EXTERN_C const GUID CLSID_CDOMTextNode;
EXTERN_C const GUID CLSID_CDOMImplementation;
EXTERN_C const GUID CLSID_CAttrCollectionator;
EXTERN_C const GUID CLSID_CDOMChildrenCollection;
typedef
enum _htmlListType
    {	htmlListTypeNotSet	= 0,
	htmlListTypeLargeAlpha	= 1,
	htmlListTypeSmallAlpha	= 2,
	htmlListTypeLargeRoman	= 3,
	htmlListTypeSmallRoman	= 4,
	htmlListTypeNumbers	= 5,
	htmlListTypeDisc	= 6,
	htmlListTypeCircle	= 7,
	htmlListTypeSquare	= 8,
	htmlListType_Max	= 2147483647L
    } 	htmlListType;

typedef
enum _htmlMethod
    {	htmlMethodNotSet	= 0,
	htmlMethodGet	= 1,
	htmlMethodPost	= 2,
	htmlMethod_Max	= 2147483647L
    } 	htmlMethod;

typedef
enum _htmlWrap
    {	htmlWrapOff	= 1,
	htmlWrapSoft	= 2,
	htmlWrapHard	= 3,
	htmlWrap_Max	= 2147483647L
    } 	htmlWrap;

typedef
enum _htmlDir
    {	htmlDirNotSet	= 0,
	htmlDirLeftToRight	= 1,
	htmlDirRightToLeft	= 2,
	htmlDir_Max	= 2147483647L
    } 	htmlDir;

typedef
enum _htmlEditable
    {	htmlEditableInherit	= 0,
	htmlEditableTrue	= 1,
	htmlEditableFalse	= 2,
	htmlEditable_Max	= 2147483647L
    } 	htmlEditable;

typedef
enum _htmlInput
    {	htmlInputNotSet	= 0,
	htmlInputButton	= 1,
	htmlInputCheckbox	= 2,
	htmlInputFile	= 3,
	htmlInputHidden	= 4,
	htmlInputImage	= 5,
	htmlInputPassword	= 6,
	htmlInputRadio	= 7,
	htmlInputReset	= 8,
	htmlInputSelectOne	= 9,
	htmlInputSelectMultiple	= 10,
	htmlInputSubmit	= 11,
	htmlInputText	= 12,
	htmlInputTextarea	= 13,
	htmlInputRichtext	= 14,
	htmlInput_Max	= 2147483647L
    } 	htmlInput;

typedef
enum _htmlEncoding
    {	htmlEncodingURL	= 0,
	htmlEncodingMultipart	= 1,
	htmlEncodingText	= 2,
	htmlEncoding_Max	= 2147483647L
    } 	htmlEncoding;

typedef
enum _htmlAdjacency
    {	htmlAdjacencyBeforeBegin	= 1,
	htmlAdjacencyAfterBegin	= 2,
	htmlAdjacencyBeforeEnd	= 3,
	htmlAdjacencyAfterEnd	= 4,
	htmlAdjacency_Max	= 2147483647L
    } 	htmlAdjacency;

typedef
enum _htmlTabIndex
    {	htmlTabIndexNotSet	= -32768,
	htmlTabIndex_Max	= 2147483647L
    } 	htmlTabIndex;

typedef
enum _htmlComponent
    {	htmlComponentClient	= 0,
	htmlComponentSbLeft	= 1,
	htmlComponentSbPageLeft	= 2,
	htmlComponentSbHThumb	= 3,
	htmlComponentSbPageRight	= 4,
	htmlComponentSbRight	= 5,
	htmlComponentSbUp	= 6,
	htmlComponentSbPageUp	= 7,
	htmlComponentSbVThumb	= 8,
	htmlComponentSbPageDown	= 9,
	htmlComponentSbDown	= 10,
	htmlComponentSbLeft2	= 11,
	htmlComponentSbPageLeft2	= 12,
	htmlComponentSbRight2	= 13,
	htmlComponentSbPageRight2	= 14,
	htmlComponentSbUp2	= 15,
	htmlComponentSbPageUp2	= 16,
	htmlComponentSbDown2	= 17,
	htmlComponentSbPageDown2	= 18,
	htmlComponentSbTop	= 19,
	htmlComponentSbBottom	= 20,
	htmlComponentOutside	= 21,
	htmlComponentGHTopLeft	= 22,
	htmlComponentGHLeft	= 23,
	htmlComponentGHTop	= 24,
	htmlComponentGHBottomLeft	= 25,
	htmlComponentGHTopRight	= 26,
	htmlComponentGHBottom	= 27,
	htmlComponentGHRight	= 28,
	htmlComponentGHBottomRight	= 29,
	htmlComponent_Max	= 2147483647L
    } 	htmlComponent;

typedef
enum _htmlApplyLocation
    {	htmlApplyLocationInside	= 0,
	htmlApplyLocationOutside	= 1,
	htmlApplyLocation_Max	= 2147483647L
    } 	htmlApplyLocation;

typedef
enum _htmlGlyphMode
    {	htmlGlyphModeNone	= 0,
	htmlGlyphModeBegin	= 1,
	htmlGlyphModeEnd	= 2,
	htmlGlyphModeBoth	= 3,
	htmlGlyphMode_Max	= 2147483647L
    } 	htmlGlyphMode;





EXTERN_C const GUID CLSID_CDefaults;

EXTERN_C const GUID CLSID_CHtmlComponentDD;
EXTERN_C const GUID CLSID_CHtmlComponentProperty;
EXTERN_C const GUID CLSID_CHtmlComponentMethod;
EXTERN_C const GUID CLSID_CHtmlComponentEvent;
EXTERN_C const GUID CLSID_CHtmlComponentAttach;
EXTERN_C const GUID CLSID_CHtmlComponentDesc;
EXTERN_C const GUID CLSID_CPeerUrnCollection;
EXTERN_C const GUID CLSID_CGenericElement;
EXTERN_C const GUID CLSID_CStyleSheetRule;
EXTERN_C const GUID CLSID_CStyleSheetRuleArray;
EXTERN_C const GUID CLSID_CStyleSheetPage;
EXTERN_C const GUID CLSID_CStyleSheetPageArray;

EXTERN_C const GUID CLSID_CStyleSheet;
EXTERN_C const GUID CLSID_CStyleSheetArray;
EXTERN_C const GUID CLSID_CLinkElement;
typedef
enum _htmlUnit
    {	htmlUnitCharacter	= 1,
	htmlUnitWord	= 2,
	htmlUnitSentence	= 3,
	htmlUnitTextEdit	= 6,
	htmlUnit_Max	= 2147483647L
    } 	htmlUnit;

typedef
enum _htmlEndPoints
    {	htmlEndPointsStartToStart	= 1,
	htmlEndPointsStartToEnd	= 2,
	htmlEndPointsEndToStart	= 3,
	htmlEndPointsEndToEnd	= 4,
	htmlEndPoints_Max	= 2147483647L
    } 	htmlEndPoints;

typedef
enum _htmlDirection
    {	htmlDirectionForward	= 99999,
	htmlDirectionBackward	= -99999,
	htmlDirection_Max	= 2147483647L
    } 	htmlDirection;

EXTERN_C const GUID CLSID_CFormElement;
typedef
enum _htmlStart
    {	htmlStartfileopen	= 0,
	htmlStartmouseover	= 1,
	htmlStart_Max	= 2147483647L
    } 	htmlStart;

EXTERN_C const GUID CLSID_CTextElement;
EXTERN_C const GUID CLSID_CImgElement;
EXTERN_C const GUID CLSID_CImageElementFactory;
EXTERN_C const GUID CLSID_CXMLHttpRequest;
EXTERN_C const GUID CLSID_CXMLHttpRequestFactory;
typedef
enum _bodyScroll
    {	bodyScrollyes	= 1,
	bodyScrollno	= 2,
	bodyScrollauto	= 4,
	bodyScrolldefault	= 3,
	bodyScroll_Max	= 2147483647L
    } 	bodyScroll;

EXTERN_C const GUID CLSID_CBodyElement;
EXTERN_C const GUID CLSID_CFontElement;
EXTERN_C const GUID CLSID_CAnchorElement;
EXTERN_C const GUID CLSID_CLabelElement;
EXTERN_C const GUID CLSID_CListElement;
EXTERN_C const GUID CLSID_CUListElement;
EXTERN_C const GUID CLSID_COListElement;
EXTERN_C const GUID CLSID_CLIElement;
EXTERN_C const GUID CLSID_CBlockElement;
EXTERN_C const GUID CLSID_CDivElement;
EXTERN_C const GUID CLSID_CDDElement;
EXTERN_C const GUID CLSID_CDTElement;
EXTERN_C const GUID CLSID_CBRElement;
EXTERN_C const GUID CLSID_CDListElement;
EXTERN_C const GUID CLSID_CHRElement;
EXTERN_C const GUID CLSID_CParaElement;
EXTERN_C const GUID CLSID_CElementCollection;
EXTERN_C const GUID CLSID_CHeaderElement;
typedef
enum _htmlSelectType
    {	htmlSelectTypeSelectOne	= 1,
	htmlSelectTypeSelectMultiple	= 2,
	htmlSelectType_Max	= 2147483647L
    } 	htmlSelectType;

typedef
enum _htmlSelectExFlag
    {	htmlSelectExFlagNone	= 0,
	htmlSelectExFlagHideSelectionInDesign	= 0x1,
	htmlSelectExFlag_Max	= 2147483647L
    } 	htmlSelectExFlag;

EXTERN_C const GUID CLSID_CSelectElement;
EXTERN_C const GUID CLSID_CWndSelectElement;
typedef
enum _htmlSelection
    {	htmlSelectionNone	= 0,
	htmlSelectionText	= 1,
	htmlSelectionControl	= 2,
	htmlSelectionTable	= 3,
	htmlSelection_Max	= 2147483647L
    } 	htmlSelection;

EXTERN_C const GUID CLSID_COptionElement;
EXTERN_C const GUID CLSID_COptionElementFactory;
EXTERN_C const GUID CLSID_CWndOptionElement;
EXTERN_C const GUID CLSID_CInput;
EXTERN_C const GUID CLSID_CTextArea;
EXTERN_C const GUID CLSID_CRichtext;
EXTERN_C const GUID CLSID_CButton;
typedef
enum _htmlMarqueeBehavior
    {	htmlMarqueeBehaviorscroll	= 1,
	htmlMarqueeBehaviorslide	= 2,
	htmlMarqueeBehavioralternate	= 3,
	htmlMarqueeBehavior_Max	= 2147483647L
    } 	htmlMarqueeBehavior;

typedef
enum _htmlMarqueeDirection
    {	htmlMarqueeDirectionleft	= 1,
	htmlMarqueeDirectionright	= 3,
	htmlMarqueeDirectionup	= 5,
	htmlMarqueeDirectiondown	= 7,
	htmlMarqueeDirection_Max	= 2147483647L
    } 	htmlMarqueeDirection;

EXTERN_C const GUID CLSID_CMarquee;
EXTERN_C const GUID CLSID_CHtmlElement;
EXTERN_C const GUID CLSID_CHeadElement;
EXTERN_C const GUID CLSID_CTitleElement;
EXTERN_C const GUID CLSID_CMetaElement;
EXTERN_C const GUID CLSID_CBaseElement;
EXTERN_C const GUID CLSID_CIsIndexElement;
EXTERN_C const GUID CLSID_CNextIdElement;
EXTERN_C const GUID CLSID_CBaseFontElement;
EXTERN_C const GUID CLSID_CUnknownElement;
EXTERN_C const GUID CLSID_COmHistory;
EXTERN_C const GUID CLSID_CMimeTypes;
EXTERN_C const GUID CLSID_CPlugins;
EXTERN_C const GUID CLSID_COpsProfile;
EXTERN_C const GUID CLSID_COmNavigator;
EXTERN_C const GUID CLSID_COmLocation;
typedef
enum _htmlPersistState
    {	htmlPersistStateNormal	= 0,
	htmlPersistStateFavorite	= 1,
	htmlPersistStateHistory	= 2,
	htmlPersistStateSnapshot	= 3,
	htmlPersistStateUserData	= 4,
	htmlPersistState_Max	= 2147483647L
    } 	htmlPersistState;

typedef
enum _htmlDropEffect
    {	htmlDropEffectCopy	= 0,
	htmlDropEffectLink	= 1,
	htmlDropEffectMove	= 2,
	htmlDropEffectNone	= 3,
	htmlDropEffect_Max	= 2147483647L
    } 	htmlDropEffect;

typedef
enum _htmlEffectAllowed
    {	htmlEffectAllowedCopy	= 0,
	htmlEffectAllowedLink	= 1,
	htmlEffectAllowedMove	= 2,
	htmlEffectAllowedCopyLink	= 3,
	htmlEffectAllowedCopyMove	= 4,
	htmlEffectAllowedLinkMove	= 5,
	htmlEffectAllowedAll	= 6,
	htmlEffectAllowedNone	= 7,
	htmlEffectAllowedUninitialized	= 8,
	htmlEffectAllowed_Max	= 2147483647L
    } 	htmlEffectAllowed;

EXTERN_C const GUID CLSID_CEventObj;






EXTERN_C const GUID CLSID_CFramesCollection;
EXTERN_C const GUID CLSID_CScreen;
EXTERN_C const GUID CLSID_CWindow;
EXTERN_C const GUID CLSID_COmWindowProxy;
typedef
enum _htmlCompatMode
    {	htmlCompatModeBackCompat	= 0,
	htmlCompatModeCSS1Compat	= 1,
	htmlCompatMode_Max	= 2147483647L
    } 	htmlCompatMode;

EXTERN_C const GUID CLSID_CDocument;
EXTERN_C const GUID CLSID_CScriptlet;
typedef
enum _BoolValue
    {	True	= 1,
	False	= 0,
	BoolValue_Max	= 2147483647L
    } 	BoolValue;

EXTERN_C const GUID CLSID_CPluginSite;
EXTERN_C const GUID CLSID_CAreasCollection;
EXTERN_C const GUID CLSID_CMapElement;
EXTERN_C const GUID CLSID_CAreaElement;
typedef
enum _htmlCaptionAlign
    {	htmlCaptionAlignNotSet	= 0,
	htmlCaptionAlignLeft	= 1,
	htmlCaptionAlignCenter	= 2,
	htmlCaptionAlignRight	= 3,
	htmlCaptionAlignJustify	= 4,
	htmlCaptionAlignTop	= 5,
	htmlCaptionAlignBottom	= 6,
	htmlCaptionAlign_Max	= 2147483647L
    } 	htmlCaptionAlign;

typedef
enum _htmlCaptionVAlign
    {	htmlCaptionVAlignNotSet	= 0,
	htmlCaptionVAlignTop	= 1,
	htmlCaptionVAlignBottom	= 2,
	htmlCaptionVAlign_Max	= 2147483647L
    } 	htmlCaptionVAlign;

EXTERN_C const GUID CLSID_CTableCaption;
EXTERN_C const GUID CLSID_CCommentElement;
EXTERN_C const GUID CLSID_CPhraseElement;
EXTERN_C const GUID CLSID_CSpanElement;
typedef
enum _htmlFrame
    {	htmlFrameNotSet	= 0,
	htmlFramevoid	= 1,
	htmlFrameabove	= 2,
	htmlFramebelow	= 3,
	htmlFramehsides	= 4,
	htmlFramelhs	= 5,
	htmlFramerhs	= 6,
	htmlFramevsides	= 7,
	htmlFramebox	= 8,
	htmlFrameborder	= 9,
	htmlFrame_Max	= 2147483647L
    } 	htmlFrame;

typedef
enum _htmlRules
    {	htmlRulesNotSet	= 0,
	htmlRulesnone	= 1,
	htmlRulesgroups	= 2,
	htmlRulesrows	= 3,
	htmlRulescols	= 4,
	htmlRulesall	= 5,
	htmlRules_Max	= 2147483647L
    } 	htmlRules;

typedef
enum _htmlCellAlign
    {	htmlCellAlignNotSet	= 0,
	htmlCellAlignLeft	= 1,
	htmlCellAlignCenter	= 2,
	htmlCellAlignRight	= 3,
	htmlCellAlignMiddle	= htmlCellAlignCenter,
	htmlCellAlign_Max	= 2147483647L
    } 	htmlCellAlign;

typedef
enum _htmlCellVAlign
    {	htmlCellVAlignNotSet	= 0,
	htmlCellVAlignTop	= 1,
	htmlCellVAlignMiddle	= 2,
	htmlCellVAlignBottom	= 3,
	htmlCellVAlignBaseline	= 4,
	htmlCellVAlignCenter	= htmlCellVAlignMiddle,
	htmlCellVAlign_Max	= 2147483647L
    } 	htmlCellVAlign;


EXTERN_C const GUID CLSID_CTable;
EXTERN_C const GUID CLSID_CTableCol;
EXTERN_C const GUID CLSID_CTableSection;
EXTERN_C const GUID CLSID_CTableRow;
EXTERN_C const GUID CLSID_CTableCell;
EXTERN_C const GUID CLSID_CScriptElement;
EXTERN_C const GUID CLSID_CNoShowElement;
EXTERN_C const GUID CLSID_CObjectElement;
EXTERN_C const GUID CLSID_CParamElement;
typedef
enum _frameScrolling
    {	frameScrollingyes	= 1,
	frameScrollingno	= 2,
	frameScrollingauto	= 4,
	frameScrolling_Max	= 2147483647L
    } 	frameScrolling;

EXTERN_C const GUID CLSID_CFrameSite;
EXTERN_C const GUID CLSID_CFrameElement;
EXTERN_C const GUID CLSID_CIFrameElement;
EXTERN_C const GUID CLSID_C1DElement;
EXTERN_C const GUID CLSID_CFieldSetElement;
EXTERN_C const GUID CLSID_CLegendElement;
EXTERN_C const GUID CLSID_CSpanSite;
EXTERN_C const GUID CLSID_CFrameSetSite;
EXTERN_C const GUID CLSID_CBGsound;
EXTERN_C const GUID CLSID_CStyleElement;
EXTERN_C const GUID CLSID_CFontFace;
typedef
enum _ELEMENT_CORNER
    {	ELEMENT_CORNER_NONE	= 0,
	ELEMENT_CORNER_TOP	= 1,
	ELEMENT_CORNER_LEFT	= 2,
	ELEMENT_CORNER_BOTTOM	= 3,
	ELEMENT_CORNER_RIGHT	= 4,
	ELEMENT_CORNER_TOPLEFT	= 5,
	ELEMENT_CORNER_TOPRIGHT	= 6,
	ELEMENT_CORNER_BOTTOMLEFT	= 7,
	ELEMENT_CORNER_BOTTOMRIGHT	= 8,
	ELEMENT_CORNER_Max	= 2147483647L
    } 	ELEMENT_CORNER;

typedef
enum _SECUREURLHOSTVALIDATE_FLAGS
    {	SUHV_PROMPTBEFORENO	= 0x1,
	SUHV_SILENTYES	= 0x2,
	SUHV_UNSECURESOURCE	= 0x4,
	SECUREURLHOSTVALIDATE_FLAGS_Max	= 2147483647L
    } 	SECUREURLHOSTVALIDATE_FLAGS;

typedef
enum _POINTER_GRAVITY
    {	POINTER_GRAVITY_Left	= 0,
	POINTER_GRAVITY_Right	= 1,
	POINTER_GRAVITY_Max	= 2147483647L
    } 	POINTER_GRAVITY;

typedef
enum _ELEMENT_ADJACENCY
    {	ELEM_ADJ_BeforeBegin	= 0,
	ELEM_ADJ_AfterBegin	= 1,
	ELEM_ADJ_BeforeEnd	= 2,
	ELEM_ADJ_AfterEnd	= 3,
	ELEMENT_ADJACENCY_Max	= 2147483647L
    } 	ELEMENT_ADJACENCY;

typedef
enum _MARKUP_CONTEXT_TYPE
    {	CONTEXT_TYPE_None	= 0,
	CONTEXT_TYPE_Text	= 1,
	CONTEXT_TYPE_EnterScope	= 2,
	CONTEXT_TYPE_ExitScope	= 3,
	CONTEXT_TYPE_NoScope	= 4,
	MARKUP_CONTEXT_TYPE_Max	= 2147483647L
    } 	MARKUP_CONTEXT_TYPE;

typedef
enum _FINDTEXT_FLAGS
    {	FINDTEXT_BACKWARDS	= 0x1,
	FINDTEXT_WHOLEWORD	= 0x2,
	FINDTEXT_MATCHCASE	= 0x4,
	FINDTEXT_RAW	= 0x20000,
	FINDTEXT_MATCHDIAC	= 0x20000000,
	FINDTEXT_MATCHKASHIDA	= 0x40000000,
	FINDTEXT_MATCHALEFHAMZA	= 0x80000000,
	FINDTEXT_FLAGS_Max	= 2147483647L
    } 	FINDTEXT_FLAGS;

typedef
enum _MOVEUNIT_ACTION
    {	MOVEUNIT_PREVCHAR	= 0,
	MOVEUNIT_NEXTCHAR	= 1,
	MOVEUNIT_PREVCLUSTERBEGIN	= 2,
	MOVEUNIT_NEXTCLUSTERBEGIN	= 3,
	MOVEUNIT_PREVCLUSTEREND	= 4,
	MOVEUNIT_NEXTCLUSTEREND	= 5,
	MOVEUNIT_PREVWORDBEGIN	= 6,
	MOVEUNIT_NEXTWORDBEGIN	= 7,
	MOVEUNIT_PREVWORDEND	= 8,
	MOVEUNIT_NEXTWORDEND	= 9,
	MOVEUNIT_PREVPROOFWORD	= 10,
	MOVEUNIT_NEXTPROOFWORD	= 11,
	MOVEUNIT_NEXTURLBEGIN	= 12,
	MOVEUNIT_PREVURLBEGIN	= 13,
	MOVEUNIT_NEXTURLEND	= 14,
	MOVEUNIT_PREVURLEND	= 15,
	MOVEUNIT_PREVSENTENCE	= 16,
	MOVEUNIT_NEXTSENTENCE	= 17,
	MOVEUNIT_PREVBLOCK	= 18,
	MOVEUNIT_NEXTBLOCK	= 19,
	MOVEUNIT_ACTION_Max	= 2147483647L
    } 	MOVEUNIT_ACTION;

typedef
enum _PARSE_FLAGS
    {	PARSE_ABSOLUTIFYIE40URLS	= 0x1,
	PARSE_FLAGS_Max	= 2147483647L
    } 	PARSE_FLAGS;

typedef
enum _ELEMENT_TAG_ID
    {	TAGID_NULL	= 0,
	TAGID_UNKNOWN	= 1,
	TAGID_A	= 2,
	TAGID_ACRONYM	= 3,
	TAGID_ADDRESS	= 4,
	TAGID_APPLET	= 5,
	TAGID_AREA	= 6,
	TAGID_B	= 7,
	TAGID_BASE	= 8,
	TAGID_BASEFONT	= 9,
	TAGID_BDO	= 10,
	TAGID_BGSOUND	= 11,
	TAGID_BIG	= 12,
	TAGID_BLINK	= 13,
	TAGID_BLOCKQUOTE	= 14,
	TAGID_BODY	= 15,
	TAGID_BR	= 16,
	TAGID_BUTTON	= 17,
	TAGID_CAPTION	= 18,
	TAGID_CENTER	= 19,
	TAGID_CITE	= 20,
	TAGID_CODE	= 21,
	TAGID_COL	= 22,
	TAGID_COLGROUP	= 23,
	TAGID_COMMENT	= 24,
	TAGID_COMMENT_RAW	= 25,
	TAGID_DD	= 26,
	TAGID_DEL	= 27,
	TAGID_DFN	= 28,
	TAGID_DIR	= 29,
	TAGID_DIV	= 30,
	TAGID_DL	= 31,
	TAGID_DT	= 32,
	TAGID_EM	= 33,
	TAGID_EMBED	= 34,
	TAGID_FIELDSET	= 35,
	TAGID_FONT	= 36,
	TAGID_FORM	= 37,
	TAGID_FRAME	= 38,
	TAGID_FRAMESET	= 39,
	TAGID_GENERIC	= 40,
	TAGID_H1	= 41,
	TAGID_H2	= 42,
	TAGID_H3	= 43,
	TAGID_H4	= 44,
	TAGID_H5	= 45,
	TAGID_H6	= 46,
	TAGID_HEAD	= 47,
	TAGID_HR	= 48,
	TAGID_HTML	= 49,
	TAGID_I	= 50,
	TAGID_IFRAME	= 51,
	TAGID_IMG	= 52,
	TAGID_INPUT	= 53,
	TAGID_INS	= 54,
	TAGID_KBD	= 55,
	TAGID_LABEL	= 56,
	TAGID_LEGEND	= 57,
	TAGID_LI	= 58,
	TAGID_LINK	= 59,
	TAGID_LISTING	= 60,
	TAGID_MAP	= 61,
	TAGID_MARQUEE	= 62,
	TAGID_MENU	= 63,
	TAGID_META	= 64,
	TAGID_NEXTID	= 65,
	TAGID_NOBR	= 66,
	TAGID_NOEMBED	= 67,
	TAGID_NOFRAMES	= 68,
	TAGID_NOSCRIPT	= 69,
	TAGID_OBJECT	= 70,
	TAGID_OL	= 71,
	TAGID_OPTION	= 72,
	TAGID_P	= 73,
	TAGID_PARAM	= 74,
	TAGID_PLAINTEXT	= 75,
	TAGID_PRE	= 76,
	TAGID_Q	= 77,
	TAGID_RP	= 78,
	TAGID_RT	= 79,
	TAGID_RUBY	= 80,
	TAGID_S	= 81,
	TAGID_SAMP	= 82,
	TAGID_SCRIPT	= 83,
	TAGID_SELECT	= 84,
	TAGID_SMALL	= 85,
	TAGID_SPAN	= 86,
	TAGID_STRIKE	= 87,
	TAGID_STRONG	= 88,
	TAGID_STYLE	= 89,
	TAGID_SUB	= 90,
	TAGID_SUP	= 91,
	TAGID_TABLE	= 92,
	TAGID_TBODY	= 93,
	TAGID_TC	= 94,
	TAGID_TD	= 95,
	TAGID_TEXTAREA	= 96,
	TAGID_TFOOT	= 97,
	TAGID_TH	= 98,
	TAGID_THEAD	= 99,
	TAGID_TITLE	= 100,
	TAGID_TR	= 101,
	TAGID_TT	= 102,
	TAGID_U	= 103,
	TAGID_UL	= 104,
	TAGID_VAR	= 105,
	TAGID_WBR	= 106,
	TAGID_XMP	= 107,
	TAGID_ROOT	= 108,
	TAGID_OPTGROUP	= 109,
	TAGID_ABBR	= 110,
	TAGID_COUNT	= 111,
	TAGID_LAST_PREDEFINED	= 10000,
	ELEMENT_TAG_ID_Max	= 2147483647L
    } 	ELEMENT_TAG_ID;

typedef
enum _SELECTION_TYPE
    {	SELECTION_TYPE_None	= 0,
	SELECTION_TYPE_Caret	= 1,
	SELECTION_TYPE_Text	= 2,
	SELECTION_TYPE_Control	= 3,
	SELECTION_TYPE_Max	= 2147483647L
    } 	SELECTION_TYPE;

typedef
enum _SAVE_SEGMENTS_FLAGS
    {	SAVE_SEGMENTS_NoIE4SelectionCompat	= 0x1,
	SAVE_SEGMENTS_FLAGS_Max	= 2147483647L
    } 	SAVE_SEGMENTS_FLAGS;

typedef
enum _CARET_DIRECTION
    {	CARET_DIRECTION_INDETERMINATE	= 0,
	CARET_DIRECTION_SAME	= 1,
	CARET_DIRECTION_BACKWARD	= 2,
	CARET_DIRECTION_FORWARD	= 3,
	CARET_DIRECTION_Max	= 2147483647L
    } 	CARET_DIRECTION;

typedef
enum _LINE_DIRECTION
    {	LINE_DIRECTION_RightToLeft	= 1,
	LINE_DIRECTION_LeftToRight	= 2,
	LINE_DIRECTION_Max	= 2147483647L
    } 	LINE_DIRECTION;

typedef
enum _HT_OPTIONS
    {	HT_OPT_AllowAfterEOL	= 0x1,
	HT_OPTIONS_Max	= 2147483647L
    } 	HT_OPTIONS;

typedef
enum _HT_RESULTS
    {	HT_RESULTS_Glyph	= 0x1,
	HT_RESULTS_Max	= 2147483647L
    } 	HT_RESULTS;

typedef
enum _DISPLAY_MOVEUNIT
    {	DISPLAY_MOVEUNIT_PreviousLine	= 1,
	DISPLAY_MOVEUNIT_NextLine	= 2,
	DISPLAY_MOVEUNIT_CurrentLineStart	= 3,
	DISPLAY_MOVEUNIT_CurrentLineEnd	= 4,
	DISPLAY_MOVEUNIT_TopOfWindow	= 5,
	DISPLAY_MOVEUNIT_BottomOfWindow	= 6,
	DISPLAY_MOVEUNIT_Max	= 2147483647L
    } 	DISPLAY_MOVEUNIT;

typedef
enum _DISPLAY_GRAVITY
    {	DISPLAY_GRAVITY_PreviousLine	= 1,
	DISPLAY_GRAVITY_NextLine	= 2,
	DISPLAY_GRAVITY_Max	= 2147483647L
    } 	DISPLAY_GRAVITY;

typedef
enum _DISPLAY_BREAK
    {	DISPLAY_BREAK_None	= 0,
	DISPLAY_BREAK_Block	= 0x1,
	DISPLAY_BREAK_Break	= 0x2,
	DISPLAY_BREAK_Max	= 2147483647L
    } 	DISPLAY_BREAK;

typedef
enum _COORD_SYSTEM
    {	COORD_SYSTEM_GLOBAL	= 0,
	COORD_SYSTEM_PARENT	= 1,
	COORD_SYSTEM_CONTAINER	= 2,
	COORD_SYSTEM_CONTENT	= 3,
	COORD_SYSTEM_FRAME	= 4,
	COORD_SYSTEM_Max	= 2147483647L
    } 	COORD_SYSTEM;























EXTERN_C const GUID CLSID_HtmlDlgSafeHelper;
EXTERN_C const GUID CLSID_BlockFormats;
EXTERN_C const GUID CLSID_FontNames;
EXTERN_C const GUID CLSID_CHTMLNamespace;
EXTERN_C const GUID CLSID_CHTMLNamespaceCollection;
typedef
enum _HTML_PAINTER
    {	HTMLPAINTER_OPAQUE	= 0x1,
	HTMLPAINTER_TRANSPARENT	= 0x2,
	HTMLPAINTER_ALPHA	= 0x4,
	HTMLPAINTER_COMPLEX	= 0x8,
	HTMLPAINTER_OVERLAY	= 0x10,
	HTMLPAINTER_HITTEST	= 0x20,
	HTMLPAINTER_SURFACE	= 0x100,
	HTMLPAINTER_3DSURFACE	= 0x200,
	HTMLPAINTER_NOBAND	= 0x400,
	HTMLPAINTER_NODC	= 0x1000,
	HTMLPAINTER_NOPHYSICALCLIP	= 0x2000,
	HTMLPAINTER_NOSAVEDC	= 0x4000,
	HTMLPAINTER_SUPPORTS_XFORM	= 0x8000,
	HTMLPAINTER_EXPAND	= 0x10000,
	HTMLPAINTER_NOSCROLLBITS	= 0x20000,
	HTML_PAINTER_Max	= 2147483647L
    } 	HTML_PAINTER;

typedef
enum _HTML_PAINT_ZORDER
    {	HTMLPAINT_ZORDER_NONE	= 0,
	HTMLPAINT_ZORDER_REPLACE_ALL	= 1,
	HTMLPAINT_ZORDER_REPLACE_CONTENT	= 2,
	HTMLPAINT_ZORDER_REPLACE_BACKGROUND	= 3,
	HTMLPAINT_ZORDER_BELOW_CONTENT	= 4,
	HTMLPAINT_ZORDER_BELOW_FLOW	= 5,
	HTMLPAINT_ZORDER_ABOVE_FLOW	= 6,
	HTMLPAINT_ZORDER_ABOVE_CONTENT	= 7,
	HTMLPAINT_ZORDER_WINDOW_TOP	= 8,
	HTML_PAINT_ZORDER_Max	= 2147483647L
    } 	HTML_PAINT_ZORDER;

typedef
enum _HTML_PAINT_DRAW_FLAGS
    {	HTMLPAINT_DRAW_UPDATEREGION	= 0x1,
	HTMLPAINT_DRAW_USE_XFORM	= 0x2,
	HTML_PAINT_DRAW_FLAGS_Max	= 2147483647L
    } 	HTML_PAINT_DRAW_FLAGS;

typedef
enum _HTML_PAINT_EVENT_FLAGS
    {	HTMLPAINT_EVENT_TARGET	= 0x1,
	HTMLPAINT_EVENT_SETCURSOR	= 0x2,
	HTML_PAINT_EVENT_FLAGS_Max	= 2147483647L
    } 	HTML_PAINT_EVENT_FLAGS;

typedef
enum _HTML_PAINT_DRAW_INFO_FLAGS
    {	HTMLPAINT_DRAWINFO_VIEWPORT	= 0x1,
	HTMLPAINT_DRAWINFO_UPDATEREGION	= 0x2,
	HTMLPAINT_DRAWINFO_XFORM	= 0x4,
	HTML_PAINT_DRAW_INFO_FLAGS_Max	= 2147483647L
    } 	HTML_PAINT_DRAW_INFO_FLAGS;

typedef struct _HTML_PAINTER_INFO
    {
    LONG lFlags;
    LONG lZOrder;
    IID iidDrawObject;
    RECT rcExpand;
    } 	HTML_PAINTER_INFO;

typedef struct _HTML_PAINT_XFORM
    {
    FLOAT eM11;
    FLOAT eM12;
    FLOAT eM21;
    FLOAT eM22;
    FLOAT eDx;
    FLOAT eDy;
    } 	HTML_PAINT_XFORM;

typedef struct _HTML_PAINT_DRAW_INFO
    {
    RECT rcViewport;
    HRGN hrgnUpdate;
    HTML_PAINT_XFORM xform;
    } 	HTML_PAINT_DRAW_INFO;



typedef
enum _HTMLDlgFlag
    {	HTMLDlgFlagNo	= 0,
	HTMLDlgFlagOff	= 0,
	HTMLDlgFlag0	= 0,
	HTMLDlgFlagYes	= 1,
	HTMLDlgFlagOn	= 1,
	HTMLDlgFlag1	= 1,
	HTMLDlgFlagNotSet	= -1,
	HTMLDlgFlag_Max	= 2147483647L
    } 	HTMLDlgFlag;

typedef
enum _HTMLDlgBorder
    {	HTMLDlgBorderThin	= 0,
	HTMLDlgBorderThick	= 0x40000L,
	HTMLDlgBorder_Max	= 2147483647L
    } 	HTMLDlgBorder;

typedef
enum _HTMLDlgEdge
    {	HTMLDlgEdgeSunken	= 0,
	HTMLDlgEdgeRaised	= 16,
	HTMLDlgEdge_Max	= 2147483647L
    } 	HTMLDlgEdge;

typedef
enum _HTMLDlgCenter
    {	HTMLDlgCenterNo	= 0,
	HTMLDlgCenterOff	= 0,
	HTMLDlgCenter0	= 0,
	HTMLDlgCenterYes	= 1,
	HTMLDlgCenterOn	= 1,
	HTMLDlgCenter1	= 1,
	HTMLDlgCenterParent	= 1,
	HTMLDlgCenterDesktop	= 2,
	HTMLDlgCenter_Max	= 2147483647L
    } 	HTMLDlgCenter;

EXTERN_C const GUID CLSID_CThreadDialogProcParam;
EXTERN_C const GUID CLSID_CHTMLDlg;
EXTERN_C const GUID CLSID_CHTMLPopup;
typedef
enum _HTMLAppFlag
    {	HTMLAppFlagNo	= 0,
	HTMLAppFlagOff	= 0,
	HTMLAppFlag0	= 0,
	HTMLAppFlagYes	= 1,
	HTMLAppFlagOn	= 1,
	HTMLAppFlag1	= 1,
	HTMLAppFlag_Max	= 2147483647L
    } 	HTMLAppFlag;

typedef
enum _HTMLMinimizeFlag
    {	HTMLMinimizeFlagNo	= 0,
	HTMLMinimizeFlagYes	= 0x20000L,
	HTMLMinimizeFlag_Max	= 2147483647L
    } 	HTMLMinimizeFlag;

typedef
enum _HTMLMaximizeFlag
    {	HTMLMaximizeFlagNo	= 0,
	HTMLMaximizeFlagYes	= 0x10000L,
	HTMLMaximizeFlag_Max	= 2147483647L
    } 	HTMLMaximizeFlag;

typedef
enum _HTMLCaptionFlag
    {	HTMLCaptionFlagNo	= 0,
	HTMLCaptionFlagYes	= 0xc00000L,
	HTMLCaptionFlag_Max	= 2147483647L
    } 	HTMLCaptionFlag;

typedef
enum _HTMLSysMenuFlag
    {	HTMLSysMenuFlagNo	= 0,
	HTMLSysMenuFlagYes	= 0x80000L,
	HTMLSysMenuFlag_Max	= 2147483647L
    } 	HTMLSysMenuFlag;

typedef
enum _HTMLBorder
    {	HTMLBorderNone	= 0,
	HTMLBorderThick	= 0x40000L,
	HTMLBorderDialog	= 0x400000L,
	HTMLBorderThin	= 0x800000L,
	HTMLBorder_Max	= 2147483647L
    } 	HTMLBorder;

typedef
enum _HTMLBorderStyle
    {	HTMLBorderStyleNormal	= 0,
	HTMLBorderStyleRaised	= 0x100L,
	HTMLBorderStyleSunken	= 0x200L,
	HTMLBorderStylecombined	= 0x300L,
	HTMLBorderStyleStatic	= 0x20000L,
	HTMLBorderStyle_Max	= 2147483647L
    } 	HTMLBorderStyle;

typedef
enum _HTMLWindowState
    {	HTMLWindowStateNormal	= 1,
	HTMLWindowStateMaximize	= 3,
	HTMLWindowStateMinimize	= 6,
	HTMLWindowState_Max	= 2147483647L
    } 	HTMLWindowState;

EXTERN_C const GUID CLSID_CAppBehavior;
typedef
enum _BEHAVIOR_EVENT
    {	BEHAVIOREVENT_FIRST	= 0,
	BEHAVIOREVENT_CONTENTREADY	= 0,
	BEHAVIOREVENT_DOCUMENTREADY	= 1,
	BEHAVIOREVENT_APPLYSTYLE	= 2,
	BEHAVIOREVENT_DOCUMENTCONTEXTCHANGE	= 3,
	BEHAVIOREVENT_CONTENTSAVE	= 4,
	BEHAVIOREVENT_LAST	= 4,
	BEHAVIOR_EVENT_Max	= 2147483647L
    } 	BEHAVIOR_EVENT;

typedef
enum _BEHAVIOR_EVENT_FLAGS
    {	BEHAVIOREVENTFLAGS_BUBBLE	= 1,
	BEHAVIOREVENTFLAGS_STANDARDADDITIVE	= 2,
	BEHAVIOR_EVENT_FLAGS_Max	= 2147483647L
    } 	BEHAVIOR_EVENT_FLAGS;

typedef
enum _BEHAVIOR_RENDER_INFO
    {	BEHAVIORRENDERINFO_BEFOREBACKGROUND	= 0x1,
	BEHAVIORRENDERINFO_AFTERBACKGROUND	= 0x2,
	BEHAVIORRENDERINFO_BEFORECONTENT	= 0x4,
	BEHAVIORRENDERINFO_AFTERCONTENT	= 0x8,
	BEHAVIORRENDERINFO_AFTERFOREGROUND	= 0x20,
	BEHAVIORRENDERINFO_ABOVECONTENT	= 0x28,
	BEHAVIORRENDERINFO_ALLLAYERS	= 0xff,
	BEHAVIORRENDERINFO_DISABLEBACKGROUND	= 0x100,
	BEHAVIORRENDERINFO_DISABLENEGATIVEZ	= 0x200,
	BEHAVIORRENDERINFO_DISABLECONTENT	= 0x400,
	BEHAVIORRENDERINFO_DISABLEPOSITIVEZ	= 0x800,
	BEHAVIORRENDERINFO_DISABLEALLLAYERS	= 0xf00,
	BEHAVIORRENDERINFO_HITTESTING	= 0x1000,
	BEHAVIORRENDERINFO_SURFACE	= 0x100000,
	BEHAVIORRENDERINFO_3DSURFACE	= 0x200000,
	BEHAVIOR_RENDER_INFO_Max	= 2147483647L
    } 	BEHAVIOR_RENDER_INFO;

typedef
enum _BEHAVIOR_RELATION
    {	BEHAVIOR_FIRSTRELATION	= 0,
	BEHAVIOR_SAMEELEMENT	= 0,
	BEHAVIOR_PARENT	= 1,
	BEHAVIOR_CHILD	= 2,
	BEHAVIOR_SIBLING	= 3,
	BEHAVIOR_LASTRELATION	= 3,
	BEHAVIOR_RELATION_Max	= 2147483647L
    } 	BEHAVIOR_RELATION;

typedef
enum _BEHAVIOR_LAYOUT_INFO
    {	BEHAVIORLAYOUTINFO_FULLDELEGATION	= 0x1,
	BEHAVIORLAYOUTINFO_MODIFYNATURAL	= 0x2,
	BEHAVIORLAYOUTINFO_MAPSIZE	= 0x4,
	BEHAVIOR_LAYOUT_INFO_Max	= 2147483647L
    } 	BEHAVIOR_LAYOUT_INFO;

typedef
enum _BEHAVIOR_LAYOUT_MODE
    {	BEHAVIORLAYOUTMODE_NATURAL	= 0x1,
	BEHAVIORLAYOUTMODE_MINWIDTH	= 0x2,
	BEHAVIORLAYOUTMODE_MAXWIDTH	= 0x4,
	BEHAVIORLAYOUTMODE_MEDIA_RESOLUTION	= 0x4000,
	BEHAVIORLAYOUTMODE_FINAL_PERCENT	= 0x8000,
	BEHAVIOR_LAYOUT_MODE_Max	= 2147483647L
    } 	BEHAVIOR_LAYOUT_MODE;

typedef
enum _ELEMENTDESCRIPTOR_FLAGS
    {	ELEMENTDESCRIPTORFLAGS_LITERAL	= 1,
	ELEMENTDESCRIPTORFLAGS_NESTED_LITERAL	= 2,
	ELEMENTDESCRIPTOR_FLAGS_Max	= 2147483647L
    } 	ELEMENTDESCRIPTOR_FLAGS;

typedef
enum _ELEMENTNAMESPACE_FLAGS
    {	ELEMENTNAMESPACEFLAGS_ALLOWANYTAG	= 0x1,
	ELEMENTNAMESPACEFLAGS_QUERYFORUNKNOWNTAGS	= 0x2,
	ELEMENTNAMESPACE_FLAGS_Max	= 2147483647L
    } 	ELEMENTNAMESPACE_FLAGS;





EXTERN_C const IID LIBID_MSHTML;

#ifndef __IHTMLEventObj_INTERFACE_DEFINED__
#define __IHTMLEventObj_INTERFACE_DEFINED__

/* interface IHTMLEventObj */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLEventObj;


    MIDL_INTERFACE("3050f32d-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLEventObj : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_srcElement(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElement **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_altKey(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ctrlKey(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_shiftKey(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_returnValue(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_returnValue(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_cancelBubble(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_cancelBubble(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_fromElement(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElement **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_toElement(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElement **p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_keyCode(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_keyCode(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_button(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_type(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_qualifier(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_reason(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_x(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_y(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_clientX(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_clientY(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_offsetX(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_offsetY(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_screenX(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_screenY(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_srcFilter(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **p) = 0;

    };





#endif 	/* __IHTMLEventObj_INTERFACE_DEFINED__ */


#ifndef __IElementBehaviorSite_INTERFACE_DEFINED__
#define __IElementBehaviorSite_INTERFACE_DEFINED__

/* interface IElementBehaviorSite */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IElementBehaviorSite;


    MIDL_INTERFACE("3050f427-98b5-11cf-bb82-00aa00bdce0b")
    IElementBehaviorSite : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetElement(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElement **ppElement) = 0;

        virtual HRESULT STDMETHODCALLTYPE RegisterNotification(
            /* [in] */ LONG lEvent) = 0;

    };





#endif 	/* __IElementBehaviorSite_INTERFACE_DEFINED__ */


#ifndef __IElementBehavior_INTERFACE_DEFINED__
#define __IElementBehavior_INTERFACE_DEFINED__

/* interface IElementBehavior */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IElementBehavior;


    MIDL_INTERFACE("3050f425-98b5-11cf-bb82-00aa00bdce0b")
    IElementBehavior : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Init(
            /* [in] */ __RPC__in_opt IElementBehaviorSite *pBehaviorSite) = 0;

        virtual HRESULT STDMETHODCALLTYPE Notify(
            /* [in] */ LONG lEvent,
            /* [out][in] */ __RPC__inout VARIANT *pVar) = 0;

        virtual HRESULT STDMETHODCALLTYPE Detach( void) = 0;

    };





#endif 	/* __IElementBehavior_INTERFACE_DEFINED__ */


#ifndef __IElementBehaviorFactory_INTERFACE_DEFINED__
#define __IElementBehaviorFactory_INTERFACE_DEFINED__

/* interface IElementBehaviorFactory */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IElementBehaviorFactory;


    MIDL_INTERFACE("3050f429-98b5-11cf-bb82-00aa00bdce0b")
    IElementBehaviorFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE FindBehavior(
            /* [in] */ __RPC__in BSTR bstrBehavior,
            /* [in] */ __RPC__in BSTR bstrBehaviorUrl,
            /* [in] */ __RPC__in_opt IElementBehaviorSite *pSite,
            /* [out][retval] */ __RPC__deref_out_opt IElementBehavior **ppBehavior) = 0;

    };





#endif 	/* __IElementBehaviorFactory_INTERFACE_DEFINED__ */


#ifndef __IElementBehaviorSiteOM_INTERFACE_DEFINED__
#define __IElementBehaviorSiteOM_INTERFACE_DEFINED__

/* interface IElementBehaviorSiteOM */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IElementBehaviorSiteOM;


    MIDL_INTERFACE("3050f489-98b5-11cf-bb82-00aa00bdce0b")
    IElementBehaviorSiteOM : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RegisterEvent(
            /* [in] */ __RPC__in LPOLESTR pchEvent,
            /* [in] */ LONG lFlags,
            /* [out][retval] */ __RPC__out LONG *plCookie) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetEventCookie(
            /* [in] */ __RPC__in LPOLESTR pchEvent,
            /* [out][retval] */ __RPC__out LONG *plCookie) = 0;

        virtual HRESULT STDMETHODCALLTYPE FireEvent(
            /* [in] */ LONG lCookie,
            /* [in] */ __RPC__in_opt IHTMLEventObj *pEventObject) = 0;

        virtual HRESULT STDMETHODCALLTYPE CreateEventObject(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLEventObj **ppEventObject) = 0;

        virtual HRESULT STDMETHODCALLTYPE RegisterName(
            /* [in] */ __RPC__in LPOLESTR pchName) = 0;

        virtual HRESULT STDMETHODCALLTYPE RegisterUrn(
            /* [in] */ __RPC__in LPOLESTR pchUrn) = 0;

    };





#endif 	/* __IElementBehaviorSiteOM_INTERFACE_DEFINED__ */


#ifndef __IElementBehaviorRender_INTERFACE_DEFINED__
#define __IElementBehaviorRender_INTERFACE_DEFINED__

/* interface IElementBehaviorRender */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IElementBehaviorRender;


    MIDL_INTERFACE("3050f4aa-98b5-11cf-bb82-00aa00bdce0b")
    IElementBehaviorRender : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Draw(
            /* [in] */ __RPC__in HDC hdc,
            /* [in] */ LONG lLayer,
            /* [in] */ __RPC__in RECT *pRect,
            /* [in] */ __RPC__in_opt IUnknown *pReserved) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetRenderInfo(
            /* [out][retval] */ __RPC__out LONG *plRenderInfo) = 0;

        virtual HRESULT STDMETHODCALLTYPE HitTestPoint(
            /* [in] */ __RPC__in POINT *pPoint,
            /* [in] */ __RPC__in_opt IUnknown *pReserved,
            /* [out][retval] */ __RPC__out BOOL *pbHit) = 0;

    };





#endif 	/* __IElementBehaviorRender_INTERFACE_DEFINED__ */


#ifndef __IElementBehaviorSiteRender_INTERFACE_DEFINED__
#define __IElementBehaviorSiteRender_INTERFACE_DEFINED__

/* interface IElementBehaviorSiteRender */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IElementBehaviorSiteRender;


    MIDL_INTERFACE("3050f4a7-98b5-11cf-bb82-00aa00bdce0b")
    IElementBehaviorSiteRender : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invalidate(
            /* [in] */ __RPC__in RECT *pRect) = 0;

        virtual HRESULT STDMETHODCALLTYPE InvalidateRenderInfo( void) = 0;

        virtual HRESULT STDMETHODCALLTYPE InvalidateStyle( void) = 0;

    };





#endif 	/* __IElementBehaviorSiteRender_INTERFACE_DEFINED__ */


#ifndef __IHTMLStyle_INTERFACE_DEFINED__
#define __IHTMLStyle_INTERFACE_DEFINED__

/* interface IHTMLStyle */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLStyle;


    MIDL_INTERFACE("3050f25e-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLStyle : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_fontFamily(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_fontFamily(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_fontStyle(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_fontStyle(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_fontVariant(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_fontVariant(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_fontWeight(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_fontWeight(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_fontSize(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_fontSize(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_font(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_font(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_color(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_color(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_background(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_background(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_backgroundColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_backgroundColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_backgroundImage(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_backgroundImage(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_backgroundRepeat(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_backgroundRepeat(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_backgroundAttachment(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_backgroundAttachment(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_backgroundPosition(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_backgroundPosition(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_backgroundPositionX(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_backgroundPositionX(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_backgroundPositionY(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_backgroundPositionY(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_wordSpacing(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_wordSpacing(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_letterSpacing(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_letterSpacing(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textDecoration(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textDecoration(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textDecorationNone(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textDecorationNone(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textDecorationUnderline(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textDecorationUnderline(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textDecorationOverline(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textDecorationOverline(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textDecorationLineThrough(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textDecorationLineThrough(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textDecorationBlink(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textDecorationBlink(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_verticalAlign(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_verticalAlign(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textTransform(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textTransform(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textAlign(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textAlign(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textIndent(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textIndent(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_lineHeight(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_lineHeight(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_marginTop(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_marginTop(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_marginRight(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_marginRight(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_marginBottom(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_marginBottom(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_marginLeft(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_marginLeft(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_margin(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_margin(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_paddingTop(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_paddingTop(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_paddingRight(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_paddingRight(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_paddingBottom(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_paddingBottom(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_paddingLeft(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_paddingLeft(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_padding(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_padding(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_border(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_border(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderTop(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderTop(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderRight(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderRight(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderBottom(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderBottom(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderLeft(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderLeft(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderColor(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderColor(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderTopColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderTopColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderRightColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderRightColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderBottomColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderBottomColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderLeftColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderLeftColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderWidth(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderWidth(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderTopWidth(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderTopWidth(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderRightWidth(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderRightWidth(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderBottomWidth(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderBottomWidth(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderLeftWidth(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderLeftWidth(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderStyle(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderStyle(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderTopStyle(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderTopStyle(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderRightStyle(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderRightStyle(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderBottomStyle(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderBottomStyle(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderLeftStyle(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderLeftStyle(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_width(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_width(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_height(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_height(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_styleFloat(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_styleFloat(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_clear(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_clear(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_display(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_display(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_visibility(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_visibility(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_listStyleType(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_listStyleType(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_listStylePosition(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_listStylePosition(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_listStyleImage(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_listStyleImage(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_listStyle(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_listStyle(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_whiteSpace(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_whiteSpace(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_top(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_top(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_left(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_left(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_position(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_zIndex(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_zIndex(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_overflow(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_overflow(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_pageBreakBefore(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_pageBreakBefore(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_pageBreakAfter(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_pageBreakAfter(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_cssText(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_cssText(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [hidden][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_pixelTop(
            /* [in] */ long v) = 0;

        virtual /* [hidden][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_pixelTop(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [hidden][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_pixelLeft(
            /* [in] */ long v) = 0;

        virtual /* [hidden][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_pixelLeft(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [hidden][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_pixelWidth(
            /* [in] */ long v) = 0;

        virtual /* [hidden][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_pixelWidth(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [hidden][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_pixelHeight(
            /* [in] */ long v) = 0;

        virtual /* [hidden][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_pixelHeight(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_posTop(
            /* [in] */ float v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_posTop(
            /* [out][retval] */ __RPC__out float *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_posLeft(
            /* [in] */ float v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_posLeft(
            /* [out][retval] */ __RPC__out float *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_posWidth(
            /* [in] */ float v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_posWidth(
            /* [out][retval] */ __RPC__out float *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_posHeight(
            /* [in] */ float v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_posHeight(
            /* [out][retval] */ __RPC__out float *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_cursor(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_cursor(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_clip(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_clip(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_filter(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_filter(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setAttribute(
            /* [in] */ __RPC__in BSTR strAttributeName,
            /* [in] */ VARIANT AttributeValue,
            /* [in][defaultvalue] */ LONG lFlags = 1) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getAttribute(
            /* [in] */ __RPC__in BSTR strAttributeName,
            /* [in][defaultvalue] */ LONG lFlags,
            /* [out][retval] */ __RPC__out VARIANT *AttributeValue) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE removeAttribute(
            /* [in] */ __RPC__in BSTR strAttributeName,
            /* [in][defaultvalue] */ LONG lFlags,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfSuccess) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE toString(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *String) = 0;

    };




/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_get_styleFloat_Proxy(
    IHTMLStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLStyle_get_styleFloat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_put_clear_Proxy(
    IHTMLStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLStyle_put_clear_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_get_clear_Proxy(
    IHTMLStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLStyle_get_clear_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_put_display_Proxy(
    IHTMLStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLStyle_put_display_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_get_display_Proxy(
    IHTMLStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLStyle_get_display_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_put_visibility_Proxy(
    IHTMLStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLStyle_put_visibility_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_get_visibility_Proxy(
    IHTMLStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLStyle_get_visibility_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_put_listStyleType_Proxy(
    IHTMLStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLStyle_put_listStyleType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_get_listStyleType_Proxy(
    IHTMLStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLStyle_get_listStyleType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_put_listStylePosition_Proxy(
    IHTMLStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLStyle_put_listStylePosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_get_listStylePosition_Proxy(
    IHTMLStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLStyle_get_listStylePosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_put_listStyleImage_Proxy(
    IHTMLStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLStyle_put_listStyleImage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_get_listStyleImage_Proxy(
    IHTMLStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLStyle_get_listStyleImage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [nonbrowsable][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_put_listStyle_Proxy(
    IHTMLStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLStyle_put_listStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [nonbrowsable][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_get_listStyle_Proxy(
    IHTMLStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLStyle_get_listStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_put_whiteSpace_Proxy(
    IHTMLStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLStyle_put_whiteSpace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_get_whiteSpace_Proxy(
    IHTMLStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLStyle_get_whiteSpace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_put_top_Proxy(
    IHTMLStyle * This,
    /* [in] */ VARIANT v);


void __RPC_STUB IHTMLStyle_put_top_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_get_top_Proxy(
    IHTMLStyle * This,
    /* [out][retval] */ __RPC__out VARIANT *p);


void __RPC_STUB IHTMLStyle_get_top_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_put_left_Proxy(
    IHTMLStyle * This,
    /* [in] */ VARIANT v);


void __RPC_STUB IHTMLStyle_put_left_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_get_left_Proxy(
    IHTMLStyle * This,
    /* [out][retval] */ __RPC__out VARIANT *p);


void __RPC_STUB IHTMLStyle_get_left_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_get_position_Proxy(
    IHTMLStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLStyle_get_position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_put_zIndex_Proxy(
    IHTMLStyle * This,
    /* [in] */ VARIANT v);


void __RPC_STUB IHTMLStyle_put_zIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_get_zIndex_Proxy(
    IHTMLStyle * This,
    /* [out][retval] */ __RPC__out VARIANT *p);


void __RPC_STUB IHTMLStyle_get_zIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_put_overflow_Proxy(
    IHTMLStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLStyle_put_overflow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_get_overflow_Proxy(
    IHTMLStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLStyle_get_overflow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_put_pageBreakBefore_Proxy(
    IHTMLStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLStyle_put_pageBreakBefore_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_get_pageBreakBefore_Proxy(
    IHTMLStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLStyle_get_pageBreakBefore_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_put_pageBreakAfter_Proxy(
    IHTMLStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLStyle_put_pageBreakAfter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_get_pageBreakAfter_Proxy(
    IHTMLStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLStyle_get_pageBreakAfter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [nonbrowsable][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_put_cssText_Proxy(
    IHTMLStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLStyle_put_cssText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [nonbrowsable][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_get_cssText_Proxy(
    IHTMLStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLStyle_get_cssText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_put_pixelTop_Proxy(
    IHTMLStyle * This,
    /* [in] */ long v);


void __RPC_STUB IHTMLStyle_put_pixelTop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_get_pixelTop_Proxy(
    IHTMLStyle * This,
    /* [out][retval] */ __RPC__out long *p);


void __RPC_STUB IHTMLStyle_get_pixelTop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_put_pixelLeft_Proxy(
    IHTMLStyle * This,
    /* [in] */ long v);


void __RPC_STUB IHTMLStyle_put_pixelLeft_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_get_pixelLeft_Proxy(
    IHTMLStyle * This,
    /* [out][retval] */ __RPC__out long *p);


void __RPC_STUB IHTMLStyle_get_pixelLeft_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_put_pixelWidth_Proxy(
    IHTMLStyle * This,
    /* [in] */ long v);


void __RPC_STUB IHTMLStyle_put_pixelWidth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_get_pixelWidth_Proxy(
    IHTMLStyle * This,
    /* [out][retval] */ __RPC__out long *p);


void __RPC_STUB IHTMLStyle_get_pixelWidth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_put_pixelHeight_Proxy(
    IHTMLStyle * This,
    /* [in] */ long v);


void __RPC_STUB IHTMLStyle_put_pixelHeight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_get_pixelHeight_Proxy(
    IHTMLStyle * This,
    /* [out][retval] */ __RPC__out long *p);


void __RPC_STUB IHTMLStyle_get_pixelHeight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_put_posTop_Proxy(
    IHTMLStyle * This,
    /* [in] */ float v);


void __RPC_STUB IHTMLStyle_put_posTop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_get_posTop_Proxy(
    IHTMLStyle * This,
    /* [out][retval] */ __RPC__out float *p);


void __RPC_STUB IHTMLStyle_get_posTop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_put_posLeft_Proxy(
    IHTMLStyle * This,
    /* [in] */ float v);


void __RPC_STUB IHTMLStyle_put_posLeft_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_get_posLeft_Proxy(
    IHTMLStyle * This,
    /* [out][retval] */ __RPC__out float *p);


void __RPC_STUB IHTMLStyle_get_posLeft_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_put_posWidth_Proxy(
    IHTMLStyle * This,
    /* [in] */ float v);


void __RPC_STUB IHTMLStyle_put_posWidth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_get_posWidth_Proxy(
    IHTMLStyle * This,
    /* [out][retval] */ __RPC__out float *p);


void __RPC_STUB IHTMLStyle_get_posWidth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_put_posHeight_Proxy(
    IHTMLStyle * This,
    /* [in] */ float v);


void __RPC_STUB IHTMLStyle_put_posHeight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_get_posHeight_Proxy(
    IHTMLStyle * This,
    /* [out][retval] */ __RPC__out float *p);


void __RPC_STUB IHTMLStyle_get_posHeight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_put_cursor_Proxy(
    IHTMLStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLStyle_put_cursor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_get_cursor_Proxy(
    IHTMLStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLStyle_get_cursor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_put_clip_Proxy(
    IHTMLStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLStyle_put_clip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_get_clip_Proxy(
    IHTMLStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLStyle_get_clip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_put_filter_Proxy(
    IHTMLStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLStyle_put_filter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_get_filter_Proxy(
    IHTMLStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLStyle_get_filter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_setAttribute_Proxy(
    IHTMLStyle * This,
    /* [in] */ __RPC__in BSTR strAttributeName,
    /* [in] */ VARIANT AttributeValue,
    /* [in][defaultvalue] */ LONG lFlags);


void __RPC_STUB IHTMLStyle_setAttribute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_getAttribute_Proxy(
    IHTMLStyle * This,
    /* [in] */ __RPC__in BSTR strAttributeName,
    /* [in][defaultvalue] */ LONG lFlags,
    /* [out][retval] */ __RPC__out VARIANT *AttributeValue);


void __RPC_STUB IHTMLStyle_getAttribute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_removeAttribute_Proxy(
    IHTMLStyle * This,
    /* [in] */ __RPC__in BSTR strAttributeName,
    /* [in][defaultvalue] */ LONG lFlags,
    /* [out][retval] */ __RPC__out VARIANT_BOOL *pfSuccess);


void __RPC_STUB IHTMLStyle_removeAttribute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHTMLStyle_toString_Proxy(
    IHTMLStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *String);


void __RPC_STUB IHTMLStyle_toString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IHTMLStyle_INTERFACE_DEFINED__ */


#ifndef __IHTMLStyle2_INTERFACE_DEFINED__
#define __IHTMLStyle2_INTERFACE_DEFINED__

/* interface IHTMLStyle2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLStyle2;


    MIDL_INTERFACE("3050f4a2-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLStyle2 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_tableLayout(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_tableLayout(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderCollapse(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderCollapse(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_direction(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_direction(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_behavior(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_behavior(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setExpression(
            /* [in] */ __RPC__in BSTR propname,
            /* [in] */ __RPC__in BSTR expression,
            /* [in][defaultvalue] */ __RPC__in BSTR language = L"") = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getExpression(
            /* [in] */ __RPC__in BSTR propname,
            /* [out][retval] */ __RPC__out VARIANT *expression) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE removeExpression(
            /* [in] */ __RPC__in BSTR propname,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfSuccess) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_position(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_position(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_unicodeBidi(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_unicodeBidi(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_bottom(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_bottom(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_right(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_right(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [hidden][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_pixelBottom(
            /* [in] */ long v) = 0;

        virtual /* [hidden][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_pixelBottom(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [hidden][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_pixelRight(
            /* [in] */ long v) = 0;

        virtual /* [hidden][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_pixelRight(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_posBottom(
            /* [in] */ float v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_posBottom(
            /* [out][retval] */ __RPC__out float *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_posRight(
            /* [in] */ float v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_posRight(
            /* [out][retval] */ __RPC__out float *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_imeMode(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_imeMode(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_rubyAlign(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_rubyAlign(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_rubyPosition(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_rubyPosition(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_rubyOverhang(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_rubyOverhang(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_layoutGridChar(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_layoutGridChar(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_layoutGridLine(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_layoutGridLine(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_layoutGridMode(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_layoutGridMode(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_layoutGridType(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_layoutGridType(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_layoutGrid(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_layoutGrid(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_wordBreak(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_wordBreak(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_lineBreak(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_lineBreak(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textJustify(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textJustify(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textJustifyTrim(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textJustifyTrim(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textKashida(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textKashida(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textAutospace(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textAutospace(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_overflowX(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_overflowX(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_overflowY(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_overflowY(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_accelerator(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_accelerator(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLStyle2_INTERFACE_DEFINED__ */


#ifndef __IHTMLStyle3_INTERFACE_DEFINED__
#define __IHTMLStyle3_INTERFACE_DEFINED__

/* interface IHTMLStyle3 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLStyle3;


    MIDL_INTERFACE("3050f656-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLStyle3 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_layoutFlow(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_layoutFlow(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_zoom(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_zoom(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_wordWrap(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_wordWrap(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textUnderlinePosition(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textUnderlinePosition(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_scrollbarBaseColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollbarBaseColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_scrollbarFaceColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollbarFaceColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_scrollbar3dLightColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollbar3dLightColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_scrollbarShadowColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollbarShadowColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_scrollbarHighlightColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollbarHighlightColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_scrollbarDarkShadowColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollbarDarkShadowColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_scrollbarArrowColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollbarArrowColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_scrollbarTrackColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollbarTrackColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_writingMode(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_writingMode(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textAlignLast(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textAlignLast(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textKashidaSpace(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textKashidaSpace(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

    };





#endif 	/* __IHTMLStyle3_INTERFACE_DEFINED__ */


#ifndef __IHTMLStyle4_INTERFACE_DEFINED__
#define __IHTMLStyle4_INTERFACE_DEFINED__

/* interface IHTMLStyle4 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLStyle4;


    MIDL_INTERFACE("3050f816-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLStyle4 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textOverflow(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textOverflow(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_minHeight(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_minHeight(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

    };





#endif 	/* __IHTMLStyle4_INTERFACE_DEFINED__ */


#ifndef __IHTMLStyle5_INTERFACE_DEFINED__
#define __IHTMLStyle5_INTERFACE_DEFINED__

/* interface IHTMLStyle5 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLStyle5;


    MIDL_INTERFACE("3050f33a-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLStyle5 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_msInterpolationMode(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_msInterpolationMode(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_maxHeight(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_maxHeight(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_minWidth(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_minWidth(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_maxWidth(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_maxWidth(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

    };





#endif 	/* __IHTMLStyle5_INTERFACE_DEFINED__ */


#ifndef __IHTMLRuleStyle_INTERFACE_DEFINED__
#define __IHTMLRuleStyle_INTERFACE_DEFINED__

/* interface IHTMLRuleStyle */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLRuleStyle;


    MIDL_INTERFACE("3050f3cf-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLRuleStyle : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_fontFamily(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_fontFamily(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_fontStyle(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_fontStyle(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_fontVariant(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_fontVariant(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_fontWeight(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_fontWeight(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_fontSize(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_fontSize(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_font(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_font(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_color(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_color(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_background(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_background(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_backgroundColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_backgroundColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_backgroundImage(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_backgroundImage(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_backgroundRepeat(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_backgroundRepeat(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_backgroundAttachment(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_backgroundAttachment(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_backgroundPosition(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_backgroundPosition(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_backgroundPositionX(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_backgroundPositionX(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_backgroundPositionY(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_backgroundPositionY(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_wordSpacing(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_wordSpacing(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_letterSpacing(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_letterSpacing(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textDecoration(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textDecoration(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textDecorationNone(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textDecorationNone(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textDecorationUnderline(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textDecorationUnderline(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textDecorationOverline(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textDecorationOverline(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textDecorationLineThrough(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textDecorationLineThrough(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textDecorationBlink(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textDecorationBlink(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_verticalAlign(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_verticalAlign(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textTransform(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textTransform(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textAlign(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textAlign(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textIndent(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textIndent(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_lineHeight(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_lineHeight(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_marginTop(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_marginTop(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_marginRight(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_marginRight(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_marginBottom(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_marginBottom(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_marginLeft(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_marginLeft(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_margin(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_margin(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_paddingTop(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_paddingTop(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_paddingRight(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_paddingRight(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_paddingBottom(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_paddingBottom(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_paddingLeft(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_paddingLeft(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_padding(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_padding(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_border(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_border(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderTop(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderTop(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderRight(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderRight(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderBottom(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderBottom(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderLeft(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderLeft(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderColor(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderColor(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderTopColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderTopColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderRightColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderRightColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderBottomColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderBottomColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderLeftColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderLeftColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderWidth(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderWidth(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderTopWidth(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderTopWidth(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderRightWidth(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderRightWidth(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderBottomWidth(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderBottomWidth(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderLeftWidth(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderLeftWidth(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderStyle(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderStyle(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderTopStyle(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderTopStyle(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderRightStyle(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderRightStyle(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderBottomStyle(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderBottomStyle(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderLeftStyle(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderLeftStyle(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_width(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_width(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_height(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_height(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_styleFloat(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_styleFloat(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_clear(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_clear(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_display(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_display(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_visibility(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_visibility(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_listStyleType(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_listStyleType(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_listStylePosition(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_listStylePosition(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_listStyleImage(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_listStyleImage(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_listStyle(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_listStyle(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_whiteSpace(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_whiteSpace(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_top(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_top(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_left(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_left(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_position(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_zIndex(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_zIndex(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_overflow(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_overflow(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_pageBreakBefore(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_pageBreakBefore(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_pageBreakAfter(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_pageBreakAfter(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_cssText(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_cssText(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_cursor(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_cursor(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_clip(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_clip(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_filter(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_filter(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setAttribute(
            /* [in] */ __RPC__in BSTR strAttributeName,
            /* [in] */ VARIANT AttributeValue,
            /* [in][defaultvalue] */ LONG lFlags = 1) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getAttribute(
            /* [in] */ __RPC__in BSTR strAttributeName,
            /* [in][defaultvalue] */ LONG lFlags,
            /* [out][retval] */ __RPC__out VARIANT *AttributeValue) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE removeAttribute(
            /* [in] */ __RPC__in BSTR strAttributeName,
            /* [in][defaultvalue] */ LONG lFlags,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfSuccess) = 0;

    };




/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_get_styleFloat_Proxy(
    IHTMLRuleStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLRuleStyle_get_styleFloat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_put_clear_Proxy(
    IHTMLRuleStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLRuleStyle_put_clear_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_get_clear_Proxy(
    IHTMLRuleStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLRuleStyle_get_clear_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_put_display_Proxy(
    IHTMLRuleStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLRuleStyle_put_display_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_get_display_Proxy(
    IHTMLRuleStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLRuleStyle_get_display_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_put_visibility_Proxy(
    IHTMLRuleStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLRuleStyle_put_visibility_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_get_visibility_Proxy(
    IHTMLRuleStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLRuleStyle_get_visibility_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_put_listStyleType_Proxy(
    IHTMLRuleStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLRuleStyle_put_listStyleType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_get_listStyleType_Proxy(
    IHTMLRuleStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLRuleStyle_get_listStyleType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_put_listStylePosition_Proxy(
    IHTMLRuleStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLRuleStyle_put_listStylePosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_get_listStylePosition_Proxy(
    IHTMLRuleStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLRuleStyle_get_listStylePosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_put_listStyleImage_Proxy(
    IHTMLRuleStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLRuleStyle_put_listStyleImage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_get_listStyleImage_Proxy(
    IHTMLRuleStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLRuleStyle_get_listStyleImage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [nonbrowsable][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_put_listStyle_Proxy(
    IHTMLRuleStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLRuleStyle_put_listStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [nonbrowsable][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_get_listStyle_Proxy(
    IHTMLRuleStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLRuleStyle_get_listStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_put_whiteSpace_Proxy(
    IHTMLRuleStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLRuleStyle_put_whiteSpace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_get_whiteSpace_Proxy(
    IHTMLRuleStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLRuleStyle_get_whiteSpace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_put_top_Proxy(
    IHTMLRuleStyle * This,
    /* [in] */ VARIANT v);


void __RPC_STUB IHTMLRuleStyle_put_top_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_get_top_Proxy(
    IHTMLRuleStyle * This,
    /* [out][retval] */ __RPC__out VARIANT *p);


void __RPC_STUB IHTMLRuleStyle_get_top_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_put_left_Proxy(
    IHTMLRuleStyle * This,
    /* [in] */ VARIANT v);


void __RPC_STUB IHTMLRuleStyle_put_left_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_get_left_Proxy(
    IHTMLRuleStyle * This,
    /* [out][retval] */ __RPC__out VARIANT *p);


void __RPC_STUB IHTMLRuleStyle_get_left_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_get_position_Proxy(
    IHTMLRuleStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLRuleStyle_get_position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_put_zIndex_Proxy(
    IHTMLRuleStyle * This,
    /* [in] */ VARIANT v);


void __RPC_STUB IHTMLRuleStyle_put_zIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_get_zIndex_Proxy(
    IHTMLRuleStyle * This,
    /* [out][retval] */ __RPC__out VARIANT *p);


void __RPC_STUB IHTMLRuleStyle_get_zIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_put_overflow_Proxy(
    IHTMLRuleStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLRuleStyle_put_overflow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_get_overflow_Proxy(
    IHTMLRuleStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLRuleStyle_get_overflow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_put_pageBreakBefore_Proxy(
    IHTMLRuleStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLRuleStyle_put_pageBreakBefore_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_get_pageBreakBefore_Proxy(
    IHTMLRuleStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLRuleStyle_get_pageBreakBefore_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_put_pageBreakAfter_Proxy(
    IHTMLRuleStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLRuleStyle_put_pageBreakAfter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_get_pageBreakAfter_Proxy(
    IHTMLRuleStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLRuleStyle_get_pageBreakAfter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [nonbrowsable][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_put_cssText_Proxy(
    IHTMLRuleStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLRuleStyle_put_cssText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [nonbrowsable][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_get_cssText_Proxy(
    IHTMLRuleStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLRuleStyle_get_cssText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_put_cursor_Proxy(
    IHTMLRuleStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLRuleStyle_put_cursor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_get_cursor_Proxy(
    IHTMLRuleStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLRuleStyle_get_cursor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_put_clip_Proxy(
    IHTMLRuleStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLRuleStyle_put_clip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_get_clip_Proxy(
    IHTMLRuleStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLRuleStyle_get_clip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_put_filter_Proxy(
    IHTMLRuleStyle * This,
    /* [in] */ __RPC__in BSTR v);


void __RPC_STUB IHTMLRuleStyle_put_filter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_get_filter_Proxy(
    IHTMLRuleStyle * This,
    /* [out][retval] */ __RPC__deref_out_opt BSTR *p);


void __RPC_STUB IHTMLRuleStyle_get_filter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_setAttribute_Proxy(
    IHTMLRuleStyle * This,
    /* [in] */ __RPC__in BSTR strAttributeName,
    /* [in] */ VARIANT AttributeValue,
    /* [in][defaultvalue] */ LONG lFlags);


void __RPC_STUB IHTMLRuleStyle_setAttribute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_getAttribute_Proxy(
    IHTMLRuleStyle * This,
    /* [in] */ __RPC__in BSTR strAttributeName,
    /* [in][defaultvalue] */ LONG lFlags,
    /* [out][retval] */ __RPC__out VARIANT *AttributeValue);


void __RPC_STUB IHTMLRuleStyle_getAttribute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHTMLRuleStyle_removeAttribute_Proxy(
    IHTMLRuleStyle * This,
    /* [in] */ __RPC__in BSTR strAttributeName,
    /* [in][defaultvalue] */ LONG lFlags,
    /* [out][retval] */ __RPC__out VARIANT_BOOL *pfSuccess);


void __RPC_STUB IHTMLRuleStyle_removeAttribute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IHTMLRuleStyle_INTERFACE_DEFINED__ */


#ifndef __IHTMLRuleStyle2_INTERFACE_DEFINED__
#define __IHTMLRuleStyle2_INTERFACE_DEFINED__

/* interface IHTMLRuleStyle2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLRuleStyle2;


    MIDL_INTERFACE("3050f4ac-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLRuleStyle2 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_tableLayout(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_tableLayout(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_borderCollapse(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderCollapse(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_direction(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_direction(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_behavior(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_behavior(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_position(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_position(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_unicodeBidi(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_unicodeBidi(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_bottom(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_bottom(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_right(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_right(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [hidden][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_pixelBottom(
            /* [in] */ long v) = 0;

        virtual /* [hidden][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_pixelBottom(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [hidden][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_pixelRight(
            /* [in] */ long v) = 0;

        virtual /* [hidden][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_pixelRight(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_posBottom(
            /* [in] */ float v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_posBottom(
            /* [out][retval] */ __RPC__out float *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_posRight(
            /* [in] */ float v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_posRight(
            /* [out][retval] */ __RPC__out float *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_imeMode(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_imeMode(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_rubyAlign(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_rubyAlign(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_rubyPosition(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_rubyPosition(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_rubyOverhang(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_rubyOverhang(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_layoutGridChar(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_layoutGridChar(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_layoutGridLine(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_layoutGridLine(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_layoutGridMode(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_layoutGridMode(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_layoutGridType(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_layoutGridType(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_layoutGrid(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [nonbrowsable][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_layoutGrid(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textAutospace(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textAutospace(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_wordBreak(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_wordBreak(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_lineBreak(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_lineBreak(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textJustify(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textJustify(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textJustifyTrim(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textJustifyTrim(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textKashida(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textKashida(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_overflowX(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_overflowX(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_overflowY(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_overflowY(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_accelerator(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_accelerator(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLRuleStyle2_INTERFACE_DEFINED__ */


#ifndef __IHTMLRuleStyle3_INTERFACE_DEFINED__
#define __IHTMLRuleStyle3_INTERFACE_DEFINED__

/* interface IHTMLRuleStyle3 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLRuleStyle3;


    MIDL_INTERFACE("3050f657-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLRuleStyle3 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_layoutFlow(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_layoutFlow(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_zoom(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_zoom(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_wordWrap(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_wordWrap(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textUnderlinePosition(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textUnderlinePosition(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_scrollbarBaseColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollbarBaseColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_scrollbarFaceColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollbarFaceColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_scrollbar3dLightColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollbar3dLightColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_scrollbarShadowColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollbarShadowColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_scrollbarHighlightColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollbarHighlightColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_scrollbarDarkShadowColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollbarDarkShadowColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_scrollbarArrowColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollbarArrowColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_scrollbarTrackColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollbarTrackColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_writingMode(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_writingMode(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textAlignLast(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textAlignLast(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textKashidaSpace(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textKashidaSpace(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

    };





#endif 	/* __IHTMLRuleStyle3_INTERFACE_DEFINED__ */


#ifndef __IHTMLRuleStyle4_INTERFACE_DEFINED__
#define __IHTMLRuleStyle4_INTERFACE_DEFINED__

/* interface IHTMLRuleStyle4 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLRuleStyle4;


    MIDL_INTERFACE("3050f817-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLRuleStyle4 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textOverflow(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textOverflow(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_minHeight(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_minHeight(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

    };





#endif 	/* __IHTMLRuleStyle4_INTERFACE_DEFINED__ */


#ifndef __IHTMLRuleStyle5_INTERFACE_DEFINED__
#define __IHTMLRuleStyle5_INTERFACE_DEFINED__

/* interface IHTMLRuleStyle5 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLRuleStyle5;


    MIDL_INTERFACE("3050f335-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLRuleStyle5 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_msInterpolationMode(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_msInterpolationMode(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_maxHeight(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_maxHeight(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_minWidth(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_minWidth(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_maxWidth(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_maxWidth(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

    };





#endif 	/* __IHTMLRuleStyle5_INTERFACE_DEFINED__ */


#ifndef __DispHTMLStyle_DISPINTERFACE_DEFINED__
#define __DispHTMLStyle_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLStyle */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLStyle;


    MIDL_INTERFACE("3050f55a-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLStyle : public IDispatch
    {
    };



#endif 	/* __DispHTMLStyle_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLStyle;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f285-98b5-11cf-bb82-00aa00bdce0b")
HTMLStyle;
#endif

#ifndef __DispHTMLRuleStyle_DISPINTERFACE_DEFINED__
#define __DispHTMLRuleStyle_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLRuleStyle */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLRuleStyle;


    MIDL_INTERFACE("3050f55c-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLRuleStyle : public IDispatch
    {
    };



#endif 	/* __DispHTMLRuleStyle_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLRuleStyle;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f3d0-98b5-11cf-bb82-00aa00bdce0b")
HTMLRuleStyle;
#endif

#ifndef __IHTMLRenderStyle_INTERFACE_DEFINED__
#define __IHTMLRenderStyle_INTERFACE_DEFINED__

/* interface IHTMLRenderStyle */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLRenderStyle;


    MIDL_INTERFACE("3050f6ae-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLRenderStyle : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textLineThroughStyle(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textLineThroughStyle(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textUnderlineStyle(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textUnderlineStyle(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textEffect(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textEffect(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textBackgroundColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textBackgroundColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textDecorationColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textDecorationColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_renderingPriority(
            /* [in] */ long v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_renderingPriority(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_defaultTextSelection(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_defaultTextSelection(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_textDecoration(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textDecoration(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLRenderStyle_INTERFACE_DEFINED__ */


#ifndef __DispHTMLRenderStyle_DISPINTERFACE_DEFINED__
#define __DispHTMLRenderStyle_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLRenderStyle */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLRenderStyle;


    MIDL_INTERFACE("3050f58b-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLRenderStyle : public IDispatch
    {
    };



#endif 	/* __DispHTMLRenderStyle_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLRenderStyle;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f6aa-98b5-11cf-bb82-00aa00bdce0b")
HTMLRenderStyle;
#endif

#ifndef __IHTMLCurrentStyle_INTERFACE_DEFINED__
#define __IHTMLCurrentStyle_INTERFACE_DEFINED__

/* interface IHTMLCurrentStyle */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLCurrentStyle;


    MIDL_INTERFACE("3050f3db-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLCurrentStyle : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_position(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_styleFloat(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_color(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_backgroundColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_fontFamily(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_fontStyle(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [hidden][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_fontVariant(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_fontWeight(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_fontSize(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_backgroundImage(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_backgroundPositionX(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_backgroundPositionY(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_backgroundRepeat(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderLeftColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderTopColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderRightColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderBottomColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderTopStyle(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderRightStyle(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderBottomStyle(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderLeftStyle(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderTopWidth(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderRightWidth(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderBottomWidth(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderLeftWidth(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_left(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_top(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_width(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_height(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_paddingLeft(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_paddingTop(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_paddingRight(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_paddingBottom(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textAlign(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textDecoration(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_display(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_visibility(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_zIndex(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_letterSpacing(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_lineHeight(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textIndent(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_verticalAlign(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_backgroundAttachment(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_marginTop(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_marginRight(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_marginBottom(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_marginLeft(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_clear(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_listStyleType(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_listStylePosition(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_listStyleImage(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_clipTop(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_clipRight(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_clipBottom(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_clipLeft(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_overflow(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_pageBreakBefore(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_pageBreakAfter(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_cursor(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_tableLayout(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderCollapse(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_direction(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_behavior(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getAttribute(
            /* [in] */ __RPC__in BSTR strAttributeName,
            /* [in][defaultvalue] */ LONG lFlags,
            /* [out][retval] */ __RPC__out VARIANT *AttributeValue) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_unicodeBidi(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_right(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_bottom(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_imeMode(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_rubyAlign(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_rubyPosition(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_rubyOverhang(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textAutospace(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_lineBreak(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_wordBreak(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textJustify(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textJustifyTrim(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textKashida(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_blockDirection(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_layoutGridChar(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_layoutGridLine(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_layoutGridMode(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_layoutGridType(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderStyle(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderColor(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_borderWidth(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_padding(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_margin(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_accelerator(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_overflowX(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_overflowY(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textTransform(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLCurrentStyle_INTERFACE_DEFINED__ */


#ifndef __IHTMLCurrentStyle2_INTERFACE_DEFINED__
#define __IHTMLCurrentStyle2_INTERFACE_DEFINED__

/* interface IHTMLCurrentStyle2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLCurrentStyle2;


    MIDL_INTERFACE("3050f658-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLCurrentStyle2 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_layoutFlow(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_wordWrap(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textUnderlinePosition(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_hasLayout(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollbarBaseColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollbarFaceColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollbar3dLightColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollbarShadowColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollbarHighlightColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollbarDarkShadowColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollbarArrowColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollbarTrackColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_writingMode(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_zoom(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_filter(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textAlignLast(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textKashidaSpace(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [nonbrowsable][restricted][hidden][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_isBlock(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

    };





#endif 	/* __IHTMLCurrentStyle2_INTERFACE_DEFINED__ */


#ifndef __IHTMLCurrentStyle3_INTERFACE_DEFINED__
#define __IHTMLCurrentStyle3_INTERFACE_DEFINED__

/* interface IHTMLCurrentStyle3 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLCurrentStyle3;


    MIDL_INTERFACE("3050f818-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLCurrentStyle3 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_textOverflow(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_minHeight(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_wordSpacing(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_whiteSpace(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLCurrentStyle3_INTERFACE_DEFINED__ */


#ifndef __IHTMLCurrentStyle4_INTERFACE_DEFINED__
#define __IHTMLCurrentStyle4_INTERFACE_DEFINED__

/* interface IHTMLCurrentStyle4 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLCurrentStyle4;


    MIDL_INTERFACE("3050f33b-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLCurrentStyle4 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_msInterpolationMode(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_maxHeight(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_minWidth(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_maxWidth(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

    };





#endif 	/* __IHTMLCurrentStyle4_INTERFACE_DEFINED__ */


#ifndef __DispHTMLCurrentStyle_DISPINTERFACE_DEFINED__
#define __DispHTMLCurrentStyle_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLCurrentStyle */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLCurrentStyle;


    MIDL_INTERFACE("3050f557-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLCurrentStyle : public IDispatch
    {
    };



#endif 	/* __DispHTMLCurrentStyle_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLCurrentStyle;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f3dc-98b5-11cf-bb82-00aa00bdce0b")
HTMLCurrentStyle;
#endif

#ifndef __IHTMLElement_INTERFACE_DEFINED__
#define __IHTMLElement_INTERFACE_DEFINED__

/* interface IHTMLElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLElement;


    MIDL_INTERFACE("3050f1ff-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLElement : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setAttribute(
            /* [in] */ __RPC__in BSTR strAttributeName,
            /* [in] */ VARIANT AttributeValue,
            /* [in][defaultvalue] */ LONG lFlags = 1) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getAttribute(
            /* [in] */ __RPC__in BSTR strAttributeName,
            /* [in][defaultvalue] */ LONG lFlags,
            /* [out][retval] */ __RPC__out VARIANT *AttributeValue) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE removeAttribute(
            /* [in] */ __RPC__in BSTR strAttributeName,
            /* [in][defaultvalue] */ LONG lFlags,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfSuccess) = 0;

        virtual /* [bindable][id][propput] */ HRESULT STDMETHODCALLTYPE put_className(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][id][propget] */ HRESULT STDMETHODCALLTYPE get_className(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][id][propput] */ HRESULT STDMETHODCALLTYPE put_id(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][id][propget] */ HRESULT STDMETHODCALLTYPE get_id(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_tagName(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_parentElement(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElement **p) = 0;

        virtual /* [nonbrowsable][id][propget] */ HRESULT STDMETHODCALLTYPE get_style(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLStyle **p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onhelp(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onhelp(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onclick(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onclick(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_ondblclick(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_ondblclick(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onkeydown(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onkeydown(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onkeyup(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onkeyup(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onkeypress(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onkeypress(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onmouseout(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onmouseout(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onmouseover(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onmouseover(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onmousemove(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onmousemove(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onmousedown(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onmousedown(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onmouseup(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onmouseup(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_document(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_title(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_title(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_language(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_language(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onselectstart(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onselectstart(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE scrollIntoView(
            /* [in][optional] */ VARIANT varargStart) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE contains(
            /* [in] */ __RPC__in_opt IHTMLElement *pChild,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfResult) = 0;

        virtual /* [bindable][id][propget] */ HRESULT STDMETHODCALLTYPE get_sourceIndex(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_recordNumber(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_lang(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_lang(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_offsetLeft(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_offsetTop(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_offsetWidth(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_offsetHeight(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_offsetParent(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElement **p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_innerHTML(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_innerHTML(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_innerText(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_innerText(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_outerHTML(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_outerHTML(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_outerText(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_outerText(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE insertAdjacentHTML(
            /* [in] */ __RPC__in BSTR where,
            /* [in] */ __RPC__in BSTR html) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE insertAdjacentText(
            /* [in] */ __RPC__in BSTR where,
            /* [in] */ __RPC__in BSTR text) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_parentTextEdit(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElement **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_isTextEdit(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE click( void) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_filters(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLFiltersCollection **p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_ondragstart(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_ondragstart(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE toString(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *String) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onbeforeupdate(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onbeforeupdate(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onafterupdate(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onafterupdate(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onerrorupdate(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onerrorupdate(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onrowexit(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onrowexit(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onrowenter(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onrowenter(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_ondatasetchanged(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_ondatasetchanged(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_ondataavailable(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_ondataavailable(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_ondatasetcomplete(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_ondatasetcomplete(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onfilterchange(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onfilterchange(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_children(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_all(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **p) = 0;

    };





#endif 	/* __IHTMLElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLRect_INTERFACE_DEFINED__
#define __IHTMLRect_INTERFACE_DEFINED__

/* interface IHTMLRect */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLRect;


    MIDL_INTERFACE("3050f4a3-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLRect : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_left(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_left(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_top(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_top(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_right(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_right(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_bottom(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_bottom(
            /* [out][retval] */ __RPC__out long *p) = 0;

    };





#endif 	/* __IHTMLRect_INTERFACE_DEFINED__ */


#ifndef __IHTMLRectCollection_INTERFACE_DEFINED__
#define __IHTMLRectCollection_INTERFACE_DEFINED__

/* interface IHTMLRectCollection */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLRectCollection;


    MIDL_INTERFACE("3050f4a4-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLRectCollection : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_length(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [restricted][hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get__newEnum(
            /* [out][retval] */ __RPC__deref_out_opt IUnknown **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE item(
            /* [in] */ __RPC__in VARIANT *pvarIndex,
            /* [out][retval] */ __RPC__out VARIANT *pvarResult) = 0;

    };





#endif 	/* __IHTMLRectCollection_INTERFACE_DEFINED__ */


#ifndef __IHTMLDOMNode_INTERFACE_DEFINED__
#define __IHTMLDOMNode_INTERFACE_DEFINED__

/* interface IHTMLDOMNode */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLDOMNode;


    MIDL_INTERFACE("3050f5da-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLDOMNode : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_nodeType(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_parentNode(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMNode **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE hasChildNodes(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *fChildren) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_childNodes(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_attributes(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE insertBefore(
            /* [in] */ __RPC__in_opt IHTMLDOMNode *newChild,
            /* [in][optional] */ VARIANT refChild,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMNode **node) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE removeChild(
            /* [in] */ __RPC__in_opt IHTMLDOMNode *oldChild,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMNode **node) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE replaceChild(
            /* [in] */ __RPC__in_opt IHTMLDOMNode *newChild,
            /* [in] */ __RPC__in_opt IHTMLDOMNode *oldChild,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMNode **node) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cloneNode(
            /* [in] */ VARIANT_BOOL fDeep,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMNode **clonedNode) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE removeNode(
            /* [in][defaultvalue] */ VARIANT_BOOL fDeep,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMNode **removed) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE swapNode(
            /* [in] */ __RPC__in_opt IHTMLDOMNode *otherNode,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMNode **swappedNode) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE replaceNode(
            /* [in] */ __RPC__in_opt IHTMLDOMNode *replacement,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMNode **replaced) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE appendChild(
            /* [in] */ __RPC__in_opt IHTMLDOMNode *newChild,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMNode **node) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_nodeName(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_nodeValue(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_nodeValue(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_firstChild(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMNode **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_lastChild(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMNode **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_previousSibling(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMNode **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_nextSibling(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMNode **p) = 0;

    };





#endif 	/* __IHTMLDOMNode_INTERFACE_DEFINED__ */


#ifndef __IHTMLDOMNode2_INTERFACE_DEFINED__
#define __IHTMLDOMNode2_INTERFACE_DEFINED__

/* interface IHTMLDOMNode2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLDOMNode2;


    MIDL_INTERFACE("3050f80b-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLDOMNode2 : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ownerDocument(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **p) = 0;

    };





#endif 	/* __IHTMLDOMNode2_INTERFACE_DEFINED__ */


#ifndef __IHTMLDOMAttribute_INTERFACE_DEFINED__
#define __IHTMLDOMAttribute_INTERFACE_DEFINED__

/* interface IHTMLDOMAttribute */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLDOMAttribute;


    MIDL_INTERFACE("3050f4b0-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLDOMAttribute : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_nodeName(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_nodeValue(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_nodeValue(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_specified(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

    };





#endif 	/* __IHTMLDOMAttribute_INTERFACE_DEFINED__ */


#ifndef __IHTMLDOMAttribute2_INTERFACE_DEFINED__
#define __IHTMLDOMAttribute2_INTERFACE_DEFINED__

/* interface IHTMLDOMAttribute2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLDOMAttribute2;


    MIDL_INTERFACE("3050f810-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLDOMAttribute2 : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_name(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_value(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_value(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_expando(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_nodeType(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_parentNode(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMNode **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_childNodes(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_firstChild(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMNode **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_lastChild(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMNode **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_previousSibling(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMNode **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_nextSibling(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMNode **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_attributes(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ownerDocument(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE insertBefore(
            /* [in] */ __RPC__in_opt IHTMLDOMNode *newChild,
            /* [in][optional] */ VARIANT refChild,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMNode **node) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE replaceChild(
            /* [in] */ __RPC__in_opt IHTMLDOMNode *newChild,
            /* [in] */ __RPC__in_opt IHTMLDOMNode *oldChild,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMNode **node) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE removeChild(
            /* [in] */ __RPC__in_opt IHTMLDOMNode *oldChild,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMNode **node) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE appendChild(
            /* [in] */ __RPC__in_opt IHTMLDOMNode *newChild,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMNode **node) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE hasChildNodes(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *fChildren) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cloneNode(
            /* [in] */ VARIANT_BOOL fDeep,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMAttribute **clonedNode) = 0;

    };





#endif 	/* __IHTMLDOMAttribute2_INTERFACE_DEFINED__ */


#ifndef __IHTMLDOMTextNode_INTERFACE_DEFINED__
#define __IHTMLDOMTextNode_INTERFACE_DEFINED__

/* interface IHTMLDOMTextNode */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLDOMTextNode;


    MIDL_INTERFACE("3050f4b1-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLDOMTextNode : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_data(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_data(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE toString(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *String) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_length(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE splitText(
            /* [in] */ long offset,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMNode **pRetNode) = 0;

    };





#endif 	/* __IHTMLDOMTextNode_INTERFACE_DEFINED__ */


#ifndef __IHTMLDOMTextNode2_INTERFACE_DEFINED__
#define __IHTMLDOMTextNode2_INTERFACE_DEFINED__

/* interface IHTMLDOMTextNode2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLDOMTextNode2;


    MIDL_INTERFACE("3050f809-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLDOMTextNode2 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE substringData(
            /* [in] */ long offset,
            /* [in] */ long Count,
            /* [out][retval] */ __RPC__deref_out_opt BSTR *pbstrsubString) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE appendData(
            /* [in] */ __RPC__in BSTR bstrstring) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE insertData(
            /* [in] */ long offset,
            /* [in] */ __RPC__in BSTR bstrstring) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE deleteData(
            /* [in] */ long offset,
            /* [in] */ long Count) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE replaceData(
            /* [in] */ long offset,
            /* [in] */ long Count,
            /* [in] */ __RPC__in BSTR bstrstring) = 0;

    };





#endif 	/* __IHTMLDOMTextNode2_INTERFACE_DEFINED__ */


#ifndef __IHTMLDOMImplementation_INTERFACE_DEFINED__
#define __IHTMLDOMImplementation_INTERFACE_DEFINED__

/* interface IHTMLDOMImplementation */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLDOMImplementation;


    MIDL_INTERFACE("3050f80d-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLDOMImplementation : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE hasFeature(
            /* [in] */ __RPC__in BSTR bstrfeature,
            /* [in][optional] */ VARIANT version,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfHasFeature) = 0;

    };





#endif 	/* __IHTMLDOMImplementation_INTERFACE_DEFINED__ */


#ifndef __DispHTMLDOMAttribute_DISPINTERFACE_DEFINED__
#define __DispHTMLDOMAttribute_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLDOMAttribute */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLDOMAttribute;


    MIDL_INTERFACE("3050f564-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLDOMAttribute : public IDispatch
    {
    };



#endif 	/* __DispHTMLDOMAttribute_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLDOMAttribute;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f4b2-98b5-11cf-bb82-00aa00bdce0b")
HTMLDOMAttribute;
#endif

#ifndef __DispHTMLDOMTextNode_DISPINTERFACE_DEFINED__
#define __DispHTMLDOMTextNode_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLDOMTextNode */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLDOMTextNode;


    MIDL_INTERFACE("3050f565-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLDOMTextNode : public IDispatch
    {
    };



#endif 	/* __DispHTMLDOMTextNode_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLDOMTextNode;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f4ba-98b5-11cf-bb82-00aa00bdce0b")
HTMLDOMTextNode;
#endif

#ifndef __DispHTMLDOMImplementation_DISPINTERFACE_DEFINED__
#define __DispHTMLDOMImplementation_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLDOMImplementation */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLDOMImplementation;


    MIDL_INTERFACE("3050f58f-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLDOMImplementation : public IDispatch
    {
    };



#endif 	/* __DispHTMLDOMImplementation_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLDOMImplementation;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f80e-98b5-11cf-bb82-00aa00bdce0b")
HTMLDOMImplementation;
#endif

#ifndef __IHTMLAttributeCollection_INTERFACE_DEFINED__
#define __IHTMLAttributeCollection_INTERFACE_DEFINED__

/* interface IHTMLAttributeCollection */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLAttributeCollection;


    MIDL_INTERFACE("3050f4c3-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLAttributeCollection : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_length(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [restricted][hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get__newEnum(
            /* [out][retval] */ __RPC__deref_out_opt IUnknown **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE item(
            /* [in][optional] */ __RPC__in VARIANT *name,
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **pdisp) = 0;

    };





#endif 	/* __IHTMLAttributeCollection_INTERFACE_DEFINED__ */


#ifndef __IHTMLAttributeCollection2_INTERFACE_DEFINED__
#define __IHTMLAttributeCollection2_INTERFACE_DEFINED__

/* interface IHTMLAttributeCollection2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLAttributeCollection2;


    MIDL_INTERFACE("3050f80a-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLAttributeCollection2 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getNamedItem(
            /* [in] */ __RPC__in BSTR bstrName,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMAttribute **newretNode) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setNamedItem(
            /* [in] */ __RPC__in_opt IHTMLDOMAttribute *ppNode,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMAttribute **newretNode) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE removeNamedItem(
            /* [in] */ __RPC__in BSTR bstrName,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMAttribute **newretNode) = 0;

    };





#endif 	/* __IHTMLAttributeCollection2_INTERFACE_DEFINED__ */


#ifndef __IHTMLDOMChildrenCollection_INTERFACE_DEFINED__
#define __IHTMLDOMChildrenCollection_INTERFACE_DEFINED__

/* interface IHTMLDOMChildrenCollection */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLDOMChildrenCollection;


    MIDL_INTERFACE("3050f5ab-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLDOMChildrenCollection : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_length(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [restricted][hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get__newEnum(
            /* [out][retval] */ __RPC__deref_out_opt IUnknown **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE item(
            /* [in] */ long index,
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **ppItem) = 0;

    };





#endif 	/* __IHTMLDOMChildrenCollection_INTERFACE_DEFINED__ */


#ifndef __DispHTMLAttributeCollection_DISPINTERFACE_DEFINED__
#define __DispHTMLAttributeCollection_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLAttributeCollection */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLAttributeCollection;


    MIDL_INTERFACE("3050f56c-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLAttributeCollection : public IDispatch
    {
    };



#endif 	/* __DispHTMLAttributeCollection_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLAttributeCollection;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f4cc-98b5-11cf-bb82-00aa00bdce0b")
HTMLAttributeCollection;
#endif

#ifndef __DispDOMChildrenCollection_DISPINTERFACE_DEFINED__
#define __DispDOMChildrenCollection_DISPINTERFACE_DEFINED__

/* dispinterface DispDOMChildrenCollection */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispDOMChildrenCollection;


    MIDL_INTERFACE("3050f577-98b5-11cf-bb82-00aa00bdce0b")
    DispDOMChildrenCollection : public IDispatch
    {
    };



#endif 	/* __DispDOMChildrenCollection_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_DOMChildrenCollection;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f5aa-98b5-11cf-bb82-00aa00bdce0b")
DOMChildrenCollection;
#endif

#ifndef __HTMLElementEvents2_DISPINTERFACE_DEFINED__
#define __HTMLElementEvents2_DISPINTERFACE_DEFINED__

/* dispinterface HTMLElementEvents2 */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLElementEvents2;


    MIDL_INTERFACE("3050f60f-98b5-11cf-bb82-00aa00bdce0b")
    HTMLElementEvents2 : public IDispatch
    {
    };



#endif 	/* __HTMLElementEvents2_DISPINTERFACE_DEFINED__ */


#ifndef __HTMLElementEvents_DISPINTERFACE_DEFINED__
#define __HTMLElementEvents_DISPINTERFACE_DEFINED__

/* dispinterface HTMLElementEvents */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLElementEvents;


    MIDL_INTERFACE("3050f33c-98b5-11cf-bb82-00aa00bdce0b")
    HTMLElementEvents : public IDispatch
    {
    };



#endif 	/* __HTMLElementEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IHTMLElementCollection_INTERFACE_DEFINED__
#define __IHTMLElementCollection_INTERFACE_DEFINED__

/* interface IHTMLElementCollection */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLElementCollection;


    MIDL_INTERFACE("3050f21f-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLElementCollection : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE toString(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *String) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_length(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_length(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [restricted][hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get__newEnum(
            /* [out][retval] */ __RPC__deref_out_opt IUnknown **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE item(
            /* [in][optional] */ VARIANT name,
            /* [in][optional] */ VARIANT index,
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **pdisp) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE tags(
            /* [in] */ VARIANT tagName,
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **pdisp) = 0;

    };





#endif 	/* __IHTMLElementCollection_INTERFACE_DEFINED__ */


#ifndef __IHTMLElement2_INTERFACE_DEFINED__
#define __IHTMLElement2_INTERFACE_DEFINED__

/* interface IHTMLElement2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLElement2;


    MIDL_INTERFACE("3050f434-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLElement2 : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_scopeName(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setCapture(
            /* [in][defaultvalue] */ VARIANT_BOOL containerCapture = -1) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE releaseCapture( void) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onlosecapture(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onlosecapture(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE componentFromPoint(
            /* [in] */ long x,
            /* [in] */ long y,
            /* [out][retval] */ __RPC__deref_out_opt BSTR *component) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE doScroll(
            /* [in][optional] */ VARIANT component) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onscroll(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onscroll(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_ondrag(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_ondrag(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_ondragend(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_ondragend(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_ondragenter(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_ondragenter(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_ondragover(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_ondragover(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_ondragleave(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_ondragleave(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_ondrop(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_ondrop(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onbeforecut(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onbeforecut(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_oncut(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_oncut(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onbeforecopy(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onbeforecopy(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_oncopy(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_oncopy(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onbeforepaste(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onbeforepaste(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onpaste(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onpaste(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [nonbrowsable][id][propget] */ HRESULT STDMETHODCALLTYPE get_currentStyle(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLCurrentStyle **p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onpropertychange(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onpropertychange(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getClientRects(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLRectCollection **pRectCol) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getBoundingClientRect(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLRect **pRect) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setExpression(
            /* [in] */ __RPC__in BSTR propname,
            /* [in] */ __RPC__in BSTR expression,
            /* [in][defaultvalue] */ __RPC__in BSTR language = L"") = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getExpression(
            /* [in] */ __RPC__in BSTR propname,
            /* [out][retval] */ __RPC__out VARIANT *expression) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE removeExpression(
            /* [in] */ __RPC__in BSTR propname,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfSuccess) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_tabIndex(
            /* [in] */ short v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_tabIndex(
            /* [out][retval] */ __RPC__out short *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE focus( void) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_accessKey(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_accessKey(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onblur(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onblur(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onfocus(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onfocus(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onresize(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onresize(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE blur( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE addFilter(
            /* [in] */ __RPC__in_opt IUnknown *pUnk) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE removeFilter(
            /* [in] */ __RPC__in_opt IUnknown *pUnk) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_clientHeight(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_clientWidth(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_clientTop(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_clientLeft(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE attachEvent(
            /* [in] */ __RPC__in BSTR event,
            /* [in] */ __RPC__in_opt IDispatch *pDisp,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE detachEvent(
            /* [in] */ __RPC__in BSTR event,
            /* [in] */ __RPC__in_opt IDispatch *pDisp) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_readyState(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onreadystatechange(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onreadystatechange(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onrowsdelete(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onrowsdelete(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onrowsinserted(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onrowsinserted(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_oncellchange(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_oncellchange(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_dir(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_dir(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createControlRange(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **range) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollHeight(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollWidth(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_scrollTop(
            /* [in] */ long v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollTop(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_scrollLeft(
            /* [in] */ long v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollLeft(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE clearAttributes( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE mergeAttributes(
            /* [in] */ __RPC__in_opt IHTMLElement *mergeThis) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_oncontextmenu(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_oncontextmenu(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE insertAdjacentElement(
            /* [in] */ __RPC__in BSTR where,
            /* [in] */ __RPC__in_opt IHTMLElement *insertedElement,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElement **inserted) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE applyElement(
            /* [in] */ __RPC__in_opt IHTMLElement *apply,
            /* [in] */ __RPC__in BSTR where,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElement **applied) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getAdjacentText(
            /* [in] */ __RPC__in BSTR where,
            /* [out][retval] */ __RPC__deref_out_opt BSTR *text) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE replaceAdjacentText(
            /* [in] */ __RPC__in BSTR where,
            /* [in] */ __RPC__in BSTR newText,
            /* [out][retval] */ __RPC__deref_out_opt BSTR *oldText) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_canHaveChildren(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE addBehavior(
            /* [in] */ __RPC__in BSTR bstrUrl,
            /* [in][optional] */ __RPC__in VARIANT *pvarFactory,
            /* [out][retval] */ __RPC__out long *pCookie) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE removeBehavior(
            /* [in] */ long cookie,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfResult) = 0;

        virtual /* [nonbrowsable][id][propget] */ HRESULT STDMETHODCALLTYPE get_runtimeStyle(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLStyle **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_behaviorUrns(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_tagUrn(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_tagUrn(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onbeforeeditfocus(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onbeforeeditfocus(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [restricted][hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_readyStateValue(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getElementsByTagName(
            /* [in] */ __RPC__in BSTR v,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElementCollection **pelColl) = 0;

    };





#endif 	/* __IHTMLElement2_INTERFACE_DEFINED__ */


#ifndef __IHTMLElement3_INTERFACE_DEFINED__
#define __IHTMLElement3_INTERFACE_DEFINED__

/* interface IHTMLElement3 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLElement3;


    MIDL_INTERFACE("3050f673-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLElement3 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE mergeAttributes(
            /* [in] */ __RPC__in_opt IHTMLElement *mergeThis,
            /* [in][optional] */ __RPC__in VARIANT *pvarFlags) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_isMultiLine(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_canHaveHTML(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onlayoutcomplete(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onlayoutcomplete(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onpage(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onpage(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [nonbrowsable][restricted][hidden][id][propput] */ HRESULT STDMETHODCALLTYPE put_inflateBlock(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [nonbrowsable][restricted][hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_inflateBlock(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onbeforedeactivate(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onbeforedeactivate(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setActive( void) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_contentEditable(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_contentEditable(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_isContentEditable(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_hideFocus(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_hideFocus(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_disabled(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_disabled(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_isDisabled(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onmove(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onmove(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_oncontrolselect(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_oncontrolselect(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE fireEvent(
            /* [in] */ __RPC__in BSTR bstrEventName,
            /* [in][optional] */ __RPC__in VARIANT *pvarEventObject,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfCancelled) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onresizestart(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onresizestart(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onresizeend(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onresizeend(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onmovestart(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onmovestart(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onmoveend(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onmoveend(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onmouseenter(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onmouseenter(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onmouseleave(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onmouseleave(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onactivate(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onactivate(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_ondeactivate(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_ondeactivate(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE dragDrop(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfRet) = 0;

        virtual /* [nonbrowsable][restricted][hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_glyphMode(
            /* [out][retval] */ __RPC__out LONG *p) = 0;

    };





#endif 	/* __IHTMLElement3_INTERFACE_DEFINED__ */


#ifndef __IHTMLElement4_INTERFACE_DEFINED__
#define __IHTMLElement4_INTERFACE_DEFINED__

/* interface IHTMLElement4 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLElement4;


    MIDL_INTERFACE("3050f80f-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLElement4 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onmousewheel(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onmousewheel(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE normalize( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getAttributeNode(
            /* [in] */ __RPC__in BSTR bstrname,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMAttribute **ppAttribute) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setAttributeNode(
            /* [in] */ __RPC__in_opt IHTMLDOMAttribute *pattr,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMAttribute **ppretAttribute) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE removeAttributeNode(
            /* [in] */ __RPC__in_opt IHTMLDOMAttribute *pattr,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMAttribute **ppretAttribute) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onbeforeactivate(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onbeforeactivate(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onfocusin(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onfocusin(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onfocusout(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onfocusout(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

    };





#endif 	/* __IHTMLElement4_INTERFACE_DEFINED__ */


#ifndef __IHTMLElementRender_INTERFACE_DEFINED__
#define __IHTMLElementRender_INTERFACE_DEFINED__

/* interface IHTMLElementRender */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IHTMLElementRender;


    MIDL_INTERFACE("3050f669-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLElementRender : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE DrawToDC(
            /* [in] */ __RPC__in HDC hDC) = 0;

        virtual HRESULT STDMETHODCALLTYPE SetDocumentPrinter(
            /* [in] */ __RPC__in BSTR bstrPrinterName,
            /* [in] */ __RPC__in HDC hDC) = 0;

    };





#endif 	/* __IHTMLElementRender_INTERFACE_DEFINED__ */


#ifndef __IHTMLUniqueName_INTERFACE_DEFINED__
#define __IHTMLUniqueName_INTERFACE_DEFINED__

/* interface IHTMLUniqueName */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLUniqueName;


    MIDL_INTERFACE("3050f4d0-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLUniqueName : public IDispatch
    {
    public:
        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_uniqueNumber(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_uniqueID(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLUniqueName_INTERFACE_DEFINED__ */


#ifndef __IHTMLDatabinding_INTERFACE_DEFINED__
#define __IHTMLDatabinding_INTERFACE_DEFINED__

/* interface IHTMLDatabinding */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLDatabinding;


    MIDL_INTERFACE("3050f3f2-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLDatabinding : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_dataFld(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_dataFld(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_dataSrc(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_dataSrc(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_dataFormatAs(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_dataFormatAs(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLDatabinding_INTERFACE_DEFINED__ */


#ifndef __IHTMLDocument_INTERFACE_DEFINED__
#define __IHTMLDocument_INTERFACE_DEFINED__

/* interface IHTMLDocument */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLDocument;


    MIDL_INTERFACE("626FC520-A41E-11cf-A731-00A0C9082637")
    IHTMLDocument : public IDispatch
    {
    public:
        virtual /* [nonbrowsable][hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_Script(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **p) = 0;

    };





#endif 	/* __IHTMLDocument_INTERFACE_DEFINED__ */


#ifndef __IHTMLElementDefaults_INTERFACE_DEFINED__
#define __IHTMLElementDefaults_INTERFACE_DEFINED__

/* interface IHTMLElementDefaults */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLElementDefaults;


    MIDL_INTERFACE("3050f6c9-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLElementDefaults : public IDispatch
    {
    public:
        virtual /* [nonbrowsable][id][propget] */ HRESULT STDMETHODCALLTYPE get_style(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLStyle **p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_tabStop(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_tabStop(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_viewInheritStyle(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_viewInheritStyle(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_viewMasterTab(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_viewMasterTab(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_scrollSegmentX(
            /* [in] */ long v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollSegmentX(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_scrollSegmentY(
            /* [in] */ long v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollSegmentY(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_isMultiLine(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_isMultiLine(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_contentEditable(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_contentEditable(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_canHaveHTML(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_canHaveHTML(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propputref] */ HRESULT STDMETHODCALLTYPE putref_viewLink(
            /* [in] */ __RPC__in_opt IHTMLDocument *v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_viewLink(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDocument **p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_frozen(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_frozen(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

    };





#endif 	/* __IHTMLElementDefaults_INTERFACE_DEFINED__ */


#ifndef __DispHTMLDefaults_DISPINTERFACE_DEFINED__
#define __DispHTMLDefaults_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLDefaults */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLDefaults;


    MIDL_INTERFACE("3050f58c-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLDefaults : public IDispatch
    {
    };



#endif 	/* __DispHTMLDefaults_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLDefaults;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f6c8-98b5-11cf-bb82-00aa00bdce0b")
HTMLDefaults;
#endif

#ifndef __IHTCDefaultDispatch_INTERFACE_DEFINED__
#define __IHTCDefaultDispatch_INTERFACE_DEFINED__

/* interface IHTCDefaultDispatch */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTCDefaultDispatch;


    MIDL_INTERFACE("3050f4fd-98b5-11cf-bb82-00aa00bdce0b")
    IHTCDefaultDispatch : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_element(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElement **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createEventObject(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLEventObj **eventObj) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_defaults(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_document(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **p) = 0;

    };





#endif 	/* __IHTCDefaultDispatch_INTERFACE_DEFINED__ */


#ifndef __IHTCPropertyBehavior_INTERFACE_DEFINED__
#define __IHTCPropertyBehavior_INTERFACE_DEFINED__

/* interface IHTCPropertyBehavior */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTCPropertyBehavior;


    MIDL_INTERFACE("3050f5df-98b5-11cf-bb82-00aa00bdce0b")
    IHTCPropertyBehavior : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE fireChange( void) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_value(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_value(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

    };





#endif 	/* __IHTCPropertyBehavior_INTERFACE_DEFINED__ */


#ifndef __IHTCMethodBehavior_INTERFACE_DEFINED__
#define __IHTCMethodBehavior_INTERFACE_DEFINED__

/* interface IHTCMethodBehavior */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTCMethodBehavior;


    MIDL_INTERFACE("3050f631-98b5-11cf-bb82-00aa00bdce0b")
    IHTCMethodBehavior : public IDispatch
    {
    public:
    };





#endif 	/* __IHTCMethodBehavior_INTERFACE_DEFINED__ */


#ifndef __IHTCEventBehavior_INTERFACE_DEFINED__
#define __IHTCEventBehavior_INTERFACE_DEFINED__

/* interface IHTCEventBehavior */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTCEventBehavior;


    MIDL_INTERFACE("3050f4ff-98b5-11cf-bb82-00aa00bdce0b")
    IHTCEventBehavior : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE fire(
            /* [in] */ __RPC__in_opt IHTMLEventObj *pvar) = 0;

    };





#endif 	/* __IHTCEventBehavior_INTERFACE_DEFINED__ */


#ifndef __IHTCAttachBehavior_INTERFACE_DEFINED__
#define __IHTCAttachBehavior_INTERFACE_DEFINED__

/* interface IHTCAttachBehavior */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTCAttachBehavior;


    MIDL_INTERFACE("3050f5f4-98b5-11cf-bb82-00aa00bdce0b")
    IHTCAttachBehavior : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE fireEvent(
            /* [in] */ __RPC__in_opt IDispatch *evt) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE detachEvent( void) = 0;

    };





#endif 	/* __IHTCAttachBehavior_INTERFACE_DEFINED__ */


#ifndef __IHTCAttachBehavior2_INTERFACE_DEFINED__
#define __IHTCAttachBehavior2_INTERFACE_DEFINED__

/* interface IHTCAttachBehavior2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTCAttachBehavior2;


    MIDL_INTERFACE("3050f7eb-98b5-11cf-bb82-00aa00bdce0b")
    IHTCAttachBehavior2 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE fireEvent(
            /* [in] */ VARIANT evt) = 0;

    };





#endif 	/* __IHTCAttachBehavior2_INTERFACE_DEFINED__ */


#ifndef __IHTCDescBehavior_INTERFACE_DEFINED__
#define __IHTCDescBehavior_INTERFACE_DEFINED__

/* interface IHTCDescBehavior */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTCDescBehavior;


    MIDL_INTERFACE("3050f5dc-98b5-11cf-bb82-00aa00bdce0b")
    IHTCDescBehavior : public IDispatch
    {
    public:
        virtual /* [bindable][id][propget] */ HRESULT STDMETHODCALLTYPE get_urn(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][id][propget] */ HRESULT STDMETHODCALLTYPE get_name(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTCDescBehavior_INTERFACE_DEFINED__ */


#ifndef __DispHTCDefaultDispatch_DISPINTERFACE_DEFINED__
#define __DispHTCDefaultDispatch_DISPINTERFACE_DEFINED__

/* dispinterface DispHTCDefaultDispatch */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTCDefaultDispatch;


    MIDL_INTERFACE("3050f573-98b5-11cf-bb82-00aa00bdce0b")
    DispHTCDefaultDispatch : public IDispatch
    {
    };



#endif 	/* __DispHTCDefaultDispatch_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTCDefaultDispatch;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f4fc-98b5-11cf-bb82-00aa00bdce0b")
HTCDefaultDispatch;
#endif

#ifndef __DispHTCPropertyBehavior_DISPINTERFACE_DEFINED__
#define __DispHTCPropertyBehavior_DISPINTERFACE_DEFINED__

/* dispinterface DispHTCPropertyBehavior */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTCPropertyBehavior;


    MIDL_INTERFACE("3050f57f-98b5-11cf-bb82-00aa00bdce0b")
    DispHTCPropertyBehavior : public IDispatch
    {
    };



#endif 	/* __DispHTCPropertyBehavior_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTCPropertyBehavior;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f5de-98b5-11cf-bb82-00aa00bdce0b")
HTCPropertyBehavior;
#endif

#ifndef __DispHTCMethodBehavior_DISPINTERFACE_DEFINED__
#define __DispHTCMethodBehavior_DISPINTERFACE_DEFINED__

/* dispinterface DispHTCMethodBehavior */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTCMethodBehavior;


    MIDL_INTERFACE("3050f587-98b5-11cf-bb82-00aa00bdce0b")
    DispHTCMethodBehavior : public IDispatch
    {
    };



#endif 	/* __DispHTCMethodBehavior_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTCMethodBehavior;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f630-98b5-11cf-bb82-00aa00bdce0b")
HTCMethodBehavior;
#endif

#ifndef __DispHTCEventBehavior_DISPINTERFACE_DEFINED__
#define __DispHTCEventBehavior_DISPINTERFACE_DEFINED__

/* dispinterface DispHTCEventBehavior */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTCEventBehavior;


    MIDL_INTERFACE("3050f574-98b5-11cf-bb82-00aa00bdce0b")
    DispHTCEventBehavior : public IDispatch
    {
    };



#endif 	/* __DispHTCEventBehavior_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTCEventBehavior;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f4fe-98b5-11cf-bb82-00aa00bdce0b")
HTCEventBehavior;
#endif

#ifndef __DispHTCAttachBehavior_DISPINTERFACE_DEFINED__
#define __DispHTCAttachBehavior_DISPINTERFACE_DEFINED__

/* dispinterface DispHTCAttachBehavior */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTCAttachBehavior;


    MIDL_INTERFACE("3050f583-98b5-11cf-bb82-00aa00bdce0b")
    DispHTCAttachBehavior : public IDispatch
    {
    };



#endif 	/* __DispHTCAttachBehavior_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTCAttachBehavior;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f5f5-98b5-11cf-bb82-00aa00bdce0b")
HTCAttachBehavior;
#endif

#ifndef __DispHTCDescBehavior_DISPINTERFACE_DEFINED__
#define __DispHTCDescBehavior_DISPINTERFACE_DEFINED__

/* dispinterface DispHTCDescBehavior */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTCDescBehavior;


    MIDL_INTERFACE("3050f57e-98b5-11cf-bb82-00aa00bdce0b")
    DispHTCDescBehavior : public IDispatch
    {
    };



#endif 	/* __DispHTCDescBehavior_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTCDescBehavior;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f5dd-98b5-11cf-bb82-00aa00bdce0b")
HTCDescBehavior;
#endif

#ifndef __IHTMLUrnCollection_INTERFACE_DEFINED__
#define __IHTMLUrnCollection_INTERFACE_DEFINED__

/* interface IHTMLUrnCollection */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLUrnCollection;


    MIDL_INTERFACE("3050f5e2-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLUrnCollection : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_length(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE item(
            /* [in] */ long index,
            /* [out][retval] */ __RPC__deref_out_opt BSTR *ppUrn) = 0;

    };





#endif 	/* __IHTMLUrnCollection_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLUrnCollection;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f580-98b5-11cf-bb82-00aa00bdce0b")
HTMLUrnCollection;
#endif

#ifndef __IHTMLGenericElement_INTERFACE_DEFINED__
#define __IHTMLGenericElement_INTERFACE_DEFINED__

/* interface IHTMLGenericElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLGenericElement;


    MIDL_INTERFACE("3050f4b7-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLGenericElement : public IDispatch
    {
    public:
        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_recordset(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE namedRecordset(
            /* [in] */ __RPC__in BSTR dataMember,
            /* [in][optional] */ __RPC__in VARIANT *hierarchy,
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **ppRecordset) = 0;

    };





#endif 	/* __IHTMLGenericElement_INTERFACE_DEFINED__ */


#ifndef __DispHTMLGenericElement_DISPINTERFACE_DEFINED__
#define __DispHTMLGenericElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLGenericElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLGenericElement;


    MIDL_INTERFACE("3050f563-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLGenericElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLGenericElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLGenericElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f4b8-98b5-11cf-bb82-00aa00bdce0b")
HTMLGenericElement;
#endif

#ifndef __IHTMLStyleSheetRule_INTERFACE_DEFINED__
#define __IHTMLStyleSheetRule_INTERFACE_DEFINED__

/* interface IHTMLStyleSheetRule */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLStyleSheetRule;


    MIDL_INTERFACE("3050f357-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLStyleSheetRule : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_selectorText(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_selectorText(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [nonbrowsable][id][propget] */ HRESULT STDMETHODCALLTYPE get_style(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLRuleStyle **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_readOnly(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

    };





#endif 	/* __IHTMLStyleSheetRule_INTERFACE_DEFINED__ */


#ifndef __IHTMLStyleSheetRulesCollection_INTERFACE_DEFINED__
#define __IHTMLStyleSheetRulesCollection_INTERFACE_DEFINED__

/* interface IHTMLStyleSheetRulesCollection */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLStyleSheetRulesCollection;


    MIDL_INTERFACE("3050f2e5-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLStyleSheetRulesCollection : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_length(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE item(
            /* [in] */ long index,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLStyleSheetRule **ppHTMLStyleSheetRule) = 0;

    };





#endif 	/* __IHTMLStyleSheetRulesCollection_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLStyleSheetRule;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f3ce-98b5-11cf-bb82-00aa00bdce0b")
HTMLStyleSheetRule;
#endif

EXTERN_C const CLSID CLSID_HTMLStyleSheetRulesCollection;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f3cd-98b5-11cf-bb82-00aa00bdce0b")
HTMLStyleSheetRulesCollection;
#endif

#ifndef __IHTMLStyleSheetPage_INTERFACE_DEFINED__
#define __IHTMLStyleSheetPage_INTERFACE_DEFINED__

/* interface IHTMLStyleSheetPage */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLStyleSheetPage;


    MIDL_INTERFACE("3050f7ee-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLStyleSheetPage : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_selector(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_pseudoClass(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLStyleSheetPage_INTERFACE_DEFINED__ */


#ifndef __IHTMLStyleSheetPagesCollection_INTERFACE_DEFINED__
#define __IHTMLStyleSheetPagesCollection_INTERFACE_DEFINED__

/* interface IHTMLStyleSheetPagesCollection */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLStyleSheetPagesCollection;


    MIDL_INTERFACE("3050f7f0-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLStyleSheetPagesCollection : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_length(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE item(
            /* [in] */ long index,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLStyleSheetPage **ppHTMLStyleSheetPage) = 0;

    };





#endif 	/* __IHTMLStyleSheetPagesCollection_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLStyleSheetPage;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f7ef-98b5-11cf-bb82-00aa00bdce0b")
HTMLStyleSheetPage;
#endif

EXTERN_C const CLSID CLSID_HTMLStyleSheetPagesCollection;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f7f1-98b5-11cf-bb82-00aa00bdce0b")
HTMLStyleSheetPagesCollection;
#endif

#ifndef __IHTMLStyleSheetsCollection_INTERFACE_DEFINED__
#define __IHTMLStyleSheetsCollection_INTERFACE_DEFINED__

/* interface IHTMLStyleSheetsCollection */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLStyleSheetsCollection;


    MIDL_INTERFACE("3050f37e-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLStyleSheetsCollection : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_length(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [restricted][hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get__newEnum(
            /* [out][retval] */ __RPC__deref_out_opt IUnknown **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE item(
            /* [in] */ __RPC__in VARIANT *pvarIndex,
            /* [out][retval] */ __RPC__out VARIANT *pvarResult) = 0;

    };





#endif 	/* __IHTMLStyleSheetsCollection_INTERFACE_DEFINED__ */


#ifndef __IHTMLStyleSheet_INTERFACE_DEFINED__
#define __IHTMLStyleSheet_INTERFACE_DEFINED__

/* interface IHTMLStyleSheet */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLStyleSheet;


    MIDL_INTERFACE("3050f2e3-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLStyleSheet : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_title(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_title(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_parentStyleSheet(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLStyleSheet **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_owningElement(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElement **p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_disabled(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_disabled(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_readOnly(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_imports(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLStyleSheetsCollection **p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_href(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_href(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_type(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_id(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE addImport(
            /* [in] */ __RPC__in BSTR bstrURL,
            /* [in][defaultvalue] */ long lIndex,
            /* [out][retval] */ __RPC__out long *plIndex) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE addRule(
            /* [in] */ __RPC__in BSTR bstrSelector,
            /* [in] */ __RPC__in BSTR bstrStyle,
            /* [in][defaultvalue] */ long lIndex,
            /* [out][retval] */ __RPC__out long *plNewIndex) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE removeImport(
            /* [in] */ long lIndex) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE removeRule(
            /* [in] */ long lIndex) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_media(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_media(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_cssText(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_cssText(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_rules(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLStyleSheetRulesCollection **p) = 0;

    };





#endif 	/* __IHTMLStyleSheet_INTERFACE_DEFINED__ */


#ifndef __IHTMLStyleSheet2_INTERFACE_DEFINED__
#define __IHTMLStyleSheet2_INTERFACE_DEFINED__

/* interface IHTMLStyleSheet2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLStyleSheet2;


    MIDL_INTERFACE("3050f3d1-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLStyleSheet2 : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_pages(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLStyleSheetPagesCollection **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE addPageRule(
            /* [in] */ __RPC__in BSTR bstrSelector,
            /* [in] */ __RPC__in BSTR bstrStyle,
            /* [in][defaultvalue] */ long lIndex,
            /* [out][retval] */ __RPC__out long *plNewIndex) = 0;

    };





#endif 	/* __IHTMLStyleSheet2_INTERFACE_DEFINED__ */


#ifndef __DispHTMLStyleSheet_DISPINTERFACE_DEFINED__
#define __DispHTMLStyleSheet_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLStyleSheet */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLStyleSheet;


    MIDL_INTERFACE("3050f58d-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLStyleSheet : public IDispatch
    {
    };



#endif 	/* __DispHTMLStyleSheet_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLStyleSheet;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f2e4-98b5-11cf-bb82-00aa00bdce0b")
HTMLStyleSheet;
#endif

EXTERN_C const CLSID CLSID_HTMLStyleSheetsCollection;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f37f-98b5-11cf-bb82-00aa00bdce0b")
HTMLStyleSheetsCollection;
#endif

#ifndef __HTMLLinkElementEvents2_DISPINTERFACE_DEFINED__
#define __HTMLLinkElementEvents2_DISPINTERFACE_DEFINED__

/* dispinterface HTMLLinkElementEvents2 */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLLinkElementEvents2;


    MIDL_INTERFACE("3050f61d-98b5-11cf-bb82-00aa00bdce0b")
    HTMLLinkElementEvents2 : public IDispatch
    {
    };



#endif 	/* __HTMLLinkElementEvents2_DISPINTERFACE_DEFINED__ */


#ifndef __HTMLLinkElementEvents_DISPINTERFACE_DEFINED__
#define __HTMLLinkElementEvents_DISPINTERFACE_DEFINED__

/* dispinterface HTMLLinkElementEvents */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLLinkElementEvents;


    MIDL_INTERFACE("3050f3cc-98b5-11cf-bb82-00aa00bdce0b")
    HTMLLinkElementEvents : public IDispatch
    {
    };



#endif 	/* __HTMLLinkElementEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IHTMLLinkElement_INTERFACE_DEFINED__
#define __IHTMLLinkElement_INTERFACE_DEFINED__

/* interface IHTMLLinkElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLLinkElement;


    MIDL_INTERFACE("3050f205-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLLinkElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_href(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_href(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_rel(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_rel(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_rev(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_rev(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_type(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_type(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_readyState(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onreadystatechange(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onreadystatechange(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onload(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onload(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onerror(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onerror(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_styleSheet(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLStyleSheet **p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_disabled(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_disabled(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_media(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_media(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLLinkElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLLinkElement2_INTERFACE_DEFINED__
#define __IHTMLLinkElement2_INTERFACE_DEFINED__

/* interface IHTMLLinkElement2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLLinkElement2;


    MIDL_INTERFACE("3050f4e5-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLLinkElement2 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_target(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_target(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLLinkElement2_INTERFACE_DEFINED__ */


#ifndef __IHTMLLinkElement3_INTERFACE_DEFINED__
#define __IHTMLLinkElement3_INTERFACE_DEFINED__

/* interface IHTMLLinkElement3 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLLinkElement3;


    MIDL_INTERFACE("3050f81e-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLLinkElement3 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_charset(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_charset(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_hreflang(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_hreflang(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLLinkElement3_INTERFACE_DEFINED__ */


#ifndef __DispHTMLLinkElement_DISPINTERFACE_DEFINED__
#define __DispHTMLLinkElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLLinkElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLLinkElement;


    MIDL_INTERFACE("3050f524-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLLinkElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLLinkElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLLinkElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f277-98b5-11cf-bb82-00aa00bdce0b")
HTMLLinkElement;
#endif

#ifndef __IHTMLTxtRange_INTERFACE_DEFINED__
#define __IHTMLTxtRange_INTERFACE_DEFINED__

/* interface IHTMLTxtRange */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLTxtRange;


    MIDL_INTERFACE("3050f220-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLTxtRange : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_htmlText(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_text(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_text(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE parentElement(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElement **parent) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE duplicate(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLTxtRange **Duplicate) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE inRange(
            /* [in] */ __RPC__in_opt IHTMLTxtRange *Range,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *InRange) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE isEqual(
            /* [in] */ __RPC__in_opt IHTMLTxtRange *Range,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *IsEqual) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE scrollIntoView(
            /* [in][defaultvalue] */ VARIANT_BOOL fStart = -1) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE collapse(
            /* [in][defaultvalue] */ VARIANT_BOOL Start = -1) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE expand(
            /* [in] */ __RPC__in BSTR Unit,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *Success) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE move(
            /* [in] */ __RPC__in BSTR Unit,
            /* [in][defaultvalue] */ long Count,
            /* [out][retval] */ __RPC__out long *ActualCount) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE moveStart(
            /* [in] */ __RPC__in BSTR Unit,
            /* [in][defaultvalue] */ long Count,
            /* [out][retval] */ __RPC__out long *ActualCount) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE moveEnd(
            /* [in] */ __RPC__in BSTR Unit,
            /* [in][defaultvalue] */ long Count,
            /* [out][retval] */ __RPC__out long *ActualCount) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE select( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE pasteHTML(
            /* [in] */ __RPC__in BSTR html) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE moveToElementText(
            /* [in] */ __RPC__in_opt IHTMLElement *element) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setEndPoint(
            /* [in] */ __RPC__in BSTR how,
            /* [in] */ __RPC__in_opt IHTMLTxtRange *SourceRange) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE compareEndPoints(
            /* [in] */ __RPC__in BSTR how,
            /* [in] */ __RPC__in_opt IHTMLTxtRange *SourceRange,
            /* [out][retval] */ __RPC__out long *ret) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE findText(
            /* [in] */ __RPC__in BSTR String,
            /* [in][defaultvalue] */ long count,
            /* [in][defaultvalue] */ long Flags,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *Success) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE moveToPoint(
            /* [in] */ long x,
            /* [in] */ long y) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getBookmark(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *Boolmark) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE moveToBookmark(
            /* [in] */ __RPC__in BSTR Bookmark,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *Success) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE queryCommandSupported(
            /* [in] */ __RPC__in BSTR cmdID,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfRet) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE queryCommandEnabled(
            /* [in] */ __RPC__in BSTR cmdID,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfRet) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE queryCommandState(
            /* [in] */ __RPC__in BSTR cmdID,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfRet) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE queryCommandIndeterm(
            /* [in] */ __RPC__in BSTR cmdID,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfRet) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE queryCommandText(
            /* [in] */ __RPC__in BSTR cmdID,
            /* [out][retval] */ __RPC__deref_out_opt BSTR *pcmdText) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE queryCommandValue(
            /* [in] */ __RPC__in BSTR cmdID,
            /* [out][retval] */ __RPC__out VARIANT *pcmdValue) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE execCommand(
            /* [in] */ __RPC__in BSTR cmdID,
            /* [in][defaultvalue] */ VARIANT_BOOL showUI,
            /* [in][optional] */ VARIANT value,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfRet) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE execCommandShowHelp(
            /* [in] */ __RPC__in BSTR cmdID,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfRet) = 0;

    };





#endif 	/* __IHTMLTxtRange_INTERFACE_DEFINED__ */


#ifndef __IHTMLTextRangeMetrics_INTERFACE_DEFINED__
#define __IHTMLTextRangeMetrics_INTERFACE_DEFINED__

/* interface IHTMLTextRangeMetrics */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLTextRangeMetrics;


    MIDL_INTERFACE("3050f40b-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLTextRangeMetrics : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_offsetTop(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_offsetLeft(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_boundingTop(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_boundingLeft(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_boundingWidth(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_boundingHeight(
            /* [out][retval] */ __RPC__out long *p) = 0;

    };





#endif 	/* __IHTMLTextRangeMetrics_INTERFACE_DEFINED__ */


#ifndef __IHTMLTextRangeMetrics2_INTERFACE_DEFINED__
#define __IHTMLTextRangeMetrics2_INTERFACE_DEFINED__

/* interface IHTMLTextRangeMetrics2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLTextRangeMetrics2;


    MIDL_INTERFACE("3050f4a6-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLTextRangeMetrics2 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getClientRects(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLRectCollection **pRectCol) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getBoundingClientRect(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLRect **pRect) = 0;

    };





#endif 	/* __IHTMLTextRangeMetrics2_INTERFACE_DEFINED__ */


#ifndef __IHTMLTxtRangeCollection_INTERFACE_DEFINED__
#define __IHTMLTxtRangeCollection_INTERFACE_DEFINED__

/* interface IHTMLTxtRangeCollection */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLTxtRangeCollection;


    MIDL_INTERFACE("3050f7ed-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLTxtRangeCollection : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_length(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [restricted][hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get__newEnum(
            /* [out][retval] */ __RPC__deref_out_opt IUnknown **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE item(
            /* [in] */ __RPC__in VARIANT *pvarIndex,
            /* [out][retval] */ __RPC__out VARIANT *pvarResult) = 0;

    };





#endif 	/* __IHTMLTxtRangeCollection_INTERFACE_DEFINED__ */


#ifndef __HTMLFormElementEvents2_DISPINTERFACE_DEFINED__
#define __HTMLFormElementEvents2_DISPINTERFACE_DEFINED__

/* dispinterface HTMLFormElementEvents2 */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLFormElementEvents2;


    MIDL_INTERFACE("3050f614-98b5-11cf-bb82-00aa00bdce0b")
    HTMLFormElementEvents2 : public IDispatch
    {
    };



#endif 	/* __HTMLFormElementEvents2_DISPINTERFACE_DEFINED__ */


#ifndef __HTMLFormElementEvents_DISPINTERFACE_DEFINED__
#define __HTMLFormElementEvents_DISPINTERFACE_DEFINED__

/* dispinterface HTMLFormElementEvents */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLFormElementEvents;


    MIDL_INTERFACE("3050f364-98b5-11cf-bb82-00aa00bdce0b")
    HTMLFormElementEvents : public IDispatch
    {
    };



#endif 	/* __HTMLFormElementEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IHTMLFormElement_INTERFACE_DEFINED__
#define __IHTMLFormElement_INTERFACE_DEFINED__

/* interface IHTMLFormElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLFormElement;


    MIDL_INTERFACE("3050f1f7-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLFormElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_action(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_action(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_dir(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_dir(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_encoding(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_encoding(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_method(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_method(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_elements(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_target(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_target(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_name(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_name(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onsubmit(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onsubmit(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onreset(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onreset(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE submit( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE reset( void) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_length(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_length(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [restricted][hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get__newEnum(
            /* [out][retval] */ __RPC__deref_out_opt IUnknown **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE item(
            /* [in][optional] */ VARIANT name,
            /* [in][optional] */ VARIANT index,
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **pdisp) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE tags(
            /* [in] */ VARIANT tagName,
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **pdisp) = 0;

    };





#endif 	/* __IHTMLFormElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLFormElement2_INTERFACE_DEFINED__
#define __IHTMLFormElement2_INTERFACE_DEFINED__

/* interface IHTMLFormElement2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLFormElement2;


    MIDL_INTERFACE("3050f4f6-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLFormElement2 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_acceptCharset(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_acceptCharset(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE urns(
            /* [in] */ VARIANT urn,
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **pdisp) = 0;

    };





#endif 	/* __IHTMLFormElement2_INTERFACE_DEFINED__ */


#ifndef __IHTMLFormElement3_INTERFACE_DEFINED__
#define __IHTMLFormElement3_INTERFACE_DEFINED__

/* interface IHTMLFormElement3 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLFormElement3;


    MIDL_INTERFACE("3050f836-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLFormElement3 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE namedItem(
            /* [in] */ __RPC__in BSTR name,
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **pdisp) = 0;

    };





#endif 	/* __IHTMLFormElement3_INTERFACE_DEFINED__ */


#ifndef __IHTMLSubmitData_INTERFACE_DEFINED__
#define __IHTMLSubmitData_INTERFACE_DEFINED__

/* interface IHTMLSubmitData */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLSubmitData;


    MIDL_INTERFACE("3050f645-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLSubmitData : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE appendNameValuePair(
            /* [in][defaultvalue] */ __RPC__in BSTR name = L"",
            /* [in][defaultvalue] */ __RPC__in BSTR value = L"") = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE appendNameFilePair(
            /* [in][defaultvalue] */ __RPC__in BSTR name = L"",
            /* [in][defaultvalue] */ __RPC__in BSTR filename = L"") = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE appendItemSeparator( void) = 0;

    };





#endif 	/* __IHTMLSubmitData_INTERFACE_DEFINED__ */


#ifndef __DispHTMLFormElement_DISPINTERFACE_DEFINED__
#define __DispHTMLFormElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLFormElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLFormElement;


    MIDL_INTERFACE("3050f510-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLFormElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLFormElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLFormElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f251-98b5-11cf-bb82-00aa00bdce0b")
HTMLFormElement;
#endif

#ifndef __HTMLControlElementEvents2_DISPINTERFACE_DEFINED__
#define __HTMLControlElementEvents2_DISPINTERFACE_DEFINED__

/* dispinterface HTMLControlElementEvents2 */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLControlElementEvents2;


    MIDL_INTERFACE("3050f612-98b5-11cf-bb82-00aa00bdce0b")
    HTMLControlElementEvents2 : public IDispatch
    {
    };



#endif 	/* __HTMLControlElementEvents2_DISPINTERFACE_DEFINED__ */


#ifndef __HTMLControlElementEvents_DISPINTERFACE_DEFINED__
#define __HTMLControlElementEvents_DISPINTERFACE_DEFINED__

/* dispinterface HTMLControlElementEvents */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLControlElementEvents;


    MIDL_INTERFACE("3050f4ea-98b5-11cf-bb82-00aa00bdce0b")
    HTMLControlElementEvents : public IDispatch
    {
    };



#endif 	/* __HTMLControlElementEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IHTMLControlElement_INTERFACE_DEFINED__
#define __IHTMLControlElement_INTERFACE_DEFINED__

/* interface IHTMLControlElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLControlElement;


    MIDL_INTERFACE("3050f4e9-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLControlElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_tabIndex(
            /* [in] */ short v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_tabIndex(
            /* [out][retval] */ __RPC__out short *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE focus( void) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_accessKey(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_accessKey(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onblur(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onblur(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onfocus(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onfocus(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onresize(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onresize(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE blur( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE addFilter(
            /* [in] */ __RPC__in_opt IUnknown *pUnk) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE removeFilter(
            /* [in] */ __RPC__in_opt IUnknown *pUnk) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_clientHeight(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_clientWidth(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_clientTop(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_clientLeft(
            /* [out][retval] */ __RPC__out long *p) = 0;

    };





#endif 	/* __IHTMLControlElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLTextElement_INTERFACE_DEFINED__
#define __IHTMLTextElement_INTERFACE_DEFINED__

/* interface IHTMLTextElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLTextElement;


    MIDL_INTERFACE("3050f218-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLTextElement : public IDispatch
    {
    public:
    };





#endif 	/* __IHTMLTextElement_INTERFACE_DEFINED__ */


#ifndef __DispHTMLTextElement_DISPINTERFACE_DEFINED__
#define __DispHTMLTextElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLTextElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLTextElement;


    MIDL_INTERFACE("3050f537-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLTextElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLTextElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLTextElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f26a-98b5-11cf-bb82-00aa00bdce0b")
HTMLTextElement;
#endif

#ifndef __HTMLTextContainerEvents2_DISPINTERFACE_DEFINED__
#define __HTMLTextContainerEvents2_DISPINTERFACE_DEFINED__

/* dispinterface HTMLTextContainerEvents2 */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLTextContainerEvents2;


    MIDL_INTERFACE("3050f624-98b5-11cf-bb82-00aa00bdce0b")
    HTMLTextContainerEvents2 : public IDispatch
    {
    };



#endif 	/* __HTMLTextContainerEvents2_DISPINTERFACE_DEFINED__ */


#ifndef __HTMLTextContainerEvents_DISPINTERFACE_DEFINED__
#define __HTMLTextContainerEvents_DISPINTERFACE_DEFINED__

/* dispinterface HTMLTextContainerEvents */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLTextContainerEvents;


    MIDL_INTERFACE("1FF6AA72-5842-11cf-A707-00AA00C0098D")
    HTMLTextContainerEvents : public IDispatch
    {
    };



#endif 	/* __HTMLTextContainerEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IHTMLTextContainer_INTERFACE_DEFINED__
#define __IHTMLTextContainer_INTERFACE_DEFINED__

/* interface IHTMLTextContainer */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLTextContainer;


    MIDL_INTERFACE("3050f230-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLTextContainer : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createControlRange(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **range) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollHeight(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollWidth(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_scrollTop(
            /* [in] */ long v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollTop(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_scrollLeft(
            /* [in] */ long v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollLeft(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onscroll(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onscroll(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

    };





#endif 	/* __IHTMLTextContainer_INTERFACE_DEFINED__ */


#ifndef __IHTMLControlRange_INTERFACE_DEFINED__
#define __IHTMLControlRange_INTERFACE_DEFINED__

/* interface IHTMLControlRange */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLControlRange;


    MIDL_INTERFACE("3050f29c-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLControlRange : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE select( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE add(
            /* [in] */ __RPC__in_opt IHTMLControlElement *item) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE remove(
            /* [in] */ long index) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE item(
            /* [in] */ long index,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElement **pdisp) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE scrollIntoView(
            /* [in][optional] */ VARIANT varargStart) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE queryCommandSupported(
            /* [in] */ __RPC__in BSTR cmdID,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfRet) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE queryCommandEnabled(
            /* [in] */ __RPC__in BSTR cmdID,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfRet) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE queryCommandState(
            /* [in] */ __RPC__in BSTR cmdID,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfRet) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE queryCommandIndeterm(
            /* [in] */ __RPC__in BSTR cmdID,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfRet) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE queryCommandText(
            /* [in] */ __RPC__in BSTR cmdID,
            /* [out][retval] */ __RPC__deref_out_opt BSTR *pcmdText) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE queryCommandValue(
            /* [in] */ __RPC__in BSTR cmdID,
            /* [out][retval] */ __RPC__out VARIANT *pcmdValue) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE execCommand(
            /* [in] */ __RPC__in BSTR cmdID,
            /* [in][defaultvalue] */ VARIANT_BOOL showUI,
            /* [in][optional] */ VARIANT value,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfRet) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE execCommandShowHelp(
            /* [in] */ __RPC__in BSTR cmdID,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfRet) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE commonParentElement(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElement **parent) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_length(
            /* [out][retval] */ __RPC__out long *p) = 0;

    };





#endif 	/* __IHTMLControlRange_INTERFACE_DEFINED__ */


#ifndef __IHTMLControlRange2_INTERFACE_DEFINED__
#define __IHTMLControlRange2_INTERFACE_DEFINED__

/* interface IHTMLControlRange2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLControlRange2;


    MIDL_INTERFACE("3050f65e-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLControlRange2 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE addElement(
            /* [in] */ __RPC__in_opt IHTMLElement *item) = 0;

    };





#endif 	/* __IHTMLControlRange2_INTERFACE_DEFINED__ */


#ifndef __HTMLImgEvents2_DISPINTERFACE_DEFINED__
#define __HTMLImgEvents2_DISPINTERFACE_DEFINED__

/* dispinterface HTMLImgEvents2 */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLImgEvents2;


    MIDL_INTERFACE("3050f616-98b5-11cf-bb82-00aa00bdce0b")
    HTMLImgEvents2 : public IDispatch
    {
    };



#endif 	/* __HTMLImgEvents2_DISPINTERFACE_DEFINED__ */


#ifndef __HTMLImgEvents_DISPINTERFACE_DEFINED__
#define __HTMLImgEvents_DISPINTERFACE_DEFINED__

/* dispinterface HTMLImgEvents */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLImgEvents;


    MIDL_INTERFACE("3050f25b-98b5-11cf-bb82-00aa00bdce0b")
    HTMLImgEvents : public IDispatch
    {
    };



#endif 	/* __HTMLImgEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IHTMLImgElement_INTERFACE_DEFINED__
#define __IHTMLImgElement_INTERFACE_DEFINED__

/* interface IHTMLImgElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLImgElement;


    MIDL_INTERFACE("3050f240-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLImgElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_isMap(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_isMap(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_useMap(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_useMap(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_mimeType(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_fileSize(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_fileCreatedDate(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_fileModifiedDate(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_fileUpdatedDate(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_protocol(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_href(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_nameProp(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_border(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_border(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_vspace(
            /* [in] */ long v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_vspace(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_hspace(
            /* [in] */ long v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_hspace(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_alt(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_alt(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_src(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_src(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_lowsrc(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_lowsrc(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_vrml(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_vrml(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_dynsrc(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_dynsrc(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_readyState(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_complete(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_loop(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_loop(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_align(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_align(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onload(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onload(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onerror(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onerror(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onabort(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onabort(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_name(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_name(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_width(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_width(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_height(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_height(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_start(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_start(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLImgElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLImgElement2_INTERFACE_DEFINED__
#define __IHTMLImgElement2_INTERFACE_DEFINED__

/* interface IHTMLImgElement2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLImgElement2;


    MIDL_INTERFACE("3050f826-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLImgElement2 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_longDesc(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_longDesc(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLImgElement2_INTERFACE_DEFINED__ */


#ifndef __IHTMLImageElementFactory_INTERFACE_DEFINED__
#define __IHTMLImageElementFactory_INTERFACE_DEFINED__

/* interface IHTMLImageElementFactory */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLImageElementFactory;


    MIDL_INTERFACE("3050f38e-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLImageElementFactory : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE create(
            /* [in][optional] */ VARIANT width,
            /* [in][optional] */ VARIANT height,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLImgElement **__MIDL__IHTMLImageElementFactory0000) = 0;

    };





#endif 	/* __IHTMLImageElementFactory_INTERFACE_DEFINED__ */


#ifndef __DispHTMLImg_DISPINTERFACE_DEFINED__
#define __DispHTMLImg_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLImg */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLImg;


    MIDL_INTERFACE("3050f51c-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLImg : public IDispatch
    {
    };



#endif 	/* __DispHTMLImg_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLImg;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f241-98b5-11cf-bb82-00aa00bdce0b")
HTMLImg;
#endif

EXTERN_C const CLSID CLSID_HTMLImageElementFactory;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f38f-98b5-11cf-bb82-00aa00bdce0b")
HTMLImageElementFactory;
#endif

#ifndef __IHTMLXMLHttpRequest_INTERFACE_DEFINED__
#define __IHTMLXMLHttpRequest_INTERFACE_DEFINED__

/* interface IHTMLXMLHttpRequest */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLXMLHttpRequest;


    MIDL_INTERFACE("3051040a-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLXMLHttpRequest : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_readyState(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_responseBody(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_responseText(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_responseXML(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_status(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_statusText(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_onreadystatechange(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_onreadystatechange(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE abort( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE open(
            /* [in] */ __RPC__in BSTR bstrMethod,
            /* [in] */ __RPC__in BSTR bstrUrl,
            /* [in] */ VARIANT varAsync,
            /* [in][optional] */ VARIANT varUser,
            /* [in][optional] */ VARIANT varPassword) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE send(
            /* [in][optional] */ VARIANT varBody) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getAllResponseHeaders(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *__MIDL__IHTMLXMLHttpRequest0000) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getResponseHeader(
            /* [in] */ __RPC__in BSTR bstrHeader,
            /* [out][retval] */ __RPC__deref_out_opt BSTR *__MIDL__IHTMLXMLHttpRequest0001) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setRequestHeader(
            /* [in] */ __RPC__in BSTR bstrHeader,
            /* [in] */ __RPC__in BSTR bstrValue) = 0;

    };





#endif 	/* __IHTMLXMLHttpRequest_INTERFACE_DEFINED__ */


#ifndef __IHTMLXMLHttpRequestFactory_INTERFACE_DEFINED__
#define __IHTMLXMLHttpRequestFactory_INTERFACE_DEFINED__

/* interface IHTMLXMLHttpRequestFactory */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLXMLHttpRequestFactory;


    MIDL_INTERFACE("3051040c-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLXMLHttpRequestFactory : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE create(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLXMLHttpRequest **__MIDL__IHTMLXMLHttpRequestFactory0000) = 0;

    };





#endif 	/* __IHTMLXMLHttpRequestFactory_INTERFACE_DEFINED__ */


#ifndef __DispHTMLXMLHttpRequest_DISPINTERFACE_DEFINED__
#define __DispHTMLXMLHttpRequest_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLXMLHttpRequest */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLXMLHttpRequest;


    MIDL_INTERFACE("3050f596-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLXMLHttpRequest : public IDispatch
    {
    };



#endif 	/* __DispHTMLXMLHttpRequest_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLXMLHttpRequest;

#ifdef __cplusplus

class DECLSPEC_UUID("3051040b-98b5-11cf-bb82-00aa00bdce0b")
HTMLXMLHttpRequest;
#endif

EXTERN_C const CLSID CLSID_HTMLXMLHttpRequestFactory;

#ifdef __cplusplus

class DECLSPEC_UUID("3051040d-98b5-11cf-bb82-00aa00bdce0b")
HTMLXMLHttpRequestFactory;
#endif

#ifndef __IHTMLBodyElement_INTERFACE_DEFINED__
#define __IHTMLBodyElement_INTERFACE_DEFINED__

/* interface IHTMLBodyElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLBodyElement;


    MIDL_INTERFACE("3050f1d8-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLBodyElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_background(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_background(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_bgProperties(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_bgProperties(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_leftMargin(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_leftMargin(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_topMargin(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_topMargin(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_rightMargin(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_rightMargin(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_bottomMargin(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_bottomMargin(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_noWrap(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_noWrap(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_bgColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_bgColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_text(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_text(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_link(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_link(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_vLink(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_vLink(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_aLink(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_aLink(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onload(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onload(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onunload(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onunload(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_scroll(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scroll(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onselect(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onselect(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onbeforeunload(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onbeforeunload(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createTextRange(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLTxtRange **range) = 0;

    };





#endif 	/* __IHTMLBodyElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLBodyElement2_INTERFACE_DEFINED__
#define __IHTMLBodyElement2_INTERFACE_DEFINED__

/* interface IHTMLBodyElement2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLBodyElement2;


    MIDL_INTERFACE("3050f5c5-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLBodyElement2 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onbeforeprint(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onbeforeprint(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onafterprint(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onafterprint(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

    };





#endif 	/* __IHTMLBodyElement2_INTERFACE_DEFINED__ */


#ifndef __DispHTMLBody_DISPINTERFACE_DEFINED__
#define __DispHTMLBody_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLBody */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLBody;


    MIDL_INTERFACE("3050f507-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLBody : public IDispatch
    {
    };



#endif 	/* __DispHTMLBody_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLBody;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f24a-98b5-11cf-bb82-00aa00bdce0b")
HTMLBody;
#endif

#ifndef __IHTMLFontElement_INTERFACE_DEFINED__
#define __IHTMLFontElement_INTERFACE_DEFINED__

/* interface IHTMLFontElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLFontElement;


    MIDL_INTERFACE("3050f1d9-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLFontElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_color(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_color(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_face(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_face(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_size(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_size(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

    };





#endif 	/* __IHTMLFontElement_INTERFACE_DEFINED__ */


#ifndef __DispHTMLFontElement_DISPINTERFACE_DEFINED__
#define __DispHTMLFontElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLFontElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLFontElement;


    MIDL_INTERFACE("3050f512-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLFontElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLFontElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLFontElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f27b-98b5-11cf-bb82-00aa00bdce0b")
HTMLFontElement;
#endif

#ifndef __HTMLAnchorEvents2_DISPINTERFACE_DEFINED__
#define __HTMLAnchorEvents2_DISPINTERFACE_DEFINED__

/* dispinterface HTMLAnchorEvents2 */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLAnchorEvents2;


    MIDL_INTERFACE("3050f610-98b5-11cf-bb82-00aa00bdce0b")
    HTMLAnchorEvents2 : public IDispatch
    {
    };



#endif 	/* __HTMLAnchorEvents2_DISPINTERFACE_DEFINED__ */


#ifndef __HTMLAnchorEvents_DISPINTERFACE_DEFINED__
#define __HTMLAnchorEvents_DISPINTERFACE_DEFINED__

/* dispinterface HTMLAnchorEvents */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLAnchorEvents;


    MIDL_INTERFACE("3050f29d-98b5-11cf-bb82-00aa00bdce0b")
    HTMLAnchorEvents : public IDispatch
    {
    };



#endif 	/* __HTMLAnchorEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IHTMLAnchorElement_INTERFACE_DEFINED__
#define __IHTMLAnchorElement_INTERFACE_DEFINED__

/* interface IHTMLAnchorElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLAnchorElement;


    MIDL_INTERFACE("3050f1da-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLAnchorElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_href(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_href(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_target(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_target(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_rel(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_rel(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_rev(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_rev(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_urn(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_urn(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_Methods(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_Methods(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_name(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_name(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_host(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_host(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_hostname(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_hostname(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_pathname(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_pathname(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_port(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_port(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_protocol(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_protocol(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_search(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_search(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_hash(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_hash(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onblur(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onblur(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onfocus(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onfocus(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_accessKey(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_accessKey(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_protocolLong(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_mimeType(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_nameProp(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_tabIndex(
            /* [in] */ short v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_tabIndex(
            /* [out][retval] */ __RPC__out short *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE focus( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE blur( void) = 0;

    };





#endif 	/* __IHTMLAnchorElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLAnchorElement2_INTERFACE_DEFINED__
#define __IHTMLAnchorElement2_INTERFACE_DEFINED__

/* interface IHTMLAnchorElement2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLAnchorElement2;


    MIDL_INTERFACE("3050f825-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLAnchorElement2 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_charset(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_charset(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_coords(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_coords(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_hreflang(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_hreflang(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_shape(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_shape(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_type(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_type(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLAnchorElement2_INTERFACE_DEFINED__ */


#ifndef __DispHTMLAnchorElement_DISPINTERFACE_DEFINED__
#define __DispHTMLAnchorElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLAnchorElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLAnchorElement;


    MIDL_INTERFACE("3050f502-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLAnchorElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLAnchorElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLAnchorElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f248-98b5-11cf-bb82-00aa00bdce0b")
HTMLAnchorElement;
#endif

#ifndef __HTMLLabelEvents2_DISPINTERFACE_DEFINED__
#define __HTMLLabelEvents2_DISPINTERFACE_DEFINED__

/* dispinterface HTMLLabelEvents2 */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLLabelEvents2;


    MIDL_INTERFACE("3050f61c-98b5-11cf-bb82-00aa00bdce0b")
    HTMLLabelEvents2 : public IDispatch
    {
    };



#endif 	/* __HTMLLabelEvents2_DISPINTERFACE_DEFINED__ */


#ifndef __HTMLLabelEvents_DISPINTERFACE_DEFINED__
#define __HTMLLabelEvents_DISPINTERFACE_DEFINED__

/* dispinterface HTMLLabelEvents */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLLabelEvents;


    MIDL_INTERFACE("3050f329-98b5-11cf-bb82-00aa00bdce0b")
    HTMLLabelEvents : public IDispatch
    {
    };



#endif 	/* __HTMLLabelEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IHTMLLabelElement_INTERFACE_DEFINED__
#define __IHTMLLabelElement_INTERFACE_DEFINED__

/* interface IHTMLLabelElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLLabelElement;


    MIDL_INTERFACE("3050f32a-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLLabelElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_htmlFor(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_htmlFor(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_accessKey(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_accessKey(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLLabelElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLLabelElement2_INTERFACE_DEFINED__
#define __IHTMLLabelElement2_INTERFACE_DEFINED__

/* interface IHTMLLabelElement2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLLabelElement2;


    MIDL_INTERFACE("3050f832-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLLabelElement2 : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_form(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLFormElement **p) = 0;

    };





#endif 	/* __IHTMLLabelElement2_INTERFACE_DEFINED__ */


#ifndef __DispHTMLLabelElement_DISPINTERFACE_DEFINED__
#define __DispHTMLLabelElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLLabelElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLLabelElement;


    MIDL_INTERFACE("3050f522-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLLabelElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLLabelElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLLabelElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f32b-98b5-11cf-bb82-00aa00bdce0b")
HTMLLabelElement;
#endif

#ifndef __IHTMLListElement_INTERFACE_DEFINED__
#define __IHTMLListElement_INTERFACE_DEFINED__

/* interface IHTMLListElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLListElement;


    MIDL_INTERFACE("3050f20e-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLListElement : public IDispatch
    {
    public:
    };





#endif 	/* __IHTMLListElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLListElement2_INTERFACE_DEFINED__
#define __IHTMLListElement2_INTERFACE_DEFINED__

/* interface IHTMLListElement2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLListElement2;


    MIDL_INTERFACE("3050f822-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLListElement2 : public IDispatch
    {
    public:
        virtual /* [bindable][id][propput] */ HRESULT STDMETHODCALLTYPE put_compact(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][id][propget] */ HRESULT STDMETHODCALLTYPE get_compact(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

    };





#endif 	/* __IHTMLListElement2_INTERFACE_DEFINED__ */


#ifndef __DispHTMLListElement_DISPINTERFACE_DEFINED__
#define __DispHTMLListElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLListElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLListElement;


    MIDL_INTERFACE("3050f525-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLListElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLListElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLListElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f272-98b5-11cf-bb82-00aa00bdce0b")
HTMLListElement;
#endif

#ifndef __IHTMLUListElement_INTERFACE_DEFINED__
#define __IHTMLUListElement_INTERFACE_DEFINED__

/* interface IHTMLUListElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLUListElement;


    MIDL_INTERFACE("3050f1dd-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLUListElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_compact(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_compact(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_type(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_type(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLUListElement_INTERFACE_DEFINED__ */


#ifndef __DispHTMLUListElement_DISPINTERFACE_DEFINED__
#define __DispHTMLUListElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLUListElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLUListElement;


    MIDL_INTERFACE("3050f538-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLUListElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLUListElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLUListElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f269-98b5-11cf-bb82-00aa00bdce0b")
HTMLUListElement;
#endif

#ifndef __IHTMLOListElement_INTERFACE_DEFINED__
#define __IHTMLOListElement_INTERFACE_DEFINED__

/* interface IHTMLOListElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLOListElement;


    MIDL_INTERFACE("3050f1de-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLOListElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_compact(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_compact(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_start(
            /* [in] */ long v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_start(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_type(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_type(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLOListElement_INTERFACE_DEFINED__ */


#ifndef __DispHTMLOListElement_DISPINTERFACE_DEFINED__
#define __DispHTMLOListElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLOListElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLOListElement;


    MIDL_INTERFACE("3050f52a-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLOListElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLOListElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLOListElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f270-98b5-11cf-bb82-00aa00bdce0b")
HTMLOListElement;
#endif

#ifndef __IHTMLLIElement_INTERFACE_DEFINED__
#define __IHTMLLIElement_INTERFACE_DEFINED__

/* interface IHTMLLIElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLLIElement;


    MIDL_INTERFACE("3050f1e0-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLLIElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_type(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_type(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_value(
            /* [in] */ long v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_value(
            /* [out][retval] */ __RPC__out long *p) = 0;

    };





#endif 	/* __IHTMLLIElement_INTERFACE_DEFINED__ */


#ifndef __DispHTMLLIElement_DISPINTERFACE_DEFINED__
#define __DispHTMLLIElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLLIElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLLIElement;


    MIDL_INTERFACE("3050f523-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLLIElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLLIElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLLIElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f273-98b5-11cf-bb82-00aa00bdce0b")
HTMLLIElement;
#endif

#ifndef __IHTMLBlockElement_INTERFACE_DEFINED__
#define __IHTMLBlockElement_INTERFACE_DEFINED__

/* interface IHTMLBlockElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLBlockElement;


    MIDL_INTERFACE("3050f208-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLBlockElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_clear(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_clear(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLBlockElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLBlockElement2_INTERFACE_DEFINED__
#define __IHTMLBlockElement2_INTERFACE_DEFINED__

/* interface IHTMLBlockElement2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLBlockElement2;


    MIDL_INTERFACE("3050f823-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLBlockElement2 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_cite(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_cite(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_width(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_width(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLBlockElement2_INTERFACE_DEFINED__ */


#ifndef __DispHTMLBlockElement_DISPINTERFACE_DEFINED__
#define __DispHTMLBlockElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLBlockElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLBlockElement;


    MIDL_INTERFACE("3050f506-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLBlockElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLBlockElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLBlockElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f281-98b5-11cf-bb82-00aa00bdce0b")
HTMLBlockElement;
#endif

#ifndef __IHTMLDivElement_INTERFACE_DEFINED__
#define __IHTMLDivElement_INTERFACE_DEFINED__

/* interface IHTMLDivElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLDivElement;


    MIDL_INTERFACE("3050f200-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLDivElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_align(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_align(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_noWrap(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_noWrap(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

    };





#endif 	/* __IHTMLDivElement_INTERFACE_DEFINED__ */


#ifndef __DispHTMLDivElement_DISPINTERFACE_DEFINED__
#define __DispHTMLDivElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLDivElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLDivElement;


    MIDL_INTERFACE("3050f50c-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLDivElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLDivElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLDivElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f27e-98b5-11cf-bb82-00aa00bdce0b")
HTMLDivElement;
#endif

#ifndef __IHTMLDDElement_INTERFACE_DEFINED__
#define __IHTMLDDElement_INTERFACE_DEFINED__

/* interface IHTMLDDElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLDDElement;


    MIDL_INTERFACE("3050f1f2-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLDDElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_noWrap(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_noWrap(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

    };





#endif 	/* __IHTMLDDElement_INTERFACE_DEFINED__ */


#ifndef __DispHTMLDDElement_DISPINTERFACE_DEFINED__
#define __DispHTMLDDElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLDDElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLDDElement;


    MIDL_INTERFACE("3050f50b-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLDDElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLDDElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLDDElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f27f-98b5-11cf-bb82-00aa00bdce0b")
HTMLDDElement;
#endif

#ifndef __IHTMLDTElement_INTERFACE_DEFINED__
#define __IHTMLDTElement_INTERFACE_DEFINED__

/* interface IHTMLDTElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLDTElement;


    MIDL_INTERFACE("3050f1f3-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLDTElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_noWrap(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_noWrap(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

    };





#endif 	/* __IHTMLDTElement_INTERFACE_DEFINED__ */


#ifndef __DispHTMLDTElement_DISPINTERFACE_DEFINED__
#define __DispHTMLDTElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLDTElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLDTElement;


    MIDL_INTERFACE("3050f50d-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLDTElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLDTElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLDTElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f27c-98b5-11cf-bb82-00aa00bdce0b")
HTMLDTElement;
#endif

#ifndef __IHTMLBRElement_INTERFACE_DEFINED__
#define __IHTMLBRElement_INTERFACE_DEFINED__

/* interface IHTMLBRElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLBRElement;


    MIDL_INTERFACE("3050f1f0-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLBRElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_clear(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_clear(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLBRElement_INTERFACE_DEFINED__ */


#ifndef __DispHTMLBRElement_DISPINTERFACE_DEFINED__
#define __DispHTMLBRElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLBRElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLBRElement;


    MIDL_INTERFACE("3050f53a-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLBRElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLBRElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLBRElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f280-98b5-11cf-bb82-00aa00bdce0b")
HTMLBRElement;
#endif

#ifndef __IHTMLDListElement_INTERFACE_DEFINED__
#define __IHTMLDListElement_INTERFACE_DEFINED__

/* interface IHTMLDListElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLDListElement;


    MIDL_INTERFACE("3050f1f1-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLDListElement : public IDispatch
    {
    public:
        virtual /* [bindable][id][propput] */ HRESULT STDMETHODCALLTYPE put_compact(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][id][propget] */ HRESULT STDMETHODCALLTYPE get_compact(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

    };





#endif 	/* __IHTMLDListElement_INTERFACE_DEFINED__ */


#ifndef __DispHTMLDListElement_DISPINTERFACE_DEFINED__
#define __DispHTMLDListElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLDListElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLDListElement;


    MIDL_INTERFACE("3050f53b-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLDListElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLDListElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLDListElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f27d-98b5-11cf-bb82-00aa00bdce0b")
HTMLDListElement;
#endif

#ifndef __IHTMLHRElement_INTERFACE_DEFINED__
#define __IHTMLHRElement_INTERFACE_DEFINED__

/* interface IHTMLHRElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLHRElement;


    MIDL_INTERFACE("3050f1f4-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLHRElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_align(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_align(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_color(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_color(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][id][propput] */ HRESULT STDMETHODCALLTYPE put_noShade(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][id][propget] */ HRESULT STDMETHODCALLTYPE get_noShade(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_width(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_width(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_size(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_size(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

    };





#endif 	/* __IHTMLHRElement_INTERFACE_DEFINED__ */


#ifndef __DispHTMLHRElement_DISPINTERFACE_DEFINED__
#define __DispHTMLHRElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLHRElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLHRElement;


    MIDL_INTERFACE("3050f53d-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLHRElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLHRElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLHRElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f252-98b5-11cf-bb82-00aa00bdce0b")
HTMLHRElement;
#endif

#ifndef __IHTMLParaElement_INTERFACE_DEFINED__
#define __IHTMLParaElement_INTERFACE_DEFINED__

/* interface IHTMLParaElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLParaElement;


    MIDL_INTERFACE("3050f1f5-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLParaElement : public IDispatch
    {
    public:
        virtual /* [bindable][id][propput] */ HRESULT STDMETHODCALLTYPE put_align(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][id][propget] */ HRESULT STDMETHODCALLTYPE get_align(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLParaElement_INTERFACE_DEFINED__ */


#ifndef __DispHTMLParaElement_DISPINTERFACE_DEFINED__
#define __DispHTMLParaElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLParaElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLParaElement;


    MIDL_INTERFACE("3050f52c-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLParaElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLParaElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLParaElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f26f-98b5-11cf-bb82-00aa00bdce0b")
HTMLParaElement;
#endif

#ifndef __IHTMLElementCollection2_INTERFACE_DEFINED__
#define __IHTMLElementCollection2_INTERFACE_DEFINED__

/* interface IHTMLElementCollection2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLElementCollection2;


    MIDL_INTERFACE("3050f5ee-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLElementCollection2 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE urns(
            /* [in] */ VARIANT urn,
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **pdisp) = 0;

    };





#endif 	/* __IHTMLElementCollection2_INTERFACE_DEFINED__ */


#ifndef __IHTMLElementCollection3_INTERFACE_DEFINED__
#define __IHTMLElementCollection3_INTERFACE_DEFINED__

/* interface IHTMLElementCollection3 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLElementCollection3;


    MIDL_INTERFACE("3050f835-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLElementCollection3 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE namedItem(
            /* [in] */ __RPC__in BSTR name,
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **pdisp) = 0;

    };





#endif 	/* __IHTMLElementCollection3_INTERFACE_DEFINED__ */


#ifndef __DispHTMLElementCollection_DISPINTERFACE_DEFINED__
#define __DispHTMLElementCollection_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLElementCollection */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLElementCollection;


    MIDL_INTERFACE("3050f56b-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLElementCollection : public IDispatch
    {
    };



#endif 	/* __DispHTMLElementCollection_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLElementCollection;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f4cb-98b5-11cf-bb82-00aa00bdce0b")
HTMLElementCollection;
#endif

#ifndef __IHTMLHeaderElement_INTERFACE_DEFINED__
#define __IHTMLHeaderElement_INTERFACE_DEFINED__

/* interface IHTMLHeaderElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLHeaderElement;


    MIDL_INTERFACE("3050f1f6-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLHeaderElement : public IDispatch
    {
    public:
        virtual /* [bindable][id][propput] */ HRESULT STDMETHODCALLTYPE put_align(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][id][propget] */ HRESULT STDMETHODCALLTYPE get_align(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLHeaderElement_INTERFACE_DEFINED__ */


#ifndef __DispHTMLHeaderElement_DISPINTERFACE_DEFINED__
#define __DispHTMLHeaderElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLHeaderElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLHeaderElement;


    MIDL_INTERFACE("3050f515-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLHeaderElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLHeaderElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLHeaderElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f27a-98b5-11cf-bb82-00aa00bdce0b")
HTMLHeaderElement;
#endif

#ifndef __HTMLSelectElementEvents2_DISPINTERFACE_DEFINED__
#define __HTMLSelectElementEvents2_DISPINTERFACE_DEFINED__

/* dispinterface HTMLSelectElementEvents2 */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLSelectElementEvents2;


    MIDL_INTERFACE("3050f622-98b5-11cf-bb82-00aa00bdce0b")
    HTMLSelectElementEvents2 : public IDispatch
    {
    };



#endif 	/* __HTMLSelectElementEvents2_DISPINTERFACE_DEFINED__ */


#ifndef __HTMLSelectElementEvents_DISPINTERFACE_DEFINED__
#define __HTMLSelectElementEvents_DISPINTERFACE_DEFINED__

/* dispinterface HTMLSelectElementEvents */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLSelectElementEvents;


    MIDL_INTERFACE("3050f302-98b5-11cf-bb82-00aa00bdce0b")
    HTMLSelectElementEvents : public IDispatch
    {
    };



#endif 	/* __HTMLSelectElementEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IHTMLSelectElementEx_INTERFACE_DEFINED__
#define __IHTMLSelectElementEx_INTERFACE_DEFINED__

/* interface IHTMLSelectElementEx */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IHTMLSelectElementEx;


    MIDL_INTERFACE("3050f2d1-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLSelectElementEx : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ShowDropdown(
            /* [in] */ BOOL fShow) = 0;

        virtual HRESULT STDMETHODCALLTYPE SetSelectExFlags(
            /* [in] */ DWORD lFlags) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetSelectExFlags(
            /* [out][retval] */ __RPC__out DWORD *pFlags) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetDropdownOpen(
            /* [out][retval] */ __RPC__out BOOL *pfOpen) = 0;

    };





#endif 	/* __IHTMLSelectElementEx_INTERFACE_DEFINED__ */


#ifndef __IHTMLSelectElement_INTERFACE_DEFINED__
#define __IHTMLSelectElement_INTERFACE_DEFINED__

/* interface IHTMLSelectElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLSelectElement;


    MIDL_INTERFACE("3050f244-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLSelectElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_size(
            /* [in] */ long v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_size(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_multiple(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_multiple(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_name(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_name(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_options(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onchange(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onchange(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_selectedIndex(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_selectedIndex(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_type(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_value(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_value(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_disabled(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_disabled(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_form(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLFormElement **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE add(
            /* [in] */ __RPC__in_opt IHTMLElement *element,
            /* [in][optional] */ VARIANT before) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE remove(
            /* [in][defaultvalue] */ long index = -1) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_length(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_length(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [restricted][hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get__newEnum(
            /* [out][retval] */ __RPC__deref_out_opt IUnknown **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE item(
            /* [in][optional] */ VARIANT name,
            /* [in][optional] */ VARIANT index,
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **pdisp) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE tags(
            /* [in] */ VARIANT tagName,
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **pdisp) = 0;

    };





#endif 	/* __IHTMLSelectElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLSelectElement2_INTERFACE_DEFINED__
#define __IHTMLSelectElement2_INTERFACE_DEFINED__

/* interface IHTMLSelectElement2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLSelectElement2;


    MIDL_INTERFACE("3050f5ed-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLSelectElement2 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE urns(
            /* [in] */ VARIANT urn,
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **pdisp) = 0;

    };





#endif 	/* __IHTMLSelectElement2_INTERFACE_DEFINED__ */


#ifndef __IHTMLSelectElement4_INTERFACE_DEFINED__
#define __IHTMLSelectElement4_INTERFACE_DEFINED__

/* interface IHTMLSelectElement4 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLSelectElement4;


    MIDL_INTERFACE("3050f838-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLSelectElement4 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE namedItem(
            /* [in] */ __RPC__in BSTR name,
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **pdisp) = 0;

    };





#endif 	/* __IHTMLSelectElement4_INTERFACE_DEFINED__ */


#ifndef __DispHTMLSelectElement_DISPINTERFACE_DEFINED__
#define __DispHTMLSelectElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLSelectElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLSelectElement;


    MIDL_INTERFACE("3050f531-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLSelectElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLSelectElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLSelectElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f245-98b5-11cf-bb82-00aa00bdce0b")
HTMLSelectElement;
#endif

#ifndef __DispHTMLWndSelectElement_DISPINTERFACE_DEFINED__
#define __DispHTMLWndSelectElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLWndSelectElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLWndSelectElement;


    MIDL_INTERFACE("3050f597-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLWndSelectElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLWndSelectElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLWndSelectElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f2cf-98b5-11cf-bb82-00aa00bdce0b")
HTMLWndSelectElement;
#endif

#ifndef __IHTMLSelectionObject_INTERFACE_DEFINED__
#define __IHTMLSelectionObject_INTERFACE_DEFINED__

/* interface IHTMLSelectionObject */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLSelectionObject;


    MIDL_INTERFACE("3050f25A-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLSelectionObject : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createRange(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **range) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE empty( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE clear( void) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_type(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLSelectionObject_INTERFACE_DEFINED__ */


#ifndef __IHTMLSelectionObject2_INTERFACE_DEFINED__
#define __IHTMLSelectionObject2_INTERFACE_DEFINED__

/* interface IHTMLSelectionObject2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLSelectionObject2;


    MIDL_INTERFACE("3050f7ec-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLSelectionObject2 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createRangeCollection(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **rangeCollection) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_typeDetail(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLSelectionObject2_INTERFACE_DEFINED__ */


#ifndef __IHTMLOptionElement_INTERFACE_DEFINED__
#define __IHTMLOptionElement_INTERFACE_DEFINED__

/* interface IHTMLOptionElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLOptionElement;


    MIDL_INTERFACE("3050f211-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLOptionElement : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_selected(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_selected(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_value(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_value(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_defaultSelected(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_defaultSelected(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_index(
            /* [in] */ LONG v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_index(
            /* [out][retval] */ __RPC__out LONG *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_text(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_text(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_form(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLFormElement **p) = 0;

    };





#endif 	/* __IHTMLOptionElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLOptionElement3_INTERFACE_DEFINED__
#define __IHTMLOptionElement3_INTERFACE_DEFINED__

/* interface IHTMLOptionElement3 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLOptionElement3;


    MIDL_INTERFACE("3050f820-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLOptionElement3 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_label(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_label(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLOptionElement3_INTERFACE_DEFINED__ */


#ifndef __IHTMLOptionElementFactory_INTERFACE_DEFINED__
#define __IHTMLOptionElementFactory_INTERFACE_DEFINED__

/* interface IHTMLOptionElementFactory */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLOptionElementFactory;


    MIDL_INTERFACE("3050f38c-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLOptionElementFactory : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE create(
            /* [in][optional] */ VARIANT text,
            /* [in][optional] */ VARIANT value,
            /* [in][optional] */ VARIANT defaultselected,
            /* [in][optional] */ VARIANT selected,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLOptionElement **__MIDL__IHTMLOptionElementFactory0000) = 0;

    };





#endif 	/* __IHTMLOptionElementFactory_INTERFACE_DEFINED__ */


#ifndef __DispHTMLOptionElement_DISPINTERFACE_DEFINED__
#define __DispHTMLOptionElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLOptionElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLOptionElement;


    MIDL_INTERFACE("3050f52b-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLOptionElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLOptionElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLOptionElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f24d-98b5-11cf-bb82-00aa00bdce0b")
HTMLOptionElement;
#endif

EXTERN_C const CLSID CLSID_HTMLOptionElementFactory;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f38d-98b5-11cf-bb82-00aa00bdce0b")
HTMLOptionElementFactory;
#endif

#ifndef __DispHTMLWndOptionElement_DISPINTERFACE_DEFINED__
#define __DispHTMLWndOptionElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLWndOptionElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLWndOptionElement;


    MIDL_INTERFACE("3050f598-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLWndOptionElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLWndOptionElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLWndOptionElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f2d0-98b5-11cf-bb82-00aa00bdce0b")
HTMLWndOptionElement;
#endif

#ifndef __HTMLButtonElementEvents2_DISPINTERFACE_DEFINED__
#define __HTMLButtonElementEvents2_DISPINTERFACE_DEFINED__

/* dispinterface HTMLButtonElementEvents2 */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLButtonElementEvents2;


    MIDL_INTERFACE("3050f617-98b5-11cf-bb82-00aa00bdce0b")
    HTMLButtonElementEvents2 : public IDispatch
    {
    };



#endif 	/* __HTMLButtonElementEvents2_DISPINTERFACE_DEFINED__ */


#ifndef __HTMLButtonElementEvents_DISPINTERFACE_DEFINED__
#define __HTMLButtonElementEvents_DISPINTERFACE_DEFINED__

/* dispinterface HTMLButtonElementEvents */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLButtonElementEvents;


    MIDL_INTERFACE("3050f2b3-98b5-11cf-bb82-00aa00bdce0b")
    HTMLButtonElementEvents : public IDispatch
    {
    };



#endif 	/* __HTMLButtonElementEvents_DISPINTERFACE_DEFINED__ */


#ifndef __HTMLInputTextElementEvents2_DISPINTERFACE_DEFINED__
#define __HTMLInputTextElementEvents2_DISPINTERFACE_DEFINED__

/* dispinterface HTMLInputTextElementEvents2 */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLInputTextElementEvents2;


    MIDL_INTERFACE("3050f618-98b5-11cf-bb82-00aa00bdce0b")
    HTMLInputTextElementEvents2 : public IDispatch
    {
    };



#endif 	/* __HTMLInputTextElementEvents2_DISPINTERFACE_DEFINED__ */


#ifndef __HTMLOptionButtonElementEvents2_DISPINTERFACE_DEFINED__
#define __HTMLOptionButtonElementEvents2_DISPINTERFACE_DEFINED__

/* dispinterface HTMLOptionButtonElementEvents2 */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLOptionButtonElementEvents2;


    MIDL_INTERFACE("3050f619-98b5-11cf-bb82-00aa00bdce0b")
    HTMLOptionButtonElementEvents2 : public IDispatch
    {
    };



#endif 	/* __HTMLOptionButtonElementEvents2_DISPINTERFACE_DEFINED__ */


#ifndef __HTMLInputFileElementEvents2_DISPINTERFACE_DEFINED__
#define __HTMLInputFileElementEvents2_DISPINTERFACE_DEFINED__

/* dispinterface HTMLInputFileElementEvents2 */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLInputFileElementEvents2;


    MIDL_INTERFACE("3050f61a-98b5-11cf-bb82-00aa00bdce0b")
    HTMLInputFileElementEvents2 : public IDispatch
    {
    };



#endif 	/* __HTMLInputFileElementEvents2_DISPINTERFACE_DEFINED__ */


#ifndef __HTMLInputImageEvents2_DISPINTERFACE_DEFINED__
#define __HTMLInputImageEvents2_DISPINTERFACE_DEFINED__

/* dispinterface HTMLInputImageEvents2 */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLInputImageEvents2;


    MIDL_INTERFACE("3050f61b-98b5-11cf-bb82-00aa00bdce0b")
    HTMLInputImageEvents2 : public IDispatch
    {
    };



#endif 	/* __HTMLInputImageEvents2_DISPINTERFACE_DEFINED__ */


#ifndef __HTMLInputTextElementEvents_DISPINTERFACE_DEFINED__
#define __HTMLInputTextElementEvents_DISPINTERFACE_DEFINED__

/* dispinterface HTMLInputTextElementEvents */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLInputTextElementEvents;


    MIDL_INTERFACE("3050f2a7-98b5-11cf-bb82-00aa00bdce0b")
    HTMLInputTextElementEvents : public IDispatch
    {
    };



#endif 	/* __HTMLInputTextElementEvents_DISPINTERFACE_DEFINED__ */


#ifndef __HTMLOptionButtonElementEvents_DISPINTERFACE_DEFINED__
#define __HTMLOptionButtonElementEvents_DISPINTERFACE_DEFINED__

/* dispinterface HTMLOptionButtonElementEvents */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLOptionButtonElementEvents;


    MIDL_INTERFACE("3050f2bd-98b5-11cf-bb82-00aa00bdce0b")
    HTMLOptionButtonElementEvents : public IDispatch
    {
    };



#endif 	/* __HTMLOptionButtonElementEvents_DISPINTERFACE_DEFINED__ */


#ifndef __HTMLInputFileElementEvents_DISPINTERFACE_DEFINED__
#define __HTMLInputFileElementEvents_DISPINTERFACE_DEFINED__

/* dispinterface HTMLInputFileElementEvents */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLInputFileElementEvents;


    MIDL_INTERFACE("3050f2af-98b5-11cf-bb82-00aa00bdce0b")
    HTMLInputFileElementEvents : public IDispatch
    {
    };



#endif 	/* __HTMLInputFileElementEvents_DISPINTERFACE_DEFINED__ */


#ifndef __HTMLInputImageEvents_DISPINTERFACE_DEFINED__
#define __HTMLInputImageEvents_DISPINTERFACE_DEFINED__

/* dispinterface HTMLInputImageEvents */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLInputImageEvents;


    MIDL_INTERFACE("3050f2c3-98b5-11cf-bb82-00aa00bdce0b")
    HTMLInputImageEvents : public IDispatch
    {
    };



#endif 	/* __HTMLInputImageEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IHTMLInputElement_INTERFACE_DEFINED__
#define __IHTMLInputElement_INTERFACE_DEFINED__

/* interface IHTMLInputElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLInputElement;


    MIDL_INTERFACE("3050f5d2-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLInputElement : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_type(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_type(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_value(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_value(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_name(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_name(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_status(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_status(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_disabled(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_disabled(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_form(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLFormElement **p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_size(
            /* [in] */ long v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_size(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_maxLength(
            /* [in] */ long v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_maxLength(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE select( void) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onchange(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onchange(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onselect(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onselect(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [hidden][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_defaultValue(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [hidden][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_defaultValue(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_readOnly(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_readOnly(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createTextRange(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLTxtRange **range) = 0;

        virtual /* [bindable][id][propput] */ HRESULT STDMETHODCALLTYPE put_indeterminate(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][id][propget] */ HRESULT STDMETHODCALLTYPE get_indeterminate(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][id][propput] */ HRESULT STDMETHODCALLTYPE put_defaultChecked(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][id][propget] */ HRESULT STDMETHODCALLTYPE get_defaultChecked(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][id][propput] */ HRESULT STDMETHODCALLTYPE put_checked(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][id][propget] */ HRESULT STDMETHODCALLTYPE get_checked(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_border(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_border(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_vspace(
            /* [in] */ long v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_vspace(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_hspace(
            /* [in] */ long v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_hspace(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_alt(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_alt(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_src(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_src(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_lowsrc(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_lowsrc(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_vrml(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_vrml(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_dynsrc(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_dynsrc(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_readyState(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_complete(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_loop(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_loop(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_align(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_align(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onload(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onload(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onerror(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onerror(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onabort(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onabort(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_width(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_width(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_height(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_height(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_start(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_start(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLInputElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLInputElement2_INTERFACE_DEFINED__
#define __IHTMLInputElement2_INTERFACE_DEFINED__

/* interface IHTMLInputElement2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLInputElement2;


    MIDL_INTERFACE("3050f821-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLInputElement2 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_accept(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_accept(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_useMap(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_useMap(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLInputElement2_INTERFACE_DEFINED__ */


#ifndef __IHTMLInputButtonElement_INTERFACE_DEFINED__
#define __IHTMLInputButtonElement_INTERFACE_DEFINED__

/* interface IHTMLInputButtonElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLInputButtonElement;


    MIDL_INTERFACE("3050f2b2-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLInputButtonElement : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_type(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_value(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_value(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_name(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_name(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_status(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_status(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_disabled(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_disabled(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_form(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLFormElement **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createTextRange(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLTxtRange **range) = 0;

    };





#endif 	/* __IHTMLInputButtonElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLInputHiddenElement_INTERFACE_DEFINED__
#define __IHTMLInputHiddenElement_INTERFACE_DEFINED__

/* interface IHTMLInputHiddenElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLInputHiddenElement;


    MIDL_INTERFACE("3050f2a4-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLInputHiddenElement : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_type(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_value(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_value(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_name(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_name(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_status(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_status(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_disabled(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_disabled(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_form(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLFormElement **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createTextRange(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLTxtRange **range) = 0;

    };





#endif 	/* __IHTMLInputHiddenElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLInputTextElement_INTERFACE_DEFINED__
#define __IHTMLInputTextElement_INTERFACE_DEFINED__

/* interface IHTMLInputTextElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLInputTextElement;


    MIDL_INTERFACE("3050f2a6-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLInputTextElement : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_type(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_value(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_value(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_name(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_name(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_status(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_status(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_disabled(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_disabled(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_form(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLFormElement **p) = 0;

        virtual /* [hidden][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_defaultValue(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [hidden][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_defaultValue(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_size(
            /* [in] */ long v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_size(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_maxLength(
            /* [in] */ long v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_maxLength(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE select( void) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onchange(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onchange(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onselect(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onselect(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_readOnly(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_readOnly(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createTextRange(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLTxtRange **range) = 0;

    };





#endif 	/* __IHTMLInputTextElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLInputFileElement_INTERFACE_DEFINED__
#define __IHTMLInputFileElement_INTERFACE_DEFINED__

/* interface IHTMLInputFileElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLInputFileElement;


    MIDL_INTERFACE("3050f2ad-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLInputFileElement : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_type(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_name(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_name(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_status(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_status(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_disabled(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_disabled(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_form(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLFormElement **p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_size(
            /* [in] */ long v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_size(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_maxLength(
            /* [in] */ long v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_maxLength(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE select( void) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onchange(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onchange(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onselect(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onselect(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_value(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_value(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLInputFileElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLOptionButtonElement_INTERFACE_DEFINED__
#define __IHTMLOptionButtonElement_INTERFACE_DEFINED__

/* interface IHTMLOptionButtonElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLOptionButtonElement;


    MIDL_INTERFACE("3050f2bc-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLOptionButtonElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_value(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_value(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_type(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_name(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_name(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][id][propput] */ HRESULT STDMETHODCALLTYPE put_checked(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][id][propget] */ HRESULT STDMETHODCALLTYPE get_checked(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][id][propput] */ HRESULT STDMETHODCALLTYPE put_defaultChecked(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][id][propget] */ HRESULT STDMETHODCALLTYPE get_defaultChecked(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onchange(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onchange(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_disabled(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_disabled(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_status(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_status(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][id][propput] */ HRESULT STDMETHODCALLTYPE put_indeterminate(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][id][propget] */ HRESULT STDMETHODCALLTYPE get_indeterminate(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_form(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLFormElement **p) = 0;

    };





#endif 	/* __IHTMLOptionButtonElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLInputImage_INTERFACE_DEFINED__
#define __IHTMLInputImage_INTERFACE_DEFINED__

/* interface IHTMLInputImage */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLInputImage;


    MIDL_INTERFACE("3050f2c2-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLInputImage : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_type(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_disabled(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_disabled(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_border(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_border(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_vspace(
            /* [in] */ long v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_vspace(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_hspace(
            /* [in] */ long v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_hspace(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_alt(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_alt(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_src(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_src(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_lowsrc(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_lowsrc(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_vrml(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_vrml(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_dynsrc(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_dynsrc(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_readyState(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_complete(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_loop(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_loop(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_align(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_align(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onload(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onload(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onerror(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onerror(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onabort(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onabort(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_name(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_name(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_width(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_width(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_height(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_height(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_start(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_start(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLInputImage_INTERFACE_DEFINED__ */


#ifndef __DispHTMLInputElement_DISPINTERFACE_DEFINED__
#define __DispHTMLInputElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLInputElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLInputElement;


    MIDL_INTERFACE("3050f57d-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLInputElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLInputElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLInputElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f5d8-98b5-11cf-bb82-00aa00bdce0b")
HTMLInputElement;
#endif

#ifndef __IHTMLTextAreaElement_INTERFACE_DEFINED__
#define __IHTMLTextAreaElement_INTERFACE_DEFINED__

/* interface IHTMLTextAreaElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLTextAreaElement;


    MIDL_INTERFACE("3050f2aa-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLTextAreaElement : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_type(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_value(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_value(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_name(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_name(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_status(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_status(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_disabled(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_disabled(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_form(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLFormElement **p) = 0;

        virtual /* [hidden][bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_defaultValue(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [hidden][bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_defaultValue(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE select( void) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onchange(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onchange(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onselect(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onselect(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_readOnly(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_readOnly(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_rows(
            /* [in] */ long v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_rows(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_cols(
            /* [in] */ long v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_cols(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_wrap(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_wrap(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createTextRange(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLTxtRange **range) = 0;

    };





#endif 	/* __IHTMLTextAreaElement_INTERFACE_DEFINED__ */


#ifndef __DispHTMLTextAreaElement_DISPINTERFACE_DEFINED__
#define __DispHTMLTextAreaElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLTextAreaElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLTextAreaElement;


    MIDL_INTERFACE("3050f521-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLTextAreaElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLTextAreaElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLTextAreaElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f2ac-98b5-11cf-bb82-00aa00bdce0b")
HTMLTextAreaElement;
#endif

#ifndef __DispHTMLRichtextElement_DISPINTERFACE_DEFINED__
#define __DispHTMLRichtextElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLRichtextElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLRichtextElement;


    MIDL_INTERFACE("3050f54d-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLRichtextElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLRichtextElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLRichtextElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f2df-98b5-11cf-bb82-00aa00bdce0b")
HTMLRichtextElement;
#endif

#ifndef __IHTMLButtonElement_INTERFACE_DEFINED__
#define __IHTMLButtonElement_INTERFACE_DEFINED__

/* interface IHTMLButtonElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLButtonElement;


    MIDL_INTERFACE("3050f2bb-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLButtonElement : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_type(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_value(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_value(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_name(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_name(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_status(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_status(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_disabled(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_disabled(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_form(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLFormElement **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createTextRange(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLTxtRange **range) = 0;

    };





#endif 	/* __IHTMLButtonElement_INTERFACE_DEFINED__ */


#ifndef __DispHTMLButtonElement_DISPINTERFACE_DEFINED__
#define __DispHTMLButtonElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLButtonElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLButtonElement;


    MIDL_INTERFACE("3050f51f-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLButtonElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLButtonElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLButtonElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f2c6-98b5-11cf-bb82-00aa00bdce0b")
HTMLButtonElement;
#endif

#ifndef __HTMLMarqueeElementEvents2_DISPINTERFACE_DEFINED__
#define __HTMLMarqueeElementEvents2_DISPINTERFACE_DEFINED__

/* dispinterface HTMLMarqueeElementEvents2 */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLMarqueeElementEvents2;


    MIDL_INTERFACE("3050f61f-98b5-11cf-bb82-00aa00bdce0b")
    HTMLMarqueeElementEvents2 : public IDispatch
    {
    };



#endif 	/* __HTMLMarqueeElementEvents2_DISPINTERFACE_DEFINED__ */


#ifndef __HTMLMarqueeElementEvents_DISPINTERFACE_DEFINED__
#define __HTMLMarqueeElementEvents_DISPINTERFACE_DEFINED__

/* dispinterface HTMLMarqueeElementEvents */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLMarqueeElementEvents;


    MIDL_INTERFACE("3050f2b8-98b5-11cf-bb82-00aa00bdce0b")
    HTMLMarqueeElementEvents : public IDispatch
    {
    };



#endif 	/* __HTMLMarqueeElementEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IHTMLMarqueeElement_INTERFACE_DEFINED__
#define __IHTMLMarqueeElement_INTERFACE_DEFINED__

/* interface IHTMLMarqueeElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLMarqueeElement;


    MIDL_INTERFACE("3050f2b5-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLMarqueeElement : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_bgColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_bgColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_scrollDelay(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollDelay(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_direction(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_direction(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_behavior(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_behavior(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_scrollAmount(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollAmount(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_loop(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_loop(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_vspace(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_vspace(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_hspace(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_hspace(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onfinish(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onfinish(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onstart(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onstart(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onbounce(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onbounce(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_width(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_width(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_height(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_height(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_trueSpeed(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_trueSpeed(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE start( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE stop( void) = 0;

    };





#endif 	/* __IHTMLMarqueeElement_INTERFACE_DEFINED__ */


#ifndef __DispHTMLMarqueeElement_DISPINTERFACE_DEFINED__
#define __DispHTMLMarqueeElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLMarqueeElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLMarqueeElement;


    MIDL_INTERFACE("3050f527-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLMarqueeElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLMarqueeElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLMarqueeElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f2b9-98b5-11cf-bb82-00aa00bdce0b")
HTMLMarqueeElement;
#endif

#ifndef __IHTMLHtmlElement_INTERFACE_DEFINED__
#define __IHTMLHtmlElement_INTERFACE_DEFINED__

/* interface IHTMLHtmlElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLHtmlElement;


    MIDL_INTERFACE("3050f81c-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLHtmlElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_version(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_version(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLHtmlElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLHeadElement_INTERFACE_DEFINED__
#define __IHTMLHeadElement_INTERFACE_DEFINED__

/* interface IHTMLHeadElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLHeadElement;


    MIDL_INTERFACE("3050f81d-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLHeadElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_profile(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_profile(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLHeadElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLTitleElement_INTERFACE_DEFINED__
#define __IHTMLTitleElement_INTERFACE_DEFINED__

/* interface IHTMLTitleElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLTitleElement;


    MIDL_INTERFACE("3050f322-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLTitleElement : public IDispatch
    {
    public:
        virtual /* [bindable][id][propput] */ HRESULT STDMETHODCALLTYPE put_text(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][id][propget] */ HRESULT STDMETHODCALLTYPE get_text(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLTitleElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLMetaElement_INTERFACE_DEFINED__
#define __IHTMLMetaElement_INTERFACE_DEFINED__

/* interface IHTMLMetaElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLMetaElement;


    MIDL_INTERFACE("3050f203-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLMetaElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_httpEquiv(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_httpEquiv(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_content(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_content(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_name(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_name(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_url(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_url(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_charset(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_charset(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLMetaElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLMetaElement2_INTERFACE_DEFINED__
#define __IHTMLMetaElement2_INTERFACE_DEFINED__

/* interface IHTMLMetaElement2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLMetaElement2;


    MIDL_INTERFACE("3050f81f-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLMetaElement2 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_scheme(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scheme(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLMetaElement2_INTERFACE_DEFINED__ */


#ifndef __IHTMLBaseElement_INTERFACE_DEFINED__
#define __IHTMLBaseElement_INTERFACE_DEFINED__

/* interface IHTMLBaseElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLBaseElement;


    MIDL_INTERFACE("3050f204-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLBaseElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_href(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_href(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_target(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_target(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLBaseElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLIsIndexElement_INTERFACE_DEFINED__
#define __IHTMLIsIndexElement_INTERFACE_DEFINED__

/* interface IHTMLIsIndexElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLIsIndexElement;


    MIDL_INTERFACE("3050f206-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLIsIndexElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_prompt(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_prompt(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_action(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_action(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLIsIndexElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLIsIndexElement2_INTERFACE_DEFINED__
#define __IHTMLIsIndexElement2_INTERFACE_DEFINED__

/* interface IHTMLIsIndexElement2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLIsIndexElement2;


    MIDL_INTERFACE("3050f82f-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLIsIndexElement2 : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_form(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLFormElement **p) = 0;

    };





#endif 	/* __IHTMLIsIndexElement2_INTERFACE_DEFINED__ */


#ifndef __IHTMLNextIdElement_INTERFACE_DEFINED__
#define __IHTMLNextIdElement_INTERFACE_DEFINED__

/* interface IHTMLNextIdElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLNextIdElement;


    MIDL_INTERFACE("3050f207-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLNextIdElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_n(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_n(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLNextIdElement_INTERFACE_DEFINED__ */


#ifndef __DispHTMLHtmlElement_DISPINTERFACE_DEFINED__
#define __DispHTMLHtmlElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLHtmlElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLHtmlElement;


    MIDL_INTERFACE("3050f560-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLHtmlElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLHtmlElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLHtmlElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f491-98b5-11cf-bb82-00aa00bdce0b")
HTMLHtmlElement;
#endif

#ifndef __DispHTMLHeadElement_DISPINTERFACE_DEFINED__
#define __DispHTMLHeadElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLHeadElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLHeadElement;


    MIDL_INTERFACE("3050f561-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLHeadElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLHeadElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLHeadElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f493-98b5-11cf-bb82-00aa00bdce0b")
HTMLHeadElement;
#endif

#ifndef __DispHTMLTitleElement_DISPINTERFACE_DEFINED__
#define __DispHTMLTitleElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLTitleElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLTitleElement;


    MIDL_INTERFACE("3050f516-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLTitleElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLTitleElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLTitleElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f284-98b5-11cf-bb82-00aa00bdce0b")
HTMLTitleElement;
#endif

#ifndef __DispHTMLMetaElement_DISPINTERFACE_DEFINED__
#define __DispHTMLMetaElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLMetaElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLMetaElement;


    MIDL_INTERFACE("3050f517-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLMetaElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLMetaElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLMetaElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f275-98b5-11cf-bb82-00aa00bdce0b")
HTMLMetaElement;
#endif

#ifndef __DispHTMLBaseElement_DISPINTERFACE_DEFINED__
#define __DispHTMLBaseElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLBaseElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLBaseElement;


    MIDL_INTERFACE("3050f518-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLBaseElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLBaseElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLBaseElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f276-98b5-11cf-bb82-00aa00bdce0b")
HTMLBaseElement;
#endif

#ifndef __DispHTMLIsIndexElement_DISPINTERFACE_DEFINED__
#define __DispHTMLIsIndexElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLIsIndexElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLIsIndexElement;


    MIDL_INTERFACE("3050f519-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLIsIndexElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLIsIndexElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLIsIndexElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f278-98b5-11cf-bb82-00aa00bdce0b")
HTMLIsIndexElement;
#endif

#ifndef __DispHTMLNextIdElement_DISPINTERFACE_DEFINED__
#define __DispHTMLNextIdElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLNextIdElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLNextIdElement;


    MIDL_INTERFACE("3050f51a-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLNextIdElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLNextIdElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLNextIdElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f279-98b5-11cf-bb82-00aa00bdce0b")
HTMLNextIdElement;
#endif

#ifndef __IHTMLBaseFontElement_INTERFACE_DEFINED__
#define __IHTMLBaseFontElement_INTERFACE_DEFINED__

/* interface IHTMLBaseFontElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLBaseFontElement;


    MIDL_INTERFACE("3050f202-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLBaseFontElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_color(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_color(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_face(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_face(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_size(
            /* [in] */ long v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_size(
            /* [out][retval] */ __RPC__out long *p) = 0;

    };





#endif 	/* __IHTMLBaseFontElement_INTERFACE_DEFINED__ */


#ifndef __DispHTMLBaseFontElement_DISPINTERFACE_DEFINED__
#define __DispHTMLBaseFontElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLBaseFontElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLBaseFontElement;


    MIDL_INTERFACE("3050f504-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLBaseFontElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLBaseFontElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLBaseFontElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f282-98b5-11cf-bb82-00aa00bdce0b")
HTMLBaseFontElement;
#endif

#ifndef __IHTMLUnknownElement_INTERFACE_DEFINED__
#define __IHTMLUnknownElement_INTERFACE_DEFINED__

/* interface IHTMLUnknownElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLUnknownElement;


    MIDL_INTERFACE("3050f209-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLUnknownElement : public IDispatch
    {
    public:
    };





#endif 	/* __IHTMLUnknownElement_INTERFACE_DEFINED__ */


#ifndef __DispHTMLUnknownElement_DISPINTERFACE_DEFINED__
#define __DispHTMLUnknownElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLUnknownElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLUnknownElement;


    MIDL_INTERFACE("3050f539-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLUnknownElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLUnknownElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLUnknownElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f268-98b5-11cf-bb82-00aa00bdce0b")
HTMLUnknownElement;
#endif

#ifndef __IOmHistory_INTERFACE_DEFINED__
#define __IOmHistory_INTERFACE_DEFINED__

/* interface IOmHistory */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IOmHistory;


    MIDL_INTERFACE("FECEAAA2-8405-11cf-8BA1-00AA00476DA6")
    IOmHistory : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_length(
            /* [out][retval] */ __RPC__out short *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE back(
            /* [in][optional] */ __RPC__in VARIANT *pvargdistance) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE forward(
            /* [in][optional] */ __RPC__in VARIANT *pvargdistance) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE go(
            /* [in][optional] */ __RPC__in VARIANT *pvargdistance) = 0;

    };





#endif 	/* __IOmHistory_INTERFACE_DEFINED__ */


#ifndef __IHTMLMimeTypesCollection_INTERFACE_DEFINED__
#define __IHTMLMimeTypesCollection_INTERFACE_DEFINED__

/* interface IHTMLMimeTypesCollection */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLMimeTypesCollection;


    MIDL_INTERFACE("3050f3fc-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLMimeTypesCollection : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_length(
            /* [out][retval] */ __RPC__out long *p) = 0;

    };





#endif 	/* __IHTMLMimeTypesCollection_INTERFACE_DEFINED__ */


#ifndef __IHTMLPluginsCollection_INTERFACE_DEFINED__
#define __IHTMLPluginsCollection_INTERFACE_DEFINED__

/* interface IHTMLPluginsCollection */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLPluginsCollection;


    MIDL_INTERFACE("3050f3fd-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLPluginsCollection : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_length(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE refresh(
            /* [in][defaultvalue] */ VARIANT_BOOL reload = 0) = 0;

    };





#endif 	/* __IHTMLPluginsCollection_INTERFACE_DEFINED__ */


#ifndef __IHTMLOpsProfile_INTERFACE_DEFINED__
#define __IHTMLOpsProfile_INTERFACE_DEFINED__

/* interface IHTMLOpsProfile */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLOpsProfile;


    MIDL_INTERFACE("3050f401-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLOpsProfile : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE addRequest(
            /* [in] */ __RPC__in BSTR name,
            /* [in][optional] */ VARIANT reserved,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *success) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE clearRequest( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE doRequest(
            /* [in] */ VARIANT usage,
            /* [in][optional] */ VARIANT fname,
            /* [in][optional] */ VARIANT domain,
            /* [in][optional] */ VARIANT path,
            /* [in][optional] */ VARIANT expire,
            /* [in][optional] */ VARIANT reserved) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getAttribute(
            /* [in] */ __RPC__in BSTR name,
            /* [out][retval] */ __RPC__deref_out_opt BSTR *value) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setAttribute(
            /* [in] */ __RPC__in BSTR name,
            /* [in] */ __RPC__in BSTR value,
            /* [in][optional] */ VARIANT prefs,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *success) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE commitChanges(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *success) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE addReadRequest(
            /* [in] */ __RPC__in BSTR name,
            /* [in][optional] */ VARIANT reserved,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *success) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE doReadRequest(
            /* [in] */ VARIANT usage,
            /* [in][optional] */ VARIANT fname,
            /* [in][optional] */ VARIANT domain,
            /* [in][optional] */ VARIANT path,
            /* [in][optional] */ VARIANT expire,
            /* [in][optional] */ VARIANT reserved) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE doWriteRequest(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *success) = 0;

    };





#endif 	/* __IHTMLOpsProfile_INTERFACE_DEFINED__ */


#ifndef __IOmNavigator_INTERFACE_DEFINED__
#define __IOmNavigator_INTERFACE_DEFINED__

/* interface IOmNavigator */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IOmNavigator;


    MIDL_INTERFACE("FECEAAA5-8405-11cf-8BA1-00AA00476DA6")
    IOmNavigator : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_appCodeName(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_appName(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_appVersion(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_userAgent(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE javaEnabled(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *enabled) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE taintEnabled(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *enabled) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_mimeTypes(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLMimeTypesCollection **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_plugins(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLPluginsCollection **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_cookieEnabled(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_opsProfile(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLOpsProfile **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE toString(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *string) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_cpuClass(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_systemLanguage(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_browserLanguage(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_userLanguage(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_platform(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_appMinorVersion(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_connectionSpeed(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_onLine(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_userProfile(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLOpsProfile **p) = 0;

    };





#endif 	/* __IOmNavigator_INTERFACE_DEFINED__ */


#ifndef __IHTMLLocation_INTERFACE_DEFINED__
#define __IHTMLLocation_INTERFACE_DEFINED__

/* interface IHTMLLocation */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLLocation;


    MIDL_INTERFACE("163BB1E0-6E00-11cf-837A-48DC04C10000")
    IHTMLLocation : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_href(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_href(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_protocol(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_protocol(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_host(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_host(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_hostname(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_hostname(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_port(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_port(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_pathname(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_pathname(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_search(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_search(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_hash(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_hash(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE reload(
            /* [in][defaultvalue] */ VARIANT_BOOL flag = 0) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE replace(
            /* [in] */ __RPC__in BSTR bstr) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE assign(
            /* [in] */ __RPC__in BSTR bstr) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE toString(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *string) = 0;

    };





#endif 	/* __IHTMLLocation_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLHistory;

#ifdef __cplusplus

class DECLSPEC_UUID("FECEAAA3-8405-11cf-8BA1-00AA00476DA6")
HTMLHistory;
#endif

EXTERN_C const CLSID CLSID_CMimeTypes;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f3fe-98b5-11cf-bb82-00aa00bdce0b")
CMimeTypes;
#endif

EXTERN_C const CLSID CLSID_CPlugins;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f3ff-98b5-11cf-bb82-00aa00bdce0b")
CPlugins;
#endif

EXTERN_C const CLSID CLSID_COpsProfile;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f402-98b5-11cf-bb82-00aa00bdce0b")
COpsProfile;
#endif

EXTERN_C const CLSID CLSID_HTMLNavigator;

#ifdef __cplusplus

class DECLSPEC_UUID("FECEAAA6-8405-11cf-8BA1-00AA00476DA6")
HTMLNavigator;
#endif

EXTERN_C const CLSID CLSID_HTMLLocation;

#ifdef __cplusplus

class DECLSPEC_UUID("163BB1E1-6E00-11cf-837A-48DC04C10000")
HTMLLocation;
#endif

#ifndef __IHTMLBookmarkCollection_INTERFACE_DEFINED__
#define __IHTMLBookmarkCollection_INTERFACE_DEFINED__

/* interface IHTMLBookmarkCollection */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLBookmarkCollection;


    MIDL_INTERFACE("3050f4ce-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLBookmarkCollection : public IDispatch
    {
    public:
        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_length(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [restricted][hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get__newEnum(
            /* [out][retval] */ __RPC__deref_out_opt IUnknown **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE item(
            /* [in] */ long index,
            /* [out][retval] */ __RPC__out VARIANT *pVarBookmark) = 0;

    };





#endif 	/* __IHTMLBookmarkCollection_INTERFACE_DEFINED__ */


#ifndef __IHTMLDataTransfer_INTERFACE_DEFINED__
#define __IHTMLDataTransfer_INTERFACE_DEFINED__

/* interface IHTMLDataTransfer */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLDataTransfer;


    MIDL_INTERFACE("3050f4b3-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLDataTransfer : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setData(
            /* [in] */ __RPC__in BSTR format,
            /* [in] */ __RPC__in VARIANT *data,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pret) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getData(
            /* [in] */ __RPC__in BSTR format,
            /* [out][retval] */ __RPC__out VARIANT *pvarRet) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE clearData(
            /* [in] */ __RPC__in BSTR format,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pret) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_dropEffect(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_dropEffect(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_effectAllowed(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_effectAllowed(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLDataTransfer_INTERFACE_DEFINED__ */


#ifndef __IHTMLEventObj2_INTERFACE_DEFINED__
#define __IHTMLEventObj2_INTERFACE_DEFINED__

/* interface IHTMLEventObj2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLEventObj2;


    MIDL_INTERFACE("3050f48B-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLEventObj2 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setAttribute(
            /* [in] */ __RPC__in BSTR strAttributeName,
            /* [in] */ VARIANT AttributeValue,
            /* [in][defaultvalue] */ LONG lFlags = 1) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getAttribute(
            /* [in] */ __RPC__in BSTR strAttributeName,
            /* [in][defaultvalue] */ LONG lFlags,
            /* [out][retval] */ __RPC__out VARIANT *AttributeValue) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE removeAttribute(
            /* [in] */ __RPC__in BSTR strAttributeName,
            /* [in][defaultvalue] */ LONG lFlags,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfSuccess) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_propertyName(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_propertyName(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propputref] */ HRESULT STDMETHODCALLTYPE putref_bookmarks(
            /* [in] */ __RPC__in_opt IHTMLBookmarkCollection *v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_bookmarks(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLBookmarkCollection **p) = 0;

        virtual /* [id][propputref] */ HRESULT STDMETHODCALLTYPE putref_recordset(
            /* [in] */ __RPC__in_opt IDispatch *v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_recordset(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_dataFld(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_dataFld(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propputref] */ HRESULT STDMETHODCALLTYPE putref_boundElements(
            /* [in] */ __RPC__in_opt IHTMLElementCollection *v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_boundElements(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElementCollection **p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_repeat(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_repeat(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_srcUrn(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_srcUrn(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propputref] */ HRESULT STDMETHODCALLTYPE putref_srcElement(
            /* [in] */ __RPC__in_opt IHTMLElement *v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_srcElement(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElement **p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_altKey(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_altKey(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ctrlKey(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ctrlKey(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_shiftKey(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_shiftKey(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propputref] */ HRESULT STDMETHODCALLTYPE putref_fromElement(
            /* [in] */ __RPC__in_opt IHTMLElement *v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_fromElement(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElement **p) = 0;

        virtual /* [id][propputref] */ HRESULT STDMETHODCALLTYPE putref_toElement(
            /* [in] */ __RPC__in_opt IHTMLElement *v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_toElement(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElement **p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_button(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_button(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_type(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_type(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_qualifier(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_qualifier(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_reason(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_reason(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_x(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_x(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_y(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_y(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_clientX(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_clientX(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_clientY(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_clientY(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_offsetX(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_offsetX(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_offsetY(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_offsetY(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_screenX(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_screenX(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_screenY(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_screenY(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propputref] */ HRESULT STDMETHODCALLTYPE putref_srcFilter(
            /* [in] */ __RPC__in_opt IDispatch *v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_srcFilter(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_dataTransfer(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDataTransfer **p) = 0;

    };





#endif 	/* __IHTMLEventObj2_INTERFACE_DEFINED__ */


#ifndef __IHTMLEventObj3_INTERFACE_DEFINED__
#define __IHTMLEventObj3_INTERFACE_DEFINED__

/* interface IHTMLEventObj3 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLEventObj3;


    MIDL_INTERFACE("3050f680-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLEventObj3 : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_contentOverflow(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_shiftLeft(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_shiftLeft(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_altLeft(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_altLeft(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ctrlLeft(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ctrlLeft(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [nonbrowsable][restricted][hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_imeCompositionChange(
            /* [out][retval] */ __RPC__out LONG_PTR *p) = 0;

        virtual /* [nonbrowsable][restricted][hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_imeNotifyCommand(
            /* [out][retval] */ __RPC__out LONG_PTR *p) = 0;

        virtual /* [nonbrowsable][restricted][hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_imeNotifyData(
            /* [out][retval] */ __RPC__out LONG_PTR *p) = 0;

        virtual /* [nonbrowsable][restricted][hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_imeRequest(
            /* [out][retval] */ __RPC__out LONG_PTR *p) = 0;

        virtual /* [nonbrowsable][restricted][hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_imeRequestData(
            /* [out][retval] */ __RPC__out LONG_PTR *p) = 0;

        virtual /* [nonbrowsable][restricted][hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_keyboardLayout(
            /* [out][retval] */ __RPC__out LONG_PTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_behaviorCookie(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_behaviorPart(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_nextPage(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLEventObj3_INTERFACE_DEFINED__ */


#ifndef __IHTMLEventObj4_INTERFACE_DEFINED__
#define __IHTMLEventObj4_INTERFACE_DEFINED__

/* interface IHTMLEventObj4 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLEventObj4;


    MIDL_INTERFACE("3050f814-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLEventObj4 : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_wheelDelta(
            /* [out][retval] */ __RPC__out long *p) = 0;

    };





#endif 	/* __IHTMLEventObj4_INTERFACE_DEFINED__ */


#ifndef __DispCEventObj_DISPINTERFACE_DEFINED__
#define __DispCEventObj_DISPINTERFACE_DEFINED__

/* dispinterface DispCEventObj */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispCEventObj;


    MIDL_INTERFACE("3050f558-98b5-11cf-bb82-00aa00bdce0b")
    DispCEventObj : public IDispatch
    {
    };



#endif 	/* __DispCEventObj_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CEventObj;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f48A-98b5-11cf-bb82-00aa00bdce0b")
CEventObj;
#endif

#ifndef __HTMLWindowEvents2_DISPINTERFACE_DEFINED__
#define __HTMLWindowEvents2_DISPINTERFACE_DEFINED__

/* dispinterface HTMLWindowEvents2 */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLWindowEvents2;


    MIDL_INTERFACE("3050f625-98b5-11cf-bb82-00aa00bdce0b")
    HTMLWindowEvents2 : public IDispatch
    {
    };



#endif 	/* __HTMLWindowEvents2_DISPINTERFACE_DEFINED__ */


#ifndef __HTMLWindowEvents_DISPINTERFACE_DEFINED__
#define __HTMLWindowEvents_DISPINTERFACE_DEFINED__

/* dispinterface HTMLWindowEvents */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLWindowEvents;


    MIDL_INTERFACE("96A0A4E0-D062-11cf-94B6-00AA0060275C")
    HTMLWindowEvents : public IDispatch
    {
    };



#endif 	/* __HTMLWindowEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IHTMLDocument2_INTERFACE_DEFINED__
#define __IHTMLDocument2_INTERFACE_DEFINED__

/* interface IHTMLDocument2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLDocument2;


    MIDL_INTERFACE("332c4425-26cb-11d0-b483-00c04fd90119")
    IHTMLDocument2 : public IHTMLDocument
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_all(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElementCollection **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_body(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElement **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_activeElement(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElement **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_images(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElementCollection **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_applets(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElementCollection **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_links(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElementCollection **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_forms(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElementCollection **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_anchors(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElementCollection **p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_title(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_title(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_scripts(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElementCollection **p) = 0;

        virtual /* [hidden][id][propput] */ HRESULT STDMETHODCALLTYPE put_designMode(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_designMode(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_selection(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLSelectionObject **p) = 0;

        virtual /* [bindable][id][propget] */ HRESULT STDMETHODCALLTYPE get_readyState(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_frames(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLFramesCollection2 **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_embeds(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElementCollection **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_plugins(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElementCollection **p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_alinkColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_alinkColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_bgColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_bgColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_fgColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_fgColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_linkColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_linkColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_vlinkColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_vlinkColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_referrer(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_location(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLLocation **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_lastModified(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_URL(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_URL(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_domain(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_domain(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_cookie(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_cookie(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [hidden][bindable][id][propput] */ HRESULT STDMETHODCALLTYPE put_expando(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [hidden][bindable][id][propget] */ HRESULT STDMETHODCALLTYPE get_expando(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [hidden][id][propput] */ HRESULT STDMETHODCALLTYPE put_charset(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_charset(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_defaultCharset(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_defaultCharset(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_mimeType(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_fileSize(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_fileCreatedDate(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_fileModifiedDate(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_fileUpdatedDate(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_security(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_protocol(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_nameProp(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][vararg] */ HRESULT STDMETHODCALLTYPE write(
            /* [in] */ __RPC__in SAFEARRAY * psarray) = 0;

        virtual /* [id][vararg] */ HRESULT STDMETHODCALLTYPE writeln(
            /* [in] */ __RPC__in SAFEARRAY * psarray) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE open(
            /* [in][defaultvalue] */ __RPC__in BSTR url,
            /* [in][optional] */ VARIANT name,
            /* [in][optional] */ VARIANT features,
            /* [in][optional] */ VARIANT replace,
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **pomWindowResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE close( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE clear( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE queryCommandSupported(
            /* [in] */ __RPC__in BSTR cmdID,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfRet) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE queryCommandEnabled(
            /* [in] */ __RPC__in BSTR cmdID,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfRet) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE queryCommandState(
            /* [in] */ __RPC__in BSTR cmdID,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfRet) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE queryCommandIndeterm(
            /* [in] */ __RPC__in BSTR cmdID,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfRet) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE queryCommandText(
            /* [in] */ __RPC__in BSTR cmdID,
            /* [out][retval] */ __RPC__deref_out_opt BSTR *pcmdText) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE queryCommandValue(
            /* [in] */ __RPC__in BSTR cmdID,
            /* [out][retval] */ __RPC__out VARIANT *pcmdValue) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE execCommand(
            /* [in] */ __RPC__in BSTR cmdID,
            /* [in][defaultvalue] */ VARIANT_BOOL showUI,
            /* [in][optional] */ VARIANT value,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfRet) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE execCommandShowHelp(
            /* [in] */ __RPC__in BSTR cmdID,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfRet) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createElement(
            /* [in] */ __RPC__in BSTR eTag,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElement **newElem) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onhelp(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onhelp(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onclick(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onclick(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_ondblclick(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_ondblclick(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onkeyup(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onkeyup(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onkeydown(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onkeydown(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onkeypress(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onkeypress(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onmouseup(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onmouseup(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onmousedown(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onmousedown(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onmousemove(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onmousemove(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onmouseout(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onmouseout(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onmouseover(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onmouseover(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onreadystatechange(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onreadystatechange(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onafterupdate(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onafterupdate(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onrowexit(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onrowexit(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onrowenter(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onrowenter(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_ondragstart(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_ondragstart(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onselectstart(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onselectstart(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE elementFromPoint(
            /* [in] */ long x,
            /* [in] */ long y,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElement **elementHit) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_parentWindow(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLWindow2 **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_styleSheets(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLStyleSheetsCollection **p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onbeforeupdate(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onbeforeupdate(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onerrorupdate(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onerrorupdate(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE toString(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *String) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createStyleSheet(
            /* [in][defaultvalue] */ __RPC__in BSTR bstrHref,
            /* [in][defaultvalue] */ long lIndex,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLStyleSheet **ppnewStyleSheet) = 0;

    };





#endif 	/* __IHTMLDocument2_INTERFACE_DEFINED__ */


#ifndef __IHTMLFramesCollection2_INTERFACE_DEFINED__
#define __IHTMLFramesCollection2_INTERFACE_DEFINED__

/* interface IHTMLFramesCollection2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLFramesCollection2;


    MIDL_INTERFACE("332c4426-26cb-11d0-b483-00c04fd90119")
    IHTMLFramesCollection2 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE item(
            /* [in] */ __RPC__in VARIANT *pvarIndex,
            /* [out][retval] */ __RPC__out VARIANT *pvarResult) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_length(
            /* [out][retval] */ __RPC__out long *p) = 0;

    };





#endif 	/* __IHTMLFramesCollection2_INTERFACE_DEFINED__ */


#ifndef __IHTMLWindow2_INTERFACE_DEFINED__
#define __IHTMLWindow2_INTERFACE_DEFINED__

/* interface IHTMLWindow2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLWindow2;


    MIDL_INTERFACE("332c4427-26cb-11d0-b483-00c04fd90119")
    IHTMLWindow2 : public IHTMLFramesCollection2
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_frames(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLFramesCollection2 **p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_defaultStatus(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_defaultStatus(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_status(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_status(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setTimeout(
            /* [in] */ __RPC__in BSTR expression,
            /* [in] */ long msec,
            /* [in][optional] */ __RPC__in VARIANT *language,
            /* [out][retval] */ __RPC__out long *timerID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE clearTimeout(
            /* [in] */ long timerID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE alert(
            /* [in][defaultvalue] */ __RPC__in BSTR message = L"") = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE confirm(
            /* [in][defaultvalue] */ __RPC__in BSTR message,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *confirmed) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE prompt(
            /* [in][defaultvalue] */ __RPC__in BSTR message,
            /* [in][defaultvalue] */ __RPC__in BSTR defstr,
            /* [out][retval] */ __RPC__out VARIANT *textdata) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Image(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLImageElementFactory **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_location(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLLocation **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_history(
            /* [out][retval] */ __RPC__deref_out_opt IOmHistory **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE close( void) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_opener(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_opener(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_navigator(
            /* [out][retval] */ __RPC__deref_out_opt IOmNavigator **p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_name(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_name(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_parent(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLWindow2 **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE open(
            /* [in][defaultvalue] */ __RPC__in BSTR url,
            /* [in][defaultvalue] */ __RPC__in BSTR name,
            /* [in][defaultvalue] */ __RPC__in BSTR features,
            /* [in][defaultvalue] */ VARIANT_BOOL replace,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLWindow2 **pomWindowResult) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_self(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLWindow2 **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_top(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLWindow2 **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_window(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLWindow2 **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE navigate(
            /* [in] */ __RPC__in BSTR url) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onfocus(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onfocus(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onblur(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onblur(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onload(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onload(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onbeforeunload(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onbeforeunload(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onunload(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onunload(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onhelp(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onhelp(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onerror(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onerror(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onresize(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onresize(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onscroll(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onscroll(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [source][id][propget] */ HRESULT STDMETHODCALLTYPE get_document(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDocument2 **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_event(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLEventObj **p) = 0;

        virtual /* [restricted][hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get__newEnum(
            /* [out][retval] */ __RPC__deref_out_opt IUnknown **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE showModalDialog(
            /* [in] */ __RPC__in BSTR dialog,
            /* [in][optional] */ __RPC__in VARIANT *varArgIn,
            /* [in][optional] */ __RPC__in VARIANT *varOptions,
            /* [out][retval] */ __RPC__out VARIANT *varArgOut) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE showHelp(
            /* [in] */ __RPC__in BSTR helpURL,
            /* [in][optional] */ VARIANT helpArg,
            /* [in][defaultvalue] */ __RPC__in BSTR features = L"") = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_screen(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLScreen **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Option(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLOptionElementFactory **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE focus( void) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_closed(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE blur( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE scroll(
            /* [in] */ long x,
            /* [in] */ long y) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_clientInformation(
            /* [out][retval] */ __RPC__deref_out_opt IOmNavigator **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setInterval(
            /* [in] */ __RPC__in BSTR expression,
            /* [in] */ long msec,
            /* [in][optional] */ __RPC__in VARIANT *language,
            /* [out][retval] */ __RPC__out long *timerID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE clearInterval(
            /* [in] */ long timerID) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_offscreenBuffering(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_offscreenBuffering(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE execScript(
            /* [in] */ __RPC__in BSTR code,
            /* [in][defaultvalue] */ __RPC__in BSTR language,
            /* [out][retval] */ __RPC__out VARIANT *pvarRet) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE toString(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *String) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE scrollBy(
            /* [in] */ long x,
            /* [in] */ long y) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE scrollTo(
            /* [in] */ long x,
            /* [in] */ long y) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE moveTo(
            /* [in] */ long x,
            /* [in] */ long y) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE moveBy(
            /* [in] */ long x,
            /* [in] */ long y) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE resizeTo(
            /* [in] */ long x,
            /* [in] */ long y) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE resizeBy(
            /* [in] */ long x,
            /* [in] */ long y) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_external(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **p) = 0;

    };





#endif 	/* __IHTMLWindow2_INTERFACE_DEFINED__ */


#ifndef __IHTMLWindow3_INTERFACE_DEFINED__
#define __IHTMLWindow3_INTERFACE_DEFINED__

/* interface IHTMLWindow3 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLWindow3;


    MIDL_INTERFACE("3050f4ae-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLWindow3 : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_screenLeft(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_screenTop(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE attachEvent(
            /* [in] */ __RPC__in BSTR event,
            /* [in] */ __RPC__in_opt IDispatch *pDisp,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE detachEvent(
            /* [in] */ __RPC__in BSTR event,
            /* [in] */ __RPC__in_opt IDispatch *pDisp) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setTimeout(
            /* [in] */ __RPC__in VARIANT *expression,
            /* [in] */ long msec,
            /* [in][optional] */ __RPC__in VARIANT *language,
            /* [out][retval] */ __RPC__out long *timerID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setInterval(
            /* [in] */ __RPC__in VARIANT *expression,
            /* [in] */ long msec,
            /* [in][optional] */ __RPC__in VARIANT *language,
            /* [out][retval] */ __RPC__out long *timerID) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE print( void) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onbeforeprint(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onbeforeprint(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onafterprint(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onafterprint(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_clipboardData(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDataTransfer **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE showModelessDialog(
            /* [in][defaultvalue] */ __RPC__in BSTR url,
            /* [in][optional] */ __RPC__in VARIANT *varArgIn,
            /* [in][optional] */ __RPC__in VARIANT *options,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLWindow2 **pDialog) = 0;

    };





#endif 	/* __IHTMLWindow3_INTERFACE_DEFINED__ */


#ifndef __IHTMLFrameBase_INTERFACE_DEFINED__
#define __IHTMLFrameBase_INTERFACE_DEFINED__

/* interface IHTMLFrameBase */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLFrameBase;


    MIDL_INTERFACE("3050f311-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLFrameBase : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_src(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_src(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_name(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_name(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_border(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_border(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_frameBorder(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_frameBorder(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_frameSpacing(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_frameSpacing(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_marginWidth(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_marginWidth(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_marginHeight(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_marginHeight(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_noResize(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_noResize(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_scrolling(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_scrolling(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLFrameBase_INTERFACE_DEFINED__ */


#ifndef __IHTMLScreen_INTERFACE_DEFINED__
#define __IHTMLScreen_INTERFACE_DEFINED__

/* interface IHTMLScreen */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLScreen;


    MIDL_INTERFACE("3050f35c-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLScreen : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_colorDepth(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_bufferDepth(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_bufferDepth(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_width(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_height(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_updateInterval(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_updateInterval(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_availHeight(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_availWidth(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_fontSmoothingEnabled(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

    };





#endif 	/* __IHTMLScreen_INTERFACE_DEFINED__ */


#ifndef __IHTMLScreen2_INTERFACE_DEFINED__
#define __IHTMLScreen2_INTERFACE_DEFINED__

/* interface IHTMLScreen2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLScreen2;


    MIDL_INTERFACE("3050f84a-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLScreen2 : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_logicalXDPI(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_logicalYDPI(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_deviceXDPI(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_deviceYDPI(
            /* [out][retval] */ __RPC__out long *p) = 0;

    };





#endif 	/* __IHTMLScreen2_INTERFACE_DEFINED__ */


#ifndef __IHTMLWindow4_INTERFACE_DEFINED__
#define __IHTMLWindow4_INTERFACE_DEFINED__

/* interface IHTMLWindow4 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLWindow4;


    MIDL_INTERFACE("3050f6cf-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLWindow4 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createPopup(
            /* [in][optional] */ __RPC__in VARIANT *varArgIn,
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **ppPopup) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_frameElement(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLFrameBase **p) = 0;

    };





#endif 	/* __IHTMLWindow4_INTERFACE_DEFINED__ */


#ifndef __IHTMLWindow5_INTERFACE_DEFINED__
#define __IHTMLWindow5_INTERFACE_DEFINED__

/* interface IHTMLWindow5 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLWindow5;


    MIDL_INTERFACE("3051040e-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLWindow5 : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_XMLHttpRequest(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_XMLHttpRequest(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

    };





#endif 	/* __IHTMLWindow5_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_FramesCollection;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f7f6-98b5-11cf-bb82-00aa00bdce0b")
FramesCollection;
#endif

#ifndef __DispHTMLScreen_DISPINTERFACE_DEFINED__
#define __DispHTMLScreen_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLScreen */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLScreen;


    MIDL_INTERFACE("3050f591-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLScreen : public IDispatch
    {
    };



#endif 	/* __DispHTMLScreen_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLScreen;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f35d-98b5-11cf-bb82-00aa00bdce0b")
HTMLScreen;
#endif

#ifndef __DispHTMLWindow2_DISPINTERFACE_DEFINED__
#define __DispHTMLWindow2_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLWindow2 */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLWindow2;


    MIDL_INTERFACE("3050f55d-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLWindow2 : public IDispatch
    {
    };



#endif 	/* __DispHTMLWindow2_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLWindow2;

#ifdef __cplusplus

class DECLSPEC_UUID("D48A6EC6-6A4A-11cf-94A7-444553540000")
HTMLWindow2;
#endif

#ifndef __DispHTMLWindowProxy_DISPINTERFACE_DEFINED__
#define __DispHTMLWindowProxy_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLWindowProxy */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLWindowProxy;


    MIDL_INTERFACE("3050f55e-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLWindowProxy : public IDispatch
    {
    };



#endif 	/* __DispHTMLWindowProxy_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLWindowProxy;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f391-98b5-11cf-bb82-00aa00bdce0b")
HTMLWindowProxy;
#endif

#ifndef __HTMLDocumentEvents2_DISPINTERFACE_DEFINED__
#define __HTMLDocumentEvents2_DISPINTERFACE_DEFINED__

/* dispinterface HTMLDocumentEvents2 */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLDocumentEvents2;


    MIDL_INTERFACE("3050f613-98b5-11cf-bb82-00aa00bdce0b")
    HTMLDocumentEvents2 : public IDispatch
    {
    };



#endif 	/* __HTMLDocumentEvents2_DISPINTERFACE_DEFINED__ */


#ifndef __HTMLDocumentEvents_DISPINTERFACE_DEFINED__
#define __HTMLDocumentEvents_DISPINTERFACE_DEFINED__

/* dispinterface HTMLDocumentEvents */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLDocumentEvents;


    MIDL_INTERFACE("3050f260-98b5-11cf-bb82-00aa00bdce0b")
    HTMLDocumentEvents : public IDispatch
    {
    };



#endif 	/* __HTMLDocumentEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IHTMLDocument3_INTERFACE_DEFINED__
#define __IHTMLDocument3_INTERFACE_DEFINED__

/* interface IHTMLDocument3 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLDocument3;


    MIDL_INTERFACE("3050f485-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLDocument3 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE releaseCapture( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE recalc(
            /* [in][defaultvalue] */ VARIANT_BOOL fForce = 0) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createTextNode(
            /* [in] */ __RPC__in BSTR text,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMNode **newTextNode) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_documentElement(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElement **p) = 0;

        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_uniqueID(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE attachEvent(
            /* [in] */ __RPC__in BSTR event,
            /* [in] */ __RPC__in_opt IDispatch *pDisp,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE detachEvent(
            /* [in] */ __RPC__in BSTR event,
            /* [in] */ __RPC__in_opt IDispatch *pDisp) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onrowsdelete(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onrowsdelete(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onrowsinserted(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onrowsinserted(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_oncellchange(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_oncellchange(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_ondatasetchanged(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_ondatasetchanged(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_ondataavailable(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_ondataavailable(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_ondatasetcomplete(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_ondatasetcomplete(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onpropertychange(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onpropertychange(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_dir(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_dir(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_oncontextmenu(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_oncontextmenu(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onstop(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onstop(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createDocumentFragment(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDocument2 **pNewDoc) = 0;

        virtual /* [restricted][hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_parentDocument(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDocument2 **p) = 0;

        virtual /* [restricted][hidden][id][propput] */ HRESULT STDMETHODCALLTYPE put_enableDownload(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [restricted][hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_enableDownload(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [restricted][hidden][id][propput] */ HRESULT STDMETHODCALLTYPE put_baseUrl(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [restricted][hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_baseUrl(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_childNodes(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **p) = 0;

        virtual /* [restricted][hidden][id][propput] */ HRESULT STDMETHODCALLTYPE put_inheritStyleSheets(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [restricted][hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_inheritStyleSheets(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onbeforeeditfocus(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onbeforeeditfocus(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getElementsByName(
            /* [in] */ __RPC__in BSTR v,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElementCollection **pelColl) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getElementById(
            /* [in] */ __RPC__in BSTR v,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElement **pel) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getElementsByTagName(
            /* [in] */ __RPC__in BSTR v,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElementCollection **pelColl) = 0;

    };





#endif 	/* __IHTMLDocument3_INTERFACE_DEFINED__ */


#ifndef __IHTMLDocument4_INTERFACE_DEFINED__
#define __IHTMLDocument4_INTERFACE_DEFINED__

/* interface IHTMLDocument4 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLDocument4;


    MIDL_INTERFACE("3050f69a-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLDocument4 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE focus( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE hasFocus(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfFocus) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onselectionchange(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onselectionchange(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_namespaces(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createDocumentFromUrl(
            /* [in] */ __RPC__in BSTR bstrUrl,
            /* [in] */ __RPC__in BSTR bstrOptions,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDocument2 **newDoc) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_media(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_media(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createEventObject(
            /* [in][optional] */ __RPC__in VARIANT *pvarEventObject,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLEventObj **ppEventObj) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE fireEvent(
            /* [in] */ __RPC__in BSTR bstrEventName,
            /* [in][optional] */ __RPC__in VARIANT *pvarEventObject,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfCancelled) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createRenderStyle(
            /* [in] */ __RPC__in BSTR v,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLRenderStyle **ppIHTMLRenderStyle) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_oncontrolselect(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_oncontrolselect(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_URLUnencoded(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLDocument4_INTERFACE_DEFINED__ */


#ifndef __IHTMLDocument5_INTERFACE_DEFINED__
#define __IHTMLDocument5_INTERFACE_DEFINED__

/* interface IHTMLDocument5 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLDocument5;


    MIDL_INTERFACE("3050f80c-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLDocument5 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onmousewheel(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onmousewheel(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_doctype(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMNode **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_implementation(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMImplementation **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createAttribute(
            /* [in] */ __RPC__in BSTR bstrattrName,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMAttribute **ppattribute) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createComment(
            /* [in] */ __RPC__in BSTR bstrdata,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDOMNode **ppRetNode) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onfocusin(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onfocusin(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onfocusout(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onfocusout(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onactivate(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onactivate(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_ondeactivate(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_ondeactivate(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onbeforeactivate(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onbeforeactivate(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onbeforedeactivate(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onbeforedeactivate(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_compatMode(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLDocument5_INTERFACE_DEFINED__ */


#ifndef __DispHTMLDocument_DISPINTERFACE_DEFINED__
#define __DispHTMLDocument_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLDocument */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLDocument;


    MIDL_INTERFACE("3050f55f-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLDocument : public IDispatch
    {
    };



#endif 	/* __DispHTMLDocument_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLDocument;

#ifdef __cplusplus

class DECLSPEC_UUID("25336920-03F9-11cf-8FD0-00AA00686F13")
HTMLDocument;
#endif

#ifndef __DWebBridgeEvents_DISPINTERFACE_DEFINED__
#define __DWebBridgeEvents_DISPINTERFACE_DEFINED__

/* dispinterface DWebBridgeEvents */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DWebBridgeEvents;


    MIDL_INTERFACE("A6D897FF-0A95-11d1-B0BA-006008166E11")
    DWebBridgeEvents : public IDispatch
    {
    };



#endif 	/* __DWebBridgeEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IWebBridge_INTERFACE_DEFINED__
#define __IWebBridge_INTERFACE_DEFINED__

/* interface IWebBridge */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IWebBridge;


    MIDL_INTERFACE("AE24FDAD-03C6-11D1-8B76-0080C744F389")
    IWebBridge : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_URL(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_URL(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Scrollbar(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Scrollbar(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_embed(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_embed(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_event(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_readyState(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AboutBox( void) = 0;

    };





#endif 	/* __IWebBridge_INTERFACE_DEFINED__ */


#ifndef __IWBScriptControl_INTERFACE_DEFINED__
#define __IWBScriptControl_INTERFACE_DEFINED__

/* interface IWBScriptControl */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IWBScriptControl;


    MIDL_INTERFACE("A5170870-0CF8-11D1-8B91-0080C744F389")
    IWBScriptControl : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE raiseEvent(
            /* [in] */ __RPC__in BSTR name,
            /* [in] */ VARIANT eventData) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE bubbleEvent( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setContextMenu(
            /* [in] */ VARIANT menuItemPairs) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_selectableContent(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_selectableContent(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_frozen(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_scrollbar(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollbar(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_version(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_visibility(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_onvisibilitychange(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_onvisibilitychange(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

    };





#endif 	/* __IWBScriptControl_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Scriptlet;

#ifdef __cplusplus

class DECLSPEC_UUID("AE24FDAE-03C6-11D1-8B76-0080C744F389")
Scriptlet;
#endif

#ifndef __IHTMLEmbedElement_INTERFACE_DEFINED__
#define __IHTMLEmbedElement_INTERFACE_DEFINED__

/* interface IHTMLEmbedElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLEmbedElement;


    MIDL_INTERFACE("3050f25f-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLEmbedElement : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_hidden(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_hidden(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_palette(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_pluginspage(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_src(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_src(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_units(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_units(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_name(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_name(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_width(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_width(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_height(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_height(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

    };





#endif 	/* __IHTMLEmbedElement_INTERFACE_DEFINED__ */


#ifndef __DispHTMLEmbed_DISPINTERFACE_DEFINED__
#define __DispHTMLEmbed_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLEmbed */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLEmbed;


    MIDL_INTERFACE("3050f52e-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLEmbed : public IDispatch
    {
    };



#endif 	/* __DispHTMLEmbed_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLEmbed;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f25d-98b5-11cf-bb82-00aa00bdce0b")
HTMLEmbed;
#endif

#ifndef __HTMLMapEvents2_DISPINTERFACE_DEFINED__
#define __HTMLMapEvents2_DISPINTERFACE_DEFINED__

/* dispinterface HTMLMapEvents2 */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLMapEvents2;


    MIDL_INTERFACE("3050f61e-98b5-11cf-bb82-00aa00bdce0b")
    HTMLMapEvents2 : public IDispatch
    {
    };



#endif 	/* __HTMLMapEvents2_DISPINTERFACE_DEFINED__ */


#ifndef __HTMLMapEvents_DISPINTERFACE_DEFINED__
#define __HTMLMapEvents_DISPINTERFACE_DEFINED__

/* dispinterface HTMLMapEvents */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLMapEvents;


    MIDL_INTERFACE("3050f3ba-98b5-11cf-bb82-00aa00bdce0b")
    HTMLMapEvents : public IDispatch
    {
    };



#endif 	/* __HTMLMapEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IHTMLAreasCollection_INTERFACE_DEFINED__
#define __IHTMLAreasCollection_INTERFACE_DEFINED__

/* interface IHTMLAreasCollection */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLAreasCollection;


    MIDL_INTERFACE("3050f383-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLAreasCollection : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_length(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_length(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [restricted][hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get__newEnum(
            /* [out][retval] */ __RPC__deref_out_opt IUnknown **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE item(
            /* [in][optional] */ VARIANT name,
            /* [in][optional] */ VARIANT index,
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **pdisp) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE tags(
            /* [in] */ VARIANT tagName,
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **pdisp) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE add(
            /* [in] */ __RPC__in_opt IHTMLElement *element,
            /* [in][optional] */ VARIANT before) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE remove(
            /* [in][defaultvalue] */ long index = -1) = 0;

    };





#endif 	/* __IHTMLAreasCollection_INTERFACE_DEFINED__ */


#ifndef __IHTMLAreasCollection2_INTERFACE_DEFINED__
#define __IHTMLAreasCollection2_INTERFACE_DEFINED__

/* interface IHTMLAreasCollection2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLAreasCollection2;


    MIDL_INTERFACE("3050f5ec-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLAreasCollection2 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE urns(
            /* [in] */ VARIANT urn,
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **pdisp) = 0;

    };





#endif 	/* __IHTMLAreasCollection2_INTERFACE_DEFINED__ */


#ifndef __IHTMLAreasCollection3_INTERFACE_DEFINED__
#define __IHTMLAreasCollection3_INTERFACE_DEFINED__

/* interface IHTMLAreasCollection3 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLAreasCollection3;


    MIDL_INTERFACE("3050f837-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLAreasCollection3 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE namedItem(
            /* [in] */ __RPC__in BSTR name,
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **pdisp) = 0;

    };





#endif 	/* __IHTMLAreasCollection3_INTERFACE_DEFINED__ */


#ifndef __IHTMLMapElement_INTERFACE_DEFINED__
#define __IHTMLMapElement_INTERFACE_DEFINED__

/* interface IHTMLMapElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLMapElement;


    MIDL_INTERFACE("3050f266-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLMapElement : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_areas(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLAreasCollection **p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_name(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_name(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLMapElement_INTERFACE_DEFINED__ */


#ifndef __DispHTMLAreasCollection_DISPINTERFACE_DEFINED__
#define __DispHTMLAreasCollection_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLAreasCollection */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLAreasCollection;


    MIDL_INTERFACE("3050f56a-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLAreasCollection : public IDispatch
    {
    };



#endif 	/* __DispHTMLAreasCollection_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLAreasCollection;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f4ca-98b5-11cf-bb82-00aa00bdce0b")
HTMLAreasCollection;
#endif

#ifndef __DispHTMLMapElement_DISPINTERFACE_DEFINED__
#define __DispHTMLMapElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLMapElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLMapElement;


    MIDL_INTERFACE("3050f526-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLMapElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLMapElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLMapElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f271-98b5-11cf-bb82-00aa00bdce0b")
HTMLMapElement;
#endif

#ifndef __HTMLAreaEvents2_DISPINTERFACE_DEFINED__
#define __HTMLAreaEvents2_DISPINTERFACE_DEFINED__

/* dispinterface HTMLAreaEvents2 */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLAreaEvents2;


    MIDL_INTERFACE("3050f611-98b5-11cf-bb82-00aa00bdce0b")
    HTMLAreaEvents2 : public IDispatch
    {
    };



#endif 	/* __HTMLAreaEvents2_DISPINTERFACE_DEFINED__ */


#ifndef __HTMLAreaEvents_DISPINTERFACE_DEFINED__
#define __HTMLAreaEvents_DISPINTERFACE_DEFINED__

/* dispinterface HTMLAreaEvents */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLAreaEvents;


    MIDL_INTERFACE("3050f366-98b5-11cf-bb82-00aa00bdce0b")
    HTMLAreaEvents : public IDispatch
    {
    };



#endif 	/* __HTMLAreaEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IHTMLAreaElement_INTERFACE_DEFINED__
#define __IHTMLAreaElement_INTERFACE_DEFINED__

/* interface IHTMLAreaElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLAreaElement;


    MIDL_INTERFACE("3050f265-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLAreaElement : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_shape(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_shape(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_coords(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_coords(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_href(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_href(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_target(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_target(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_alt(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_alt(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_noHref(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_noHref(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_host(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_host(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_hostname(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_hostname(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_pathname(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_pathname(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_port(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_port(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_protocol(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_protocol(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_search(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_search(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_hash(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_hash(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onblur(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onblur(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onfocus(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onfocus(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_tabIndex(
            /* [in] */ short v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_tabIndex(
            /* [out][retval] */ __RPC__out short *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE focus( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE blur( void) = 0;

    };





#endif 	/* __IHTMLAreaElement_INTERFACE_DEFINED__ */


#ifndef __DispHTMLAreaElement_DISPINTERFACE_DEFINED__
#define __DispHTMLAreaElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLAreaElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLAreaElement;


    MIDL_INTERFACE("3050f503-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLAreaElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLAreaElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLAreaElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f283-98b5-11cf-bb82-00aa00bdce0b")
HTMLAreaElement;
#endif

#ifndef __IHTMLTableCaption_INTERFACE_DEFINED__
#define __IHTMLTableCaption_INTERFACE_DEFINED__

/* interface IHTMLTableCaption */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLTableCaption;


    MIDL_INTERFACE("3050f2eb-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLTableCaption : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_align(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_align(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_vAlign(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_vAlign(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLTableCaption_INTERFACE_DEFINED__ */


#ifndef __DispHTMLTableCaption_DISPINTERFACE_DEFINED__
#define __DispHTMLTableCaption_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLTableCaption */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLTableCaption;


    MIDL_INTERFACE("3050f508-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLTableCaption : public IDispatch
    {
    };



#endif 	/* __DispHTMLTableCaption_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLTableCaption;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f2ec-98b5-11cf-bb82-00aa00bdce0b")
HTMLTableCaption;
#endif

#ifndef __IHTMLCommentElement_INTERFACE_DEFINED__
#define __IHTMLCommentElement_INTERFACE_DEFINED__

/* interface IHTMLCommentElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLCommentElement;


    MIDL_INTERFACE("3050f20c-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLCommentElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_text(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_text(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_atomic(
            /* [in] */ long v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_atomic(
            /* [out][retval] */ __RPC__out long *p) = 0;

    };





#endif 	/* __IHTMLCommentElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLCommentElement2_INTERFACE_DEFINED__
#define __IHTMLCommentElement2_INTERFACE_DEFINED__

/* interface IHTMLCommentElement2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLCommentElement2;


    MIDL_INTERFACE("3050f813-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLCommentElement2 : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_data(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_data(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_length(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE substringData(
            /* [in] */ long offset,
            /* [in] */ long Count,
            /* [out][retval] */ __RPC__deref_out_opt BSTR *pbstrsubString) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE appendData(
            /* [in] */ __RPC__in BSTR bstrstring) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE insertData(
            /* [in] */ long offset,
            /* [in] */ __RPC__in BSTR bstrstring) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE deleteData(
            /* [in] */ long offset,
            /* [in] */ long Count) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE replaceData(
            /* [in] */ long offset,
            /* [in] */ long Count,
            /* [in] */ __RPC__in BSTR bstrstring) = 0;

    };





#endif 	/* __IHTMLCommentElement2_INTERFACE_DEFINED__ */


#ifndef __DispHTMLCommentElement_DISPINTERFACE_DEFINED__
#define __DispHTMLCommentElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLCommentElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLCommentElement;


    MIDL_INTERFACE("3050f50a-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLCommentElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLCommentElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLCommentElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f317-98b5-11cf-bb82-00aa00bdce0b")
HTMLCommentElement;
#endif

#ifndef __IHTMLPhraseElement_INTERFACE_DEFINED__
#define __IHTMLPhraseElement_INTERFACE_DEFINED__

/* interface IHTMLPhraseElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLPhraseElement;


    MIDL_INTERFACE("3050f20a-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLPhraseElement : public IDispatch
    {
    public:
    };





#endif 	/* __IHTMLPhraseElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLPhraseElement2_INTERFACE_DEFINED__
#define __IHTMLPhraseElement2_INTERFACE_DEFINED__

/* interface IHTMLPhraseElement2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLPhraseElement2;


    MIDL_INTERFACE("3050f824-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLPhraseElement2 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_cite(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_cite(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_dateTime(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_dateTime(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLPhraseElement2_INTERFACE_DEFINED__ */


#ifndef __IHTMLSpanElement_INTERFACE_DEFINED__
#define __IHTMLSpanElement_INTERFACE_DEFINED__

/* interface IHTMLSpanElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLSpanElement;


    MIDL_INTERFACE("3050f3f3-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLSpanElement : public IDispatch
    {
    public:
    };





#endif 	/* __IHTMLSpanElement_INTERFACE_DEFINED__ */


#ifndef __DispHTMLPhraseElement_DISPINTERFACE_DEFINED__
#define __DispHTMLPhraseElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLPhraseElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLPhraseElement;


    MIDL_INTERFACE("3050f52d-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLPhraseElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLPhraseElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLPhraseElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f26e-98b5-11cf-bb82-00aa00bdce0b")
HTMLPhraseElement;
#endif

#ifndef __DispHTMLSpanElement_DISPINTERFACE_DEFINED__
#define __DispHTMLSpanElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLSpanElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLSpanElement;


    MIDL_INTERFACE("3050f548-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLSpanElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLSpanElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLSpanElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f3f5-98b4-11cf-bb82-00aa00bdce0b")
HTMLSpanElement;
#endif

#ifndef __HTMLTableEvents2_DISPINTERFACE_DEFINED__
#define __HTMLTableEvents2_DISPINTERFACE_DEFINED__

/* dispinterface HTMLTableEvents2 */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLTableEvents2;


    MIDL_INTERFACE("3050f623-98b5-11cf-bb82-00aa00bdce0b")
    HTMLTableEvents2 : public IDispatch
    {
    };



#endif 	/* __HTMLTableEvents2_DISPINTERFACE_DEFINED__ */


#ifndef __HTMLTableEvents_DISPINTERFACE_DEFINED__
#define __HTMLTableEvents_DISPINTERFACE_DEFINED__

/* dispinterface HTMLTableEvents */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLTableEvents;


    MIDL_INTERFACE("3050f407-98b5-11cf-bb82-00aa00bdce0b")
    HTMLTableEvents : public IDispatch
    {
    };



#endif 	/* __HTMLTableEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IHTMLTableSection_INTERFACE_DEFINED__
#define __IHTMLTableSection_INTERFACE_DEFINED__

/* interface IHTMLTableSection */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLTableSection;


    MIDL_INTERFACE("3050f23b-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLTableSection : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_align(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_align(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_vAlign(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_vAlign(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_bgColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_bgColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_rows(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElementCollection **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE insertRow(
            /* [in][defaultvalue] */ long index,
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **row) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE deleteRow(
            /* [in][defaultvalue] */ long index = -1) = 0;

    };





#endif 	/* __IHTMLTableSection_INTERFACE_DEFINED__ */


#ifndef __IHTMLTable_INTERFACE_DEFINED__
#define __IHTMLTable_INTERFACE_DEFINED__

/* interface IHTMLTable */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLTable;


    MIDL_INTERFACE("3050f21e-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLTable : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_cols(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_cols(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_border(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_border(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_frame(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_frame(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_rules(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_rules(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_cellSpacing(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_cellSpacing(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_cellPadding(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_cellPadding(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_background(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_background(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_bgColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_bgColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_borderColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_borderColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_borderColorLight(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_borderColorLight(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_borderColorDark(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_borderColorDark(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_align(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_align(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE refresh( void) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_rows(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElementCollection **p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_width(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_width(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_height(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_height(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_dataPageSize(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_dataPageSize(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE nextPage( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE previousPage( void) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_tHead(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLTableSection **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_tFoot(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLTableSection **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_tBodies(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElementCollection **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_caption(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLTableCaption **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createTHead(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **head) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE deleteTHead( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createTFoot(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **foot) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE deleteTFoot( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createCaption(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLTableCaption **caption) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE deleteCaption( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE insertRow(
            /* [in][defaultvalue] */ long index,
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **row) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE deleteRow(
            /* [in][defaultvalue] */ long index = -1) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_readyState(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onreadystatechange(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onreadystatechange(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

    };





#endif 	/* __IHTMLTable_INTERFACE_DEFINED__ */


#ifndef __IHTMLTable2_INTERFACE_DEFINED__
#define __IHTMLTable2_INTERFACE_DEFINED__

/* interface IHTMLTable2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLTable2;


    MIDL_INTERFACE("3050f4ad-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLTable2 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE firstPage( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE lastPage( void) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_cells(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElementCollection **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE moveRow(
            /* [in][defaultvalue] */ long indexFrom,
            /* [in][defaultvalue] */ long indexTo,
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **row) = 0;

    };





#endif 	/* __IHTMLTable2_INTERFACE_DEFINED__ */


#ifndef __IHTMLTable3_INTERFACE_DEFINED__
#define __IHTMLTable3_INTERFACE_DEFINED__

/* interface IHTMLTable3 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLTable3;


    MIDL_INTERFACE("3050f829-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLTable3 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_summary(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_summary(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLTable3_INTERFACE_DEFINED__ */


#ifndef __IHTMLTableCol_INTERFACE_DEFINED__
#define __IHTMLTableCol_INTERFACE_DEFINED__

/* interface IHTMLTableCol */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLTableCol;


    MIDL_INTERFACE("3050f23a-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLTableCol : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_span(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_span(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_width(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_width(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_align(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_align(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_vAlign(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_vAlign(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLTableCol_INTERFACE_DEFINED__ */


#ifndef __IHTMLTableCol2_INTERFACE_DEFINED__
#define __IHTMLTableCol2_INTERFACE_DEFINED__

/* interface IHTMLTableCol2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLTableCol2;


    MIDL_INTERFACE("3050f82a-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLTableCol2 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_ch(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_ch(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_chOff(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_chOff(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLTableCol2_INTERFACE_DEFINED__ */


#ifndef __IHTMLTableSection2_INTERFACE_DEFINED__
#define __IHTMLTableSection2_INTERFACE_DEFINED__

/* interface IHTMLTableSection2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLTableSection2;


    MIDL_INTERFACE("3050f5c7-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLTableSection2 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE moveRow(
            /* [in][defaultvalue] */ long indexFrom,
            /* [in][defaultvalue] */ long indexTo,
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **row) = 0;

    };





#endif 	/* __IHTMLTableSection2_INTERFACE_DEFINED__ */


#ifndef __IHTMLTableSection3_INTERFACE_DEFINED__
#define __IHTMLTableSection3_INTERFACE_DEFINED__

/* interface IHTMLTableSection3 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLTableSection3;


    MIDL_INTERFACE("3050f82b-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLTableSection3 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_ch(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_ch(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_chOff(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_chOff(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLTableSection3_INTERFACE_DEFINED__ */


#ifndef __IHTMLTableRow_INTERFACE_DEFINED__
#define __IHTMLTableRow_INTERFACE_DEFINED__

/* interface IHTMLTableRow */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLTableRow;


    MIDL_INTERFACE("3050f23c-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLTableRow : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_align(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_align(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_vAlign(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_vAlign(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_bgColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_bgColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_borderColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_borderColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_borderColorLight(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_borderColorLight(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_borderColorDark(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_borderColorDark(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_rowIndex(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_sectionRowIndex(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_cells(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElementCollection **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE insertCell(
            /* [in][defaultvalue] */ long index,
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **row) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE deleteCell(
            /* [in][defaultvalue] */ long index = -1) = 0;

    };





#endif 	/* __IHTMLTableRow_INTERFACE_DEFINED__ */


#ifndef __IHTMLTableRow2_INTERFACE_DEFINED__
#define __IHTMLTableRow2_INTERFACE_DEFINED__

/* interface IHTMLTableRow2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLTableRow2;


    MIDL_INTERFACE("3050f4a1-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLTableRow2 : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_height(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_height(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

    };





#endif 	/* __IHTMLTableRow2_INTERFACE_DEFINED__ */


#ifndef __IHTMLTableRow3_INTERFACE_DEFINED__
#define __IHTMLTableRow3_INTERFACE_DEFINED__

/* interface IHTMLTableRow3 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLTableRow3;


    MIDL_INTERFACE("3050f82c-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLTableRow3 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_ch(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_ch(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_chOff(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_chOff(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLTableRow3_INTERFACE_DEFINED__ */


#ifndef __IHTMLTableRowMetrics_INTERFACE_DEFINED__
#define __IHTMLTableRowMetrics_INTERFACE_DEFINED__

/* interface IHTMLTableRowMetrics */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLTableRowMetrics;


    MIDL_INTERFACE("3050f413-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLTableRowMetrics : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_clientHeight(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_clientWidth(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_clientTop(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_clientLeft(
            /* [out][retval] */ __RPC__out long *p) = 0;

    };





#endif 	/* __IHTMLTableRowMetrics_INTERFACE_DEFINED__ */


#ifndef __IHTMLTableCell_INTERFACE_DEFINED__
#define __IHTMLTableCell_INTERFACE_DEFINED__

/* interface IHTMLTableCell */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLTableCell;


    MIDL_INTERFACE("3050f23d-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLTableCell : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_rowSpan(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_rowSpan(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_colSpan(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_colSpan(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_align(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_align(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_vAlign(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_vAlign(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_bgColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_bgColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_noWrap(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_noWrap(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_background(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_background(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_borderColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_borderColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_borderColorLight(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_borderColorLight(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_borderColorDark(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_borderColorDark(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_width(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_width(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_height(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_height(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_cellIndex(
            /* [out][retval] */ __RPC__out long *p) = 0;

    };





#endif 	/* __IHTMLTableCell_INTERFACE_DEFINED__ */


#ifndef __IHTMLTableCell2_INTERFACE_DEFINED__
#define __IHTMLTableCell2_INTERFACE_DEFINED__

/* interface IHTMLTableCell2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLTableCell2;


    MIDL_INTERFACE("3050f82d-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLTableCell2 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_abbr(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_abbr(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_axis(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_axis(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_ch(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_ch(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_chOff(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_chOff(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_headers(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_headers(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_scope(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_scope(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLTableCell2_INTERFACE_DEFINED__ */


#ifndef __DispHTMLTable_DISPINTERFACE_DEFINED__
#define __DispHTMLTable_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLTable */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLTable;


    MIDL_INTERFACE("3050f532-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLTable : public IDispatch
    {
    };



#endif 	/* __DispHTMLTable_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLTable;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f26b-98b5-11cf-bb82-00aa00bdce0b")
HTMLTable;
#endif

#ifndef __DispHTMLTableCol_DISPINTERFACE_DEFINED__
#define __DispHTMLTableCol_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLTableCol */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLTableCol;


    MIDL_INTERFACE("3050f533-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLTableCol : public IDispatch
    {
    };



#endif 	/* __DispHTMLTableCol_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLTableCol;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f26c-98b5-11cf-bb82-00aa00bdce0b")
HTMLTableCol;
#endif

#ifndef __DispHTMLTableSection_DISPINTERFACE_DEFINED__
#define __DispHTMLTableSection_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLTableSection */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLTableSection;


    MIDL_INTERFACE("3050f534-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLTableSection : public IDispatch
    {
    };



#endif 	/* __DispHTMLTableSection_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLTableSection;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f2e9-98b5-11cf-bb82-00aa00bdce0b")
HTMLTableSection;
#endif

#ifndef __DispHTMLTableRow_DISPINTERFACE_DEFINED__
#define __DispHTMLTableRow_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLTableRow */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLTableRow;


    MIDL_INTERFACE("3050f535-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLTableRow : public IDispatch
    {
    };



#endif 	/* __DispHTMLTableRow_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLTableRow;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f26d-98b5-11cf-bb82-00aa00bdce0b")
HTMLTableRow;
#endif

#ifndef __DispHTMLTableCell_DISPINTERFACE_DEFINED__
#define __DispHTMLTableCell_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLTableCell */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLTableCell;


    MIDL_INTERFACE("3050f536-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLTableCell : public IDispatch
    {
    };



#endif 	/* __DispHTMLTableCell_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLTableCell;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f246-98b5-11cf-bb82-00aa00bdce0b")
HTMLTableCell;
#endif

#ifndef __HTMLScriptEvents2_DISPINTERFACE_DEFINED__
#define __HTMLScriptEvents2_DISPINTERFACE_DEFINED__

/* dispinterface HTMLScriptEvents2 */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLScriptEvents2;


    MIDL_INTERFACE("3050f621-98b5-11cf-bb82-00aa00bdce0b")
    HTMLScriptEvents2 : public IDispatch
    {
    };



#endif 	/* __HTMLScriptEvents2_DISPINTERFACE_DEFINED__ */


#ifndef __HTMLScriptEvents_DISPINTERFACE_DEFINED__
#define __HTMLScriptEvents_DISPINTERFACE_DEFINED__

/* dispinterface HTMLScriptEvents */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLScriptEvents;


    MIDL_INTERFACE("3050f3e2-98b5-11cf-bb82-00aa00bdce0b")
    HTMLScriptEvents : public IDispatch
    {
    };



#endif 	/* __HTMLScriptEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IHTMLScriptElement_INTERFACE_DEFINED__
#define __IHTMLScriptElement_INTERFACE_DEFINED__

/* interface IHTMLScriptElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLScriptElement;


    MIDL_INTERFACE("3050f28b-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLScriptElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_src(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_src(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_htmlFor(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_htmlFor(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_event(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_event(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_text(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_text(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_defer(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_defer(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_readyState(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onerror(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onerror(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_type(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_type(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLScriptElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLScriptElement2_INTERFACE_DEFINED__
#define __IHTMLScriptElement2_INTERFACE_DEFINED__

/* interface IHTMLScriptElement2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLScriptElement2;


    MIDL_INTERFACE("3050f828-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLScriptElement2 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_charset(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_charset(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLScriptElement2_INTERFACE_DEFINED__ */


#ifndef __DispHTMLScriptElement_DISPINTERFACE_DEFINED__
#define __DispHTMLScriptElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLScriptElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLScriptElement;


    MIDL_INTERFACE("3050f530-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLScriptElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLScriptElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLScriptElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f28c-98b5-11cf-bb82-00aa00bdce0b")
HTMLScriptElement;
#endif

#ifndef __IHTMLNoShowElement_INTERFACE_DEFINED__
#define __IHTMLNoShowElement_INTERFACE_DEFINED__

/* interface IHTMLNoShowElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLNoShowElement;


    MIDL_INTERFACE("3050f38a-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLNoShowElement : public IDispatch
    {
    public:
    };





#endif 	/* __IHTMLNoShowElement_INTERFACE_DEFINED__ */


#ifndef __DispHTMLNoShowElement_DISPINTERFACE_DEFINED__
#define __DispHTMLNoShowElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLNoShowElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLNoShowElement;


    MIDL_INTERFACE("3050f528-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLNoShowElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLNoShowElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLNoShowElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f38b-98b5-11cf-bb82-00aa00bdce0b")
HTMLNoShowElement;
#endif

#ifndef __HTMLObjectElementEvents2_DISPINTERFACE_DEFINED__
#define __HTMLObjectElementEvents2_DISPINTERFACE_DEFINED__

/* dispinterface HTMLObjectElementEvents2 */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLObjectElementEvents2;


    MIDL_INTERFACE("3050f620-98b5-11cf-bb82-00aa00bdce0b")
    HTMLObjectElementEvents2 : public IDispatch
    {
    };



#endif 	/* __HTMLObjectElementEvents2_DISPINTERFACE_DEFINED__ */


#ifndef __HTMLObjectElementEvents_DISPINTERFACE_DEFINED__
#define __HTMLObjectElementEvents_DISPINTERFACE_DEFINED__

/* dispinterface HTMLObjectElementEvents */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLObjectElementEvents;


    MIDL_INTERFACE("3050f3c4-98b5-11cf-bb82-00aa00bdce0b")
    HTMLObjectElementEvents : public IDispatch
    {
    };



#endif 	/* __HTMLObjectElementEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IHTMLObjectElement_INTERFACE_DEFINED__
#define __IHTMLObjectElement_INTERFACE_DEFINED__

/* interface IHTMLObjectElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLObjectElement;


    MIDL_INTERFACE("3050f24f-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLObjectElement : public IDispatch
    {
    public:
        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_object(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **p) = 0;

        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_classid(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_data(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [hidden][id][propputref] */ HRESULT STDMETHODCALLTYPE putref_recordset(
            /* [in] */ __RPC__in_opt IDispatch *v) = 0;

        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_recordset(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_align(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_align(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_name(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_name(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_codeBase(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_codeBase(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_codeType(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_codeType(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_code(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_code(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BaseHref(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_type(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_type(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_form(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLFormElement **p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_width(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_width(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_height(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_height(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_readyState(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onreadystatechange(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onreadystatechange(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onerror(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onerror(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_altHtml(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_altHtml(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_vspace(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_vspace(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_hspace(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_hspace(
            /* [out][retval] */ __RPC__out long *p) = 0;

    };





#endif 	/* __IHTMLObjectElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLObjectElement2_INTERFACE_DEFINED__
#define __IHTMLObjectElement2_INTERFACE_DEFINED__

/* interface IHTMLObjectElement2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLObjectElement2;


    MIDL_INTERFACE("3050f4cd-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLObjectElement2 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE namedRecordset(
            /* [in] */ __RPC__in BSTR dataMember,
            /* [in][optional] */ __RPC__in VARIANT *hierarchy,
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **ppRecordset) = 0;

        virtual /* [hidden][id][propput] */ HRESULT STDMETHODCALLTYPE put_classid(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_classid(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [hidden][id][propput] */ HRESULT STDMETHODCALLTYPE put_data(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_data(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLObjectElement2_INTERFACE_DEFINED__ */


#ifndef __IHTMLObjectElement3_INTERFACE_DEFINED__
#define __IHTMLObjectElement3_INTERFACE_DEFINED__

/* interface IHTMLObjectElement3 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLObjectElement3;


    MIDL_INTERFACE("3050f827-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLObjectElement3 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_archive(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_archive(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_alt(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_alt(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_declare(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_declare(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_standby(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_standby(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_border(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_border(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_useMap(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_useMap(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLObjectElement3_INTERFACE_DEFINED__ */


#ifndef __IHTMLParamElement_INTERFACE_DEFINED__
#define __IHTMLParamElement_INTERFACE_DEFINED__

/* interface IHTMLParamElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLParamElement;


    MIDL_INTERFACE("3050f83d-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLParamElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_name(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_name(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_value(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_value(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_type(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_type(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_valueType(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_valueType(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLParamElement_INTERFACE_DEFINED__ */


#ifndef __DispHTMLObjectElement_DISPINTERFACE_DEFINED__
#define __DispHTMLObjectElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLObjectElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLObjectElement;


    MIDL_INTERFACE("3050f529-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLObjectElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLObjectElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLObjectElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f24e-98b5-11cf-bb82-00aa00bdce0b")
HTMLObjectElement;
#endif

#ifndef __DispHTMLParamElement_DISPINTERFACE_DEFINED__
#define __DispHTMLParamElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLParamElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLParamElement;


    MIDL_INTERFACE("3050f590-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLParamElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLParamElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLParamElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f83e-98b5-11cf-bb82-00aa00bdce0b")
HTMLParamElement;
#endif

#ifndef __HTMLFrameSiteEvents2_DISPINTERFACE_DEFINED__
#define __HTMLFrameSiteEvents2_DISPINTERFACE_DEFINED__

/* dispinterface HTMLFrameSiteEvents2 */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLFrameSiteEvents2;


    MIDL_INTERFACE("3050f7ff-98b5-11cf-bb82-00aa00bdce0b")
    HTMLFrameSiteEvents2 : public IDispatch
    {
    };



#endif 	/* __HTMLFrameSiteEvents2_DISPINTERFACE_DEFINED__ */


#ifndef __HTMLFrameSiteEvents_DISPINTERFACE_DEFINED__
#define __HTMLFrameSiteEvents_DISPINTERFACE_DEFINED__

/* dispinterface HTMLFrameSiteEvents */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLFrameSiteEvents;


    MIDL_INTERFACE("3050f800-98b5-11cf-bb82-00aa00bdce0b")
    HTMLFrameSiteEvents : public IDispatch
    {
    };



#endif 	/* __HTMLFrameSiteEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IHTMLFrameBase2_INTERFACE_DEFINED__
#define __IHTMLFrameBase2_INTERFACE_DEFINED__

/* interface IHTMLFrameBase2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLFrameBase2;


    MIDL_INTERFACE("3050f6db-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLFrameBase2 : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_contentWindow(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLWindow2 **p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onload(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onload(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onreadystatechange(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onreadystatechange(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_readyState(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_allowTransparency(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_allowTransparency(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

    };





#endif 	/* __IHTMLFrameBase2_INTERFACE_DEFINED__ */


#ifndef __IHTMLFrameBase3_INTERFACE_DEFINED__
#define __IHTMLFrameBase3_INTERFACE_DEFINED__

/* interface IHTMLFrameBase3 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLFrameBase3;


    MIDL_INTERFACE("3050f82e-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLFrameBase3 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_longDesc(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_longDesc(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLFrameBase3_INTERFACE_DEFINED__ */


#ifndef __DispHTMLFrameBase_DISPINTERFACE_DEFINED__
#define __DispHTMLFrameBase_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLFrameBase */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLFrameBase;


    MIDL_INTERFACE("3050f541-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLFrameBase : public IDispatch
    {
    };



#endif 	/* __DispHTMLFrameBase_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLFrameBase;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f312-98b5-11cf-bb82-00aa00bdce0b")
HTMLFrameBase;
#endif

#ifndef __IHTMLFrameElement_INTERFACE_DEFINED__
#define __IHTMLFrameElement_INTERFACE_DEFINED__

/* interface IHTMLFrameElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLFrameElement;


    MIDL_INTERFACE("3050f313-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLFrameElement : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_borderColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_borderColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

    };





#endif 	/* __IHTMLFrameElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLFrameElement2_INTERFACE_DEFINED__
#define __IHTMLFrameElement2_INTERFACE_DEFINED__

/* interface IHTMLFrameElement2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLFrameElement2;


    MIDL_INTERFACE("3050f7f5-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLFrameElement2 : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_height(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_height(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_width(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_width(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

    };





#endif 	/* __IHTMLFrameElement2_INTERFACE_DEFINED__ */


#ifndef __DispHTMLFrameElement_DISPINTERFACE_DEFINED__
#define __DispHTMLFrameElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLFrameElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLFrameElement;


    MIDL_INTERFACE("3050f513-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLFrameElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLFrameElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLFrameElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f314-98b5-11cf-bb82-00aa00bdce0b")
HTMLFrameElement;
#endif

#ifndef __IHTMLIFrameElement_INTERFACE_DEFINED__
#define __IHTMLIFrameElement_INTERFACE_DEFINED__

/* interface IHTMLIFrameElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLIFrameElement;


    MIDL_INTERFACE("3050f315-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLIFrameElement : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_vspace(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_vspace(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_hspace(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_hspace(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_align(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_align(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLIFrameElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLIFrameElement2_INTERFACE_DEFINED__
#define __IHTMLIFrameElement2_INTERFACE_DEFINED__

/* interface IHTMLIFrameElement2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLIFrameElement2;


    MIDL_INTERFACE("3050f4e6-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLIFrameElement2 : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_height(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_height(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_width(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_width(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

    };





#endif 	/* __IHTMLIFrameElement2_INTERFACE_DEFINED__ */


#ifndef __DispHTMLIFrame_DISPINTERFACE_DEFINED__
#define __DispHTMLIFrame_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLIFrame */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLIFrame;


    MIDL_INTERFACE("3050f51b-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLIFrame : public IDispatch
    {
    };



#endif 	/* __DispHTMLIFrame_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLIFrame;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f316-98b5-11cf-bb82-00aa00bdce0b")
HTMLIFrame;
#endif

#ifndef __IHTMLDivPosition_INTERFACE_DEFINED__
#define __IHTMLDivPosition_INTERFACE_DEFINED__

/* interface IHTMLDivPosition */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLDivPosition;


    MIDL_INTERFACE("3050f212-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLDivPosition : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_align(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_align(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLDivPosition_INTERFACE_DEFINED__ */


#ifndef __IHTMLFieldSetElement_INTERFACE_DEFINED__
#define __IHTMLFieldSetElement_INTERFACE_DEFINED__

/* interface IHTMLFieldSetElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLFieldSetElement;


    MIDL_INTERFACE("3050f3e7-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLFieldSetElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_align(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_align(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLFieldSetElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLFieldSetElement2_INTERFACE_DEFINED__
#define __IHTMLFieldSetElement2_INTERFACE_DEFINED__

/* interface IHTMLFieldSetElement2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLFieldSetElement2;


    MIDL_INTERFACE("3050f833-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLFieldSetElement2 : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_form(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLFormElement **p) = 0;

    };





#endif 	/* __IHTMLFieldSetElement2_INTERFACE_DEFINED__ */


#ifndef __IHTMLLegendElement_INTERFACE_DEFINED__
#define __IHTMLLegendElement_INTERFACE_DEFINED__

/* interface IHTMLLegendElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLLegendElement;


    MIDL_INTERFACE("3050f3ea-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLLegendElement : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_align(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_align(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLLegendElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLLegendElement2_INTERFACE_DEFINED__
#define __IHTMLLegendElement2_INTERFACE_DEFINED__

/* interface IHTMLLegendElement2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLLegendElement2;


    MIDL_INTERFACE("3050f834-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLLegendElement2 : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_form(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLFormElement **p) = 0;

    };





#endif 	/* __IHTMLLegendElement2_INTERFACE_DEFINED__ */


#ifndef __DispHTMLDivPosition_DISPINTERFACE_DEFINED__
#define __DispHTMLDivPosition_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLDivPosition */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLDivPosition;


    MIDL_INTERFACE("3050f50f-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLDivPosition : public IDispatch
    {
    };



#endif 	/* __DispHTMLDivPosition_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLDivPosition;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f249-98b5-11cf-bb82-00aa00bdce0b")
HTMLDivPosition;
#endif

#ifndef __DispHTMLFieldSetElement_DISPINTERFACE_DEFINED__
#define __DispHTMLFieldSetElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLFieldSetElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLFieldSetElement;


    MIDL_INTERFACE("3050f545-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLFieldSetElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLFieldSetElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLFieldSetElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f3e8-98b5-11cf-bb82-00aa00bdce0b")
HTMLFieldSetElement;
#endif

#ifndef __DispHTMLLegendElement_DISPINTERFACE_DEFINED__
#define __DispHTMLLegendElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLLegendElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLLegendElement;


    MIDL_INTERFACE("3050f546-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLLegendElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLLegendElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLLegendElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f3e9-98b5-11cf-bb82-00aa00bdce0b")
HTMLLegendElement;
#endif

#ifndef __IHTMLSpanFlow_INTERFACE_DEFINED__
#define __IHTMLSpanFlow_INTERFACE_DEFINED__

/* interface IHTMLSpanFlow */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLSpanFlow;


    MIDL_INTERFACE("3050f3e5-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLSpanFlow : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_align(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_align(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLSpanFlow_INTERFACE_DEFINED__ */


#ifndef __DispHTMLSpanFlow_DISPINTERFACE_DEFINED__
#define __DispHTMLSpanFlow_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLSpanFlow */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLSpanFlow;


    MIDL_INTERFACE("3050f544-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLSpanFlow : public IDispatch
    {
    };



#endif 	/* __DispHTMLSpanFlow_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLSpanFlow;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f3e6-98b5-11cf-bb82-00aa00bdce0b")
HTMLSpanFlow;
#endif

#ifndef __IHTMLFrameSetElement_INTERFACE_DEFINED__
#define __IHTMLFrameSetElement_INTERFACE_DEFINED__

/* interface IHTMLFrameSetElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLFrameSetElement;


    MIDL_INTERFACE("3050f319-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLFrameSetElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_rows(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_rows(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_cols(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_cols(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_border(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_border(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_borderColor(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_borderColor(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_frameBorder(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_frameBorder(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_frameSpacing(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_frameSpacing(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_name(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_name(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onload(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onload(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onunload(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onunload(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onbeforeunload(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onbeforeunload(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

    };





#endif 	/* __IHTMLFrameSetElement_INTERFACE_DEFINED__ */


#ifndef __IHTMLFrameSetElement2_INTERFACE_DEFINED__
#define __IHTMLFrameSetElement2_INTERFACE_DEFINED__

/* interface IHTMLFrameSetElement2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLFrameSetElement2;


    MIDL_INTERFACE("3050f5c6-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLFrameSetElement2 : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onbeforeprint(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onbeforeprint(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onafterprint(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onafterprint(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

    };





#endif 	/* __IHTMLFrameSetElement2_INTERFACE_DEFINED__ */


#ifndef __DispHTMLFrameSetSite_DISPINTERFACE_DEFINED__
#define __DispHTMLFrameSetSite_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLFrameSetSite */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLFrameSetSite;


    MIDL_INTERFACE("3050f514-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLFrameSetSite : public IDispatch
    {
    };



#endif 	/* __DispHTMLFrameSetSite_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLFrameSetSite;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f31A-98b5-11cf-bb82-00aa00bdce0b")
HTMLFrameSetSite;
#endif

#ifndef __IHTMLBGsound_INTERFACE_DEFINED__
#define __IHTMLBGsound_INTERFACE_DEFINED__

/* interface IHTMLBGsound */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLBGsound;


    MIDL_INTERFACE("3050f369-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLBGsound : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_src(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_src(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_loop(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_loop(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_volume(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_volume(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_balance(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_balance(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

    };





#endif 	/* __IHTMLBGsound_INTERFACE_DEFINED__ */


#ifndef __DispHTMLBGsound_DISPINTERFACE_DEFINED__
#define __DispHTMLBGsound_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLBGsound */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLBGsound;


    MIDL_INTERFACE("3050f53c-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLBGsound : public IDispatch
    {
    };



#endif 	/* __DispHTMLBGsound_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLBGsound;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f370-98b5-11cf-bb82-00aa00bdce0b")
HTMLBGsound;
#endif

#ifndef __IHTMLFontNamesCollection_INTERFACE_DEFINED__
#define __IHTMLFontNamesCollection_INTERFACE_DEFINED__

/* interface IHTMLFontNamesCollection */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLFontNamesCollection;


    MIDL_INTERFACE("3050f376-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLFontNamesCollection : public IDispatch
    {
    public:
        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_length(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [restricted][hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get__newEnum(
            /* [out][retval] */ __RPC__deref_out_opt IUnknown **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE item(
            /* [in] */ long index,
            /* [out][retval] */ __RPC__deref_out_opt BSTR *pBstr) = 0;

    };





#endif 	/* __IHTMLFontNamesCollection_INTERFACE_DEFINED__ */


#ifndef __IHTMLFontSizesCollection_INTERFACE_DEFINED__
#define __IHTMLFontSizesCollection_INTERFACE_DEFINED__

/* interface IHTMLFontSizesCollection */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLFontSizesCollection;


    MIDL_INTERFACE("3050f377-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLFontSizesCollection : public IDispatch
    {
    public:
        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_length(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [restricted][hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get__newEnum(
            /* [out][retval] */ __RPC__deref_out_opt IUnknown **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_forFont(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE item(
            /* [in] */ long index,
            /* [out][retval] */ __RPC__out long *plSize) = 0;

    };





#endif 	/* __IHTMLFontSizesCollection_INTERFACE_DEFINED__ */


#ifndef __IHTMLOptionsHolder_INTERFACE_DEFINED__
#define __IHTMLOptionsHolder_INTERFACE_DEFINED__

/* interface IHTMLOptionsHolder */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLOptionsHolder;


    MIDL_INTERFACE("3050f378-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLOptionsHolder : public IDispatch
    {
    public:
        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_document(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDocument2 **p) = 0;

        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_fonts(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLFontNamesCollection **p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_execArg(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_execArg(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_errorLine(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_errorLine(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_errorCharacter(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_errorCharacter(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_errorCode(
            /* [in] */ long v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_errorCode(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_errorMessage(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_errorMessage(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_errorDebug(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_errorDebug(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_unsecuredWindowOfDocument(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLWindow2 **p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_findText(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_findText(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_anythingAfterFrameset(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_anythingAfterFrameset(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE sizes(
            /* [in] */ __RPC__in BSTR fontName,
            /* [out][retval] */ __RPC__deref_out_opt IHTMLFontSizesCollection **pSizesCollection) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE openfiledlg(
            /* [in][optional] */ VARIANT initFile,
            /* [in][optional] */ VARIANT initDir,
            /* [in][optional] */ VARIANT filter,
            /* [in][optional] */ VARIANT title,
            /* [out][retval] */ __RPC__deref_out_opt BSTR *pathName) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE savefiledlg(
            /* [in][optional] */ VARIANT initFile,
            /* [in][optional] */ VARIANT initDir,
            /* [in][optional] */ VARIANT filter,
            /* [in][optional] */ VARIANT title,
            /* [out][retval] */ __RPC__deref_out_opt BSTR *pathName) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE choosecolordlg(
            /* [in][optional] */ VARIANT initColor,
            /* [out][retval] */ __RPC__out long *rgbColor) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE showSecurityInfo( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE isApartmentModel(
            /* [in] */ __RPC__in_opt IHTMLObjectElement *object,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *fApartment) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getCharset(
            /* [in] */ __RPC__in BSTR fontName,
            /* [out][retval] */ __RPC__out long *charset) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_secureConnectionInfo(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLOptionsHolder_INTERFACE_DEFINED__ */


#ifndef __HTMLStyleElementEvents2_DISPINTERFACE_DEFINED__
#define __HTMLStyleElementEvents2_DISPINTERFACE_DEFINED__

/* dispinterface HTMLStyleElementEvents2 */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLStyleElementEvents2;


    MIDL_INTERFACE("3050f615-98b5-11cf-bb82-00aa00bdce0b")
    HTMLStyleElementEvents2 : public IDispatch
    {
    };



#endif 	/* __HTMLStyleElementEvents2_DISPINTERFACE_DEFINED__ */


#ifndef __HTMLStyleElementEvents_DISPINTERFACE_DEFINED__
#define __HTMLStyleElementEvents_DISPINTERFACE_DEFINED__

/* dispinterface HTMLStyleElementEvents */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLStyleElementEvents;


    MIDL_INTERFACE("3050f3cb-98b5-11cf-bb82-00aa00bdce0b")
    HTMLStyleElementEvents : public IDispatch
    {
    };



#endif 	/* __HTMLStyleElementEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IHTMLStyleElement_INTERFACE_DEFINED__
#define __IHTMLStyleElement_INTERFACE_DEFINED__

/* interface IHTMLStyleElement */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLStyleElement;


    MIDL_INTERFACE("3050f375-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLStyleElement : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_type(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_type(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_readyState(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onreadystatechange(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onreadystatechange(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onload(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onload(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onerror(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onerror(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_styleSheet(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLStyleSheet **p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_disabled(
            /* [in] */ VARIANT_BOOL v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_disabled(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_media(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_media(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLStyleElement_INTERFACE_DEFINED__ */


#ifndef __DispHTMLStyleElement_DISPINTERFACE_DEFINED__
#define __DispHTMLStyleElement_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLStyleElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLStyleElement;


    MIDL_INTERFACE("3050f511-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLStyleElement : public IDispatch
    {
    };



#endif 	/* __DispHTMLStyleElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLStyleElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f37d-98b5-11cf-bb82-00aa00bdce0b")
HTMLStyleElement;
#endif

#ifndef __IHTMLStyleFontFace_INTERFACE_DEFINED__
#define __IHTMLStyleFontFace_INTERFACE_DEFINED__

/* interface IHTMLStyleFontFace */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLStyleFontFace;


    MIDL_INTERFACE("3050f3d5-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLStyleFontFace : public IDispatch
    {
    public:
        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_fontsrc(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_fontsrc(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLStyleFontFace_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLStyleFontFace;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f3d4-98b5-11cf-bb82-00aa00bdce0b")
HTMLStyleFontFace;
#endif

#ifndef __ICSSFilterSite_INTERFACE_DEFINED__
#define __ICSSFilterSite_INTERFACE_DEFINED__

/* interface ICSSFilterSite */
/* [uuid][unique][object] */


EXTERN_C const IID IID_ICSSFilterSite;


    MIDL_INTERFACE("3050f3ed-98b5-11cf-bb82-00aa00bdce0b")
    ICSSFilterSite : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetElement(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElement **Element) = 0;

        virtual HRESULT STDMETHODCALLTYPE FireOnFilterChangeEvent( void) = 0;

    };





#endif 	/* __ICSSFilterSite_INTERFACE_DEFINED__ */


#ifndef __IMarkupPointer_INTERFACE_DEFINED__
#define __IMarkupPointer_INTERFACE_DEFINED__

/* interface IMarkupPointer */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IMarkupPointer;


    MIDL_INTERFACE("3050f49f-98b5-11cf-bb82-00aa00bdce0b")
    IMarkupPointer : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OwningDoc(
            /* [out] */ __RPC__deref_out_opt IHTMLDocument2 **ppDoc) = 0;

        virtual HRESULT STDMETHODCALLTYPE Gravity(
            /* [out] */ __RPC__out POINTER_GRAVITY *pGravity) = 0;

        virtual HRESULT STDMETHODCALLTYPE SetGravity(
            /* [in] */ POINTER_GRAVITY Gravity) = 0;

        virtual HRESULT STDMETHODCALLTYPE Cling(
            /* [out] */ __RPC__out BOOL *pfCling) = 0;

        virtual HRESULT STDMETHODCALLTYPE SetCling(
            /* [in] */ BOOL fCLing) = 0;

        virtual HRESULT STDMETHODCALLTYPE Unposition( void) = 0;

        virtual HRESULT STDMETHODCALLTYPE IsPositioned(
            /* [out] */ __RPC__out BOOL *pfPositioned) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetContainer(
            /* [out] */ __RPC__deref_out_opt IMarkupContainer **ppContainer) = 0;

        virtual HRESULT STDMETHODCALLTYPE MoveAdjacentToElement(
            /* [in] */ __RPC__in_opt IHTMLElement *pElement,
            /* [in] */ ELEMENT_ADJACENCY eAdj) = 0;

        virtual HRESULT STDMETHODCALLTYPE MoveToPointer(
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointer) = 0;

        virtual HRESULT STDMETHODCALLTYPE MoveToContainer(
            /* [in] */ __RPC__in_opt IMarkupContainer *pContainer,
            /* [in] */ BOOL fAtStart) = 0;

        virtual HRESULT STDMETHODCALLTYPE Left(
            /* [in] */ BOOL fMove,
            /* [out] */ __RPC__out MARKUP_CONTEXT_TYPE *pContext,
            /* [out] */ __RPC__deref_out_opt IHTMLElement **ppElement,
            /* [out][in] */ __RPC__inout long *pcch,
            /* [size_is][out] */ __RPC__out_ecount_full(*pcch) OLECHAR *pchText) = 0;

        virtual HRESULT STDMETHODCALLTYPE Right(
            /* [in] */ BOOL fMove,
            /* [out] */ __RPC__out MARKUP_CONTEXT_TYPE *pContext,
            /* [out] */ __RPC__deref_out_opt IHTMLElement **ppElement,
            /* [out][in] */ __RPC__inout long *pcch,
            /* [size_is][out] */ __RPC__out_ecount_full(*pcch) OLECHAR *pchText) = 0;

        virtual HRESULT STDMETHODCALLTYPE CurrentScope(
            /* [out] */ __RPC__deref_out_opt IHTMLElement **ppElemCurrent) = 0;

        virtual HRESULT STDMETHODCALLTYPE IsLeftOf(
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerThat,
            /* [out] */ __RPC__out BOOL *pfResult) = 0;

        virtual HRESULT STDMETHODCALLTYPE IsLeftOfOrEqualTo(
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerThat,
            /* [out] */ __RPC__out BOOL *pfResult) = 0;

        virtual HRESULT STDMETHODCALLTYPE IsRightOf(
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerThat,
            /* [out] */ __RPC__out BOOL *pfResult) = 0;

        virtual HRESULT STDMETHODCALLTYPE IsRightOfOrEqualTo(
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerThat,
            /* [out] */ __RPC__out BOOL *pfResult) = 0;

        virtual HRESULT STDMETHODCALLTYPE IsEqualTo(
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerThat,
            /* [out] */ __RPC__out BOOL *pfAreEqual) = 0;

        virtual HRESULT STDMETHODCALLTYPE MoveUnit(
            /* [in] */ MOVEUNIT_ACTION muAction) = 0;

        virtual HRESULT STDMETHODCALLTYPE FindText(
            /* [string][in] */ __RPC__in OLECHAR *pchFindText,
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IMarkupPointer *pIEndMatch,
            /* [in] */ __RPC__in_opt IMarkupPointer *pIEndSearch) = 0;

    };





#endif 	/* __IMarkupPointer_INTERFACE_DEFINED__ */


#ifndef __IMarkupContainer_INTERFACE_DEFINED__
#define __IMarkupContainer_INTERFACE_DEFINED__

/* interface IMarkupContainer */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IMarkupContainer;


    MIDL_INTERFACE("3050f5f9-98b5-11cf-bb82-00aa00bdce0b")
    IMarkupContainer : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OwningDoc(
            /* [out] */ __RPC__deref_out_opt IHTMLDocument2 **ppDoc) = 0;

    };





#endif 	/* __IMarkupContainer_INTERFACE_DEFINED__ */


#ifndef __IMarkupContainer2_INTERFACE_DEFINED__
#define __IMarkupContainer2_INTERFACE_DEFINED__

/* interface IMarkupContainer2 */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IMarkupContainer2;


    MIDL_INTERFACE("3050f648-98b5-11cf-bb82-00aa00bdce0b")
    IMarkupContainer2 : public IMarkupContainer
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateChangeLog(
            /* [in] */ __RPC__in_opt IHTMLChangeSink *pChangeSink,
            /* [out] */ __RPC__deref_out_opt IHTMLChangeLog **ppChangeLog,
            /* [in] */ BOOL fForward,
            /* [in] */ BOOL fBackward) = 0;

        virtual HRESULT STDMETHODCALLTYPE RegisterForDirtyRange(
            /* [in] */ __RPC__in_opt IHTMLChangeSink *pChangeSink,
            /* [out] */ __RPC__out DWORD *pdwCookie) = 0;

        virtual HRESULT STDMETHODCALLTYPE UnRegisterForDirtyRange(
            /* [in] */ DWORD dwCookie) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetAndClearDirtyRange(
            /* [in] */ DWORD dwCookie,
            /* [in] */ __RPC__in_opt IMarkupPointer *pIPointerBegin,
            /* [in] */ __RPC__in_opt IMarkupPointer *pIPointerEnd) = 0;

        virtual long STDMETHODCALLTYPE GetVersionNumber( void) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetMasterElement(
            /* [out] */ __RPC__deref_out_opt IHTMLElement **ppElementMaster) = 0;

    };





#endif 	/* __IMarkupContainer2_INTERFACE_DEFINED__ */


#ifndef __IHTMLChangeLog_INTERFACE_DEFINED__
#define __IHTMLChangeLog_INTERFACE_DEFINED__

/* interface IHTMLChangeLog */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IHTMLChangeLog;


    MIDL_INTERFACE("3050f649-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLChangeLog : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetNextChange(
            /* [in] */ __RPC__in BYTE *pbBuffer,
            /* [in] */ long nBufferSize,
            /* [out] */ __RPC__out long *pnRecordLength) = 0;

    };





#endif 	/* __IHTMLChangeLog_INTERFACE_DEFINED__ */


#ifndef __IHTMLChangeSink_INTERFACE_DEFINED__
#define __IHTMLChangeSink_INTERFACE_DEFINED__

/* interface IHTMLChangeSink */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IHTMLChangeSink;


    MIDL_INTERFACE("3050f64a-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLChangeSink : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( void) = 0;

    };





#endif 	/* __IHTMLChangeSink_INTERFACE_DEFINED__ */


#ifndef __IActiveIMMApp_INTERFACE_DEFINED__
#define __IActiveIMMApp_INTERFACE_DEFINED__

/* interface IActiveIMMApp */
/* [unique][uuid][object] */


EXTERN_C const IID IID_IActiveIMMApp;


    MIDL_INTERFACE("08c0e040-62d1-11d1-9326-0060b067b86e")
    IActiveIMMApp : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AssociateContext(
            /* [in] */ __RPC__in HWND hWnd,
            /* [in] */ HIMC hIME,
            /* [out] */ __RPC__out HIMC *phPrev) = 0;

        virtual HRESULT STDMETHODCALLTYPE ConfigureIMEA(
            /* [in] */ __RPC__in HKL hKL,
            /* [in] */ __RPC__in HWND hWnd,
            /* [in] */ DWORD dwMode,
            /* [in] */ __RPC__in REGISTERWORDA *pData) = 0;

        virtual HRESULT STDMETHODCALLTYPE ConfigureIMEW(
            /* [in] */ __RPC__in HKL hKL,
            /* [in] */ __RPC__in HWND hWnd,
            /* [in] */ DWORD dwMode,
            /* [in] */ __RPC__in REGISTERWORDW *pData) = 0;

        virtual HRESULT STDMETHODCALLTYPE CreateContext(
            /* [out] */ __RPC__out HIMC *phIMC) = 0;

        virtual HRESULT STDMETHODCALLTYPE DestroyContext(
            /* [in] */ HIMC hIME) = 0;

        virtual HRESULT STDMETHODCALLTYPE EnumRegisterWordA(
            /* [in] */ __RPC__in HKL hKL,
            /* [in] */ __RPC__in LPSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ __RPC__in LPSTR szRegister,
            /* [in] */ __RPC__in LPVOID pData,
            /* [out] */ __RPC__deref_out_opt IEnumRegisterWordA **pEnum) = 0;

        virtual HRESULT STDMETHODCALLTYPE EnumRegisterWordW(
            /* [in] */ __RPC__in HKL hKL,
            /* [in] */ __RPC__in LPWSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ __RPC__in LPWSTR szRegister,
            /* [in] */ __RPC__in LPVOID pData,
            /* [out] */ __RPC__deref_out_opt IEnumRegisterWordW **pEnum) = 0;

        virtual HRESULT STDMETHODCALLTYPE EscapeA(
            /* [in] */ __RPC__in HKL hKL,
            /* [in] */ HIMC hIMC,
            /* [in] */ UINT uEscape,
            /* [out][in] */ __RPC__inout LPVOID pData,
            /* [out] */ __RPC__out LRESULT *plResult) = 0;

        virtual HRESULT STDMETHODCALLTYPE EscapeW(
            /* [in] */ __RPC__in HKL hKL,
            /* [in] */ HIMC hIMC,
            /* [in] */ UINT uEscape,
            /* [out][in] */ __RPC__inout LPVOID pData,
            /* [out] */ __RPC__out LRESULT *plResult) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetCandidateListA(
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ UINT uBufLen,
            /* [out] */ __RPC__out CANDIDATELIST *pCandList,
            /* [out] */ __RPC__out UINT *puCopied) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetCandidateListW(
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ UINT uBufLen,
            /* [out] */ __RPC__out CANDIDATELIST *pCandList,
            /* [out] */ __RPC__out UINT *puCopied) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetCandidateListCountA(
            /* [in] */ HIMC hIMC,
            /* [out] */ __RPC__out DWORD *pdwListSize,
            /* [out] */ __RPC__out DWORD *pdwBufLen) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetCandidateListCountW(
            /* [in] */ HIMC hIMC,
            /* [out] */ __RPC__out DWORD *pdwListSize,
            /* [out] */ __RPC__out DWORD *pdwBufLen) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetCandidateWindow(
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [out] */ __RPC__out CANDIDATEFORM *pCandidate) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetCompositionFontA(
            /* [in] */ HIMC hIMC,
            /* [out] */ __RPC__out LOGFONTA *plf) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetCompositionFontW(
            /* [in] */ HIMC hIMC,
            /* [out] */ __RPC__out LOGFONTW *plf) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetCompositionStringA(
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwBufLen,
            /* [out] */ __RPC__out LONG *plCopied,
            /* [out] */ __RPC__out LPVOID pBuf) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetCompositionStringW(
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwBufLen,
            /* [out] */ __RPC__out LONG *plCopied,
            /* [out] */ __RPC__out LPVOID pBuf) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetCompositionWindow(
            /* [in] */ HIMC hIMC,
            /* [out] */ __RPC__out COMPOSITIONFORM *pCompForm) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetContext(
            /* [in] */ __RPC__in HWND hWnd,
            /* [out] */ __RPC__out HIMC *phIMC) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetConversionListA(
            /* [in] */ __RPC__in HKL hKL,
            /* [in] */ HIMC hIMC,
            /* [in] */ __RPC__in LPSTR pSrc,
            /* [in] */ UINT uBufLen,
            /* [in] */ UINT uFlag,
            /* [out] */ __RPC__out CANDIDATELIST *pDst,
            /* [out] */ __RPC__out UINT *puCopied) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetConversionListW(
            /* [in] */ __RPC__in HKL hKL,
            /* [in] */ HIMC hIMC,
            /* [in] */ __RPC__in LPWSTR pSrc,
            /* [in] */ UINT uBufLen,
            /* [in] */ UINT uFlag,
            /* [out] */ __RPC__out CANDIDATELIST *pDst,
            /* [out] */ __RPC__out UINT *puCopied) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetConversionStatus(
            /* [in] */ HIMC hIMC,
            /* [out] */ __RPC__out DWORD *pfdwConversion,
            /* [out] */ __RPC__out DWORD *pfdwSentence) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetDefaultIMEWnd(
            /* [in] */ __RPC__in HWND hWnd,
            /* [out] */ __RPC__deref_out_opt HWND *phDefWnd) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetDescriptionA(
            /* [in] */ __RPC__in HKL hKL,
            /* [in] */ UINT uBufLen,
            /* [out] */ __RPC__out LPSTR szDescription,
            /* [out] */ __RPC__out UINT *puCopied) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetDescriptionW(
            /* [in] */ __RPC__in HKL hKL,
            /* [in] */ UINT uBufLen,
            /* [out] */ __RPC__out LPWSTR szDescription,
            /* [out] */ __RPC__out UINT *puCopied) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetGuideLineA(
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwBufLen,
            /* [out] */ __RPC__out LPSTR pBuf,
            /* [out] */ __RPC__out DWORD *pdwResult) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetGuideLineW(
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwBufLen,
            /* [out] */ __RPC__out LPWSTR pBuf,
            /* [out] */ __RPC__out DWORD *pdwResult) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetIMEFileNameA(
            /* [in] */ __RPC__in HKL hKL,
            /* [in] */ UINT uBufLen,
            /* [out] */ __RPC__out LPSTR szFileName,
            /* [out] */ __RPC__out UINT *puCopied) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetIMEFileNameW(
            /* [in] */ __RPC__in HKL hKL,
            /* [in] */ UINT uBufLen,
            /* [out] */ __RPC__out LPWSTR szFileName,
            /* [out] */ __RPC__out UINT *puCopied) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetOpenStatus(
            /* [in] */ HIMC hIMC) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetProperty(
            /* [in] */ __RPC__in HKL hKL,
            /* [in] */ DWORD fdwIndex,
            /* [out] */ __RPC__out DWORD *pdwProperty) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetRegisterWordStyleA(
            /* [in] */ __RPC__in HKL hKL,
            /* [in] */ UINT nItem,
            /* [out] */ __RPC__out STYLEBUFA *pStyleBuf,
            /* [out] */ __RPC__out UINT *puCopied) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetRegisterWordStyleW(
            /* [in] */ __RPC__in HKL hKL,
            /* [in] */ UINT nItem,
            /* [out] */ __RPC__out STYLEBUFW *pStyleBuf,
            /* [out] */ __RPC__out UINT *puCopied) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetStatusWindowPos(
            /* [in] */ HIMC hIMC,
            /* [out] */ __RPC__out POINT *pptPos) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetVirtualKey(
            /* [in] */ __RPC__in HWND hWnd,
            /* [out] */ __RPC__out UINT *puVirtualKey) = 0;

        virtual HRESULT STDMETHODCALLTYPE InstallIMEA(
            /* [in] */ __RPC__in LPSTR szIMEFileName,
            /* [in] */ __RPC__in LPSTR szLayoutText,
            /* [out] */ __RPC__deref_out_opt HKL *phKL) = 0;

        virtual HRESULT STDMETHODCALLTYPE InstallIMEW(
            /* [in] */ __RPC__in LPWSTR szIMEFileName,
            /* [in] */ __RPC__in LPWSTR szLayoutText,
            /* [out] */ __RPC__deref_out_opt HKL *phKL) = 0;

        virtual HRESULT STDMETHODCALLTYPE IsIME(
            /* [in] */ __RPC__in HKL hKL) = 0;

        virtual HRESULT STDMETHODCALLTYPE IsUIMessageA(
            /* [in] */ __RPC__in HWND hWndIME,
            /* [in] */ UINT msg,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam) = 0;

        virtual HRESULT STDMETHODCALLTYPE IsUIMessageW(
            /* [in] */ __RPC__in HWND hWndIME,
            /* [in] */ UINT msg,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam) = 0;

        virtual HRESULT STDMETHODCALLTYPE NotifyIME(
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwAction,
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwValue) = 0;

        virtual HRESULT STDMETHODCALLTYPE RegisterWordA(
            /* [in] */ __RPC__in HKL hKL,
            /* [in] */ __RPC__in LPSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ __RPC__in LPSTR szRegister) = 0;

        virtual HRESULT STDMETHODCALLTYPE RegisterWordW(
            /* [in] */ __RPC__in HKL hKL,
            /* [in] */ __RPC__in LPWSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ __RPC__in LPWSTR szRegister) = 0;

        virtual HRESULT STDMETHODCALLTYPE ReleaseContext(
            /* [in] */ __RPC__in HWND hWnd,
            /* [in] */ HIMC hIMC) = 0;

        virtual HRESULT STDMETHODCALLTYPE SetCandidateWindow(
            /* [in] */ HIMC hIMC,
            /* [in] */ __RPC__in CANDIDATEFORM *pCandidate) = 0;

        virtual HRESULT STDMETHODCALLTYPE SetCompositionFontA(
            /* [in] */ HIMC hIMC,
            /* [in] */ __RPC__in LOGFONTA *plf) = 0;

        virtual HRESULT STDMETHODCALLTYPE SetCompositionFontW(
            /* [in] */ HIMC hIMC,
            /* [in] */ __RPC__in LOGFONTW *plf) = 0;

        virtual HRESULT STDMETHODCALLTYPE SetCompositionStringA(
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ __RPC__in LPVOID pComp,
            /* [in] */ DWORD dwCompLen,
            /* [in] */ __RPC__in LPVOID pRead,
            /* [in] */ DWORD dwReadLen) = 0;

        virtual HRESULT STDMETHODCALLTYPE SetCompositionStringW(
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwIndex,
            /* [in] */ __RPC__in LPVOID pComp,
            /* [in] */ DWORD dwCompLen,
            /* [in] */ __RPC__in LPVOID pRead,
            /* [in] */ DWORD dwReadLen) = 0;

        virtual HRESULT STDMETHODCALLTYPE SetCompositionWindow(
            /* [in] */ HIMC hIMC,
            /* [in] */ __RPC__in COMPOSITIONFORM *pCompForm) = 0;

        virtual HRESULT STDMETHODCALLTYPE SetConversionStatus(
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD fdwConversion,
            /* [in] */ DWORD fdwSentence) = 0;

        virtual HRESULT STDMETHODCALLTYPE SetOpenStatus(
            /* [in] */ HIMC hIMC,
            /* [in] */ BOOL fOpen) = 0;

        virtual HRESULT STDMETHODCALLTYPE SetStatusWindowPos(
            /* [in] */ HIMC hIMC,
            /* [in] */ __RPC__in POINT *pptPos) = 0;

        virtual HRESULT STDMETHODCALLTYPE SimulateHotKey(
            /* [in] */ __RPC__in HWND hWnd,
            /* [in] */ DWORD dwHotKeyID) = 0;

        virtual HRESULT STDMETHODCALLTYPE UnregisterWordA(
            /* [in] */ __RPC__in HKL hKL,
            /* [in] */ __RPC__in LPSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ __RPC__in LPSTR szUnregister) = 0;

        virtual HRESULT STDMETHODCALLTYPE UnregisterWordW(
            /* [in] */ __RPC__in HKL hKL,
            /* [in] */ __RPC__in LPWSTR szReading,
            /* [in] */ DWORD dwStyle,
            /* [in] */ __RPC__in LPWSTR szUnregister) = 0;

        virtual HRESULT STDMETHODCALLTYPE Activate(
            /* [in] */ BOOL fRestoreLayout) = 0;

        virtual HRESULT STDMETHODCALLTYPE Deactivate( void) = 0;

        virtual HRESULT STDMETHODCALLTYPE OnDefWindowProc(
            /* [in] */ __RPC__in HWND hWnd,
            /* [in] */ UINT Msg,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam,
            /* [out] */ __RPC__out LRESULT *plResult) = 0;

        virtual HRESULT STDMETHODCALLTYPE FilterClientWindows(
            /* [in] */ __RPC__in ATOM *aaClassList,
            /* [in] */ UINT uSize) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetCodePageA(
            /* [in] */ __RPC__in HKL hKL,
            /* [out] */ __RPC__out UINT *uCodePage) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetLangId(
            /* [in] */ __RPC__in HKL hKL,
            /* [out] */ __RPC__out LANGID *plid) = 0;

        virtual HRESULT STDMETHODCALLTYPE AssociateContextEx(
            /* [in] */ __RPC__in HWND hWnd,
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwFlags) = 0;

        virtual HRESULT STDMETHODCALLTYPE DisableIME(
            /* [in] */ DWORD idThread) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetImeMenuItemsA(
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwFlags,
            /* [in] */ DWORD dwType,
            /* [in] */ __RPC__in IMEMENUITEMINFOA *pImeParentMenu,
            /* [out] */ __RPC__out IMEMENUITEMINFOA *pImeMenu,
            /* [in] */ DWORD dwSize,
            /* [out] */ __RPC__out DWORD *pdwResult) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetImeMenuItemsW(
            /* [in] */ HIMC hIMC,
            /* [in] */ DWORD dwFlags,
            /* [in] */ DWORD dwType,
            /* [in] */ __RPC__in IMEMENUITEMINFOW *pImeParentMenu,
            /* [out] */ __RPC__out IMEMENUITEMINFOW *pImeMenu,
            /* [in] */ DWORD dwSize,
            /* [out] */ __RPC__out DWORD *pdwResult) = 0;

        virtual HRESULT STDMETHODCALLTYPE EnumInputContext(
            /* [in] */ DWORD idThread,
            /* [out] */ __RPC__deref_out_opt IEnumInputContext **ppEnum) = 0;

    };




HRESULT STDMETHODCALLTYPE IActiveIMMApp_AssociateContext_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HWND hWnd,
    /* [in] */ HIMC hIME,
    /* [out] */ __RPC__out HIMC *phPrev);


void __RPC_STUB IActiveIMMApp_AssociateContext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_ConfigureIMEA_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HKL hKL,
    /* [in] */ __RPC__in HWND hWnd,
    /* [in] */ DWORD dwMode,
    /* [in] */ __RPC__in REGISTERWORDA *pData);


void __RPC_STUB IActiveIMMApp_ConfigureIMEA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_ConfigureIMEW_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HKL hKL,
    /* [in] */ __RPC__in HWND hWnd,
    /* [in] */ DWORD dwMode,
    /* [in] */ __RPC__in REGISTERWORDW *pData);


void __RPC_STUB IActiveIMMApp_ConfigureIMEW_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_CreateContext_Proxy(
    IActiveIMMApp * This,
    /* [out] */ __RPC__out HIMC *phIMC);


void __RPC_STUB IActiveIMMApp_CreateContext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_DestroyContext_Proxy(
    IActiveIMMApp * This,
    /* [in] */ HIMC hIME);


void __RPC_STUB IActiveIMMApp_DestroyContext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_EnumRegisterWordA_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HKL hKL,
    /* [in] */ __RPC__in LPSTR szReading,
    /* [in] */ DWORD dwStyle,
    /* [in] */ __RPC__in LPSTR szRegister,
    /* [in] */ __RPC__in LPVOID pData,
    /* [out] */ __RPC__deref_out_opt IEnumRegisterWordA **pEnum);


void __RPC_STUB IActiveIMMApp_EnumRegisterWordA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_EnumRegisterWordW_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HKL hKL,
    /* [in] */ __RPC__in LPWSTR szReading,
    /* [in] */ DWORD dwStyle,
    /* [in] */ __RPC__in LPWSTR szRegister,
    /* [in] */ __RPC__in LPVOID pData,
    /* [out] */ __RPC__deref_out_opt IEnumRegisterWordW **pEnum);


void __RPC_STUB IActiveIMMApp_EnumRegisterWordW_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_EscapeA_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HKL hKL,
    /* [in] */ HIMC hIMC,
    /* [in] */ UINT uEscape,
    /* [out][in] */ __RPC__inout LPVOID pData,
    /* [out] */ __RPC__out LRESULT *plResult);


void __RPC_STUB IActiveIMMApp_EscapeA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_EscapeW_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HKL hKL,
    /* [in] */ HIMC hIMC,
    /* [in] */ UINT uEscape,
    /* [out][in] */ __RPC__inout LPVOID pData,
    /* [out] */ __RPC__out LRESULT *plResult);


void __RPC_STUB IActiveIMMApp_EscapeW_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetCandidateListA_Proxy(
    IActiveIMMApp * This,
    /* [in] */ HIMC hIMC,
    /* [in] */ DWORD dwIndex,
    /* [in] */ UINT uBufLen,
    /* [out] */ __RPC__out CANDIDATELIST *pCandList,
    /* [out] */ __RPC__out UINT *puCopied);


void __RPC_STUB IActiveIMMApp_GetCandidateListA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetCandidateListW_Proxy(
    IActiveIMMApp * This,
    /* [in] */ HIMC hIMC,
    /* [in] */ DWORD dwIndex,
    /* [in] */ UINT uBufLen,
    /* [out] */ __RPC__out CANDIDATELIST *pCandList,
    /* [out] */ __RPC__out UINT *puCopied);


void __RPC_STUB IActiveIMMApp_GetCandidateListW_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetCandidateListCountA_Proxy(
    IActiveIMMApp * This,
    /* [in] */ HIMC hIMC,
    /* [out] */ __RPC__out DWORD *pdwListSize,
    /* [out] */ __RPC__out DWORD *pdwBufLen);


void __RPC_STUB IActiveIMMApp_GetCandidateListCountA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetCandidateListCountW_Proxy(
    IActiveIMMApp * This,
    /* [in] */ HIMC hIMC,
    /* [out] */ __RPC__out DWORD *pdwListSize,
    /* [out] */ __RPC__out DWORD *pdwBufLen);


void __RPC_STUB IActiveIMMApp_GetCandidateListCountW_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetCandidateWindow_Proxy(
    IActiveIMMApp * This,
    /* [in] */ HIMC hIMC,
    /* [in] */ DWORD dwIndex,
    /* [out] */ __RPC__out CANDIDATEFORM *pCandidate);


void __RPC_STUB IActiveIMMApp_GetCandidateWindow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetCompositionFontA_Proxy(
    IActiveIMMApp * This,
    /* [in] */ HIMC hIMC,
    /* [out] */ __RPC__out LOGFONTA *plf);


void __RPC_STUB IActiveIMMApp_GetCompositionFontA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetCompositionFontW_Proxy(
    IActiveIMMApp * This,
    /* [in] */ HIMC hIMC,
    /* [out] */ __RPC__out LOGFONTW *plf);


void __RPC_STUB IActiveIMMApp_GetCompositionFontW_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetCompositionStringA_Proxy(
    IActiveIMMApp * This,
    /* [in] */ HIMC hIMC,
    /* [in] */ DWORD dwIndex,
    /* [in] */ DWORD dwBufLen,
    /* [out] */ __RPC__out LONG *plCopied,
    /* [out] */ __RPC__out LPVOID pBuf);


void __RPC_STUB IActiveIMMApp_GetCompositionStringA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetCompositionStringW_Proxy(
    IActiveIMMApp * This,
    /* [in] */ HIMC hIMC,
    /* [in] */ DWORD dwIndex,
    /* [in] */ DWORD dwBufLen,
    /* [out] */ __RPC__out LONG *plCopied,
    /* [out] */ __RPC__out LPVOID pBuf);


void __RPC_STUB IActiveIMMApp_GetCompositionStringW_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetCompositionWindow_Proxy(
    IActiveIMMApp * This,
    /* [in] */ HIMC hIMC,
    /* [out] */ __RPC__out COMPOSITIONFORM *pCompForm);


void __RPC_STUB IActiveIMMApp_GetCompositionWindow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetContext_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HWND hWnd,
    /* [out] */ __RPC__out HIMC *phIMC);


void __RPC_STUB IActiveIMMApp_GetContext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetConversionListA_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HKL hKL,
    /* [in] */ HIMC hIMC,
    /* [in] */ __RPC__in LPSTR pSrc,
    /* [in] */ UINT uBufLen,
    /* [in] */ UINT uFlag,
    /* [out] */ __RPC__out CANDIDATELIST *pDst,
    /* [out] */ __RPC__out UINT *puCopied);


void __RPC_STUB IActiveIMMApp_GetConversionListA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetConversionListW_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HKL hKL,
    /* [in] */ HIMC hIMC,
    /* [in] */ __RPC__in LPWSTR pSrc,
    /* [in] */ UINT uBufLen,
    /* [in] */ UINT uFlag,
    /* [out] */ __RPC__out CANDIDATELIST *pDst,
    /* [out] */ __RPC__out UINT *puCopied);


void __RPC_STUB IActiveIMMApp_GetConversionListW_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetConversionStatus_Proxy(
    IActiveIMMApp * This,
    /* [in] */ HIMC hIMC,
    /* [out] */ __RPC__out DWORD *pfdwConversion,
    /* [out] */ __RPC__out DWORD *pfdwSentence);


void __RPC_STUB IActiveIMMApp_GetConversionStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetDefaultIMEWnd_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HWND hWnd,
    /* [out] */ __RPC__deref_out_opt HWND *phDefWnd);


void __RPC_STUB IActiveIMMApp_GetDefaultIMEWnd_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetDescriptionA_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HKL hKL,
    /* [in] */ UINT uBufLen,
    /* [out] */ __RPC__out LPSTR szDescription,
    /* [out] */ __RPC__out UINT *puCopied);


void __RPC_STUB IActiveIMMApp_GetDescriptionA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetDescriptionW_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HKL hKL,
    /* [in] */ UINT uBufLen,
    /* [out] */ __RPC__out LPWSTR szDescription,
    /* [out] */ __RPC__out UINT *puCopied);


void __RPC_STUB IActiveIMMApp_GetDescriptionW_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetGuideLineA_Proxy(
    IActiveIMMApp * This,
    /* [in] */ HIMC hIMC,
    /* [in] */ DWORD dwIndex,
    /* [in] */ DWORD dwBufLen,
    /* [out] */ __RPC__out LPSTR pBuf,
    /* [out] */ __RPC__out DWORD *pdwResult);


void __RPC_STUB IActiveIMMApp_GetGuideLineA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetGuideLineW_Proxy(
    IActiveIMMApp * This,
    /* [in] */ HIMC hIMC,
    /* [in] */ DWORD dwIndex,
    /* [in] */ DWORD dwBufLen,
    /* [out] */ __RPC__out LPWSTR pBuf,
    /* [out] */ __RPC__out DWORD *pdwResult);


void __RPC_STUB IActiveIMMApp_GetGuideLineW_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetIMEFileNameA_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HKL hKL,
    /* [in] */ UINT uBufLen,
    /* [out] */ __RPC__out LPSTR szFileName,
    /* [out] */ __RPC__out UINT *puCopied);


void __RPC_STUB IActiveIMMApp_GetIMEFileNameA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetIMEFileNameW_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HKL hKL,
    /* [in] */ UINT uBufLen,
    /* [out] */ __RPC__out LPWSTR szFileName,
    /* [out] */ __RPC__out UINT *puCopied);


void __RPC_STUB IActiveIMMApp_GetIMEFileNameW_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetOpenStatus_Proxy(
    IActiveIMMApp * This,
    /* [in] */ HIMC hIMC);


void __RPC_STUB IActiveIMMApp_GetOpenStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetProperty_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HKL hKL,
    /* [in] */ DWORD fdwIndex,
    /* [out] */ __RPC__out DWORD *pdwProperty);


void __RPC_STUB IActiveIMMApp_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetRegisterWordStyleA_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HKL hKL,
    /* [in] */ UINT nItem,
    /* [out] */ __RPC__out STYLEBUFA *pStyleBuf,
    /* [out] */ __RPC__out UINT *puCopied);


void __RPC_STUB IActiveIMMApp_GetRegisterWordStyleA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetRegisterWordStyleW_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HKL hKL,
    /* [in] */ UINT nItem,
    /* [out] */ __RPC__out STYLEBUFW *pStyleBuf,
    /* [out] */ __RPC__out UINT *puCopied);


void __RPC_STUB IActiveIMMApp_GetRegisterWordStyleW_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetStatusWindowPos_Proxy(
    IActiveIMMApp * This,
    /* [in] */ HIMC hIMC,
    /* [out] */ __RPC__out POINT *pptPos);


void __RPC_STUB IActiveIMMApp_GetStatusWindowPos_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetVirtualKey_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HWND hWnd,
    /* [out] */ __RPC__out UINT *puVirtualKey);


void __RPC_STUB IActiveIMMApp_GetVirtualKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_InstallIMEA_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in LPSTR szIMEFileName,
    /* [in] */ __RPC__in LPSTR szLayoutText,
    /* [out] */ __RPC__deref_out_opt HKL *phKL);


void __RPC_STUB IActiveIMMApp_InstallIMEA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_InstallIMEW_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in LPWSTR szIMEFileName,
    /* [in] */ __RPC__in LPWSTR szLayoutText,
    /* [out] */ __RPC__deref_out_opt HKL *phKL);


void __RPC_STUB IActiveIMMApp_InstallIMEW_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_IsIME_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HKL hKL);


void __RPC_STUB IActiveIMMApp_IsIME_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_IsUIMessageA_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HWND hWndIME,
    /* [in] */ UINT msg,
    /* [in] */ WPARAM wParam,
    /* [in] */ LPARAM lParam);


void __RPC_STUB IActiveIMMApp_IsUIMessageA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_IsUIMessageW_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HWND hWndIME,
    /* [in] */ UINT msg,
    /* [in] */ WPARAM wParam,
    /* [in] */ LPARAM lParam);


void __RPC_STUB IActiveIMMApp_IsUIMessageW_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_NotifyIME_Proxy(
    IActiveIMMApp * This,
    /* [in] */ HIMC hIMC,
    /* [in] */ DWORD dwAction,
    /* [in] */ DWORD dwIndex,
    /* [in] */ DWORD dwValue);


void __RPC_STUB IActiveIMMApp_NotifyIME_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_RegisterWordA_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HKL hKL,
    /* [in] */ __RPC__in LPSTR szReading,
    /* [in] */ DWORD dwStyle,
    /* [in] */ __RPC__in LPSTR szRegister);


void __RPC_STUB IActiveIMMApp_RegisterWordA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_RegisterWordW_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HKL hKL,
    /* [in] */ __RPC__in LPWSTR szReading,
    /* [in] */ DWORD dwStyle,
    /* [in] */ __RPC__in LPWSTR szRegister);


void __RPC_STUB IActiveIMMApp_RegisterWordW_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_ReleaseContext_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HWND hWnd,
    /* [in] */ HIMC hIMC);


void __RPC_STUB IActiveIMMApp_ReleaseContext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_SetCandidateWindow_Proxy(
    IActiveIMMApp * This,
    /* [in] */ HIMC hIMC,
    /* [in] */ __RPC__in CANDIDATEFORM *pCandidate);


void __RPC_STUB IActiveIMMApp_SetCandidateWindow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_SetCompositionFontA_Proxy(
    IActiveIMMApp * This,
    /* [in] */ HIMC hIMC,
    /* [in] */ __RPC__in LOGFONTA *plf);


void __RPC_STUB IActiveIMMApp_SetCompositionFontA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_SetCompositionFontW_Proxy(
    IActiveIMMApp * This,
    /* [in] */ HIMC hIMC,
    /* [in] */ __RPC__in LOGFONTW *plf);


void __RPC_STUB IActiveIMMApp_SetCompositionFontW_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_SetCompositionStringA_Proxy(
    IActiveIMMApp * This,
    /* [in] */ HIMC hIMC,
    /* [in] */ DWORD dwIndex,
    /* [in] */ __RPC__in LPVOID pComp,
    /* [in] */ DWORD dwCompLen,
    /* [in] */ __RPC__in LPVOID pRead,
    /* [in] */ DWORD dwReadLen);


void __RPC_STUB IActiveIMMApp_SetCompositionStringA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_SetCompositionStringW_Proxy(
    IActiveIMMApp * This,
    /* [in] */ HIMC hIMC,
    /* [in] */ DWORD dwIndex,
    /* [in] */ __RPC__in LPVOID pComp,
    /* [in] */ DWORD dwCompLen,
    /* [in] */ __RPC__in LPVOID pRead,
    /* [in] */ DWORD dwReadLen);


void __RPC_STUB IActiveIMMApp_SetCompositionStringW_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_SetCompositionWindow_Proxy(
    IActiveIMMApp * This,
    /* [in] */ HIMC hIMC,
    /* [in] */ __RPC__in COMPOSITIONFORM *pCompForm);


void __RPC_STUB IActiveIMMApp_SetCompositionWindow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_SetConversionStatus_Proxy(
    IActiveIMMApp * This,
    /* [in] */ HIMC hIMC,
    /* [in] */ DWORD fdwConversion,
    /* [in] */ DWORD fdwSentence);


void __RPC_STUB IActiveIMMApp_SetConversionStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_SetOpenStatus_Proxy(
    IActiveIMMApp * This,
    /* [in] */ HIMC hIMC,
    /* [in] */ BOOL fOpen);


void __RPC_STUB IActiveIMMApp_SetOpenStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_SetStatusWindowPos_Proxy(
    IActiveIMMApp * This,
    /* [in] */ HIMC hIMC,
    /* [in] */ __RPC__in POINT *pptPos);


void __RPC_STUB IActiveIMMApp_SetStatusWindowPos_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_SimulateHotKey_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HWND hWnd,
    /* [in] */ DWORD dwHotKeyID);


void __RPC_STUB IActiveIMMApp_SimulateHotKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_UnregisterWordA_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HKL hKL,
    /* [in] */ __RPC__in LPSTR szReading,
    /* [in] */ DWORD dwStyle,
    /* [in] */ __RPC__in LPSTR szUnregister);


void __RPC_STUB IActiveIMMApp_UnregisterWordA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_UnregisterWordW_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HKL hKL,
    /* [in] */ __RPC__in LPWSTR szReading,
    /* [in] */ DWORD dwStyle,
    /* [in] */ __RPC__in LPWSTR szUnregister);


void __RPC_STUB IActiveIMMApp_UnregisterWordW_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_Activate_Proxy(
    IActiveIMMApp * This,
    /* [in] */ BOOL fRestoreLayout);


void __RPC_STUB IActiveIMMApp_Activate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_Deactivate_Proxy(
    IActiveIMMApp * This);


void __RPC_STUB IActiveIMMApp_Deactivate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_OnDefWindowProc_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HWND hWnd,
    /* [in] */ UINT Msg,
    /* [in] */ WPARAM wParam,
    /* [in] */ LPARAM lParam,
    /* [out] */ __RPC__out LRESULT *plResult);


void __RPC_STUB IActiveIMMApp_OnDefWindowProc_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_FilterClientWindows_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in ATOM *aaClassList,
    /* [in] */ UINT uSize);


void __RPC_STUB IActiveIMMApp_FilterClientWindows_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetCodePageA_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HKL hKL,
    /* [out] */ __RPC__out UINT *uCodePage);


void __RPC_STUB IActiveIMMApp_GetCodePageA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetLangId_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HKL hKL,
    /* [out] */ __RPC__out LANGID *plid);


void __RPC_STUB IActiveIMMApp_GetLangId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_AssociateContextEx_Proxy(
    IActiveIMMApp * This,
    /* [in] */ __RPC__in HWND hWnd,
    /* [in] */ HIMC hIMC,
    /* [in] */ DWORD dwFlags);


void __RPC_STUB IActiveIMMApp_AssociateContextEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_DisableIME_Proxy(
    IActiveIMMApp * This,
    /* [in] */ DWORD idThread);


void __RPC_STUB IActiveIMMApp_DisableIME_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetImeMenuItemsA_Proxy(
    IActiveIMMApp * This,
    /* [in] */ HIMC hIMC,
    /* [in] */ DWORD dwFlags,
    /* [in] */ DWORD dwType,
    /* [in] */ __RPC__in IMEMENUITEMINFOA *pImeParentMenu,
    /* [out] */ __RPC__out IMEMENUITEMINFOA *pImeMenu,
    /* [in] */ DWORD dwSize,
    /* [out] */ __RPC__out DWORD *pdwResult);


void __RPC_STUB IActiveIMMApp_GetImeMenuItemsA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_GetImeMenuItemsW_Proxy(
    IActiveIMMApp * This,
    /* [in] */ HIMC hIMC,
    /* [in] */ DWORD dwFlags,
    /* [in] */ DWORD dwType,
    /* [in] */ __RPC__in IMEMENUITEMINFOW *pImeParentMenu,
    /* [out] */ __RPC__out IMEMENUITEMINFOW *pImeMenu,
    /* [in] */ DWORD dwSize,
    /* [out] */ __RPC__out DWORD *pdwResult);


void __RPC_STUB IActiveIMMApp_GetImeMenuItemsW_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveIMMApp_EnumInputContext_Proxy(
    IActiveIMMApp * This,
    /* [in] */ DWORD idThread,
    /* [out] */ __RPC__deref_out_opt IEnumInputContext **ppEnum);


void __RPC_STUB IActiveIMMApp_EnumInputContext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IActiveIMMApp_INTERFACE_DEFINED__ */


#ifndef __ISegmentList_INTERFACE_DEFINED__
#define __ISegmentList_INTERFACE_DEFINED__

/* interface ISegmentList */
/* [uuid][unique][object] */


EXTERN_C const IID IID_ISegmentList;


    MIDL_INTERFACE("3050f605-98b5-11cf-bb82-00aa00bdce0b")
    ISegmentList : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateIterator(
            /* [out] */ __RPC__deref_out_opt ISegmentListIterator **ppIIter) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetType(
            /* [out] */ __RPC__out SELECTION_TYPE *peType) = 0;

        virtual HRESULT STDMETHODCALLTYPE IsEmpty(
            /* [out] */ __RPC__out BOOL *pfEmpty) = 0;

    };





#endif 	/* __ISegmentList_INTERFACE_DEFINED__ */


#ifndef __ISegmentListIterator_INTERFACE_DEFINED__
#define __ISegmentListIterator_INTERFACE_DEFINED__

/* interface ISegmentListIterator */
/* [uuid][unique][object] */


EXTERN_C const IID IID_ISegmentListIterator;


    MIDL_INTERFACE("3050f692-98b5-11cf-bb82-00aa00bdce0b")
    ISegmentListIterator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Current(
            /* [out] */ __RPC__deref_out_opt ISegment **ppISegment) = 0;

        virtual HRESULT STDMETHODCALLTYPE First( void) = 0;

        virtual HRESULT STDMETHODCALLTYPE IsDone( void) = 0;

        virtual HRESULT STDMETHODCALLTYPE Advance( void) = 0;

    };





#endif 	/* __ISegmentListIterator_INTERFACE_DEFINED__ */


#ifndef __IHTMLCaret_INTERFACE_DEFINED__
#define __IHTMLCaret_INTERFACE_DEFINED__

/* interface IHTMLCaret */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IHTMLCaret;


    MIDL_INTERFACE("3050f604-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLCaret : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE MoveCaretToPointer(
            /* [in] */ __RPC__in_opt IDisplayPointer *pDispPointer,
            /* [in] */ BOOL fScrollIntoView,
            /* [in] */ CARET_DIRECTION eDir) = 0;

        virtual HRESULT STDMETHODCALLTYPE MoveCaretToPointerEx(
            /* [in] */ __RPC__in_opt IDisplayPointer *pDispPointer,
            /* [in] */ BOOL fVisible,
            /* [in] */ BOOL fScrollIntoView,
            /* [in] */ CARET_DIRECTION eDir) = 0;

        virtual HRESULT STDMETHODCALLTYPE MoveMarkupPointerToCaret(
            /* [in] */ __RPC__in_opt IMarkupPointer *pIMarkupPointer) = 0;

        virtual HRESULT STDMETHODCALLTYPE MoveDisplayPointerToCaret(
            /* [in] */ __RPC__in_opt IDisplayPointer *pDispPointer) = 0;

        virtual HRESULT STDMETHODCALLTYPE IsVisible(
            /* [out] */ __RPC__out BOOL *pIsVisible) = 0;

        virtual HRESULT STDMETHODCALLTYPE Show(
            /* [in] */ BOOL fScrollIntoView) = 0;

        virtual HRESULT STDMETHODCALLTYPE Hide( void) = 0;

        virtual HRESULT STDMETHODCALLTYPE InsertText(
            /* [in] */ __RPC__in OLECHAR *pText,
            /* [in] */ LONG lLen) = 0;

        virtual HRESULT STDMETHODCALLTYPE ScrollIntoView( void) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetLocation(
            /* [out] */ __RPC__out POINT *pPoint,
            /* [in] */ BOOL fTranslate) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetCaretDirection(
            /* [out] */ __RPC__out CARET_DIRECTION *peDir) = 0;

        virtual HRESULT STDMETHODCALLTYPE SetCaretDirection(
            /* [in] */ CARET_DIRECTION eDir) = 0;

    };





#endif 	/* __IHTMLCaret_INTERFACE_DEFINED__ */


#ifndef __ISegment_INTERFACE_DEFINED__
#define __ISegment_INTERFACE_DEFINED__

/* interface ISegment */
/* [uuid][unique][object] */


EXTERN_C const IID IID_ISegment;


    MIDL_INTERFACE("3050f683-98b5-11cf-bb82-00aa00bdce0b")
    ISegment : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPointers(
            /* [in] */ __RPC__in_opt IMarkupPointer *pIStart,
            /* [in] */ __RPC__in_opt IMarkupPointer *pIEnd) = 0;

    };





#endif 	/* __ISegment_INTERFACE_DEFINED__ */


#ifndef __IElementSegment_INTERFACE_DEFINED__
#define __IElementSegment_INTERFACE_DEFINED__

/* interface IElementSegment */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IElementSegment;


    MIDL_INTERFACE("3050f68f-98b5-11cf-bb82-00aa00bdce0b")
    IElementSegment : public ISegment
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetElement(
            /* [out] */ __RPC__deref_out_opt IHTMLElement **ppIElement) = 0;

        virtual HRESULT STDMETHODCALLTYPE SetPrimary(
            /* [in] */ BOOL fPrimary) = 0;

        virtual HRESULT STDMETHODCALLTYPE IsPrimary(
            /* [out] */ __RPC__out BOOL *pfPrimary) = 0;

    };





#endif 	/* __IElementSegment_INTERFACE_DEFINED__ */


#ifndef __IHighlightSegment_INTERFACE_DEFINED__
#define __IHighlightSegment_INTERFACE_DEFINED__

/* interface IHighlightSegment */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IHighlightSegment;


    MIDL_INTERFACE("3050f690-98b5-11cf-bb82-00aa00bdce0b")
    IHighlightSegment : public ISegment
    {
    public:
    };





#endif 	/* __IHighlightSegment_INTERFACE_DEFINED__ */


#ifndef __IHighlightRenderingServices_INTERFACE_DEFINED__
#define __IHighlightRenderingServices_INTERFACE_DEFINED__

/* interface IHighlightRenderingServices */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IHighlightRenderingServices;


    MIDL_INTERFACE("3050f606-98b5-11cf-bb82-00aa00bdce0b")
    IHighlightRenderingServices : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddSegment(
            /* [in] */ __RPC__in_opt IDisplayPointer *pDispPointerStart,
            /* [in] */ __RPC__in_opt IDisplayPointer *pDispPointerEnd,
            /* [in] */ __RPC__in_opt IHTMLRenderStyle *pIRenderStyle,
            /* [out] */ __RPC__deref_out_opt IHighlightSegment **ppISegment) = 0;

        virtual HRESULT STDMETHODCALLTYPE MoveSegmentToPointers(
            /* [in] */ __RPC__in_opt IHighlightSegment *pISegment,
            /* [in] */ __RPC__in_opt IDisplayPointer *pDispPointerStart,
            /* [in] */ __RPC__in_opt IDisplayPointer *pDispPointerEnd) = 0;

        virtual HRESULT STDMETHODCALLTYPE RemoveSegment(
            /* [in] */ __RPC__in_opt IHighlightSegment *pISegment) = 0;

    };





#endif 	/* __IHighlightRenderingServices_INTERFACE_DEFINED__ */


#ifndef __ILineInfo_INTERFACE_DEFINED__
#define __ILineInfo_INTERFACE_DEFINED__

/* interface ILineInfo */
/* [uuid][unique][object] */


EXTERN_C const IID IID_ILineInfo;


    MIDL_INTERFACE("3050f7e2-98b5-11cf-bb82-00aa00bdce0b")
    ILineInfo : public IUnknown
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_x(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_baseLine(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_textDescent(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_textHeight(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_lineDirection(
            /* [out][retval] */ __RPC__out LONG *p) = 0;

    };





#endif 	/* __ILineInfo_INTERFACE_DEFINED__ */


#ifndef __IDisplayPointer_INTERFACE_DEFINED__
#define __IDisplayPointer_INTERFACE_DEFINED__

/* interface IDisplayPointer */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IDisplayPointer;


    MIDL_INTERFACE("3050f69e-98b5-11cf-bb82-00aa00bdce0b")
    IDisplayPointer : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE MoveToPoint(
            /* [in] */ POINT ptPoint,
            /* [in] */ COORD_SYSTEM eCoordSystem,
            /* [in] */ __RPC__in_opt IHTMLElement *pElementContext,
            /* [in] */ DWORD dwHitTestOptions,
            /* [out] */ __RPC__out DWORD *pdwHitTestResults) = 0;

        virtual HRESULT STDMETHODCALLTYPE MoveUnit(
            /* [in] */ DISPLAY_MOVEUNIT eMoveUnit,
            /* [in] */ LONG lXPos) = 0;

        virtual HRESULT STDMETHODCALLTYPE PositionMarkupPointer(
            /* [in] */ __RPC__in_opt IMarkupPointer *pMarkupPointer) = 0;

        virtual HRESULT STDMETHODCALLTYPE MoveToPointer(
            /* [in] */ __RPC__in_opt IDisplayPointer *pDispPointer) = 0;

        virtual HRESULT STDMETHODCALLTYPE SetPointerGravity(
            /* [in] */ POINTER_GRAVITY eGravity) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetPointerGravity(
            /* [out] */ __RPC__out POINTER_GRAVITY *peGravity) = 0;

        virtual HRESULT STDMETHODCALLTYPE SetDisplayGravity(
            /* [in] */ DISPLAY_GRAVITY eGravity) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetDisplayGravity(
            /* [out] */ __RPC__out DISPLAY_GRAVITY *peGravity) = 0;

        virtual HRESULT STDMETHODCALLTYPE IsPositioned(
            /* [out] */ __RPC__out BOOL *pfPositioned) = 0;

        virtual HRESULT STDMETHODCALLTYPE Unposition( void) = 0;

        virtual HRESULT STDMETHODCALLTYPE IsEqualTo(
            /* [in] */ __RPC__in_opt IDisplayPointer *pDispPointer,
            /* [out] */ __RPC__out BOOL *pfIsEqual) = 0;

        virtual HRESULT STDMETHODCALLTYPE IsLeftOf(
            /* [in] */ __RPC__in_opt IDisplayPointer *pDispPointer,
            /* [out] */ __RPC__out BOOL *pfIsLeftOf) = 0;

        virtual HRESULT STDMETHODCALLTYPE IsRightOf(
            /* [in] */ __RPC__in_opt IDisplayPointer *pDispPointer,
            /* [out] */ __RPC__out BOOL *pfIsRightOf) = 0;

        virtual HRESULT STDMETHODCALLTYPE IsAtBOL(
            /* [out] */ __RPC__out BOOL *pfBOL) = 0;

        virtual HRESULT STDMETHODCALLTYPE MoveToMarkupPointer(
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointer,
            /* [in] */ __RPC__in_opt IDisplayPointer *pDispLineContext) = 0;

        virtual HRESULT STDMETHODCALLTYPE ScrollIntoView( void) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetLineInfo(
            /* [out] */ __RPC__deref_out_opt ILineInfo **ppLineInfo) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetFlowElement(
            /* [out] */ __RPC__deref_out_opt IHTMLElement **ppLayoutElement) = 0;

        virtual HRESULT STDMETHODCALLTYPE QueryBreaks(
            /* [out] */ __RPC__out DWORD *pdwBreaks) = 0;

    };





#endif 	/* __IDisplayPointer_INTERFACE_DEFINED__ */


#ifndef __IDisplayServices_INTERFACE_DEFINED__
#define __IDisplayServices_INTERFACE_DEFINED__

/* interface IDisplayServices */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IDisplayServices;


    MIDL_INTERFACE("3050f69d-98b5-11cf-bb82-00aa00bdce0b")
    IDisplayServices : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateDisplayPointer(
            /* [out] */ __RPC__deref_out_opt IDisplayPointer **ppDispPointer) = 0;

        virtual HRESULT STDMETHODCALLTYPE TransformRect(
            /* [out][in] */ __RPC__inout RECT *pRect,
            /* [in] */ COORD_SYSTEM eSource,
            /* [in] */ COORD_SYSTEM eDestination,
            /* [in] */ __RPC__in_opt IHTMLElement *pIElement) = 0;

        virtual HRESULT STDMETHODCALLTYPE TransformPoint(
            /* [out][in] */ __RPC__inout POINT *pPoint,
            /* [in] */ COORD_SYSTEM eSource,
            /* [in] */ COORD_SYSTEM eDestination,
            /* [in] */ __RPC__in_opt IHTMLElement *pIElement) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetCaret(
            /* [out] */ __RPC__deref_out_opt IHTMLCaret **ppCaret) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetComputedStyle(
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointer,
            /* [out] */ __RPC__deref_out_opt IHTMLComputedStyle **ppComputedStyle) = 0;

        virtual HRESULT STDMETHODCALLTYPE ScrollRectIntoView(
            /* [in] */ __RPC__in_opt IHTMLElement *pIElement,
            /* [in] */ RECT rect) = 0;

        virtual HRESULT STDMETHODCALLTYPE HasFlowLayout(
            /* [in] */ __RPC__in_opt IHTMLElement *pIElement,
            /* [out] */ __RPC__out BOOL *pfHasFlowLayout) = 0;

    };





#endif 	/* __IDisplayServices_INTERFACE_DEFINED__ */


#ifndef __IHtmlDlgSafeHelper_INTERFACE_DEFINED__
#define __IHtmlDlgSafeHelper_INTERFACE_DEFINED__

/* interface IHtmlDlgSafeHelper */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IHtmlDlgSafeHelper;


    MIDL_INTERFACE("3050f81a-98b5-11cf-bb82-00aa00bdce0b")
    IHtmlDlgSafeHelper : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE choosecolordlg(
            /* [in][optional] */ VARIANT initColor,
            /* [out][retval] */ __RPC__out VARIANT *rgbColor) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getCharset(
            /* [in] */ __RPC__in BSTR fontName,
            /* [out][retval] */ __RPC__out VARIANT *charset) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Fonts(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BlockFormats(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **p) = 0;

    };





#endif 	/* __IHtmlDlgSafeHelper_INTERFACE_DEFINED__ */


#ifndef __IBlockFormats_INTERFACE_DEFINED__
#define __IBlockFormats_INTERFACE_DEFINED__

/* interface IBlockFormats */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IBlockFormats;


    MIDL_INTERFACE("3050f830-98b5-11cf-bb82-00aa00bdce0b")
    IBlockFormats : public IDispatch
    {
    public:
        virtual /* [restricted][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum(
            /* [out][retval] */ __RPC__deref_out_opt IUnknown **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Count(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Item(
            /* [in] */ __RPC__in VARIANT *pvarIndex,
            /* [out][retval] */ __RPC__deref_out_opt BSTR *pbstrBlockFormat) = 0;

    };





#endif 	/* __IBlockFormats_INTERFACE_DEFINED__ */


#ifndef __IFontNames_INTERFACE_DEFINED__
#define __IFontNames_INTERFACE_DEFINED__

/* interface IFontNames */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IFontNames;


    MIDL_INTERFACE("3050f839-98b5-11cf-bb82-00aa00bdce0b")
    IFontNames : public IDispatch
    {
    public:
        virtual /* [restricted][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum(
            /* [out][retval] */ __RPC__deref_out_opt IUnknown **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Count(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Item(
            /* [in] */ __RPC__in VARIANT *pvarIndex,
            /* [out][retval] */ __RPC__deref_out_opt BSTR *pbstrFontName) = 0;

    };





#endif 	/* __IFontNames_INTERFACE_DEFINED__ */


#ifndef __ICSSFilter_INTERFACE_DEFINED__
#define __ICSSFilter_INTERFACE_DEFINED__

/* interface ICSSFilter */
/* [uuid][unique][object] */


EXTERN_C const IID IID_ICSSFilter;


    MIDL_INTERFACE("3050f3ec-98b5-11cf-bb82-00aa00bdce0b")
    ICSSFilter : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetSite(
            /* [in] */ __RPC__in_opt ICSSFilterSite *pSink) = 0;

        virtual HRESULT STDMETHODCALLTYPE OnAmbientPropertyChange(
            /* [in] */ LONG dispid) = 0;

    };





#endif 	/* __ICSSFilter_INTERFACE_DEFINED__ */


#ifndef __ISecureUrlHost_INTERFACE_DEFINED__
#define __ISecureUrlHost_INTERFACE_DEFINED__

/* interface ISecureUrlHost */
/* [uuid][unique][object] */


EXTERN_C const IID IID_ISecureUrlHost;


    MIDL_INTERFACE("c81984c4-74c8-11d2-baa9-00c04fc2040e")
    ISecureUrlHost : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ValidateSecureUrl(
            /* [out] */ __RPC__out BOOL *pfAllow,
            /* [in] */ __RPC__in OLECHAR *pchUrlInQuestion,
            /* [in] */ DWORD dwFlags) = 0;

    };





#endif 	/* __ISecureUrlHost_INTERFACE_DEFINED__ */


#ifndef __IMarkupServices_INTERFACE_DEFINED__
#define __IMarkupServices_INTERFACE_DEFINED__

/* interface IMarkupServices */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IMarkupServices;


    MIDL_INTERFACE("3050f4a0-98b5-11cf-bb82-00aa00bdce0b")
    IMarkupServices : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateMarkupPointer(
            /* [out] */ __RPC__deref_out_opt IMarkupPointer **ppPointer) = 0;

        virtual HRESULT STDMETHODCALLTYPE CreateMarkupContainer(
            /* [out] */ __RPC__deref_out_opt IMarkupContainer **ppMarkupContainer) = 0;

        virtual HRESULT STDMETHODCALLTYPE CreateElement(
            /* [in] */ ELEMENT_TAG_ID tagID,
            /* [in] */ __RPC__in OLECHAR *pchAttributes,
            /* [out] */ __RPC__deref_out_opt IHTMLElement **ppElement) = 0;

        virtual HRESULT STDMETHODCALLTYPE CloneElement(
            /* [in] */ __RPC__in_opt IHTMLElement *pElemCloneThis,
            /* [out] */ __RPC__deref_out_opt IHTMLElement **ppElementTheClone) = 0;

        virtual HRESULT STDMETHODCALLTYPE InsertElement(
            /* [in] */ __RPC__in_opt IHTMLElement *pElementInsert,
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerStart,
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerFinish) = 0;

        virtual HRESULT STDMETHODCALLTYPE RemoveElement(
            /* [in] */ __RPC__in_opt IHTMLElement *pElementRemove) = 0;

        virtual HRESULT STDMETHODCALLTYPE Remove(
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerStart,
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerFinish) = 0;

        virtual HRESULT STDMETHODCALLTYPE Copy(
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerSourceStart,
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerSourceFinish,
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerTarget) = 0;

        virtual HRESULT STDMETHODCALLTYPE Move(
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerSourceStart,
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerSourceFinish,
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerTarget) = 0;

        virtual HRESULT STDMETHODCALLTYPE InsertText(
            /* [in] */ __RPC__in OLECHAR *pchText,
            /* [in] */ long cch,
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerTarget) = 0;

        virtual HRESULT STDMETHODCALLTYPE ParseString(
            /* [in] */ __RPC__in OLECHAR *pchHTML,
            /* [in] */ DWORD dwFlags,
            /* [out] */ __RPC__deref_out_opt IMarkupContainer **ppContainerResult,
            /* [in] */ __RPC__in_opt IMarkupPointer *ppPointerStart,
            /* [in] */ __RPC__in_opt IMarkupPointer *ppPointerFinish) = 0;

        virtual HRESULT STDMETHODCALLTYPE ParseGlobal(
            /* [in] */ __RPC__in HGLOBAL hglobalHTML,
            /* [in] */ DWORD dwFlags,
            /* [out] */ __RPC__deref_out_opt IMarkupContainer **ppContainerResult,
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerStart,
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerFinish) = 0;

        virtual HRESULT STDMETHODCALLTYPE IsScopedElement(
            /* [in] */ __RPC__in_opt IHTMLElement *pElement,
            /* [out] */ __RPC__out BOOL *pfScoped) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetElementTagId(
            /* [in] */ __RPC__in_opt IHTMLElement *pElement,
            /* [out] */ __RPC__out ELEMENT_TAG_ID *ptagId) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetTagIDForName(
            /* [in] */ __RPC__in BSTR bstrName,
            /* [out] */ __RPC__out ELEMENT_TAG_ID *ptagId) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetNameForTagID(
            /* [in] */ ELEMENT_TAG_ID tagId,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrName) = 0;

        virtual HRESULT STDMETHODCALLTYPE MovePointersToRange(
            /* [in] */ __RPC__in_opt IHTMLTxtRange *pIRange,
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerStart,
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerFinish) = 0;

        virtual HRESULT STDMETHODCALLTYPE MoveRangeToPointers(
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerStart,
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerFinish,
            /* [in] */ __RPC__in_opt IHTMLTxtRange *pIRange) = 0;

        virtual HRESULT STDMETHODCALLTYPE BeginUndoUnit(
            /* [in] */ __RPC__in OLECHAR *pchTitle) = 0;

        virtual HRESULT STDMETHODCALLTYPE EndUndoUnit( void) = 0;

    };





#endif 	/* __IMarkupServices_INTERFACE_DEFINED__ */


#ifndef __IMarkupServices2_INTERFACE_DEFINED__
#define __IMarkupServices2_INTERFACE_DEFINED__

/* interface IMarkupServices2 */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IMarkupServices2;


    MIDL_INTERFACE("3050f682-98b5-11cf-bb82-00aa00bdce0b")
    IMarkupServices2 : public IMarkupServices
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ParseGlobalEx(
            /* [in] */ __RPC__in HGLOBAL hglobalHTML,
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IMarkupContainer *pContext,
            /* [out] */ __RPC__deref_out_opt IMarkupContainer **ppContainerResult,
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerStart,
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerFinish) = 0;

        virtual HRESULT STDMETHODCALLTYPE ValidateElements(
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerStart,
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerFinish,
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerTarget,
            /* [out][in] */ __RPC__inout_opt IMarkupPointer *pPointerStatus,
            /* [out] */ __RPC__deref_out_opt IHTMLElement **ppElemFailBottom,
            /* [out] */ __RPC__deref_out_opt IHTMLElement **ppElemFailTop) = 0;

        virtual HRESULT STDMETHODCALLTYPE SaveSegmentsToClipboard(
            /* [in] */ __RPC__in_opt ISegmentList *pSegmentList,
            /* [in] */ DWORD dwFlags) = 0;

    };





#endif 	/* __IMarkupServices2_INTERFACE_DEFINED__ */


#ifndef __IHTMLChangePlayback_INTERFACE_DEFINED__
#define __IHTMLChangePlayback_INTERFACE_DEFINED__

/* interface IHTMLChangePlayback */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IHTMLChangePlayback;


    MIDL_INTERFACE("3050f6e0-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLChangePlayback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ExecChange(
            /* [in] */ __RPC__in BYTE *pbRecord,
            /* [in] */ BOOL fForward) = 0;

    };





#endif 	/* __IHTMLChangePlayback_INTERFACE_DEFINED__ */


#ifndef __IMarkupPointer2_INTERFACE_DEFINED__
#define __IMarkupPointer2_INTERFACE_DEFINED__

/* interface IMarkupPointer2 */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IMarkupPointer2;


    MIDL_INTERFACE("3050f675-98b5-11cf-bb82-00aa00bdce0b")
    IMarkupPointer2 : public IMarkupPointer
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE IsAtWordBreak(
            /* [out] */ __RPC__out BOOL *pfAtBreak) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetMarkupPosition(
            /* [out] */ __RPC__out long *plMP) = 0;

        virtual HRESULT STDMETHODCALLTYPE MoveToMarkupPosition(
            /* [in] */ __RPC__in_opt IMarkupContainer *pContainer,
            /* [in] */ long lMP) = 0;

        virtual HRESULT STDMETHODCALLTYPE MoveUnitBounded(
            /* [in] */ MOVEUNIT_ACTION muAction,
            /* [in] */ __RPC__in_opt IMarkupPointer *pIBoundary) = 0;

        virtual HRESULT STDMETHODCALLTYPE IsInsideURL(
            /* [in] */ __RPC__in_opt IMarkupPointer *pRight,
            /* [out] */ __RPC__out BOOL *pfResult) = 0;

        virtual HRESULT STDMETHODCALLTYPE MoveToContent(
            /* [in] */ __RPC__in_opt IHTMLElement *pIElement,
            /* [in] */ BOOL fAtStart) = 0;

    };





#endif 	/* __IMarkupPointer2_INTERFACE_DEFINED__ */


#ifndef __IMarkupTextFrags_INTERFACE_DEFINED__
#define __IMarkupTextFrags_INTERFACE_DEFINED__

/* interface IMarkupTextFrags */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IMarkupTextFrags;


    MIDL_INTERFACE("3050f5fa-98b5-11cf-bb82-00aa00bdce0b")
    IMarkupTextFrags : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetTextFragCount(
            /* [out] */ __RPC__out long *pcFrags) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetTextFrag(
            /* [in] */ long iFrag,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrFrag,
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerFrag) = 0;

        virtual HRESULT STDMETHODCALLTYPE RemoveTextFrag(
            /* [in] */ long iFrag) = 0;

        virtual HRESULT STDMETHODCALLTYPE InsertTextFrag(
            /* [in] */ long iFrag,
            /* [in] */ __RPC__in BSTR bstrInsert,
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerInsert) = 0;

        virtual HRESULT STDMETHODCALLTYPE FindTextFragFromMarkupPointer(
            /* [in] */ __RPC__in_opt IMarkupPointer *pPointerFind,
            /* [out] */ __RPC__out long *piFrag,
            /* [out] */ __RPC__out BOOL *pfFragFound) = 0;

    };





#endif 	/* __IMarkupTextFrags_INTERFACE_DEFINED__ */


#ifndef __IXMLGenericParse_INTERFACE_DEFINED__
#define __IXMLGenericParse_INTERFACE_DEFINED__

/* interface IXMLGenericParse */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IXMLGenericParse;


    MIDL_INTERFACE("E4E23071-4D07-11d2-AE76-0080C73BC199")
    IXMLGenericParse : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetGenericParse(
            /* [in] */ VARIANT_BOOL fDoGeneric) = 0;

    };





#endif 	/* __IXMLGenericParse_INTERFACE_DEFINED__ */


#ifndef __IHTMLEditHost_INTERFACE_DEFINED__
#define __IHTMLEditHost_INTERFACE_DEFINED__

/* interface IHTMLEditHost */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IHTMLEditHost;


    MIDL_INTERFACE("3050f6a0-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLEditHost : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SnapRect(
            /* [in] */ __RPC__in_opt IHTMLElement *pIElement,
            /* [out][in] */ __RPC__inout RECT *prcNew,
            /* [in] */ ELEMENT_CORNER eHandle) = 0;

    };





#endif 	/* __IHTMLEditHost_INTERFACE_DEFINED__ */


#ifndef __IHTMLEditHost2_INTERFACE_DEFINED__
#define __IHTMLEditHost2_INTERFACE_DEFINED__

/* interface IHTMLEditHost2 */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IHTMLEditHost2;


    MIDL_INTERFACE("3050f848-98b5-11cf-bb82-00aa00bdce0d")
    IHTMLEditHost2 : public IHTMLEditHost
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE PreDrag( void) = 0;

    };





#endif 	/* __IHTMLEditHost2_INTERFACE_DEFINED__ */


#ifndef __ISequenceNumber_INTERFACE_DEFINED__
#define __ISequenceNumber_INTERFACE_DEFINED__

/* interface ISequenceNumber */
/* [uuid][unique][object] */


EXTERN_C const IID IID_ISequenceNumber;


    MIDL_INTERFACE("3050f6c1-98b5-11cf-bb82-00aa00bdce0b")
    ISequenceNumber : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSequenceNumber(
            /* [in] */ long nCurrent,
            /* [out] */ __RPC__out long *pnNew) = 0;

    };





#endif 	/* __ISequenceNumber_INTERFACE_DEFINED__ */


#ifndef __IIMEServices_INTERFACE_DEFINED__
#define __IIMEServices_INTERFACE_DEFINED__

/* interface IIMEServices */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IIMEServices;


    MIDL_INTERFACE("3050f6ca-98b5-11cf-bb82-00aa00bdce0b")
    IIMEServices : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetActiveIMM(
            /* [out] */ __RPC__deref_out_opt IActiveIMMApp **ppActiveIMM) = 0;

    };





#endif 	/* __IIMEServices_INTERFACE_DEFINED__ */


#ifndef __ISelectionServicesListener_INTERFACE_DEFINED__
#define __ISelectionServicesListener_INTERFACE_DEFINED__

/* interface ISelectionServicesListener */
/* [uuid][unique][object] */


EXTERN_C const IID IID_ISelectionServicesListener;


    MIDL_INTERFACE("3050f699-98b5-11cf-bb82-00aa00bdce0b")
    ISelectionServicesListener : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginSelectionUndo( void) = 0;

        virtual HRESULT STDMETHODCALLTYPE EndSelectionUndo( void) = 0;

        virtual HRESULT STDMETHODCALLTYPE OnSelectedElementExit(
            /* [in] */ __RPC__in_opt IMarkupPointer *pIElementStart,
            /* [in] */ __RPC__in_opt IMarkupPointer *pIElementEnd,
            /* [in] */ __RPC__in_opt IMarkupPointer *pIElementContentStart,
            /* [in] */ __RPC__in_opt IMarkupPointer *pIElementContentEnd) = 0;

        virtual HRESULT STDMETHODCALLTYPE OnChangeType(
            /* [in] */ SELECTION_TYPE eType,
            /* [in] */ __RPC__in_opt ISelectionServicesListener *pIListener) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetTypeDetail(
            /* [out] */ __RPC__deref_out_opt BSTR *pTypeDetail) = 0;

    };





#endif 	/* __ISelectionServicesListener_INTERFACE_DEFINED__ */


#ifndef __ISelectionServices_INTERFACE_DEFINED__
#define __ISelectionServices_INTERFACE_DEFINED__

/* interface ISelectionServices */
/* [uuid][unique][object] */


EXTERN_C const IID IID_ISelectionServices;


    MIDL_INTERFACE("3050f684-98b5-11cf-bb82-00aa00bdce0b")
    ISelectionServices : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetSelectionType(
            /* [in] */ SELECTION_TYPE eType,
            /* [in] */ __RPC__in_opt ISelectionServicesListener *pIListener) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetMarkupContainer(
            /* [out] */ __RPC__deref_out_opt IMarkupContainer **ppIContainer) = 0;

        virtual HRESULT STDMETHODCALLTYPE AddSegment(
            /* [in] */ __RPC__in_opt IMarkupPointer *pIStart,
            /* [in] */ __RPC__in_opt IMarkupPointer *pIEnd,
            /* [out] */ __RPC__deref_out_opt ISegment **ppISegmentAdded) = 0;

        virtual HRESULT STDMETHODCALLTYPE AddElementSegment(
            /* [in] */ __RPC__in_opt IHTMLElement *pIElement,
            /* [out] */ __RPC__deref_out_opt IElementSegment **ppISegmentAdded) = 0;

        virtual HRESULT STDMETHODCALLTYPE RemoveSegment(
            /* [in] */ __RPC__in_opt ISegment *pISegment) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetSelectionServicesListener(
            /* [out] */ __RPC__deref_out_opt ISelectionServicesListener **ppISelectionServicesListener) = 0;

    };





#endif 	/* __ISelectionServices_INTERFACE_DEFINED__ */


#ifndef __IHTMLEditDesigner_INTERFACE_DEFINED__
#define __IHTMLEditDesigner_INTERFACE_DEFINED__

/* interface IHTMLEditDesigner */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IHTMLEditDesigner;


    MIDL_INTERFACE("3050f662-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLEditDesigner : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE PreHandleEvent(
            /* [in] */ DISPID inEvtDispId,
            /* [in] */ __RPC__in_opt IHTMLEventObj *pIEventObj) = 0;

        virtual HRESULT STDMETHODCALLTYPE PostHandleEvent(
            /* [in] */ DISPID inEvtDispId,
            /* [in] */ __RPC__in_opt IHTMLEventObj *pIEventObj) = 0;

        virtual HRESULT STDMETHODCALLTYPE TranslateAccelerator(
            /* [in] */ DISPID inEvtDispId,
            /* [in] */ __RPC__in_opt IHTMLEventObj *pIEventObj) = 0;

        virtual HRESULT STDMETHODCALLTYPE PostEditorEventNotify(
            /* [in] */ DISPID inEvtDispId,
            /* [in] */ __RPC__in_opt IHTMLEventObj *pIEventObj) = 0;

    };





#endif 	/* __IHTMLEditDesigner_INTERFACE_DEFINED__ */


#ifndef __IHTMLEditServices_INTERFACE_DEFINED__
#define __IHTMLEditServices_INTERFACE_DEFINED__

/* interface IHTMLEditServices */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IHTMLEditServices;


    MIDL_INTERFACE("3050f663-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLEditServices : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddDesigner(
            /* [in] */ __RPC__in_opt IHTMLEditDesigner *pIDesigner) = 0;

        virtual HRESULT STDMETHODCALLTYPE RemoveDesigner(
            /* [in] */ __RPC__in_opt IHTMLEditDesigner *pIDesigner) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetSelectionServices(
            /* [in] */ __RPC__in_opt IMarkupContainer *pIContainer,
            /* [out] */ __RPC__deref_out_opt ISelectionServices **ppSelSvc) = 0;

        virtual HRESULT STDMETHODCALLTYPE MoveToSelectionAnchor(
            /* [in] */ __RPC__in_opt IMarkupPointer *pIStartAnchor) = 0;

        virtual HRESULT STDMETHODCALLTYPE MoveToSelectionEnd(
            /* [in] */ __RPC__in_opt IMarkupPointer *pIEndAnchor) = 0;

        virtual HRESULT STDMETHODCALLTYPE SelectRange(
            /* [in] */ __RPC__in_opt IMarkupPointer *pStart,
            /* [in] */ __RPC__in_opt IMarkupPointer *pEnd,
            /* [in] */ SELECTION_TYPE eType) = 0;

    };





#endif 	/* __IHTMLEditServices_INTERFACE_DEFINED__ */


#ifndef __IHTMLEditServices2_INTERFACE_DEFINED__
#define __IHTMLEditServices2_INTERFACE_DEFINED__

/* interface IHTMLEditServices2 */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IHTMLEditServices2;


    MIDL_INTERFACE("3050f812-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLEditServices2 : public IHTMLEditServices
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE MoveToSelectionAnchorEx(
            /* [in] */ __RPC__in_opt IDisplayPointer *pIStartAnchor) = 0;

        virtual HRESULT STDMETHODCALLTYPE MoveToSelectionEndEx(
            /* [in] */ __RPC__in_opt IDisplayPointer *pIEndAnchor) = 0;

        virtual HRESULT STDMETHODCALLTYPE FreezeVirtualCaretPos(
            /* [in] */ BOOL fReCompute) = 0;

        virtual HRESULT STDMETHODCALLTYPE UnFreezeVirtualCaretPos(
            /* [in] */ BOOL fReset) = 0;

    };





#endif 	/* __IHTMLEditServices2_INTERFACE_DEFINED__ */


#ifndef __IHTMLComputedStyle_INTERFACE_DEFINED__
#define __IHTMLComputedStyle_INTERFACE_DEFINED__

/* interface IHTMLComputedStyle */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IHTMLComputedStyle;


    MIDL_INTERFACE("3050f6c3-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLComputedStyle : public IUnknown
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_bold(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_italic(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_underline(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_overline(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_strikeOut(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_subScript(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_superScript(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_explicitFace(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_fontWeight(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_fontSize(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_fontName(
            /* [out][retval] */ __RPC__out TCHAR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_hasBgColor(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_textColor(
            /* [out][retval] */ __RPC__out DWORD *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_backgroundColor(
            /* [out][retval] */ __RPC__out DWORD *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_preFormatted(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_direction(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_blockDirection(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_OL(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

        virtual HRESULT STDMETHODCALLTYPE IsEqual(
            /* [in] */ __RPC__in_opt IHTMLComputedStyle *pComputedStyle,
            /* [out] */ __RPC__out VARIANT_BOOL *pfEqual) = 0;

    };





#endif 	/* __IHTMLComputedStyle_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HtmlDlgSafeHelper;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f819-98b5-11cf-bb82-00aa00bdce0b")
HtmlDlgSafeHelper;
#endif

EXTERN_C const CLSID CLSID_BlockFormats;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f831-98b5-11cf-bb82-00aa00bdce0b")
BlockFormats;
#endif

EXTERN_C const CLSID CLSID_FontNames;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f83a-98b5-11cf-bb82-00aa00bdce0b")
FontNames;
#endif

#ifndef __HTMLNamespaceEvents_DISPINTERFACE_DEFINED__
#define __HTMLNamespaceEvents_DISPINTERFACE_DEFINED__

/* dispinterface HTMLNamespaceEvents */
/* [uuid][hidden] */


EXTERN_C const IID DIID_HTMLNamespaceEvents;


    MIDL_INTERFACE("3050f6bd-98b5-11cf-bb82-00aa00bdce0b")
    HTMLNamespaceEvents : public IDispatch
    {
    };



#endif 	/* __HTMLNamespaceEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IHTMLNamespace_INTERFACE_DEFINED__
#define __IHTMLNamespace_INTERFACE_DEFINED__

/* interface IHTMLNamespace */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLNamespace;


    MIDL_INTERFACE("3050f6bb-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLNamespace : public IDispatch
    {
    public:
        virtual /* [bindable][id][propget] */ HRESULT STDMETHODCALLTYPE get_name(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][id][propget] */ HRESULT STDMETHODCALLTYPE get_urn(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [bindable][id][propget] */ HRESULT STDMETHODCALLTYPE get_tagNames(
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **p) = 0;

        virtual /* [bindable][id][propget] */ HRESULT STDMETHODCALLTYPE get_readyState(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][displaybind][id][propput] */ HRESULT STDMETHODCALLTYPE put_onreadystatechange(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][displaybind][id][propget] */ HRESULT STDMETHODCALLTYPE get_onreadystatechange(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE doImport(
            /* [in] */ __RPC__in BSTR bstrImplementationUrl) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE attachEvent(
            /* [in] */ __RPC__in BSTR event,
            /* [in] */ __RPC__in_opt IDispatch *pDisp,
            /* [out][retval] */ __RPC__out VARIANT_BOOL *pfResult) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE detachEvent(
            /* [in] */ __RPC__in BSTR event,
            /* [in] */ __RPC__in_opt IDispatch *pDisp) = 0;

    };





#endif 	/* __IHTMLNamespace_INTERFACE_DEFINED__ */


#ifndef __IHTMLNamespaceCollection_INTERFACE_DEFINED__
#define __IHTMLNamespaceCollection_INTERFACE_DEFINED__

/* interface IHTMLNamespaceCollection */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLNamespaceCollection;


    MIDL_INTERFACE("3050f6b8-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLNamespaceCollection : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_length(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE item(
            /* [in] */ VARIANT index,
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **ppNamespace) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE add(
            /* [in] */ __RPC__in BSTR bstrNamespace,
            /* [in] */ __RPC__in BSTR bstrUrn,
            /* [in][optional] */ VARIANT implementationUrl,
            /* [out][retval] */ __RPC__deref_out_opt IDispatch **ppNamespace) = 0;

    };





#endif 	/* __IHTMLNamespaceCollection_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLNamespace;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f6bc-98b5-11cf-bb82-00aa00bdce0b")
HTMLNamespace;
#endif

EXTERN_C const CLSID CLSID_HTMLNamespaceCollection;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f6b9-98b5-11cf-bb82-00aa00bdce0b")
HTMLNamespaceCollection;
#endif

#ifndef __IHTMLPainter_INTERFACE_DEFINED__
#define __IHTMLPainter_INTERFACE_DEFINED__

/* interface IHTMLPainter */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IHTMLPainter;


    MIDL_INTERFACE("3050f6a6-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLPainter : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Draw(
            /* [in] */ RECT rcBounds,
            /* [in] */ RECT rcUpdate,
            /* [in] */ LONG lDrawFlags,
            /* [in] */ __RPC__in HDC hdc,
            /* [in] */ __RPC__in LPVOID pvDrawObject) = 0;

        virtual HRESULT STDMETHODCALLTYPE OnResize(
            /* [in] */ SIZE size) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetPainterInfo(
            /* [out] */ __RPC__out HTML_PAINTER_INFO *pInfo) = 0;

        virtual HRESULT STDMETHODCALLTYPE HitTestPoint(
            /* [in] */ POINT pt,
            /* [out] */ __RPC__out BOOL *pbHit,
            /* [out] */ __RPC__out LONG *plPartID) = 0;

    };





#endif 	/* __IHTMLPainter_INTERFACE_DEFINED__ */


#ifndef __IHTMLPaintSite_INTERFACE_DEFINED__
#define __IHTMLPaintSite_INTERFACE_DEFINED__

/* interface IHTMLPaintSite */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IHTMLPaintSite;


    MIDL_INTERFACE("3050f6a7-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLPaintSite : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InvalidatePainterInfo( void) = 0;

        virtual HRESULT STDMETHODCALLTYPE InvalidateRect(
            /* [in] */ __RPC__in RECT *prcInvalid) = 0;

        virtual HRESULT STDMETHODCALLTYPE InvalidateRegion(
            /* [in] */ __RPC__in HRGN rgnInvalid) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetDrawInfo(
            /* [in] */ LONG lFlags,
            /* [out] */ __RPC__out HTML_PAINT_DRAW_INFO *pDrawInfo) = 0;

        virtual HRESULT STDMETHODCALLTYPE TransformGlobalToLocal(
            /* [in] */ POINT ptGlobal,
            /* [out] */ __RPC__out POINT *pptLocal) = 0;

        virtual HRESULT STDMETHODCALLTYPE TransformLocalToGlobal(
            /* [in] */ POINT ptLocal,
            /* [out] */ __RPC__out POINT *pptGlobal) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetHitTestCookie(
            /* [out] */ __RPC__out LONG *plCookie) = 0;

    };





#endif 	/* __IHTMLPaintSite_INTERFACE_DEFINED__ */


#ifndef __IHTMLPainterEventInfo_INTERFACE_DEFINED__
#define __IHTMLPainterEventInfo_INTERFACE_DEFINED__

/* interface IHTMLPainterEventInfo */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IHTMLPainterEventInfo;


    MIDL_INTERFACE("3050f6df-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLPainterEventInfo : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetEventInfoFlags(
            /* [out] */ __RPC__out long *plEventInfoFlags) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetEventTarget(
            /* [in] */ __RPC__deref_in_opt IHTMLElement **ppElement) = 0;

        virtual HRESULT STDMETHODCALLTYPE SetCursor(
            /* [in] */ LONG lPartID) = 0;

        virtual HRESULT STDMETHODCALLTYPE StringFromPartID(
            /* [in] */ LONG lPartID,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrPart) = 0;

    };





#endif 	/* __IHTMLPainterEventInfo_INTERFACE_DEFINED__ */


#ifndef __IHTMLPainterOverlay_INTERFACE_DEFINED__
#define __IHTMLPainterOverlay_INTERFACE_DEFINED__

/* interface IHTMLPainterOverlay */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IHTMLPainterOverlay;


    MIDL_INTERFACE("3050f7e3-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLPainterOverlay : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnMove(
            /* [in] */ RECT rcDevice) = 0;

    };





#endif 	/* __IHTMLPainterOverlay_INTERFACE_DEFINED__ */


#ifndef __IHTMLIPrintCollection_INTERFACE_DEFINED__
#define __IHTMLIPrintCollection_INTERFACE_DEFINED__

/* interface IHTMLIPrintCollection */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLIPrintCollection;


    MIDL_INTERFACE("3050f6b5-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLIPrintCollection : public IDispatch
    {
    public:
        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_length(
            /* [out][retval] */ __RPC__out long *p) = 0;

        virtual /* [restricted][hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get__newEnum(
            /* [out][retval] */ __RPC__deref_out_opt IUnknown **p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE item(
            /* [in] */ long index,
            /* [out][retval] */ __RPC__deref_out_opt IUnknown **ppIPrint) = 0;

    };





#endif 	/* __IHTMLIPrintCollection_INTERFACE_DEFINED__ */


#ifndef __IEnumPrivacyRecords_INTERFACE_DEFINED__
#define __IEnumPrivacyRecords_INTERFACE_DEFINED__

/* interface IEnumPrivacyRecords */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IEnumPrivacyRecords;


    MIDL_INTERFACE("3050f844-98b5-11cf-bb82-00aa00bdce0b")
    IEnumPrivacyRecords : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetSize(
            /* [out] */ __RPC__out ULONG *pSize) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetPrivacyImpacted(
            /* [out] */ __RPC__out BOOL *pState) = 0;

        virtual HRESULT STDMETHODCALLTYPE Next(
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrUrl,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrPolicyRef,
            /* [out] */ __RPC__out LONG *pdwReserved,
            /* [out] */ __RPC__out DWORD *pdwPrivacyFlags) = 0;

    };





#endif 	/* __IEnumPrivacyRecords_INTERFACE_DEFINED__ */


#ifndef __IWPCBlockedUrls_INTERFACE_DEFINED__
#define __IWPCBlockedUrls_INTERFACE_DEFINED__

/* interface IWPCBlockedUrls */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IWPCBlockedUrls;


    MIDL_INTERFACE("30510413-98b5-11cf-bb82-00aa00bdce0b")
    IWPCBlockedUrls : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCount(
            /* [out] */ __RPC__out DWORD *pdwCount) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetUrl(
            /* [in] */ DWORD dwIdx,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrUrl) = 0;

    };





#endif 	/* __IWPCBlockedUrls_INTERFACE_DEFINED__ */


#ifndef __IHTMLDialog_INTERFACE_DEFINED__
#define __IHTMLDialog_INTERFACE_DEFINED__

/* interface IHTMLDialog */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLDialog;


    MIDL_INTERFACE("3050f216-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLDialog : public IDispatch
    {
    public:
        virtual /* [bindable][id][propput] */ HRESULT STDMETHODCALLTYPE put_dialogTop(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][id][propget] */ HRESULT STDMETHODCALLTYPE get_dialogTop(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][id][propput] */ HRESULT STDMETHODCALLTYPE put_dialogLeft(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][id][propget] */ HRESULT STDMETHODCALLTYPE get_dialogLeft(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][id][propput] */ HRESULT STDMETHODCALLTYPE put_dialogWidth(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][id][propget] */ HRESULT STDMETHODCALLTYPE get_dialogWidth(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [bindable][id][propput] */ HRESULT STDMETHODCALLTYPE put_dialogHeight(
            /* [in] */ VARIANT v) = 0;

        virtual /* [bindable][id][propget] */ HRESULT STDMETHODCALLTYPE get_dialogHeight(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_dialogArguments(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_menuArguments(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_returnValue(
            /* [in] */ VARIANT v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_returnValue(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE close( void) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE toString(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *String) = 0;

    };





#endif 	/* __IHTMLDialog_INTERFACE_DEFINED__ */


#ifndef __IHTMLDialog2_INTERFACE_DEFINED__
#define __IHTMLDialog2_INTERFACE_DEFINED__

/* interface IHTMLDialog2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLDialog2;


    MIDL_INTERFACE("3050f5e0-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLDialog2 : public IDispatch
    {
    public:
        virtual /* [hidden][id][propput] */ HRESULT STDMETHODCALLTYPE put_status(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_status(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [hidden][id][propput] */ HRESULT STDMETHODCALLTYPE put_resizable(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_resizable(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLDialog2_INTERFACE_DEFINED__ */


#ifndef __IHTMLDialog3_INTERFACE_DEFINED__
#define __IHTMLDialog3_INTERFACE_DEFINED__

/* interface IHTMLDialog3 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLDialog3;


    MIDL_INTERFACE("3050f388-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLDialog3 : public IDispatch
    {
    public:
        virtual /* [hidden][id][propput] */ HRESULT STDMETHODCALLTYPE put_unadorned(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_unadorned(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_dialogHide(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_dialogHide(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLDialog3_INTERFACE_DEFINED__ */


#ifndef __IHTMLModelessInit_INTERFACE_DEFINED__
#define __IHTMLModelessInit_INTERFACE_DEFINED__

/* interface IHTMLModelessInit */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLModelessInit;


    MIDL_INTERFACE("3050f5e4-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLModelessInit : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_parameters(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_optionString(
            /* [out][retval] */ __RPC__out VARIANT *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_moniker(
            /* [out][retval] */ __RPC__deref_out_opt IUnknown **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_document(
            /* [out][retval] */ __RPC__deref_out_opt IUnknown **p) = 0;

    };





#endif 	/* __IHTMLModelessInit_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ThreadDialogProcParam;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f5eb-98b5-11cf-bb82-00aa00bdce0b")
ThreadDialogProcParam;
#endif

EXTERN_C const CLSID CLSID_HTMLDialog;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f28a-98b5-11cf-bb82-00aa00bdce0b")
HTMLDialog;
#endif

#ifndef __IHTMLPopup_INTERFACE_DEFINED__
#define __IHTMLPopup_INTERFACE_DEFINED__

/* interface IHTMLPopup */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLPopup;


    MIDL_INTERFACE("3050f666-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLPopup : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE show(
            /* [in] */ long x,
            /* [in] */ long y,
            /* [in] */ long w,
            /* [in] */ long h,
            /* [in] */ __RPC__in VARIANT *pElement) = 0;

        virtual /* [id] */ HRESULT STDMETHODCALLTYPE hide( void) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_document(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLDocument **p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_isOpen(
            /* [out][retval] */ __RPC__out VARIANT_BOOL *p) = 0;

    };





#endif 	/* __IHTMLPopup_INTERFACE_DEFINED__ */


#ifndef __DispHTMLPopup_DISPINTERFACE_DEFINED__
#define __DispHTMLPopup_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLPopup */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLPopup;


    MIDL_INTERFACE("3050f589-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLPopup : public IDispatch
    {
    };



#endif 	/* __DispHTMLPopup_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLPopup;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f667-98b5-11cf-bb82-00aa00bdce0b")
HTMLPopup;
#endif

#ifndef __IHTMLAppBehavior_INTERFACE_DEFINED__
#define __IHTMLAppBehavior_INTERFACE_DEFINED__

/* interface IHTMLAppBehavior */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLAppBehavior;


    MIDL_INTERFACE("3050f5ca-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLAppBehavior : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_applicationName(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_applicationName(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_version(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_version(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_icon(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_icon(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_singleInstance(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_singleInstance(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_minimizeButton(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_minimizeButton(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_maximizeButton(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_maximizeButton(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_border(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_border(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_borderStyle(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_borderStyle(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_sysMenu(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_sysMenu(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_caption(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_caption(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_windowState(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_windowState(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_showInTaskBar(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_showInTaskBar(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_commandLine(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLAppBehavior_INTERFACE_DEFINED__ */


#ifndef __IHTMLAppBehavior2_INTERFACE_DEFINED__
#define __IHTMLAppBehavior2_INTERFACE_DEFINED__

/* interface IHTMLAppBehavior2 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLAppBehavior2;


    MIDL_INTERFACE("3050f5c9-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLAppBehavior2 : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_contextMenu(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_contextMenu(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_innerBorder(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_innerBorder(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_scroll(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_scroll(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_scrollFlat(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_scrollFlat(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_selection(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_selection(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLAppBehavior2_INTERFACE_DEFINED__ */


#ifndef __IHTMLAppBehavior3_INTERFACE_DEFINED__
#define __IHTMLAppBehavior3_INTERFACE_DEFINED__

/* interface IHTMLAppBehavior3 */
/* [object][uuid][dual][oleautomation] */


EXTERN_C const IID IID_IHTMLAppBehavior3;


    MIDL_INTERFACE("3050f5cd-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLAppBehavior3 : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_navigable(
            /* [in] */ __RPC__in BSTR v) = 0;

        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_navigable(
            /* [out][retval] */ __RPC__deref_out_opt BSTR *p) = 0;

    };





#endif 	/* __IHTMLAppBehavior3_INTERFACE_DEFINED__ */


#ifndef __DispHTMLAppBehavior_DISPINTERFACE_DEFINED__
#define __DispHTMLAppBehavior_DISPINTERFACE_DEFINED__

/* dispinterface DispHTMLAppBehavior */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispHTMLAppBehavior;


    MIDL_INTERFACE("3050f57c-98b5-11cf-bb82-00aa00bdce0b")
    DispHTMLAppBehavior : public IDispatch
    {
    };



#endif 	/* __DispHTMLAppBehavior_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLAppBehavior;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f5cb-98b5-11cf-bb82-00aa00bdce0b")
HTMLAppBehavior;
#endif

EXTERN_C const CLSID CLSID_OldHTMLDocument;

#ifdef __cplusplus

class DECLSPEC_UUID("D48A6EC9-6A4A-11CF-94A7-444553540000")
OldHTMLDocument;
#endif

EXTERN_C const CLSID CLSID_OldHTMLFormElement;

#ifdef __cplusplus

class DECLSPEC_UUID("0D04D285-6BEC-11CF-8B97-00AA00476DA6")
OldHTMLFormElement;
#endif

#ifndef __DispIHTMLInputButtonElement_DISPINTERFACE_DEFINED__
#define __DispIHTMLInputButtonElement_DISPINTERFACE_DEFINED__

/* dispinterface DispIHTMLInputButtonElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispIHTMLInputButtonElement;


    MIDL_INTERFACE("3050f51e-98b5-11cf-bb82-00aa00bdce0b")
    DispIHTMLInputButtonElement : public IDispatch
    {
    };



#endif 	/* __DispIHTMLInputButtonElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLInputButtonElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f2b4-98b5-11cf-bb82-00aa00bdce0b")
HTMLInputButtonElement;
#endif

#ifndef __DispIHTMLInputTextElement_DISPINTERFACE_DEFINED__
#define __DispIHTMLInputTextElement_DISPINTERFACE_DEFINED__

/* dispinterface DispIHTMLInputTextElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispIHTMLInputTextElement;


    MIDL_INTERFACE("3050f520-98b5-11cf-bb82-00aa00bdce0b")
    DispIHTMLInputTextElement : public IDispatch
    {
    };



#endif 	/* __DispIHTMLInputTextElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLInputTextElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f2ab-98b5-11cf-bb82-00aa00bdce0b")
HTMLInputTextElement;
#endif

#ifndef __DispIHTMLInputFileElement_DISPINTERFACE_DEFINED__
#define __DispIHTMLInputFileElement_DISPINTERFACE_DEFINED__

/* dispinterface DispIHTMLInputFileElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispIHTMLInputFileElement;


    MIDL_INTERFACE("3050f542-98b5-11cf-bb82-00aa00bdce0b")
    DispIHTMLInputFileElement : public IDispatch
    {
    };



#endif 	/* __DispIHTMLInputFileElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLInputFileElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f2ae-98b5-11cf-bb82-00aa00bdce0b")
HTMLInputFileElement;
#endif

#ifndef __DispIHTMLOptionButtonElement_DISPINTERFACE_DEFINED__
#define __DispIHTMLOptionButtonElement_DISPINTERFACE_DEFINED__

/* dispinterface DispIHTMLOptionButtonElement */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispIHTMLOptionButtonElement;


    MIDL_INTERFACE("3050f509-98b5-11cf-bb82-00aa00bdce0b")
    DispIHTMLOptionButtonElement : public IDispatch
    {
    };



#endif 	/* __DispIHTMLOptionButtonElement_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLOptionButtonElement;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f2be-98b5-11cf-bb82-00aa00bdce0b")
HTMLOptionButtonElement;
#endif

#ifndef __DispIHTMLInputImage_DISPINTERFACE_DEFINED__
#define __DispIHTMLInputImage_DISPINTERFACE_DEFINED__

/* dispinterface DispIHTMLInputImage */
/* [uuid][hidden] */


EXTERN_C const IID DIID_DispIHTMLInputImage;


    MIDL_INTERFACE("3050f51d-98b5-11cf-bb82-00aa00bdce0b")
    DispIHTMLInputImage : public IDispatch
    {
    };



#endif 	/* __DispIHTMLInputImage_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_HTMLInputImage;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f2c4-98b5-11cf-bb82-00aa00bdce0b")
HTMLInputImage;
#endif

#ifndef __IElementNamespace_INTERFACE_DEFINED__
#define __IElementNamespace_INTERFACE_DEFINED__

/* interface IElementNamespace */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IElementNamespace;


    MIDL_INTERFACE("3050f671-98b5-11cf-bb82-00aa00bdce0b")
    IElementNamespace : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddTag(
            /* [in] */ __RPC__in BSTR bstrTagName,
            /* [in] */ LONG lFlags) = 0;

    };





#endif 	/* __IElementNamespace_INTERFACE_DEFINED__ */


#ifndef __IElementNamespaceTable_INTERFACE_DEFINED__
#define __IElementNamespaceTable_INTERFACE_DEFINED__

/* interface IElementNamespaceTable */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IElementNamespaceTable;


    MIDL_INTERFACE("3050f670-98b5-11cf-bb82-00aa00bdce0b")
    IElementNamespaceTable : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddNamespace(
            /* [in] */ __RPC__in BSTR bstrNamespace,
            /* [in] */ __RPC__in BSTR bstrUrn,
            /* [in] */ LONG lFlags,
            /* [in] */ __RPC__in VARIANT *pvarFactory) = 0;

    };





#endif 	/* __IElementNamespaceTable_INTERFACE_DEFINED__ */


#ifndef __IElementNamespaceFactory_INTERFACE_DEFINED__
#define __IElementNamespaceFactory_INTERFACE_DEFINED__

/* interface IElementNamespaceFactory */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IElementNamespaceFactory;


    MIDL_INTERFACE("3050f672-98b5-11cf-bb82-00aa00bdce0b")
    IElementNamespaceFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Create(
            /* [in] */ __RPC__in_opt IElementNamespace *pNamespace) = 0;

    };





#endif 	/* __IElementNamespaceFactory_INTERFACE_DEFINED__ */


#ifndef __IElementNamespaceFactory2_INTERFACE_DEFINED__
#define __IElementNamespaceFactory2_INTERFACE_DEFINED__

/* interface IElementNamespaceFactory2 */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IElementNamespaceFactory2;


    MIDL_INTERFACE("3050f805-98b5-11cf-bb82-00aa00bdce0b")
    IElementNamespaceFactory2 : public IElementNamespaceFactory
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateWithImplementation(
            /* [in] */ __RPC__in_opt IElementNamespace *pNamespace,
            /* [in] */ __RPC__in BSTR bstrImplementation) = 0;

    };





#endif 	/* __IElementNamespaceFactory2_INTERFACE_DEFINED__ */


#ifndef __IElementNamespaceFactoryCallback_INTERFACE_DEFINED__
#define __IElementNamespaceFactoryCallback_INTERFACE_DEFINED__

/* interface IElementNamespaceFactoryCallback */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IElementNamespaceFactoryCallback;


    MIDL_INTERFACE("3050f7fd-98b5-11cf-bb82-00aa00bdce0b")
    IElementNamespaceFactoryCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Resolve(
            /* [in] */ __RPC__in BSTR bstrNamespace,
            /* [in] */ __RPC__in BSTR bstrTagName,
            /* [in] */ __RPC__in BSTR bstrAttrs,
            /* [in] */ __RPC__in_opt IElementNamespace *pNamespace) = 0;

    };





#endif 	/* __IElementNamespaceFactoryCallback_INTERFACE_DEFINED__ */


#ifndef __IElementBehaviorSiteOM2_INTERFACE_DEFINED__
#define __IElementBehaviorSiteOM2_INTERFACE_DEFINED__

/* interface IElementBehaviorSiteOM2 */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IElementBehaviorSiteOM2;


    MIDL_INTERFACE("3050f659-98b5-11cf-bb82-00aa00bdce0b")
    IElementBehaviorSiteOM2 : public IElementBehaviorSiteOM
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDefaults(
            /* [out][retval] */ __RPC__deref_out_opt IHTMLElementDefaults **ppDefaults) = 0;

    };





#endif 	/* __IElementBehaviorSiteOM2_INTERFACE_DEFINED__ */


#ifndef __IElementBehaviorCategory_INTERFACE_DEFINED__
#define __IElementBehaviorCategory_INTERFACE_DEFINED__

/* interface IElementBehaviorCategory */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IElementBehaviorCategory;


    MIDL_INTERFACE("3050f4ed-98b5-11cf-bb82-00aa00bdce0b")
    IElementBehaviorCategory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCategory(
            /* [out][retval] */ __RPC__deref_out_opt LPOLESTR *ppchCategory) = 0;

    };





#endif 	/* __IElementBehaviorCategory_INTERFACE_DEFINED__ */


#ifndef __IElementBehaviorSiteCategory_INTERFACE_DEFINED__
#define __IElementBehaviorSiteCategory_INTERFACE_DEFINED__

/* interface IElementBehaviorSiteCategory */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IElementBehaviorSiteCategory;


    MIDL_INTERFACE("3050f4ee-98b5-11cf-bb82-00aa00bdce0b")
    IElementBehaviorSiteCategory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetRelatedBehaviors(
            /* [in] */ LONG lDirection,
            /* [in] */ __RPC__in LPOLESTR pchCategory,
            /* [out][retval] */ __RPC__deref_out_opt IEnumUnknown **ppEnumerator) = 0;

    };





#endif 	/* __IElementBehaviorSiteCategory_INTERFACE_DEFINED__ */


#ifndef __IElementBehaviorSubmit_INTERFACE_DEFINED__
#define __IElementBehaviorSubmit_INTERFACE_DEFINED__

/* interface IElementBehaviorSubmit */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IElementBehaviorSubmit;


    MIDL_INTERFACE("3050f646-98b5-11cf-bb82-00aa00bdce0b")
    IElementBehaviorSubmit : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSubmitInfo(
            /* [in] */ __RPC__in_opt IHTMLSubmitData *pSubmitData) = 0;

        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;

    };





#endif 	/* __IElementBehaviorSubmit_INTERFACE_DEFINED__ */


#ifndef __IElementBehaviorFocus_INTERFACE_DEFINED__
#define __IElementBehaviorFocus_INTERFACE_DEFINED__

/* interface IElementBehaviorFocus */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IElementBehaviorFocus;


    MIDL_INTERFACE("3050f6b6-98b5-11cf-bb82-00aa00bdce0b")
    IElementBehaviorFocus : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFocusRect(
            /* [in] */ __RPC__in RECT *pRect) = 0;

    };





#endif 	/* __IElementBehaviorFocus_INTERFACE_DEFINED__ */


#ifndef __IElementBehaviorLayout_INTERFACE_DEFINED__
#define __IElementBehaviorLayout_INTERFACE_DEFINED__

/* interface IElementBehaviorLayout */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IElementBehaviorLayout;


    MIDL_INTERFACE("3050f6ba-98b5-11cf-bb82-00aa00bdce0b")
    IElementBehaviorLayout : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSize(
            /* [in] */ LONG dwFlags,
            /* [in] */ SIZE sizeContent,
            /* [out][in] */ __RPC__inout POINT *pptTranslateBy,
            /* [out][in] */ __RPC__inout POINT *pptTopLeft,
            /* [out][in] */ __RPC__inout SIZE *psizeProposed) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetLayoutInfo(
            /* [out][retval] */ __RPC__out LONG *plLayoutInfo) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetPosition(
            /* [in] */ LONG lFlags,
            /* [out][in] */ __RPC__inout POINT *pptTopLeft) = 0;

        virtual HRESULT STDMETHODCALLTYPE MapSize(
            /* [in] */ __RPC__in SIZE *psizeIn,
            /* [out] */ __RPC__out RECT *prcOut) = 0;

    };





#endif 	/* __IElementBehaviorLayout_INTERFACE_DEFINED__ */


#ifndef __IElementBehaviorLayout2_INTERFACE_DEFINED__
#define __IElementBehaviorLayout2_INTERFACE_DEFINED__

/* interface IElementBehaviorLayout2 */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IElementBehaviorLayout2;


    MIDL_INTERFACE("3050f846-98b5-11cf-bb82-00aa00bdce0b")
    IElementBehaviorLayout2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetTextDescent(
            /* [out] */ __RPC__out LONG *plDescent) = 0;

    };





#endif 	/* __IElementBehaviorLayout2_INTERFACE_DEFINED__ */


#ifndef __IElementBehaviorSiteLayout_INTERFACE_DEFINED__
#define __IElementBehaviorSiteLayout_INTERFACE_DEFINED__

/* interface IElementBehaviorSiteLayout */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IElementBehaviorSiteLayout;


    MIDL_INTERFACE("3050f6b7-98b5-11cf-bb82-00aa00bdce0b")
    IElementBehaviorSiteLayout : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InvalidateLayoutInfo( void) = 0;

        virtual HRESULT STDMETHODCALLTYPE InvalidateSize( void) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetMediaResolution(
            /* [out][retval] */ __RPC__out SIZE *psizeResolution) = 0;

    };





#endif 	/* __IElementBehaviorSiteLayout_INTERFACE_DEFINED__ */


#ifndef __IElementBehaviorSiteLayout2_INTERFACE_DEFINED__
#define __IElementBehaviorSiteLayout2_INTERFACE_DEFINED__

/* interface IElementBehaviorSiteLayout2 */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IElementBehaviorSiteLayout2;


    MIDL_INTERFACE("3050f847-98b5-11cf-bb82-00aa00bdce0b")
    IElementBehaviorSiteLayout2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFontInfo(
            /* [out] */ __RPC__out LOGFONTW *plf) = 0;

    };





#endif 	/* __IElementBehaviorSiteLayout2_INTERFACE_DEFINED__ */


#ifndef __IHostBehaviorInit_INTERFACE_DEFINED__
#define __IHostBehaviorInit_INTERFACE_DEFINED__

/* interface IHostBehaviorInit */
/* [uuid][unique][object] */


EXTERN_C const IID IID_IHostBehaviorInit;


    MIDL_INTERFACE("3050f842-98b5-11cf-bb82-00aa00bdce0b")
    IHostBehaviorInit : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE PopulateNamespaceTable( void) = 0;

    };





#endif 	/* __IHostBehaviorInit_INTERFACE_DEFINED__ */

#endif /* __MSHTML_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * );
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * );
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * );
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * );

unsigned long             __RPC_USER  VARIANT_UserSize64(     unsigned long *, unsigned long            , VARIANT * );
unsigned char * __RPC_USER  VARIANT_UserMarshal64(  unsigned long *, unsigned char *, VARIANT * );
unsigned char * __RPC_USER  VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT * );
void                      __RPC_USER  VARIANT_UserFree64(     unsigned long *, VARIANT * );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


#endif /* !defined(__cplusplus) || defined(CINTERFACE) */
