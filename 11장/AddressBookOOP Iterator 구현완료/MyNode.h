#pragma once
class CMyNode
{
	friend class CMyList;
public:
	CMyNode();
	virtual ~CMyNode();

	CMyNode* GetNext(void)const { return pNext; }
	virtual const char* GetKey(void) = 0;
	virtual void PrintNode(void) = 0;

private :
	CMyNode *pNext;
};

