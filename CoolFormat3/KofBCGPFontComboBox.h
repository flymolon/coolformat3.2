/** 
 * @file KofBCGPFontComboBox.h
 * @brief ʵ��������Ͽ�������ʽ
 * @author �޻� 
 * @date 2012-5-25
 * @details 
 */ 
#pragma once

class CKofBCGPToolbarComboBoxButton : public CBCGPToolbarComboBoxButton
{
	friend class CKofBCGPFontComboBox;
};

// CKofBCGPFontComboBox

class CKofBCGPFontComboBox : public CBCGPFontComboBox
{
public:
	CKofBCGPFontComboBox();
	virtual ~CKofBCGPFontComboBox();

protected:
	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnPaint();
};


