#include "stdafx.h"
#include "CMyString.h"


CMyString::CMyString()
	: m_pszData(NULL)
	, m_nLength(0)
{
}


CMyString::~CMyString()
{
}


int CMyString::SetString(const char* pszParam)
{
	return 0;
}


const char* CMyString::GetString()
{
	return nullptr;
}


void CMyString::Release()
{
}
