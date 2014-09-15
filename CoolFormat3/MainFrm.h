// MainFrm.h : interface of the CMainFrame class
#pragma once

class CMainFrame : public CBCGPMDIFrameWnd
{
	DECLARE_DYNAMIC(CMainFrame)
public:
	CMainFrame();

// Attributes
public:
	/**
	 * ��ȡ�����״̬��ָ��
	 * @return CBCGPRibbonStatusBar* �����״̬��ָ��
	 */
	CBCGPRibbonStatusBar* GetRibbonStatusBar ()
	{
		return &m_wndStatusBar;
	}
// Operations
public:

// Overrides
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// Implementation
public:
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // control bar embedded members
	CBCGPRibbonStatusBar	m_wndStatusBar;
	CBCGPRibbonBar			m_wndRibbonBar;
	CBCGPRibbonMainButton	m_MainButton;
	CBCGPToolBarImages		m_PanelImages;
	CBCGPMenuBar			m_wndMenuBar;
	CBCGPToolBar			m_wndToolBar;
// Generated message map functions
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnWindowManager();
	afx_msg void OnAppLook(UINT id);
	afx_msg void OnUpdateAppLook(CCmdUI* pCmdUI);
	afx_msg void OnMdiMoveToNextGroup();
	afx_msg void OnMdiMoveToPrevGroup();
	afx_msg void OnMdiNewHorzTabGroup();
	afx_msg void OnMdiNewVertGroup();
	afx_msg void OnMdiCancel();
	afx_msg void OnClose();
	afx_msg LRESULT OnRibbonCustomize (WPARAM wp, LPARAM lp);
	afx_msg LRESULT OnGetTabToolTip(WPARAM wp, LPARAM lp);
	afx_msg void OnToolsOptions();
	DECLARE_MESSAGE_MAP()

	virtual BOOL OnShowMDITabContextMenu (CPoint point, DWORD dwAllowedItems, BOOL bDrop);
	virtual CBCGPMDIChildWnd* CreateDocumentWindow (LPCTSTR lpcszDocName, CObject* /*pObj*/);
	BOOL CreateRibbonBar ();
	void ShowOptions (int nPage);

public:
	/**
	 * �϶��ļ���������
	 * @param  HDROP hDropInfo
	 * @return void
	 */
	afx_msg void OnDropFiles(HDROP hDropInfo);

	/**
	 * �ر�������ͼ
	 * @return void
	 */
	afx_msg void OnFileOtherClose();

	/**
	 * �����ļ�����������
	 * @return void
	 */
	afx_msg void OnFilePath();

	/**
	 * ���ļ������ļ���
	 * @return void
	 */
	afx_msg void OnFiledirOpen();

	/**
	 * ״̬��������ַ����
	 * @return void
	 */
	afx_msg void OnAdminUrl();

	/**
	 * ����ʾRibbonԪ�ص����˵�ǰ����Ϣ 
	 * @param  WPARAM δʹ��
	 * @param  LPARAM CBCGPBaseRibbonElementָ��
	 * @return LRESULT ����
	 */
	afx_msg LRESULT OnShowRibbonItemMenu(WPARAM, LPARAM);
	afx_msg void OnExportreg();
	afx_msg void OnLangext();
	afx_msg void OnSethtml();
	afx_msg void OnSetedit();
	afx_msg void OnImportreg();
	afx_msg void OnTellbug();
	afx_msg void OnOnlinehelp();
	afx_msg void OnSetformatter();
	afx_msg void OnBatchformat();
	afx_msg BOOL OnCopyData(CWnd* pWnd, COPYDATASTRUCT* pCopyDataStruct);
};


