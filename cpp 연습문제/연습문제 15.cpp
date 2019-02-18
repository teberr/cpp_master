/*
15)	다음과 같은 static 멤버를 가진 Random 클래스를 완성하라. 
그리고 Random 클래스를 이용하여 다음과 같이 랜덤한 값을 출력하는 main() 함수도 작성하라. 
main()에서 Random클래스의 seed() 함수를 활용하라


class Random {
public:
// 항상 다른 랜덤수를 발생시키기 위한 seed를 설정하는 함수
static void seed() { srand((unsigned)time(0)); } // 씨드 설정
static int nextInt(int min=0, int max=32767); //min과 max 사이의 랜덤 정수 리턴
static char nextAlphabet();
static double nextDouble(); // 0보다 크거나 같고 1보다 적은 실수 리턴
};

실행예)
1에서 100까지 랜덤한 정수 10개를 출력합니다.
1 96 81 59 23 61 35 1 86 12
알파벳을 랜덤하게 10개 출력합니다.
K h r s O P I N x A
랜덤한 실수 10개를 출력합니다.
0.198373  0.832232  0.632341  0.480230  0.397142
0.062807  0.266891  0.934193  0.379839  0.501923

*/

#include<stdio.h>
#include"stdafx.h"
#include <iostream>
#include<string>
#include <stdlib.h>
#include<ctime>
using namespace std;

class Random {
public:
	Random() {
		seed();
	}

	// 항상 다른 랜덤수를 발생시키기 위한 seed를 설정하는 함수
	static void seed() { srand((unsigned)time(0)); } // 씨드 설정
	static int nextInt(int min = 0, int max = 32767) { //min과 max 사이의 랜덤 정수 리턴
		int n = ((double)rand() / RAND_MAX*(max - min) + min);
		return n;
	}
	static char nextAlphabet() {
		//65~90 97~122
			char n;
			if (rand() < 16384)
				n = nextInt(65, 90);
			else {
				n = nextInt(97, 122);
			}
			return n;
	}
	static double nextDouble() { // 0보다 크거나 같고 1보다 적은 실수 리턴
		double d = (double)rand() / RAND_MAX;
		return d;
	}
};

int main(void) {
	Random rand;
	cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다." << endl;
	for(int i=0;i<10;i++)
		cout << rand.nextInt(1, 100)<<" " ;
	cout << endl;
	cout << "알파벳을 랜덤하게 10개 출력합니다." << endl;
	for(int i=0;i<10;i++)
		cout << rand.nextAlphabet() << " ";
	cout << endl;
	cout << "랜덤한 실수를 10개 출력합니다." << endl;
	for (int i = 0; i < 10; i++) {
		if (i ==5)
			cout << endl;
		cout << rand.nextDouble() << " ";
	}
	cout << endl;

}