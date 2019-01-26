#include "stdafx.h"
#include "MyList.h"


CMyList::CMyList()
{
}


CMyList::~CMyList()
{
}

void CMyList::PrintAll(void) {}
void CMyList::ReleaseList(void) {}

CUserData* CMyList::FindNode(const char* pszName) { return nullptr; }
int CMyList::AddNewNode(const char* pszName, const char* pszPhone) { return 0; }
int CMyList::RemoveNode(const char* pszName) { return 0; }