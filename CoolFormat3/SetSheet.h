#pragma once

//////////////////////////////////////////////////////////////////////////
// CSetSheet

class CSetSheet : public CBCGPPropertySheet
{
public:
	CSetSheet(UINT nIDCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);
	CSetSheet(LPCTSTR pszCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);
	virtual ~CSetSheet();
	void SaveTidyToReg();

protected:
	CBCGPURLLinkButton m_btnDefaultLink;

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
