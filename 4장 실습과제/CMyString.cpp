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

CMyString::~CMyString()
{
	Release();
}


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


	return nLength;
}


const char* CMyString::GetString() const
{
	return m_pszData;
}


void CMyString::Release()
{
	if (m_pszData != NULL) {
		delete[] m_pszData;
	}
	m_pszData = NULL;
	m_nLength = 0;
}
