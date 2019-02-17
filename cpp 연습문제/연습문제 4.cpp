// cpp연습문제.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//
/*
4)	main() 의 실행 결과가 다음과 같을 때, 날짜를 다루는 Date 클래스 작성하라.
<string> 헤더파일에 정의된 stoi() string 문자열을 숫자로 변환 할 수 있다.
String s  = “1945”;
Int n = stoi(s);   // n == 1945
실행결과
1945년 8월 15일
2014, 3, 30

int main() {
Date birth(2014, 3, 20); // 2014년 3월 20일
Date independenceDay("1945/8/15"); // 1945년 8월 15일
independenceDay.show();
cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}




*/
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include "Date.h"
using namespace std;

int main() {
	Date birth(2014, 3, 20); // 2014년 3월 20일
	Date independenceDay("1945/8/15"); // 1945년 8월 15일
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}