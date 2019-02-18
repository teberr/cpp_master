/*
11)	스택 클래스 MyIntStack 을 구현하라. MyIntStack 에 저장할 수 있는 정수의 최대 개수는 10이다.
class MyIntStack {
int p[10];
int tos; // 스택의 꼭대기를 가리키는 인덱스
public:
MyIntStack();
bool push(int n); // 정수 n 푸시. 꽉 차 있으면 false, 아니면 true 리턴
bool pop(int &n); // 팝하여 n에 저장.스택이 비어 있으면 false, 아니면 true 리턴
};
int main() {
MyIntStack a;
for(int i=0; i<11; i++) { // 11개를 푸시하면, 마지막에는 stack full이 된다.
if(a.push(i)) cout << i << ' '; // 푸시된 값 에코
else cout << endl << i+1 << " 번째 stack full" << endl;
}
int n;
for(int i=0; i<11; i++) { // 11개를 팝하면, 마지막에는 stack empty가 된다.
if(a.pop(n)) cout << n << ' '; // 팝 한 값 출력
else cout << endl << i+1 << " 번째 stack empty";
}
cout << endl;
실행예:
0 1 2 3 4 5 6 7 8 9
11번째 stack full
9 8 7 6 5 4 3 2 1 0
11번째 stack empty

*/

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class MyIntStack {
	int p[10];
	int tos; // 스택의 꼭대기를 가리키는 인덱스
public:
	MyIntStack() {
		tos = 0;
	}
	bool push(int n) { // 정수 n 푸시. 꽉 차 있으면 false, 아니면 true 리턴
		if(tos<10){
			p[tos] = n;
			tos++;
			return true;
		}
		else {
			return false;
		}
	}
	bool pop(int &n) { // 팝하여 n에 저장.스택이 비어 있으면 false, 아니면 true 리턴
		if (tos != 0) {
			tos--;
			n = p[tos];
			
			return true;
		}
		else {
			return false;
		}
	}
};
int main() {
	MyIntStack a;
	for (int i = 0; i < 11; i++) { // 11개를 푸시하면, 마지막에는 stack full이 된다.
		if (a.push(i)) cout << i << ' '; // 푸시된 값 에코
		else cout << endl << i + 1 << " 번째 stack full" << endl;
	}
	int n;
	for (int i = 0; i < 11; i++) { // 11개를 팝하면, 마지막에는 stack empty가 된다.
		if (a.pop(n)) cout << n << ' '; // 팝 한 값 출력
		else cout << endl << i + 1 << " 번째 stack empty";
	}
	cout << endl;
}