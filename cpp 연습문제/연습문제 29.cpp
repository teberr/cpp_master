/*
10)	한 줄에 ‘영어문장; 한글문장’ 형식으로 입력될 때, cin.ignore()를 이용하여 ‘
;’ 이후에 입력된 문자열을 화면에 출력하는 프로그램 과 ‘;’ 
이전에 입력된 문자열을 화면에 출력하는 프로그램 을 각각 작성하라. 
아래에서 ^Z(ctrl-z) 키는 입력 종료를 나타내는 키이며, cin.get() 은 EOF를 리턴한다.
실행결과: ‘;’ 이후에 입력된 문자열
I am happy.;나는 행복합니다.
나는 행복합니다.
I am sorry.;미안합니다.
미안합니다.
^Z

실행결과: ‘;’ 이전에 입력된 문자열
Good morning.; 좋은 아침입니다.
Good morning.
Listen to me!; 잘 들으세요!
Listen to me
^Z

*/
#include"stdafx.h"
#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int main(void) {
	string s;
	string temp;
	char ch;
	cout << "실행 결과: ';' 이후에 입력된 문자열" << endl;
	while (true)
	{
		cin >> s;
		if (cin.get() == EOF)
			break;
		else
		{
			cin.ignore(256, ';');
			s = "";
			while ((ch=cin.get()) != '\n') {
				s += ch;
			}
		}
		cout << s << endl;

	}
	cout << "실행 결과: ';' 이전에 입력된 문자열"<<endl;
	cin.clear();
	while (true)
	{
		cin >> temp;
		if (cin.get() == EOF)
			break;
		else
		{
			s = temp+" ";
			while ((ch = cin.get()) != ';') {
				s += ch;
			}
			cin.ignore(256, '\n');
		

		}
		cout << s << endl;

	}
}