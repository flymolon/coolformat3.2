#pragma once

//////////////////////////////////////////////////////////////////////////
// CGotoLineDlg �Ի���

class CGotoLineDlg : public CBCGPDialog
{
	DECLARE_DYNAMIC(CGotoLineDlg)

public:
	CGotoLineDlg(CWnd* pParent = NULL, int nMaxLine = 1);   // ��׼���캯��
	virtual ~CGotoLineDlg();

// �Ի�������
	enum { IDD = IDD_GOTO_LINE };

protected:
	int m_nMaxLine;
	void InitLang();
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	int m_nLineNumber;
	virtual BOOL OnInitDialog();
};
