#pragma once

//////////////////////////////////////////////////////////////////////////
// CSetPageJS �Ի���

class CSetPageJS : public CBCGPPropertyPage
{
	DECLARE_DYNCREATE(CSetPageJS)
public:
	CSetPageJS();
	virtual ~CSetPageJS();

// �Ի�������
	enum { IDD = IDD_SET_JS };
	void SetTidyConfig(LPCTSTR lpszTidy);
	void GetTidyConfig(CString &strTidyValue);

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	void InitLimit();
	void SetViewEdit(LPCTSTR lpszText);
	void SetTidyControl(LPCTSTR lpszTidy, int nPos, int nSize);
	DECLARE_MESSAGE_MAP()

public:
	virtual BOOL OnInitDialog();
	afx_msg void OnCbnSelchangeComboJsIndentTab();
	afx_msg void OnCbnSelchangeComboJsIndentStyle();
	afx_msg void OnEnSetfocusEditJsIndentNumber();
	virtual void OnOK();
};
