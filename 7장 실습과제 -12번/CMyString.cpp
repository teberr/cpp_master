#include "stdafx.h"
#include "CMyString.h"
#include <string.h>

CMyString::CMyString(const CMyString &rhs): m_pszData(NULL),m_nLength(0) {
	
	this->SetString(rhs.GetString());
}

CMyString& CMyString::operator=(const CMyString &rhs) {

	if (this != &rhs) {
		this->SetString(rhs.GetString());
	}
	return *this;
}


CMyString::CMyString()
	: m_pszData(NULL)
	, m_nLength(0)
{
}
CMyString::CMyString(const char*pszParam)
	: m_pszData(NULL)
	, m_nLength(0)
{
	SetString(pszParam);

}
CMyString::CMyString(CMyString &&rhs):m_pszData(NULL),m_nLength(0) {
	m_pszData = rhs.m_pszData;
	m_nLength = rhs.m_nLength;

	rhs.m_pszData = NULL;
	rhs.m_nLength = 0;
}
CMyString::~CMyString()
{
	Release();
}
//dsadsfadfsa


int CMyString::SetString(const char* pszParam)
{
	Release();

	int nLength = strlen(pszParam);
	if (pszParam == NULL || nLength == 0) {
		return 0;
	}

	m_pszData = new char[nLength+1];
	strcpy_s(m_pszData,nLength+1, pszParam);
	m_nLength = nLength;

	onSetString(m_pszData, m_nLength);
	cout << nLength << endl;
	return nLength;
}


const char* CMyString::GetString() const
{
	return m_pszData;
}

int CMyString::GetLength() const {

	return m_nLength;
}

int CMyString::Append(const char* pszParam) {

	if (pszParam == NULL)
		return 0;

	int nLenParam = strlen(pszParam);

	//기존 데이터가 없으면 새로 받은 매개변수로 지정
	if (m_pszData == NULL)
		SetString(pszParam);

	//현재 문자열 길이 백업
	int nLenCur = m_nLength;

	//두 문자열을 합쳐서 저장할 수 있는 메모리를 새로 할당함
	char *pszResult = new char[nLenCur + nLenParam + 1];

	//문자열 조합
	strcpy_s(pszResult, sizeof(char)*(nLenCur)+1, m_pszData);
	strcpy_s(pszResult+ sizeof(char)*(nLenCur),sizeof(char)*(nLenParam)+1, pszParam);

	Release();
	m_pszData = pszResult;
	m_nLength = nLenCur + nLenParam;

	return m_nLength;

}

CMyString CMyString::operator+(const CMyString &rhs){
	CMyString temp(m_pszData);
	temp.Append(rhs.m_pszData);

	return temp;
}
CMyString& CMyString::operator+=(const CMyString &rhs) {
	Append(rhs.m_pszData);
	return *this;

}
int CMyString::operator==(const CMyString &rhs) {
	if (m_pszData != NULL &&rhs.m_pszData != NULL)
		if (strcmp(m_pszData, rhs.m_pszData) == 0)
			return 1;

	return 0;
}

int CMyString::operator!=(const CMyString &rhs) {
	if (m_pszData != NULL && rhs.m_pszData != NULL)
		if (strcmp(m_pszData, rhs.m_pszData) == 0)
			return 0;

	return 1;
}
char CMyString::operator[](int nIndex) const {
	return m_pszData[nIndex];
}
char& CMyString::operator[](int nIndex) {
	return m_pszData[nIndex];
}
void CMyString::Release()
{
	if (m_pszData != NULL) {
		delete[] m_pszData;
	}
	m_pszData = NULL;
	m_nLength = 0;
}


void CMyString::onSetString(char * pszData, int nLength)
{
}
