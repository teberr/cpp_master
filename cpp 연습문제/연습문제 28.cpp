/*
9)	å�� �⵵, å�̸�, ���� �̸��� ���� Book Ŭ������ �����, vector<Book> v; �� ������ ���͸� �̿��Ͽ� 
å�� �԰��ϰ�, ���ڿ� �⵵�� �˻��ϴ� ���α׷��� �ۼ��Ͻÿ�.

�԰��� å�� �Է��Ͻÿ�. �⵵�� -1�� �Է��ϸ� �԰� �����մϴ�.
�⵵ >> 2017
å�̸� >> ��ǰ�ڹ�
����>> Ȳ����
�⵵ >> 2018
å�̸� >> ��ǰ C++
���� >> Hwang
�⵵ >> -1
�� �԰�� å�� 2���Դϴ�.
�˻��ϰ����ϴ� ������ �̸��� �Է��Ͻÿ�>> Ȳ����
2017��, ��ǰ�ڹ�, Ȳ����

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
		
		cout << "�԰��� å�� �Է��Ͻÿ�. �⵵�� -1�� �Է��ϸ� �԰� �����մϴ�." << endl;
		cout << "�⵵>>";
		cin >> temp;
		if (temp == -1)
			break;
		Book b;
		
		b.setyear(temp);
		cout << "å�̸�>>";
		cin >> stemp;
		b.setname(stemp);
		cout << "����>>";
		cin >> stemp;
		b.setauthor(stemp);
		v.push_back(b);
	}
	cout << "�� �԰�� ���� " << v.size() << "�� �Դϴ�." << endl;
	while (1) {
		cout << "�˻��ϰ��� �ϴ� ������ �̸��� �Է��Ͻÿ�.-1�� �Է��ϸ� �����մϴ�." << endl;
		cin >> stemp;
		if (stemp.compare("-1") == 0)
			break;
		for (int i = 0; i < v.size(); i++) {
			if (v[i].getauthor().compare(stemp) == 0)
			{
				cout << v[i].getyear() << "��, " << v[i].getname() << ", " << v[i].getauthor() << endl;
			}
		}
	
	}

}