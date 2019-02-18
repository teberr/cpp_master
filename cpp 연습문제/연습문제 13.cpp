/*
13)	Person 클래스 객체를 생성하는 main() 함수는 다음과 같다.
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
①	생성자를 중복 작성하고 프로그램을 완성하라
②	디폴트 매개 변수를 가진 하나의 생성자를 작성하여 프로그램을 완성하라.




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