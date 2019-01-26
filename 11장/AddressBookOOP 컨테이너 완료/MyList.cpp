#include "stdafx.h"
#include "MyList.h"
#include <conio.h>
#include <string.h>
#include "windows.h"
CMyList::CMyList(CMyNode *pHead)
{
	m_Head = pHead;
	FILE *fp = NULL;
	CUserData user ;

	fopen_s(&fp, "Address.dat", "rb");

	if (fp == NULL)
		return ;

	ReleaseList();

	while (fread(&user, sizeof(CMyNode), 1, fp))
		AddNewNode(&user);

	fclose(fp);
}


CMyList::~CMyList()
{
	FILE *fp = NULL;
	CMyNode *pTmp = m_Head->pNext;

	fopen_s(&fp, "Address.dat", "wb");

	if (fp == NULL) {
		puts("ERROR: ����Ʈ ������ ���� ���� ���� ���߽��ϴ�.");
		_getch();

		return ;
	}

	while (pTmp != NULL) {
		if (fwrite(pTmp, sizeof(CMyNode), 1, fp) != 1)
			printf("ERROR : %s�� ���� ������ �����ϴµ� �����߽��ϴ�.\n", pTmp->GetKey());

		pTmp = pTmp->pNext;
	}
	fclose(fp);

	ReleaseList();
}

void CMyList::PrintAll(void) {
	CMyNode *pTmp = m_Head->pNext;
	while (pTmp != NULL) {

		pTmp->PrintNode();

		pTmp=pTmp->pNext;
	}
	printf("CUserData Counter : %d\n", CUserData::GetUserDataCouter());
	_getch();
}
void CMyList::ReleaseList(void) {
	CMyNode *pTmp = m_Head->pNext;
	CMyNode *pDelete = NULL;

	while (pTmp != NULL) {
		pDelete = pTmp;
		pTmp = pTmp->pNext;

		delete pDelete;
	}

	m_Head->pNext=NULL;
}

CMyNode* CMyList::FindNode(const char* pszKey) {
	CMyNode *pTmp = m_Head->pNext;
	while (pTmp != NULL) {
		if (strcmp(pTmp->GetKey(), pszKey) == 0)
			return pTmp;

		pTmp = pTmp->pNext;
	}

	return NULL;
}
int CMyList::AddNewNode(CMyNode *pNewNode) {
	//printf("%s\t%s", pszName, pszPhone);
	// ���� �̸��� �̹� �����ϴ��� Ȯ���Ѵ�.
	if (FindNode(pNewNode->GetKey()) != NULL)
	{
		delete pNewNode;
		return 0;
	}
	pNewNode->pNext = m_Head->pNext;
	m_Head->pNext = pNewNode;

	return 1;
}
int CMyList::RemoveNode(const char* pszKey) {
	CMyNode *pPrevNode = m_Head;
	CMyNode *pDelete = NULL;

	while (pPrevNode->pNext != NULL) {
		pDelete = pPrevNode->pNext;

		if (strcmp(pDelete->GetKey(), pszKey) == 0) {
			pPrevNode->pNext = pDelete->pNext;
			delete pDelete;

			return 1;
		}

		pPrevNode = pPrevNode->pNext;
	}

	return 0;
}