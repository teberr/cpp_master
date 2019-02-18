/*
14)	동일한 크기의 배열을 변환하는 다음 2개의 static 멤버 함수를 가진 ArrayUtility2 클래스를 만들고,
이 클래스를 이용하여 아래 결과와 같이 출력되도록 프로그램을 완성하시오.
// s1과 s2를 연결한 새로운 배열을 동적 생성하고 포인터 리턴
static int* concat(int s1[], int s2[], int size);

// s1에서 s2에 있는 숫자를 모두 삭제한 새로운 배열을 동적 생성하여 리턴
// 리턴하는 배열의 크기는 retSize 에 전달, retSize가 0인 경우 NULL 리턴
static int* remove(int s1[], int s2[], int size, int&retSize);

실행예:
정수를 5개 입력하라. 배열 x에 삽입한다. >>  5  4  3  2  1
정수를 5개 입력하라. 배열 y에 삽입한다. >>  3  2  1  0  -1
합친 정수 배열을 출력한다.
5  4  3  2  1  3  2  1  0  -1
배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 2



*/
#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;
class ArrayUtility2 {

public:
	// s1과 s2를 연결한 새로운 배열을 동적 생성하고 포인터 리턴
	static int* concat(int s1[], int s2[], int size) {
		int *result = new int[size*2];
		for (int i = 0; i < size; i++) {
			result[i] = s1[i];
		}
		for (int i = 0; i < size; i++) {
			result[i + size] = s2[i];
		}

		return result;
	}


	
	// s1에서 s2에 있는 숫자를 모두 삭제한 새로운 배열을 동적 생성하여 리턴
	// 리턴하는 배열의 크기는 retSize 에 전달, retSize가 0인 경우 NULL 리턴
	static int* remove(int s1[], int s2[], int size, int&retSize) {
		int *resulttemp = new int[size * 2];
		int resultsize = 0;
		int count;
		for (int i = 0; i < size; i++) {
			count = 1;
			for (int j = 0; j < size; j++) {
				if (s2[j] == s1[i]) {//s2에 존재하면 count는 거짓값
					count = 0;
				}
			}
			if (count) {// s2에 존재하지 않을 때 참
				resulttemp[resultsize] = s1[i];
				resultsize++;
			}
		}
		if (resultsize == 0) {
			return NULL;
		}
		else {
			int *result = new int[resultsize];
			for (int i = 0; i < resultsize; i++) {
				result[i] = resulttemp[i];
			}
			delete[] resulttemp;
			retSize = resultsize;
			return result;

		}
	}
};
int main() {
	int s1[5];
	int s2[5];
	ArrayUtility2 util;
	int size;
		cout << "정수를 5개 입력하라. 배열x에 삽입한다. >>";
	for (int i = 0; i < 5; i++)
		cin >> s1[i];
	cout << "정수를 5개 입력하라. 배열y에 삽입한다. >>";
	for (int i = 0; i < 5; i++)
		cin >> s2[i];

	cout << "합친 정수 배열을 출력한다." << endl;
	int* s3 = util.concat(s1, s2, 5);
	for (int i = 0; i < 10; i++)
		cout << s3[i] << " ";
	cout << endl;
	int* s4=util.remove(s1, s2, 5, size);
	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는" << size << endl;
	for (int i = 0; i < size; i++) {
		cout << s4[i] << " ";
	}
	
}