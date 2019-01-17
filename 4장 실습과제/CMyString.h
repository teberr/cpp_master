#pragma once
class CMyString
{
public:
	CMyString();
	~CMyString();

	explicit CMyString(const char* pszParam);
	CMyString(const CMyString &rhs);
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
};

