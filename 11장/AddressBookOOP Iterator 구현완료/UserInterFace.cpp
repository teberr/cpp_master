#include "stdafx.h"
#include "UserInterFace.h"
#include "MyList.h"
#include <stdlib.h>
#include <conio.h>

CUserInterFace::CUserInterFace(CMyList &rList)
	:m_List(rList)
{
}


CUserInterFace::~CUserInterFace()
{
}
void CUserInterFace::Search() {
	char szName[32] = { 0 };
	CMyNode *pNode = NULL;

	printf("Input Name : ");
	while (getchar() != '\n');
	gets_s(szName, sizeof(szName));

	pNode = m_List.FindNode(szName);
	if (pNode != NULL) {
		pNode->PrintNode();
	}

	else {
		puts("Error: 데이터를 찾을 수 없습니다.");
	}

	_getch();

}
void CUserInterFace::Remove() {
	char szName[32] = { 0 };

	printf("Input name :");
	while (getchar() != '\n');
	gets_s(szName, sizeof(szName));

	m_List.RemoveNode(szName);
}
void CUserInterFace::Add() {
	CUserData *tmp=NULL;
	char szName[32] = { 0 };
	char szPhone[32] = { 0 };

	printf("Input Name : ");
	while (getchar() != '\n');
	gets_s(szName, sizeof(szName));

	printf("Input phone Number: ");
	
	gets_s(szPhone, sizeof(szPhone));
	tmp = new CUserData(szName, szPhone);
	m_List.AddNewNode(tmp);
}
int CUserInterFace::PrintUI() {
	int nInput = 0;

	system("cls");
	printf("[1] Add\t [2] Search\t [3] Print all\t [4] Remove\t [0] Exit\n");

	// 사용자가 선택한 메뉴의 값을 반환한다.
	scanf_s("%d", &nInput);

	return nInput;
}
void CUserInterFace::PrintAll(){
	CMyIterator it = m_List.MakeIterator();
	CUserData *pNode = NULL;
	while ((pNode = static_cast<CUserData*>(it.GetCurrent())) != NULL)
	{
		pNode->PrintNode();
		it.MoveNext();
	}
	_getch();
}
int CUserInterFace::Run() { 
	int nMenu = 0;

	while ((nMenu = PrintUI()) != 0) {
		switch (nMenu) {
		case 1: //Add
			Add();
			break;
		case 2: // Search
			Search();
			break;
		case 3://Print all
			PrintAll();
			break;
		case 4:// Remove;
			Remove();
			break;
		}
	}
	return nMenu;

}
