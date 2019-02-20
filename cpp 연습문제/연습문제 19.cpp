/*
19)	다음연산을 통하여 책의 제목을 사전순으로 비교하고자 한다. < 연산자를 작성하라.
int main() {
Book a("청춘", 20000, 300);
string b;
cout << "책 이름을 입력하세요>>";
getline(cin, b);
if(b < a)
cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl;
}

*/

#include<stdio.h>
#include"stdafx.h"
#include <iostream>
#include<string>
using namespace std;

class Book {
private:
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; 	this->pages = pages;
	}

	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}

	string getTitle() { return title; }
	friend int operator<(string s,Book b) {
		if (b.title.compare(s) > 0)
			return true;
		else 
			return false;
	}
	

};

int main() {
	Book a("청춘", 20000, 300);
	string b;
	cout << "책 이름을 입력하세요>>";
	getline(cin, b);
	if (b < a)
		cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl;
}