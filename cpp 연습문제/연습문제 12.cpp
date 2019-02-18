/*
12)	���� �ڵ�� ���� ����� �����Ͽ� append()�Լ��� �ۼ��ϰ� ��ü ���α׷��� �ϼ��϶�. 
append()�� Buffer ��ü�� ���ڿ��� �߰��ϰ� Buffer ��ü�� ���� ������ ��ȯ�ϴ� �Լ��̴�.
class Buffer {
string text;
public:
Buffer(string text) { this->text = text; }
void add(string next) {
text += next; // text�� next ���ڿ� �����̱�
}
void print() {
cout << text << endl;
}
};
int main() {
Buffer buf("Hello");
Buffer& temp = append(buf, "Guys"); // buf�� ���ڿ��� "Guys" ������
temp.print(); // "HelloGuys" ���
buf.print();  // "HelloGuys" ���
}

��¿�:
HelloGuys
HelloGuys


*/
#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;

class Buffer {
	string text;
public:
	Buffer(string text) { this->text = text; }
	void add(string next) {
		text += next; // text�� next ���ڿ� �����̱�
	}
	void print() {
		cout << text << endl;
	}
};

Buffer& append(Buffer &buffer, char* c) {
	string s(c);
	buffer.add(s);
	return buffer;
}

int main() {
	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys"); // buf�� ���ڿ��� "Guys" ������
	temp.print(); // "HelloGuys" ���
	buf.print();  // "HelloGuys" ���
}