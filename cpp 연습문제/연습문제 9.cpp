/*
9)	다음에서 person은 사람을, Family는 가족을 추상화한 클래스로서 완성되지 않은 클래스이다.
class Person {
string name;
public:
Person(string name) { this->name = name; }
string getName() { return name; }
};

class Family {
Person* p; // Person 배열 포인터
int size; // Person 배열의 크기. 가족 구성원 수
public:
Family(string name, int size); // size 개수만큼 Person 배열 동적 생성
void show(); // 모든 가족 구성원 출력
~Family();
};

다음 main()이 작동하도록 Person과 Family 클래스에 필요한 멤버들을 추가하고 코드를 완성하라.
int main() {
Family *simpson = new Family("Simpson", 3); // 3명으로 구성된 Simpson 가족
simpson->setName(0, "Mr. Simpson");
simpson->setName(1, "Mrs. Simpson");
simpson->setName(2, "Bart Simpson");
simpson->show();
delete simpson;
}
출력예:
Simpson 가족은 다음과 같이 3명입니다.
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
	Person* p; // Person 배열 포인터
	int size; // Person 배열의 크기. 가족 구성원 수
	string name;
public:
	Family(string name, int size) { // size 개수만큼 Person 배열 동적 생성
		this->size = size;
		this->name = name;
		p = new Person[size];
	}
	void setName(int num, string name) {
		Person temp(name);
		p[num] = temp;
	}
	void show() { // 모든 가족 구성원 출력
		cout << name << " 가족은 다음과 같이 " << size << "명 입니다." << endl;
		for (int i = 0; i < size; i++) {
			cout << p[i].getName() << " ";
		}
	}
	~Family() {
		delete[] p;
	}
};


int main() {
	Family *simpson = new Family("Simpson", 3); // 3명으로 구성된 Simpson 가족
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;
}