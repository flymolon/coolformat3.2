#pragma once
#include "SynLanguage.h"
#include "XmlOutlineParser.h"
#include "KofFile.h"

static const DWORD g_dwUATComment		= 0x80000;
static const DWORD g_dwUATUncomment		= 0x100000;
static const DWORD g_dwUATFormatter		= 0x200000;

class CSynBCGPEditCtrl : public CBCGPEditCtrl
{
	DECLARE_DYNAMIC(CSynBCGPEditCtrl)
public:
	CSynBCGPEditCtrl();
	virtual ~CSynBCGPEditCtrl();

	void UseXmlParser (BOOL bXmlParser = TRUE)
	{
		((CXmlOutlineParser*)m_pOutlineParser)->EnableXmlParser (bXmlParser);
	}
	virtual CBCGPOutlineParser* CreateOutlineParser () const
	{
		return new CXmlOutlineParser;
	}

public:
	BOOL m_bCheckColorTags;	// TRUE if check for tags (<....>) in "OnGetCharColor"
	
	/**
	 * ѡ������
	 * @param UINT nLanguage ����ID
	 * @return void 
	 */
	void SelectLanguage(UINT nLanguage);
	
	/**
	 * ���ݺ�׺��ѡ������
	 * @param CString strExt ��׺��
	 * @return void 
	 */
	void SelectLanguageByExt(CString strExt);
	
	/**
	 * ��ȡ���������ַ���
	 * @return LPCTSTR 
	 */
	LPCTSTR GetSelectLangString();

	COLORREF m_clrSyn;		//�﷨��ɫ
	COLORREF m_clrType;		//������ɫ
	COLORREF m_clrNumber;	//������ɫ
	COLORREF m_clrString;	//�ַ�����ɫ
	COLORREF m_clrChar;		//�ַ���ɫ
	COLORREF m_clrComment;	//ע����ɫ

	
	/**
	 * ���ر༭����ɫ����
	 * @param BOOL bRedraw �Ƿ��ػ�
	 * @return void 
	 */
	void LoadColor(BOOL bRedraw = FALSE);
	
	/**
	 * ���ļ�
	 * @param const CString & strFileName �ļ���
	 * @return BOOL �Ƿ�ɹ�
	 */
	BOOL OpenFileEx(const CString& strFileName);
	
	/**
	 * �����ļ�
	 * @param const CString & strFileName �ļ���
	 * @return BOOL �Ƿ�ɹ�
	 */
	BOOL SaveFileEx(const CString& strFileName);
	
	/**
	 * ��չ������HTML
	 * @param CString & strBuffer HTML�ַ���������
	 * @return void 
	 */
	void ExportToMyHTML(CString& strBuffer);	
	
	/**
	 * ���루ȡ����ע��
	 * @param BOOL bForward ���뻹��ȡ��
	 * @return void 
	 */
	void InsertComment(BOOL bForward);
	
	/**
	 * �滻����Ϊ��ʽ������
	 * @param BOOL bAllText �Ƿ�ȫ���ı���ʽ��
	 * @return void 
	 */
	void ReplaceTextToFormatter(BOOL bAllText = TRUE);

protected:
	CSynLanguage m_SynLanguage;
	BOOL m_bNumberColor;
	BOOL m_bFirstShow;
	CKofFile m_File;
	void OnGetCharColor (TCHAR ch, int nOffset, COLORREF& clrText, COLORREF& clrBk);
	BOOL OnGetWordColor (const CString& strWord, COLORREF& clrText, COLORREF& clrBk, int nPos);	
	virtual void OnDrawLineNumbersBar (CDC* pDC, CRect rect);
	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnKillFocus(CWnd* pNewWnd);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSysColorChange();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};