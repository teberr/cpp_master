/*
19)	���������� ���Ͽ� å�� ������ ���������� ���ϰ��� �Ѵ�. < �����ڸ� �ۼ��϶�.
int main() {
Book a("û��", 20000, 300);
string b;
cout << "å �̸��� �Է��ϼ���>>";
getline(cin, b);
if(b < a)
cout << a.getTitle() << "�� " << b << "���� �ڿ� �ֱ���!" << endl;
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
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
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
	Book a("û��", 20000, 300);
	string b;
	cout << "å �̸��� �Է��ϼ���>>";
	getline(cin, b);
	if (b < a)
		cout << a.getTitle() << "�� " << b << "���� �ڿ� �ֱ���!" << endl;
}