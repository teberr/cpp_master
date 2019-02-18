/*
16)	연산자 함수를 구현하라.

	+=, -+ 연산자 함수를 Book 클래스의 멤버 함수로 구현하라
	+=, -+ 연산자 함수를 Book 클래스 외부 함수로 구현하라

	17)	다음의 연산자 함수를 작성하여 Book 클래스를 작성하라. .
	int main() {
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if(a == 30000) cout << "정가 30000원" << endl; // price 비교
	if(a == "명품 C++") cout << "명품 C++ 입니다." << endl; // 책 title 비교
	if(a == b) cout << "두 책이 같은 책입니다." << endl; // title, price, pages 모두 비교
	}
	세개의 == 연산자 함수를 가진 Book 클래스를 작성하라.
	세개의 == 연산자를 프랜드 함수로 작성하라.

*/
#include<stdio.h>
#include"stdafx.h"
#include <iostream>
#include<string>
#include <stdlib.h>
#include<ctime>
using namespace std;

class Book {
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
	/* 멤버 함수로 구현
	Book& operator+=(int n) { 
	this->price=this->price+n;
	return *this;
	}

	Book& operator-=(int n) {
		if (this->price - n >= 0)
			this->price = this->price - n;
		else
			this->price = 0;
		return *this;
	}*/
	Book& Book::operator+=(int n);//외부함수 구현을 위한 정의
	Book& Book::operator-=(int n);//외부함수 구현을 위한 정의
};

Book& Book::operator+=(int n) {
this->price=this->price+n;
return *this;
}
Book& Book::operator-=(int n) {
	if (this->price - n >= 0)
		this->price = this->price - n;
	else
		this->price = 0;
	return *this;
}



int main(){
Book a("청춘", 20000, 300), b("미래", 30000, 500);
a += 500; // 책 a의 가격 500원 증가
b -= 500; // 책 b의 가격 500원 감소
a.show();
b.show();
}