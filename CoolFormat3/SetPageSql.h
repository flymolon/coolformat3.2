#pragma once

//////////////////////////////////////////////////////////////////////////
// CSetPageSql �Ի���

class CSetPageSql : public CBCGPPropertyPage
{
	DECLARE_DYNCREATE(CSetPageSql)
public:
	CSetPageSql();
	virtual ~CSetPageSql();

// �Ի�������
	enum { IDD = IDD_SET_SQL };
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
	afx_msg void OnCbnSelchangeComboSqlIndentTab();
	afx_msg void OnEnSetfocusEditSqlIndentNumber();
	afx_msg void OnBnClickedCheckSqlEndline();
	afx_msg void OnEnSetfocusEditSqlSubNumber();
	virtual void OnOK();
};
