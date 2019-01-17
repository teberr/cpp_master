// 실습과제.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "CMyString.h"

void TestFunc(const CMyString &strParam) {

	cout << strParam << endl;
}
int main()
{
	CMyString strData, strTest;
	strData.SetString("Hello");
	strTest.SetString("World");

	//복사 생성
	CMyString strNewData(strData);
	cout << strNewData.GetString() << endl;

	strNewData = strTest;
	cout << strNewData.GetString() << endl;
    return 0;
}

