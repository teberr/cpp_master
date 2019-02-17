/*
6)	랜덤 수를 발생시키는 Random 클래스를 만들자. 아래의  main()를 이용하고, Random 클래스 생성자, next(), nextInteger() 의 3개의 멤버 함수를 가지도록 작성하고 main() 함수와 함쳐 하나의 cpp 파일에 구현하라.

int main() {
Random r;
cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
for(int i=0; i<10; i++) {
int n = r.next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수
cout << n << ' ';
}
cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10 개 --" << endl;
for(int i=0; i<10; i++) {
int n = r.nextInRange(2, 4); // 2에서 4 사이의 랜덤한 정수
cout << n << ' ';
}
cout << endl;
}

랜덤 정수를 발생시키기 위해 다음 두 라인의 코드가 필요하고, <cstdlib>와 <ctime>헤더 파일을 include 해야 한다.
srand(unsigned) time(0));   // seed 설정
Int n = rand();		// 0 에서 RAND_MAX932767) 사이의 랜덤한 정수 발생

*/
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

class Random {
	public:
	Random()
	{
		srand((unsigned int)time(NULL));
	}
	int Random::next() {
		   // seed 설정
		int n = rand();		//
		return n;
	}
	int nextInRange(int a, int b) { // seed 설정
		 
		int n = int((double)rand() / RAND_MAX * (b - a) + a);
		return n;
	}
};






int main() {
	Random r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
	for (int i = 0; i<10; i++) {
		int n = r.next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i<10; i++) {
		int n = r.nextInRange(2, 4); // 2에서 4 사이의 랜덤한 정수
		cout << n << ' ';
	}
	cout << endl;
}