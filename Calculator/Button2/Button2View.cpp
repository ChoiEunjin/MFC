
// Button2View.cpp : CButton2View 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "Button2.h"
#endif

#include "Button2Doc.h"
#include "Button2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CButton2View

IMPLEMENT_DYNCREATE(CButton2View, CFormView)

BEGIN_MESSAGE_MAP(CButton2View, CFormView)
	ON_BN_CLICKED(IDC_BUTTON1, &CButton2View::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CButton2View::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CButton2View::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CButton2View::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CButton2View::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CButton2View::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CButton2View::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CButton2View::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CButton2View::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON11, &CButton2View::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &CButton2View::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &CButton2View::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &CButton2View::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON10, &CButton2View::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON15, &CButton2View::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON16, &CButton2View::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON17, &CButton2View::OnBnClickedButton17)
END_MESSAGE_MAP()

// CButton2View 생성/소멸

CButton2View::CButton2View()
	: CFormView(CButton2View::IDD)
{
	// TODO: 여기에 생성 코드를 추가합니다.

	str2 = _T("");
	front_value = 0;
	back_value = 0;
	calc = 0;
	str = _T("");
}

CButton2View::~CButton2View()
{
}

void CButton2View::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, m_edit);
	DDX_Control(pDX, IDC_BUTTON1, m_bnt1);
	DDX_Control(pDX, IDC_BUTTON2, m_bnt2);
	DDX_Control(pDX, IDC_BUTTON3, m_bnt3);
	DDX_Control(pDX, IDC_BUTTON4, m_bnt4);
	DDX_Control(pDX, IDC_BUTTON5, m_bnt5);
	DDX_Control(pDX, IDC_BUTTON6, m_bnt6);
	DDX_Control(pDX, IDC_BUTTON7, m_bnt7);
	DDX_Control(pDX, IDC_BUTTON8, m_bnt8);
	DDX_Control(pDX, IDC_BUTTON9, m_bnt9);
	DDX_Control(pDX, IDC_BUTTON16, m_bnt0);
}

BOOL CButton2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CFormView::PreCreateWindow(cs);
}

void CButton2View::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

	m_edit.SetLimitText(20);	// 20자 제한

}


// CButton2View 진단

#ifdef _DEBUG
void CButton2View::AssertValid() const
{
	CFormView::AssertValid();
}

void CButton2View::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CButton2Doc* CButton2View::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CButton2Doc)));
	return (CButton2Doc*)m_pDocument;
}
#endif //_DEBUG


// CButton2View 메시지 처리기


void CButton2View::OnBnClickedButton1()
{
	if (calc == 0) {
		m_edit.GetWindowTextW(str);
		m_edit.SetWindowTextW(str + '1');
	}
	else {
		m_edit.GetWindowTextW(str2);
		m_edit.SetWindowTextW(str2 + '1');
	}
}
void CButton2View::OnBnClickedButton2()
{
	if (calc == 0) {
		m_edit.GetWindowTextW(str);
		m_edit.SetWindowTextW(str + '2');
	}
	else {
		m_edit.GetWindowTextW(str2);
		m_edit.SetWindowTextW(str2 + '2');
	}
}
void CButton2View::OnBnClickedButton3()
{
	if (calc == 0) {
		m_edit.GetWindowTextW(str);
		m_edit.SetWindowTextW(str + '3');
	}
	else {
		m_edit.GetWindowTextW(str2);
		m_edit.SetWindowTextW(str2 + '3');
	}
}


void CButton2View::OnBnClickedButton4()
{
	if (calc == 0) {
		m_edit.GetWindowTextW(str);
		m_edit.SetWindowTextW(str + '4');
	}
	else {
		m_edit.GetWindowTextW(str2);
		m_edit.SetWindowTextW(str2 + '4');
	}
}


void CButton2View::OnBnClickedButton5()
{
	if (calc == 0) {
		m_edit.GetWindowTextW(str);
		m_edit.SetWindowTextW(str + '5');
	}
	else {
		m_edit.GetWindowTextW(str2);
		m_edit.SetWindowTextW(str2 + '5');
	}
}


void CButton2View::OnBnClickedButton6()
{
	if (calc == 0) {
		m_edit.GetWindowTextW(str);
		m_edit.SetWindowTextW(str + '6');
	}
	else {
		m_edit.GetWindowTextW(str2);
		m_edit.SetWindowTextW(str2 + '6');
	}
}


void CButton2View::OnBnClickedButton7()
{
	if (calc == 0) {
		m_edit.GetWindowTextW(str);
		m_edit.SetWindowTextW(str + '7');
	}
	else {
		m_edit.GetWindowTextW(str2);
		m_edit.SetWindowTextW(str2 + '7');
	}
}


void CButton2View::OnBnClickedButton8()
{
	if (calc == 0) {
		m_edit.GetWindowTextW(str);
		m_edit.SetWindowTextW(str + '8');
	}
	else {
		m_edit.GetWindowTextW(str2);
		m_edit.SetWindowTextW(str2 + '8');
	}
}


void CButton2View::OnBnClickedButton9()
{
	if (calc == 0) {
		m_edit.GetWindowTextW(str);
		m_edit.SetWindowTextW(str + '9');
	}
	else {
		m_edit.GetWindowTextW(str2);
		m_edit.SetWindowTextW(str2 + '9');
	}
}

void CButton2View::OnBnClickedButton16()
{
	if (calc == 0) {
		m_edit.GetWindowTextW(str);
		m_edit.SetWindowTextW(str + '0');
	}
	else {
		m_edit.GetWindowTextW(str2);
		m_edit.SetWindowTextW(str2 + '0');
	}
}
void CButton2View::OnBnClickedButton17()
{
	if (calc == 0) {
		m_edit.GetWindowTextW(str);
		m_edit.SetWindowTextW(str + '.');
	}
	else {
		m_edit.GetWindowTextW(str2);
		m_edit.SetWindowTextW(str2 + '.');
	}
}


void CButton2View::OnBnClickedButton11()
{
	m_edit.GetWindowTextW(str);
	front_value = _wtof(str);
	calc = 1;
	m_edit.SetWindowTextW(0);
}
void CButton2View::OnBnClickedButton12()
{
	m_edit.GetWindowTextW(str);
	front_value = _wtof(str);
	calc = 2;
	m_edit.SetWindowTextW(0);
}
void CButton2View::OnBnClickedButton13()
{
	m_edit.GetWindowTextW(str);
	front_value = _wtof(str);
	calc = 3;
	m_edit.SetWindowTextW(0);
}
void CButton2View::OnBnClickedButton14() 
{
	m_edit.GetWindowTextW(str);
	front_value = _wtof(str);
	calc = 4;
	m_edit.SetWindowTextW(0);
}
void CButton2View::OnBnClickedButton10()
{
	m_edit.GetWindowTextW(str2);
	back_value = _wtof(str2);

	CString str3;
	if (calc == 1)		str3.Format(_T("%.2lf"), front_value + back_value);
	else if (calc == 2)	str3.Format(_T("%.2lf"), front_value - back_value);
	else if (calc == 3)	str3.Format(_T("%.2lf"), front_value * back_value);
	else if (calc == 4)	str3.Format(_T("%.2lf"), (double)front_value / (double)back_value);
	m_edit.SetWindowTextW(str3);

	front_value = 0;
	back_value = 0;
	calc = 0;
}


void CButton2View::OnBnClickedButton15()
{
	CString str;
	m_edit.SetWindowTextW(str);
	front_value = 0;
	back_value = 0;
	calc = 0;
}



