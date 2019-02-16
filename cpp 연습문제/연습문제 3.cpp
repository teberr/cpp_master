// cpp연습문제.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//
/*
3)	main()의 실행 결과가 다음과 같도록 Tower 클래스를 작성하라
실행결과
높이는 1미터
높이는 100미터

int main() {
Tower myTower; // 1 미터
Tower seoulTower(100); // 100 미터
cout << "높이는 " << myTower.getHeight() << "미터" << endl;
cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}



*/
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include "Tower.h"
using namespace std;

int main() {
	Tower myTower; // 1 미터
	Tower seoulTower(100); // 100 미터
	cout << "height is " << myTower.getHeight() << "m" << endl;
	cout << "height is " << seoulTower.getHeight() << "m" << endl;
}
