/** 
 * @file RegConfig.h
 * @brief ע���������
 * @author �޻� 
 * @date 2012-6-8
 * @details ��Ҫ�������뵼��ע���
 */ 
#pragma once

class CRegConfig
{
public:
	CRegConfig(void);
	~CRegConfig(void);

	BOOL ImportReg(LPCTSTR pszFileName);
	BOOL ExportReg(LPCTSTR pszFileName);

protected:
	BOOL SaveRegToConfig(LPCTSTR pszSection, LPCTSTR pszFileName);
	BOOL RestoreRegFromConfig(LPCTSTR pszSection, LPCTSTR pszFileName);
};
