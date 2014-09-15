/** 
 * @file MyBCGPRibbonLabel.h
 * @brief ��չCBCGPRibbonLabelʵ���ı���ʾʱ����ȥ���ո�
 * @author �޻� 
 * @date 2012-4-3
 * @details 
 */ 
#pragma once

//////////////////////////////////////////////////////////////////////////
// CMyBCGPRibbonLabel ����Ŀ��

class CMyBCGPRibbonLabel : public CBCGPRibbonLabel
{
	DECLARE_DYNCREATE(CMyBCGPRibbonLabel)
public:
	CMyBCGPRibbonLabel (LPCTSTR lpszText, BOOL bIsMultiLine = FALSE);
	virtual ~CMyBCGPRibbonLabel();

	void SetTextEx(LPCTSTR lpszText);

protected:
	CMyBCGPRibbonLabel();
};


