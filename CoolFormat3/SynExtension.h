/** 
 * @file SynExtension.h
 * @brief ������չ��
 * @author �޻� 
 * @date 2012-5-20
 * @details 
 */ 
#pragma once

#include "SynLanguage.h"

struct LanguageName {
	const TCHAR *langName;	//����дע���չ���û�������
	const TCHAR *extName;	//Ĭ�Ϻ�׺��
	UINT langID;			//����ö��
};

class CSynExtension
{
public:
	CSynExtension(void);
	~CSynExtension(void);	
	
	/**
	 * ��ʼ����չ������ע����ȡ
	 * @return void 
	 */
	void InitLanguageExt();
	
	/**
	 * ������չ����������
	 * @param CString strExt ��չ��
	 * @return UINT ���Ա��
	 */
	UINT GetLanguageByExt(CString strExt);
	
	/**
	 * �������Է������Ա�ʶ��
	 * @param UINT nLanguage ���Ա��
	 * @return LPCTSTR ���Ա�ʶ��
	 */
	LPCTSTR GetLanguageString(UINT nLanguage);
	
	/**
	 * �������Ի�ȡ���Եĵ�һ����չ�������ڱ���ʱʹ��
	 * @param UINT nLanguage ���Ա��
	 * @param CString & strFilter ������չ��
	 * @return void 
	 */
	void GetLanguageOneFilter(UINT nLanguage, CString &strFilter);
	
	/**
	 * �������Ի�ȡ���Ե���չ��
	 * @param UINT nLanguage ���Ա��
	 * @param CString & strFilter ������չ��
	 * @return void 
	 */
	void GetLanguageFilter(UINT nLanguage, CString &strFilter);
	
	/**
	 * �������Ե���չ��
	 * @param UINT nLanguage ���Ա��
	 * @param const CString & strFilter ������չ�� 
	 * @return void 
	 */
	void SetLanguageFilter(UINT nLanguage, CString &strFilter);

	/**
	 * ��ȡ�������Ե���չ������ɴ�/����Ի����ʽ
	 * @param CString & strFilter ����������չ��
	 * @return void 
	 */
	void GetAllLanguageFilter(CString &strFilter);
	
	/**
	 * �жϺ�׺���Ƿ���֧��
	 * @param LPCTSTR strExt ��׺��
	 * @return bool ֧�ַ�����
	 */
	bool IsDocSupport(LPCTSTR strExt);

	/** Ĭ�ϵ����Խṹ������ */
	static LanguageName m_LangNames[MAX_SYN_LANG];

private:
	/** ������չ���� */
	CMap<int, int, CString, CString&> m_mapLangExt;	
};
