// 실습과제.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "CMyStringEx.h"

void TestFunc(const CMyString &strParam) {


}
int main()
{
	CMyStringEx strLeft("Hello"),strRight("World");
	cout << strLeft+strRight << endl;

	return 0;
}