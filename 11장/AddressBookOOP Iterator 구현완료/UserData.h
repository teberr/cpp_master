#pragma once
#include "MyNode.h"
class CUserData : public CMyNode
{
	friend class CMyList;
public:
	CUserData();
	CUserData(const char*pszName, const char* pszPhone);
	~CUserData();

	const char* GetName(void) const { return szName; }
	const char* getPhone(void) const { return szPhone; }
	static int GetUserDataCouter(void) { return nUserDataCounter; }

protected:
	char szName[32];
	char szPhone[32];

	

	static int nUserDataCounter;
public :
	virtual const char* GetKey(void);
	virtual void PrintNode(void);
};

