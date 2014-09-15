// ChildFrm.h : interface of the CChildFrame class
#pragma once
#include "OutputViewBar.h"

class CChildFrame : public CBCGPMDIChildWnd
{
	DECLARE_DYNCREATE(CChildFrame)
public:
	CChildFrame();

// Attributes
public:
	COutputViewBar m_wndOutput;
	void AddOutputMsg(LPCTSTR lpszMsg);
// Operations
public:

// Overrides
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	
	/**
	 * ������ʱ���
	 * @param int nCmdShow 
	 * @return void 
	 */
	virtual void ActivateFrame(int nCmdShow);

// Implementation
public:
	virtual ~CChildFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	
	/**
	 * �Ӵ��崴��ʱ����󻯿��
	 * @param LPCREATESTRUCT lpCreateStruct 
	 * @return int 
	 */
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	
	/**
	 * MDI��ǩ�л�ʱ������label�ı仯
	 * @param BOOL bActivate 
	 * @param CWnd * pActivateWnd 
	 * @param CWnd * pDeactivateWnd 
	 * @return void 
	 */
	afx_msg void OnMDIActivate(BOOL bActivate, CWnd* pActivateWnd, CWnd* pDeactivateWnd);
};
