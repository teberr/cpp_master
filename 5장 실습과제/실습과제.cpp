// 실습과제.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "CMyString.h"

void TestFunc(const CMyString &strParam) {

	//cout << strParam << endl; 실습과제 6번
	/* 실습과제 7번
	cout << strParam[0] << endl;
	cout << strParam[strParam.GetLength() - 1]<<endl;
	*/
}
int main()
{
	/* 실습과제 6번
	CMyString strLeft("Hello"), strRight("World"), strResult;

	strResult = strLeft + strRight;
	cout << strResult << endl;

	cout << strLeft << endl;
	strLeft += CMyString("World");
	
	cout << strLeft << endl;
	system("pause");
    return 0;
	*/
	/* 실습과제 7번
	CMyString strParam("HelloWorld");
	cout << strParam << endl;
	TestFunc(strParam);
	return 0;
	*/
	//실습과제 8번
	CMyString strLeft("Test"), strRight("String");

	if (strLeft == strRight)
		cout << "same" << endl;
	else
		cout << "Different" << endl;
	
	strLeft = CMyString("String");
	if (strLeft != strRight)
		cout << "Different" << endl;
	else
		cout << "same" << endl;

	return 0;
}