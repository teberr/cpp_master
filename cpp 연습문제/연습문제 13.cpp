/*
13)	Person Ŭ���� ��ü�� �����ϴ� main() �Լ��� ������ ����.
class Person {
int id;
double weight;
string name;
public:

void show() { cout << id << ' '<< weight << ' ' <<name << endl; }
};
int main() {
Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
grace.show();  // 1  20.5  Grace
ashley.show();   // 2  20.5  Ashley
helen.show();    // 3  32.5  Helen

}
��	�����ڸ� �ߺ� �ۼ��ϰ� ���α׷��� �ϼ��϶�
��	����Ʈ �Ű� ������ ���� �ϳ��� �����ڸ� �ۼ��Ͽ� ���α׷��� �ϼ��϶�.




*/
#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;
class Person {
	int id;
	double weight;
	string name;
public:
	Person() {
		this->name = "grace";
		this->id = 1;
		this->weight = 20.5;
	}
	Person(int id , string name, double weight = 20.5) {
		this->id = id;
		this->name = name;
		this->weight = weight;
	}
	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};
int main() {
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();  // 1  20.5  Grace
	ashley.show();   // 2  20.5  Ashley
	helen.show();    // 3  32.5  Helen

}