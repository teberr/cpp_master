#include "stdafx.h"
#include "MyList.h"
#include <conio.h>
#include <string.h>
#include "windows.h"
CMyList::CMyList()
{
	
	FILE *fp = NULL;
	CUserData user ;

	fopen_s(&fp, "Address.dat", "rb");

	if (fp == NULL)
		return ;

	ReleaseList();

	while (fread(&user, sizeof(CUserData), 1, fp))
		AddNewNode(user.szName, user.szPhone);

	fclose(fp);
}


CMyList::~CMyList()
{
	FILE *fp = NULL;
	CUserData *pTmp = m_Head.pNext;

	fopen_s(&fp, "Address.dat", "wb");

	if (fp == NULL) {
		puts("ERROR: 리스트 파일을 쓰기 모드로 열지 못했습니다.");
		_getch();

		return ;
	}

	while (pTmp != NULL) {
		if (fwrite(pTmp, sizeof(CUserData), 1, fp) != 1)
			printf("ERROR : %s에 대한 정보를 저장하는데 실패했습니다.\n", pTmp->szName);

		pTmp = pTmp->pNext;
	}
	fclose(fp);

	ReleaseList();
}

void CMyList::PrintAll(void) {
	CUserData *pTmp = m_Head.pNext;
	while (pTmp != NULL) {

		printf("[%p] %s\t%s [%p]", pTmp, pTmp->szName, pTmp->szPhone, pTmp->pNext);

		pTmp=pTmp->pNext;
	}
	printf("CUserData Counter : %d\n", CUserData::GetUserDataCouter());
	_getch();
}
void CMyList::ReleaseList(void) {
	CUserData *pTmp = m_Head.pNext;
	CUserData *pDelete = NULL;

	while (pTmp != NULL) {
		pDelete = pTmp;
		pTmp = pTmp->pNext;

		delete pDelete;
	}

	m_Head.pNext=NULL;
}

CUserData* CMyList::FindNode(const char* pszName) {
	CUserData *pTmp = m_Head.pNext;
	while (pTmp != NULL) {
		if (strcmp(pTmp->szName, pszName) == 0)
			return pTmp;

		pTmp = pTmp->pNext;
	}

	return NULL;
}
int CMyList::AddNewNode(const char* pszName, const char* pszPhone) {
	CUserData *pNewUser = NULL;
	//printf("%s\t%s", pszName, pszPhone);
	// 같은 이름이 이미 존재하는지 확인한다.
	if (FindNode(pszName) != NULL)
		return 0;

	// 메모리를 확보한다.
	pNewUser = new CUserData;

	pNewUser->pNext = NULL;

	// 메모리에 값을 저장한다.
	strcpy_s(pNewUser->szName, sizeof(pNewUser->szName), pszName);
	strcpy_s(pNewUser->szPhone, sizeof(pNewUser->szPhone), pszPhone);
	
	//printf("%s\t%s",pNewUser->szName, pNewUser->szPhone);
	//system("pause");
	// 더미 노드 바로 뒤에 붙인다. 따라서 가장 최근에
	// 추가한 데이터가 가장 앞쪽에 온다.
	//printf("[%p]", m_Head.pNext);
	//system("pause");
	pNewUser->pNext = m_Head.pNext;
	m_Head.pNext = pNewUser;

	return 1;
}
int CMyList::RemoveNode(const char* pszName) {
	CUserData *pPrevNode = &m_Head;
	CUserData *pDelete = NULL;

	while (pPrevNode->pNext != NULL) {
		pDelete = pPrevNode->pNext;

		if (strcmp(pDelete->szName, pszName) == 0) {
			pPrevNode->pNext = pDelete->pNext;
			delete pDelete;

			return 1;
		}

		pPrevNode = pPrevNode->pNext;
	}

	return 0;
}