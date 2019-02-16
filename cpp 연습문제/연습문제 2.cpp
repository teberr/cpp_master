// cpp연습문제.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//
/*
2)	덧셈(+), 뺄셈, 곰셈(*), 나눗셈(/), 나머지(%)의 정수 5칙 연산을 수행하는 프로그램을 작성하라. 
식은 다음과 같은 형식으로 입력한다.
?  2 + 34
2 + 34 = 26
? -1 – 36
-1 – 36 = -37


*/
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include<windows.h>
using namespace std;

string input(	) {
	cin.clear();
	string buf;
	cout << "?  " ;
	getline(cin, buf);
	return buf;
}
string trim(const string& str)
{
	size_t first = str.find_first_not_of(' ');
	if (string::npos == first)
	{
		return str;
	}
	size_t last = str.find_last_not_of(' ');
	return str.substr(first, (last - first + 1));
}

void plusab(int a, int b) {
	cout<< a <<" + "<< b << " = " <<a+b <<endl;
}
void minusab(int a, int b) {
	cout << a << " - " << b << " = " << a - b <<endl;
}

void multiply(int a, int b) {
	cout << a << " * " << b << " = " << a * b<<endl;
}

void divide(int a, int b) {
	cout << a << " / " << b << " = " << a / b << endl;
}
void remain(int a, int b) {
	cout << a << " % " << b << " = " << a % b << endl;
}
void calculate(string a) {
	cout << "calcuate" << endl;
	int findex = -1;
	int startindex = 0;
	string temp;
	string num1;
	string num2;
	int count = -1;
	while (true) {
		findex = a.find('+');
		if (findex <= a.length() && findex >= 0) {
			count = 0;
			break;
		}
		findex = a.find('*');
		if (findex <= a.length() && findex >= 0){
			count = 1;
			break;
		}
		findex = a.find('-',1);
		if (findex <= a.length() && findex >= 0){
			count = 2;
			break;
		}
		 findex = a.find('/');
		 if (findex <= a.length() && findex >= 0) {
			 count = 3;
			 break;
		}
		 findex = a.find('%');
		 if (findex <= a.length() && findex >= 0) {
			 count = 4;
			 break;
		}
		 break;
	}
		
		
	///	cout << findex;
		num1 = a.substr(0, findex);
		temp = a.at(findex);
		num2 = a.substr(findex + 1);
		num1 = trim(num1);
		num2 = trim(num2);
		
	///	cout << "num1: "<< num1 << endl;
	///	cout << "temp: "<< temp << endl;
	///	cout << "num2: "<< num2 << endl;

		if (count==0)
			plusab(stoi(num1), stoi(num2));
		if (count==1)
			multiply(stoi(num1), stoi(num2));
		if (count==2)
			minusab(stoi(num1), stoi(num2));
		if (count==3)
			divide(stoi(num1), stoi(num2));
		if (count == 4)
			remain(stoi(num1), stoi(num2));
			
		

}
int main()
{
	string buf;

	while (1) {
		buf = input();
		
		if (!buf.compare("Q")||!buf.compare("q"))
			break;
		calculate(buf);
		
	}
    return 0;
}

