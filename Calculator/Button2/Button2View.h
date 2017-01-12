
// Button2View.h : CButton2View 클래스의 인터페이스
//

#pragma once

#include "resource.h"
#include "afxwin.h"


class CButton2View : public CFormView
{
protected: // serialization에서만 만들어집니다.
	CButton2View();
	DECLARE_DYNCREATE(CButton2View)

public:
	enum{ IDD = IDD_BUTTON2_FORM };

// 특성입니다.
public:
	CButton2Doc* GetDocument() const;

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.
	virtual void OnInitialUpdate(); // 생성 후 처음 호출되었습니다.

// 구현입니다.
public:
	virtual ~CButton2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()
public:
	CEdit m_edit;
	CButton m_bnt1;
	CButton m_bnt2;
	CButton m_bnt3;
	CButton m_bnt4;
	CButton m_bnt5;
	CButton m_bnt6;
	CButton m_bnt7;
	CButton m_bnt8;
	CButton m_bnt9;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClickedButton14();
	CString str2;
	double front_value;
	double back_value;
	int calc;
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton15();
	CString str;
	afx_msg void OnBnClickedButton16();
	CButton m_bnt0;
	afx_msg void OnBnClickedButton17();
};

#ifndef _DEBUG  // Button2View.cpp의 디버그 버전
inline CButton2Doc* CButton2View::GetDocument() const
   { return reinterpret_cast<CButton2Doc*>(m_pDocument); }
#endif

