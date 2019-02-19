/*

17)	다음의 연산자 함수를 작성하여 Book 클래스를 작성하라. .

세개의 == 연산자 함수를 가진 Book 클래스를 작성하라.
세개의 == 연산자를 프랜드 함수로 작성하라.

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

	friend bool operator==(Book b,int n) {
			if (b.price == n)
				return true;
			else
				return false;
	}
	friend bool operator==(Book b,const char* c) {
		
			string s(c);
			if (s.compare(b.title))
				return true;
			else
				return false;

		
	}
	friend int operator==(Book b,Book c) {
		
		if (b.price == c.price)
			if (b.title == c.title)
				if (b.price == c.price)
					return true;
			else
				return false;
	}

};

int main() {
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000) cout << "정가 30000원" << endl; // price 비교
	if (a == "명품 C++") cout << "명품 C++ 입니다." << endl; // 책 title 비교
	if (a == b) cout << "두 책이 같은 책입니다." << endl; // title, price, pages 모두 비교
}