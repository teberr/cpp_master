/*
10)	find() �Լ��� ������ ������ ����. ���ڿ� a���� ���� c�� ã��, ���� c�� �ִ� ������ ���� ������ �����Ѵ�.
���� ���� c�� ã�� �� ���ٸ� success ���� �Ű� ������ false, ã�� �Ǹ� success�� true�� �����Ѵ�.
char &find(char a[], char c, bool& success);
�Ʒ� main()�� ���۵ǵ��� find()�� �ۼ��϶�
int main() {
char s[] = "Mike";
bool b = false;
char& loc = find(s, 'M', b);
if(b == false)	{
cout << "M�� �߰��� �� ����" << endl;
return 0;
}
loc = 'm'; // 'M' ��ġ�� 'm' ���
cout << s << endl; // "mike"�� ��µ�
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
		cout << "M�� �߰��� �� ����" << endl;
		return 0;
	}
	loc = 'm'; // 'M' ��ġ�� 'm' ���
	cout << s << endl; // "mike"�� ��µ�
}
