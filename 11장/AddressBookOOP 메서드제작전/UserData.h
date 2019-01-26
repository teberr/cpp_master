#pragma once
class CUserData
{
	friend class CMyList;
public:
	CUserData();
	~CUserData();

	const char* GetName(void) const { return szName; }
	const char* getPhone(void) const { return szPhone; }
	const CUserData* GetNext(void) const { return pNext; }

	static int GetUserDataCouter(void) { return nUserDataCounter; }

protected:
	char szName[32];
	char szPhone[32];

	CUserData *pNext;

	static int nUserDataCounter;
};

