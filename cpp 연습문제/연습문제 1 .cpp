// cpp연습문제.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//
/*
1)	커피를 주문하는 간단한 C++ 프로그램을 작성하라. 커피 종류와 가격은 다음과 같다.
Aamericano:  2300 won
Eespresso :  2000won,
Cappuccino: 2500 won.

하루에 20000 won 이상을 벌게되면 카페를 닫는다.

*/
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include<windows.h>
using namespace std;

void menu(int &choice) {
	cout << "1. Americano: 2300 won" << endl;
	cout << "2. Eespresso: 2000 won" << endl;
	cout << "3. Cappuccino: 2500 won" << endl;
	cin >> choice;
}


int main()
{
	int revenue = 0;
	int choice = 0;
	while (revenue <= 20000) {
		menu(choice);
		switch (choice) {
		case 1: revenue += 2300; break;
		case 2: revenue += 2000; break;
		case 3: revenue += 2500; break;
		default: continue;
		}
	}
	cout << "오늘의 수익은: " << revenue << endl;
    return 0;
}

