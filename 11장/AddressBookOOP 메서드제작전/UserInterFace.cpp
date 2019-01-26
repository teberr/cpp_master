#include "stdafx.h"
#include "UserInterFace.h"


CUserInterFace::CUserInterFace(CMyList &rList)
	:m_List(rList)
{
}


CUserInterFace::~CUserInterFace()
{
}
void CUserInterFace::Search() {}
void CUserInterFace::Remove() {}
int CUserInterFace::PrintUI() { return 0; }
int CUserInterFace::Run() { return 0; }
void CUserInterFace::Add(){}