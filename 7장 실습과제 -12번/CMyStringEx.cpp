#include "stdafx.h"
#include "CMyStringEx.h"

int CMyStringEx::Find(const char*pszParam) {
	
	if (pszParam == NULL || GetString() == NULL)
		
	int index;
	const char * pointer=	strstr(GetString(), pszParam);
	if(pointer!=NULL)
		return pointer - GetString() ;
	return -1;
}
CMyStringEx::CMyStringEx()
{
}


CMyStringEx::~CMyStringEx()
{
}


void CMyStringEx::onSetString(char * pszData, int nLength)
{
	if (strcmp(pszData, "fuck") == 0)
		strcpy_s(pszData, sizeof(char)*(nLength + 1), "****");
}
