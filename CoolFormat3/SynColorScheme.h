/** 
 * @file SynColorScheme.h
 * @brief �༭����ɫ����
 * @author �޻� 
 * @date 2012-5-26
 * @details 
 */ 
#pragma once

class CSynColorScheme
{
public:
	CSynColorScheme(void);
	~CSynColorScheme(void);
	
	/**
	 * ��ʼ����ɫ����
	 * @param void 
	 * @return void 
	 */
	void InitColorScheme(void);

	COLORREF m_clrBack;	//����ɫ
	COLORREF m_clrText; //����ɫ

	COLORREF m_clrBackSelActive;	//ѡ���ı���ɫ
	COLORREF m_clrBackSelInActive;	//�ǻ��ѡ������ɫ
	COLORREF m_clrTextSelActive;	//ѡ�����ı�ɫ
	COLORREF m_clrTextSelInActive;	//�ǻ��ѡ���ı�ɫ

	COLORREF m_clrBackOutline;	//�۵��鱳��ɫ
	COLORREF m_clrLineOutline;	//�۵�����ɫ

	COLORREF m_clrBackLineNumber;	//�кű���ɫ
	COLORREF m_clrTextLineNumber;	//�к�ɫ
	COLORREF m_clrBackSidebar;		//�ָ���ɫ
	COLORREF m_clrHyperlink;		//������ɫ

	COLORREF m_clrSyn;		//�﷨��ɫ
	COLORREF m_clrType;		//������ɫ
	COLORREF m_clrNumber;	//������ɫ
	COLORREF m_clrString;	//�ַ�����ɫ
	COLORREF m_clrChar;		//�ַ���ɫ
	COLORREF m_clrComment;	//ע����ɫ

	COLORREF m_DefclrBackSelActive;		//Ĭ��ѡ���ı���ɫ
	COLORREF m_DefclrBackSelInActive;	//Ĭ�Ϸǻ��ѡ������ɫ
	COLORREF m_DefclrTextSelActive;		//Ĭ��ѡ�����ı�ɫ
	COLORREF m_DefclrTextSelInActive;	//Ĭ�Ϸǻ��ѡ���ı�ɫ
};
