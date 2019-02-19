/*

17)	������ ������ �Լ��� �ۼ��Ͽ� Book Ŭ������ �ۼ��϶�. .

������ == ������ �Լ��� ���� Book Ŭ������ �ۼ��϶�.
������ == �����ڸ� ������ �Լ��� �ۼ��϶�.

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
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
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
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
	if (a == 30000) cout << "���� 30000��" << endl; // price ��
	if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl; // å title ��
	if (a == b) cout << "�� å�� ���� å�Դϴ�." << endl; // title, price, pages ��� ��
}