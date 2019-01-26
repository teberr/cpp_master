#include "stdafx.h"
#include "UserData.h"
#include <string.h>

int CUserData::nUserDataCounter = 0;
CUserData::CUserData()
{
	memset(szName, 0, sizeof(szName));
	memset(szPhone, 0, sizeof(szPhone));

	nUserDataCounter++;
}
CUserData::CUserData(const char*pszName, const char* pszPhone)
{
	memset(szName, 0, sizeof(szName));
	memset(szPhone, 0, sizeof(szPhone));

	strcpy_s(szName, sizeof(szName), pszName);
	strcpy_s(szPhone, sizeof(szPhone), pszPhone);
	nUserDataCounter++;
}

CUserData::~CUserData()
{
	nUserDataCounter--;
}

const char* CUserData::GetKey(void) { return szName; }
void CUserData::PrintNode(void) {
	printf("[%p]Name: %s\tPhone:%s \n", this, szName, szPhone);
}
