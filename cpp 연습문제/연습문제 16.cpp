/*
16)	������ �Լ��� �����϶�.

	+=, -+ ������ �Լ��� Book Ŭ������ ��� �Լ��� �����϶�
	+=, -+ ������ �Լ��� Book Ŭ���� �ܺ� �Լ��� �����϶�

	17)	������ ������ �Լ��� �ۼ��Ͽ� Book Ŭ������ �ۼ��϶�. .
	int main() {
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
	if(a == 30000) cout << "���� 30000��" << endl; // price ��
	if(a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl; // å title ��
	if(a == b) cout << "�� å�� ���� å�Դϴ�." << endl; // title, price, pages ��� ��
	}
	������ == ������ �Լ��� ���� Book Ŭ������ �ۼ��϶�.
	������ == �����ڸ� ������ �Լ��� �ۼ��϶�.

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
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}
	string getTitle() { return title; }
	/* ��� �Լ��� ����
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
	Book& Book::operator+=(int n);//�ܺ��Լ� ������ ���� ����
	Book& Book::operator-=(int n);//�ܺ��Լ� ������ ���� ����
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
Book a("û��", 20000, 300), b("�̷�", 30000, 500);
a += 500; // å a�� ���� 500�� ����
b -= 500; // å b�� ���� 500�� ����
a.show();
b.show();
}