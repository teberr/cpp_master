/*
7)	다음 함수는 매개변수로 주어진 두 개의 int 배열을 연결한 새로운 int 배열을 동적으로 할당 받아 리턴한다.

int *concat(int a[], int sizea, int b[], int sizeb);
concat가 int 배열 뿐만 아니라 다른 타입의 배열도 처리하도록 일반화 하라.

8)	다음 함수는 매개변수로 주어진 int 배열 src에서 배열 minus에 들어있는 같은 정수를 
모두 삭제한 새로운 int 배열을 동적으로 할당 받아 리턴한다. 
retSize는 remove() 함수의 실행 결과를 리턴하는 배열의 크기를 전달한다.

int *remove(int drc[], int sizeSrc, int minus[], int sizeMinus, int& retSize);
탬플릿을 사용하여 remove를 일반화 하라.

*/

#include "stdafx.h"
#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

template <typename T>
T* concat(T *a, T sizea,T *b,T sizeb) {
	T *temp=new T(sizea+sizeb);
	for (int i = 0; i < sizea; i++) {
		temp[i] = a[i];
	}
	for (int i = 0; i < sizeb; i++) {
		temp[i + sizea] = b[i];
	}
	return temp;
}
template<typename T>
T* remove(T *a, T sizea, T *b, T sizeb,T &retsize) {
	T *temp = new T(sizea);
	T tempretsize = 0;
	int count ;
	for (int i = 0; i < sizea; i++) {
		count = 1;
		for (int j = 0; j < sizeb; j++) {
			if (a[i] == b[j])
				count = 0;
		}
		if (count) {
			temp[tempretsize] = a[i];
			tempretsize++;
		}
	}
	retsize = tempretsize;
	return temp;
}
int main(void) {
	int x[] = { 1, 10, 100, 5, 4 };
	int y[] = { 1, 10, 15, 4, 3 };
	int *z=concat(x, 5, y, 5);
	for (int i = 0; i < 10; i++)
		cout << z[i] << ' ';
	cout << endl;
	int retsize;
	int *k = remove(x, 5, y, 5,retsize);
	for (int i = 0; i < retsize; i++)
		cout << k[i] << ' ';
	cout << endl;
}