#pragma once

#include "UserData.h"
#include "MyIterator.h"
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

	CMyIterator MakeIterator(void);
	virtual int OnAddNewNode(CMyNode* pNewNode);
	int RemoveNode(const char* pszKey);
};

