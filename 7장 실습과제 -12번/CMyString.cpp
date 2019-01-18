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

	//���� �����Ͱ� ������ ���� ���� �Ű������� ����
	if (m_pszData == NULL)
		SetString(pszParam);

	//���� ���ڿ� ���� ���
	int nLenCur = m_nLength;

	//�� ���ڿ��� ���ļ� ������ �� �ִ� �޸𸮸� ���� �Ҵ���
	char *pszResult = new char[nLenCur + nLenParam + 1];

	//���ڿ� ����
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
