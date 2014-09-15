#pragma once


// CLangExtEditDlg �Ի���

class CLangExtEditDlg : public CBCGPDialog
{
	DECLARE_DYNAMIC(CLangExtEditDlg)

public:
	CLangExtEditDlg(const CString &strLang, const CString &strExt, CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CLangExtEditDlg();
	LPCTSTR GetStrExt(){return m_strExt.Trim();}
// �Ի�������
	enum { IDD = IDD_LANG_EXT_EDIT };

protected:
	CString m_strLang;
	CString m_strExt;
	void InitLang();
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
	virtual void OnOK();
public:
	virtual BOOL OnInitDialog();
};
