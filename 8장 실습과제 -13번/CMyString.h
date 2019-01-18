#pragma once
class CMyString
{
public:
	CMyString();
	~CMyString();
	int GetLength() const;
	//변환 생성자
	explicit CMyString(const char* pszParam);

	//복사 생성자
	CMyString(const CMyString &rhs);

	//이동 생성자
	CMyString(CMyString &&rhs);

	int Append(const char * pszParam);
	CMyString operator+(const CMyString &rhs);
	CMyString& operator+=(const CMyString &rhs);
	int operator==(const CMyString &rhs);
	int operator!=(const CMyString &rhs);
	char operator[](int nIndex) const;
	char& operator[](int nIndex);
private:
	// 문자열을 저장하기 위해 동적 할당한 메모리를 가리키는 포인터
	char* m_pszData;
	// 저장된 문자열의 길이
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

