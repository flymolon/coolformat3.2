#pragma once
#include "KofBCGPListCtrl.h"

//////////////////////////////////////////////////////////////////////////
// CLangExtDlg �Ի���

class CLangExtDlg : public CBCGPDialog
{
	DECLARE_DYNAMIC(CLangExtDlg)

public:
	CLangExtDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CLangExtDlg();

// �Ի�������
	enum { IDD = IDD_LANG_EXT };

protected:
	CKofBCGPListCtrl m_listLangExt;
	CBCGPURLLinkButton m_btnDefaultLink;
	byte m_aryExt[MAX_SYN_LANG];
	void InitList();
	void InitLang();
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnNMDblclkListLangext(NMHDR *pNMHDR, LRESULT *pResult);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
protected:
	virtual void OnOK();
};
