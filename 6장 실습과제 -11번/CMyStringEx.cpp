#include "stdafx.h"
#include "CMyStringEx.h"


CMyStringEx::CMyStringEx(const char* pszParam)
	:CMyString(pszParam) {
	

}
int CMyStringEx::Find(const char*pszParam) {
	
	if (pszParam == NULL || GetString() == NULL)
		
	int index;
	const char * pointer=	strstr(GetString(), pszParam);
	if(pointer!=NULL)
		return pointer - GetString() ;
	return -1;
}

int CMyStringEx::SetString(const char* pszParam)
{
	int nResult;
	const char * temp=strstr(pszParam, "fuck");
	if (temp == NULL)
		nResult=CMyString::SetString(pszParam);
	else
		nResult=CMyString::SetString("****");

	return nResult;

}
CMyStringEx::CMyStringEx()
{
}


CMyStringEx::~CMyStringEx()
{
}
