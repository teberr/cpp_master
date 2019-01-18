#pragma once
#include "CMyString.h"
class CMyStringEx :
	public CMyString
{
public:

	int Find(const char * pszParam);

	CMyStringEx();
	~CMyStringEx();
	void onSetString( char * pszData,int nLength);
};

