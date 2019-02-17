/*
9)	�������� person�� �����, Family�� ������ �߻�ȭ�� Ŭ�����μ� �ϼ����� ���� Ŭ�����̴�.
class Person {
string name;
public:
Person(string name) { this->name = name; }
string getName() { return name; }
};

class Family {
Person* p; // Person �迭 ������
int size; // Person �迭�� ũ��. ���� ������ ��
public:
Family(string name, int size); // size ������ŭ Person �迭 ���� ����
void show(); // ��� ���� ������ ���
~Family();
};

���� main()�� �۵��ϵ��� Person�� Family Ŭ������ �ʿ��� ������� �߰��ϰ� �ڵ带 �ϼ��϶�.
int main() {
Family *simpson = new Family("Simpson", 3); // 3������ ������ Simpson ����
simpson->setName(0, "Mr. Simpson");
simpson->setName(1, "Mrs. Simpson");
simpson->setName(2, "Bart Simpson");
simpson->show();
delete simpson;
}
��¿�:
Simpson ������ ������ ���� 3���Դϴ�.
Mr. Simpson  Mrs. Simpson   Bart Simpson

*/
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
public:
	Person() {}
	Person(string name) { this->name = name; }
	string getName() { return name; }
};

class Family {
	Person* p; // Person �迭 ������
	int size; // Person �迭�� ũ��. ���� ������ ��
	string name;
public:
	Family(string name, int size) { // size ������ŭ Person �迭 ���� ����
		this->size = size;
		this->name = name;
		p = new Person[size];
	}
	void setName(int num, string name) {
		Person temp(name);
		p[num] = temp;
	}
	void show() { // ��� ���� ������ ���
		cout << name << " ������ ������ ���� " << size << "�� �Դϴ�." << endl;
		for (int i = 0; i < size; i++) {
			cout << p[i].getName() << " ";
		}
	}
	~Family() {
		delete[] p;
	}
};


int main() {
	Family *simpson = new Family("Simpson", 3); // 3������ ������ Simpson ����
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;
}