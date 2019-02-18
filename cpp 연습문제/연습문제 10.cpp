/*
10)	find() 함수의 원형은 다음과 같다. 문자열 a에서 문자 c를 찾아, 문자 c가 있는 공간에 대한 참조를 리턴한다.
만약 문자 c를 찾을 수 없다면 success 참조 매개 변수에 false, 찾게 되면 success에 true를 설정한다.
char &find(char a[], char c, bool& success);
아래 main()이 동작되도록 find()를 작성하라
int main() {
char s[] = "Mike";
bool b = false;
char& loc = find(s, 'M', b);
if(b == false)	{
cout << "M을 발견할 수 없다" << endl;
return 0;
}
loc = 'm'; // 'M' 위치에 'm' 기록
cout << s << endl; // "mike"가 출력됨
}

*/
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

char &find(char a[], char c, bool& success) {
	string s(a);
	if (s.find(c)!=-1) {
		success = true;
		return a[s.find(c)];
	}
	else { 
	success = false; 
	return a[0];
	}
}


int main() {
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);
	if (b == false) {
		cout << "M을 발견할 수 없다" << endl;
		return 0;
	}
	loc = 'm'; // 'M' 위치에 'm' 기록
	cout << s << endl; // "mike"가 출력됨
}
