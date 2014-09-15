/** 
 * @file GlobalTidy.h
 * @brief ȫ�ָ�ʽ��ѡ�����
 * @author �޻� 
 * @date 2012-6-19
 * @details 
 */ 
#pragma once

struct TidyDeafult {
	const TCHAR *langName;	//����дע���չ���û�������
	const TCHAR *tidyName;	//Ĭ�ϸ�ʽ������
	UINT langID;			//����ö��
};

class GlobalTidy
{
public:
	GlobalTidy(void);
	~GlobalTidy(void);

	
	/**
	 * ��ʼ��ȫ�ָ�ʽ������
	 * @return void 
	 */
	void InitGlobalTidy();

	BOOL m_bTidySyn[SYN_XML + 1];

	/** AStyleѡ���� LGPLЭ�� */
	CString m_TidyCpp;
	CString m_TidyJava;
	CString m_TidyCSharp;

	/** Tidyѡ���� MITЭ�� */
	CString m_TidyHtml;
	CString m_TidyHtml_at;
	CString m_TidyHtml_cp;
	CString m_TidyHtml_nbt;
	CString m_TidyHtml_net;
	CString m_TidyHtml_nit;
	CString m_TidyHtml_npt;

	/** XMLѡ���� */
	CString m_TidyXml;

	/** phpformatterѡ���� GPL2Э�� */
	CString m_TidyPhp;

	/** JSMinѡ���� GPL */
	CString m_TidyJs;

	/** CssTidyѡ���� */
	CString m_TidyCss;

	/** JsonCppѡ���� */
	CString m_TidyJson;

	/** SqlFormatterѡ���� */
	CString m_TidySql;

	/** Ĭ�ϵ����Խṹ������ */
	static TidyDeafult m_TidyNames[MAX_SYN_LANG];
};

extern GlobalTidy g_GlobalTidy;
