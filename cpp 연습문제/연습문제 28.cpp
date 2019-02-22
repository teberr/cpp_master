/*
9)	책의 년도, 책이름, 저자 이름을 담은 Book 클래스를 만들고, vector<Book> v; 로 생성한 벡터를 이용하여 
책을 입고하고, 저자와 년도로 검색하는 프로그램을 작성하시오.

입고할 책을 입력하시오. 년도에 -1을 입력하면 입고를 종료합니다.
년도 >> 2017
책이름 >> 명품자바
저자>> 황기태
년도 >> 2018
책이름 >> 명품 C++
저자 >> Hwang
년도 >> -1
총 입고된 책은 2권입니다.
검색하고자하는 저자의 이름을 입력하시오>> 황기태
2017년, 명품자바, 황기태

*/
#include"stdafx.h"
#include<stdio.h>
#include<string>
#include<iostream>
#include<vector>
using namespace std;
class Book {
private:
	int year;
	string name;
	string author;
public:
	void setyear(int year) { this->year = year; }
	void setname(string name) { this->name=name; }
	void setauthor(string author) { this->author = author; }
	string getauthor() { return author; }
	string getname() { return name; }
	int getyear() { return year; }
};
int main(void) {
	vector<Book>v;

	int temp;
	string stemp;
	while (1) {
		
		cout << "입고할 책을 입력하시오. 년도에 -1을 입력하면 입고를 종료합니다." << endl;
		cout << "년도>>";
		cin >> temp;
		if (temp == -1)
			break;
		Book b;
		
		b.setyear(temp);
		cout << "책이름>>";
		cin >> stemp;
		b.setname(stemp);
		cout << "저자>>";
		cin >> stemp;
		b.setauthor(stemp);
		v.push_back(b);
	}
	cout << "총 입고된 권은 " << v.size() << "권 입니다." << endl;
	while (1) {
		cout << "검색하고자 하는 저자의 이름을 입력하시오.-1을 입력하면 종료합니다." << endl;
		cin >> stemp;
		if (stemp.compare("-1") == 0)
			break;
		for (int i = 0; i < v.size(); i++) {
			if (v[i].getauthor().compare(stemp) == 0)
			{
				cout << v[i].getyear() << "년, " << v[i].getname() << ", " << v[i].getauthor() << endl;
			}
		}
	
	}

}