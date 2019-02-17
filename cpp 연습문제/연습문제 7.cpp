/*
7)	String 클래스를 이용하여 사용자가 입력한 영문 한줄을 문자열로 입력 받고 거꾸로 출력하는 프로그램을 작성하라.
(힌트: string text;  getline(cin, text, ‘\n’); text.length(), text[i] 등 사용)
아래 한 줄을 입력하세요.(exit를 입력하면 종료합니다.)
>> Delicious C++
++C suoicileD
>> I love programming.
.gnimmargorp evol I
>> exit


*/
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string text;

	string result = "";
	while (1) {
		cin.clear();
		getline(cin, text, '\n');
		if (!text.compare("exit")) {
			break;
		}
		for (int i = 1; i <= text.length(); i++) {
			result += text.at(text.length() - i);
		}
		cout << result << endl;
	}
}