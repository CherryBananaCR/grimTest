#include "DlgImage.h"
// GrimTestDlg.h: 헤더 파일
//

#pragma once


// CGrimTestDlg 대화 상자
class CGrimTestDlg : public CDialogEx
{
// 생성입니다.
public:
	CGrimTestDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

	DlgImage* m_pDlgImage;
	CEdit IDD_INPUT_RADIUS;

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_GRIMTEST_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	void InitImage();
	afx_msg void OnBnClickedBtnDraw();
	void DrawCircle(int nRadius);
	bool IsCircleBorder(int i, int j, int nCenterX, int nCenterY, int nRadius);
	void SaveBorderPoint(int nCenterX, int nCenterY, int nRadius, int nPitch);
	afx_msg void OnDestroy();

	bool IsCrossLine(int i, int j, int nCenterX, int nCenterY, int nRadius);
	void GetData(int nCenterX, int nCenterY, int nRadius);
	void SetPixelColor(unsigned char* fm, int x, int y, int nPitch, COLORREF color);
};
