/** 
 * @file GlobalUtils.h
 * @brief ȫ����
 * @author �޻� 
 * @date 2012-4-3
 * @details 
 */ 
#pragma once
#include "SynExtension.h"
#include "SynColorScheme.h"
#include "SynStyle.h"

class GlobalUtils
{
public:
	GlobalUtils(void);
	~GlobalUtils(void);
	
	void InitGlobalUtils();
	void InitGlobalUtilsFrist();

	CSynExtension m_sLanguageExt;
	CSynColorScheme m_sColorScheme;
	CSynStyle m_sStyleScheme;
	CFont m_fontWidth;	//�ȿ�����
};

extern GlobalUtils g_GlobalUtils;

int CFMessageBox (LPCTSTR lpText, UINT uType);
