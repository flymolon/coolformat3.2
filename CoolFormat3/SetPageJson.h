#pragma once

//////////////////////////////////////////////////////////////////////////
// CSetPageJson �Ի���

class CSetPageJson : public CBCGPPropertyPage
{
	DECLARE_DYNCREATE(CSetPageJson)
public:
	CSetPageJson();
	virtual ~CSetPageJson();

// �Ի�������
	enum { IDD = IDD_SET_JSON };
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
	afx_msg void OnEnSetfocusEditJsonIndentNumber();
	virtual void OnOK();
};
