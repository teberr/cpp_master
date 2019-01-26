#pragma once

#include "UserData.h"
class CMyNode;

class CMyList
{
public:
	CMyList(CMyNode *pHead);
	~CMyList();

protected:
	void ReleaseList(void);
	CMyNode *m_Head;

public:
	CMyNode* FindNode(const char* pszKey);
	int AddNewNode(CMyNode *pHead);

	void PrintAll(void);

	int RemoveNode(const char* pszKey);
};

