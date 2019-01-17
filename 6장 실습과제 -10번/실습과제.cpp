// 실습과제.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "CMyStringEx.h"

void TestFunc(const CMyString &strParam) {


}
int main()
{
	CMyStringEx strTest;
	strTest.SetString("fuck you");
	cout << strTest << endl;

	strTest.SetString("Hello");
	cout << strTest << endl;

	return 0;
}