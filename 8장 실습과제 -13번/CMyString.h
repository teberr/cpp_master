#pragma once
class CMyString
{
public:
	CMyString();
	~CMyString();
	int GetLength() const;
	//��ȯ ������
	explicit CMyString(const char* pszParam);

	//���� ������
	CMyString(const CMyString &rhs);

	//�̵� ������
	CMyString(CMyString &&rhs);

	int Append(const char * pszParam);
	CMyString operator+(const CMyString &rhs);
	CMyString& operator+=(const CMyString &rhs);
	int operator==(const CMyString &rhs);
	int operator!=(const CMyString &rhs);
	char operator[](int nIndex) const;
	char& operator[](int nIndex);
private:
	// ���ڿ��� �����ϱ� ���� ���� �Ҵ��� �޸𸮸� ����Ű�� ������
	char* m_pszData;
	// ����� ���ڿ��� ����
	int m_nLength;
public:
	int SetString(const char* pszParam);
	const char* GetString() const;
	void Release();
	CMyString& operator=(const CMyString &rhs);
	operator char*()const {
		return m_pszData;
	}

	friend CMyString operator+(const char *pszParam, const CMyString &strParam);
	virtual void onSetString(char * pszData, int nLength);
};

