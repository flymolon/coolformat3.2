#pragma once

//////////////////////////////////////////////////////////////////////////
// CTellBug �Ի���

class CTellBug : public CBCGPDialog
{
	DECLARE_DYNAMIC(CTellBug)

public:
	CTellBug(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CTellBug();

// �Ի�������
	enum { IDD = IDD_TELL_BUG };

protected:
	CBCGPURLLinkButton m_btnLinkEmail;
	CBCGPURLLinkButton m_btnLinkCsdn;
	CBCGPURLLinkButton m_btnLinkQQ;

	void InitLang();
	void SetLinkBtn();
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
};
