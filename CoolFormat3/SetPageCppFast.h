#pragma once

//////////////////////////////////////////////////////////////////////////
// CSetPageCppFast �Ի���

class CSetPageCppFast : public CBCGPDialog
{
	DECLARE_DYNAMIC(CSetPageCppFast)
public:
	CSetPageCppFast(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CSetPageCppFast();

// �Ի�������
	enum { IDD = IDD_SET_CPP_FAST };
	void SetViewEditWnd(CWnd *pWnd){m_pEditWnd = pWnd;};
	void SetTidyConfig(LPCTSTR lpszTidy);
	void GetTidyConfig(CString &strTidyValue);

protected:
	CWnd *m_pEditWnd; //����Ԥ������
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnBnClickedStyleRadio();
	virtual BOOL OnInitDialog();
};
