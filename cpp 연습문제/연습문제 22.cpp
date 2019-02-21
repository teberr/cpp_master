/*
3)	아래 코드의 실행 결과는 무엇인가? 실행 결과에 대해 문제를 파악하고, 수정하여 문제점을 해결하라.
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
Person *p = new Student(10, "손연재");
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
	Person *p = new Student(10, "손연재");
	delete p;
}
// 실행결과에서 ~Student()가 실행되지 않는다. 즉 자식 클래스의 소멸자가 작동하지 않는다. 부모클래스의 소멸자에 virtual을 붙여주면 해결된다.