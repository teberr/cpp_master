/*
7)	String Ŭ������ �̿��Ͽ� ����ڰ� �Է��� ���� ������ ���ڿ��� �Է� �ް� �Ųٷ� ����ϴ� ���α׷��� �ۼ��϶�.
(��Ʈ: string text;  getline(cin, text, ��\n��); text.length(), text[i] �� ���)
�Ʒ� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�.)
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