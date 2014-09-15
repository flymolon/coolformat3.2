#pragma once
#include "SetPageCpp.h"
#include "SetPageHtmlOne.h"
#include "SetPageHtmlTwo.h"

//////////////////////////////////////////////////////////////////////////
// CSetPageHtml �Ի���

class CSetPageHtml : public CBCGPPropertyPage
{
	DECLARE_DYNCREATE(CSetPageHtml)
public:
	CSetPageHtml();
	CSetPageHtml(UINT nLangID, UINT nIDCaption);
	virtual ~CSetPageHtml();

// �Ի�������
	enum { IDD = IDD_SET_HTML };
protected:
	CStatic m_wndTabsArea;
	CBCGPDlgTabWnd m_wndHtmlTabs;

	CSetPageHtmlOne m_wndOne;
	CSetPageHtmlTwo m_wndTwo;
	UINT m_onlyHtmlXml;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	DECLARE_MESSAGE_MAP()

public:
	virtual BOOL OnInitDialog();
	virtual void OnOK();
};
