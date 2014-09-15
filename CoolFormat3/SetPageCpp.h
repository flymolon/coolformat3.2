#pragma once
#include "SetPageCppFast.h"
#include "SetPageCppHigh.h"

//////////////////////////////////////////////////////////////////////////
// 
class CBCGPDlgTabWnd : public CBCGPTabWnd
{
	friend class CSetPageCpp;
	friend class CSetPageHtml;
	CBCGPDlgTabWnd();
};

//////////////////////////////////////////////////////////////////////////
// CSetPageCpp �Ի���

class CSetPageCpp : public CBCGPPropertyPage
{
	DECLARE_DYNCREATE(CSetPageCpp)

public:
	CSetPageCpp();
	CSetPageCpp(UINT nLangID, UINT nIDCaption);
	virtual ~CSetPageCpp();

// �Ի�������
	enum { IDD = IDD_SET_CPP };
protected:
	CStatic m_wndTabsArea;
	CBCGPDlgTabWnd m_wndCppTabs;

	CSetPageCppFast m_wndFast;
	CSetPageCppHigh m_wndHigh;
	UINT m_onlyCppJavaCS;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	virtual void OnOK();
};
