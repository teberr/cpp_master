// cpp연습문제.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//
/*
5)	coffeeMachine 클래스를 만들어보시오. 각가의 커피 종류에 따라 소비되는 양은 다음과 같다.
에스프레소 : 커피와 물이 각각 1씩 소비
아메리카노 : 커피는 1, 물은 2 소비
설탕커피 : 커피 1, 물 2, 설탕 1 소비
int main() {
CoffeeMachine java(5, 10, 3); // 커피량:5, 물량:10, 설탕:6으로 초기화
java.drinkEspresso(); // 커피 1, 물 1 소비
java.show(); // 현재 커피 머신의 상태 출력
java.drinkAmericano(); // 커피 1, 물 2 소비
java.show(); // 현재 커피 머신의 상태 출력
java.drinkSugarCoffee(); // 커피 1, 물 2, 설탕 1 소비
java.show(); // 현재 커피 머신의 상태 출력
java.fill(); // 커피 10, 물 10, 설탕 10으로 채우기
java.show(); // 현재 커피 머신의 상태 출력
}

*/
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include "coffeeMachine.h"
using namespace std;

int main() {
	coffeeMachine java(5, 10, 3); // 커피량:5, 물량:10, 설탕:6으로 초기화
	java.drinkEspresso(); // 커피 1, 물 1 소비
	java.show(); // 현재 커피 머신의 상태 출력
	java.drinkAmericano(); // 커피 1, 물 2 소비
	java.show(); // 현재 커피 머신의 상태 출력
	java.drinkSugarCoffee(); // 커피 1, 물 2, 설탕 1 소비
	java.show(); // 현재 커피 머신의 상태 출력
	java.fill(); // 커피 10, 물 10, 설탕 10으로 채우기
	java.show(); // 현재 커피 머신의 상태 출력
}