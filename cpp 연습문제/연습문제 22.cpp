/*
3)	�Ʒ� �ڵ��� ���� ����� �����ΰ�? ���� ����� ���� ������ �ľ��ϰ�, �����Ͽ� �������� �ذ��϶�.
class Person {
int id;
public:
Person(int id = 0) { this->id = id; }
~Person() { cout << "id=" << id << endl; }

};
class Student : public Person {
char * name;
public:
Student(int id, const char *name) : Person(id) {
int len = strlen(name);
this->name = new char[len + 1];
strcpy(this->name, name);
}
~Student() {
cout << "name=" << name << endl;
delete[] name;
}
};
int main()
{
Person *p = new Student(10, "�տ���");
delete p;
}

*/

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Person {
	int id;
public:
	Person(int id = 0) { this->id = id; }
	virtual ~Person() { cout << "id=" << id << endl; }

};
class Student : public Person {
	char * name;
public:
	Student(int id, const char *name) : Person(id) {
		int len = strlen(name);
		this->name = new char[len + 1];
		strcpy(this->name, name);
	}
	~Student() {
		cout << "name=" << name << endl;
		delete[] name;
	}
};
int main()
{
	Person *p = new Student(10, "�տ���");
	delete p;
}
// ���������� ~Student()�� ������� �ʴ´�. �� �ڽ� Ŭ������ �Ҹ��ڰ� �۵����� �ʴ´�. �θ�Ŭ������ �Ҹ��ڿ� virtual�� �ٿ��ָ� �ذ�ȴ�.