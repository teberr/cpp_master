/*
10)	�� �ٿ� �������; �ѱ۹��塯 �������� �Էµ� ��, cin.ignore()�� �̿��Ͽ� ��
;�� ���Ŀ� �Էµ� ���ڿ��� ȭ�鿡 ����ϴ� ���α׷� �� ��;�� 
������ �Էµ� ���ڿ��� ȭ�鿡 ����ϴ� ���α׷� �� ���� �ۼ��϶�. 
�Ʒ����� ^Z(ctrl-z) Ű�� �Է� ���Ḧ ��Ÿ���� Ű�̸�, cin.get() �� EOF�� �����Ѵ�.
������: ��;�� ���Ŀ� �Էµ� ���ڿ�
I am happy.;���� �ູ�մϴ�.
���� �ູ�մϴ�.
I am sorry.;�̾��մϴ�.
�̾��մϴ�.
^Z

������: ��;�� ������ �Էµ� ���ڿ�
Good morning.; ���� ��ħ�Դϴ�.
Good morning.
Listen to me!; �� ��������!
Listen to me
^Z

*/
#include"stdafx.h"
#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int main(void) {
	string s;
	string temp;
	char ch;
	cout << "���� ���: ';' ���Ŀ� �Էµ� ���ڿ�" << endl;
	while (true)
	{
		cin >> s;
		if (cin.get() == EOF)
			break;
		else
		{
			cin.ignore(256, ';');
			s = "";
			while ((ch=cin.get()) != '\n') {
				s += ch;
			}
		}
		cout << s << endl;

	}
	cout << "���� ���: ';' ������ �Էµ� ���ڿ�"<<endl;
	cin.clear();
	while (true)
	{
		cin >> temp;
		if (cin.get() == EOF)
			break;
		else
		{
			s = temp+" ";
			while ((ch = cin.get()) != ';') {
				s += ch;
			}
			cin.ignore(256, '\n');
		

		}
		cout << s << endl;

	}
}