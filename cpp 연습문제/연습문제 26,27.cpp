/*
7)	���� �Լ��� �Ű������� �־��� �� ���� int �迭�� ������ ���ο� int �迭�� �������� �Ҵ� �޾� �����Ѵ�.

int *concat(int a[], int sizea, int b[], int sizeb);
concat�� int �迭 �Ӹ� �ƴ϶� �ٸ� Ÿ���� �迭�� ó���ϵ��� �Ϲ�ȭ �϶�.

8)	���� �Լ��� �Ű������� �־��� int �迭 src���� �迭 minus�� ����ִ� ���� ������ 
��� ������ ���ο� int �迭�� �������� �Ҵ� �޾� �����Ѵ�. 
retSize�� remove() �Լ��� ���� ����� �����ϴ� �迭�� ũ�⸦ �����Ѵ�.

int *remove(int drc[], int sizeSrc, int minus[], int sizeMinus, int& retSize);
���ø��� ����Ͽ� remove�� �Ϲ�ȭ �϶�.

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