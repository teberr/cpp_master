#pragma once

class CMyList;

class CUserInterFace
{
public:
	CUserInterFace(CMyList &rList);
	~CUserInterFace();
	void Add();

protected:
	CMyList &m_List;
public:
	void Search();
	void Remove();
	int PrintUI();
	int Run();
	void PrintAll();
};

