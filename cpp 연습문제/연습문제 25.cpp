/*
6)	배열의 원소를 반대 순서로 뒤집는 reverseArray() 함수를 템플릿으로 작성하라. 
reverseArray()의 첫번째 매개변수는 배열에 대한 포인터이고, 두번째 매개 변수는 배열의 개수이다. 
호출 사례는 아래와 같다.
int x[] = {1, 10, 100, 5, 4};
reverseArray(x, 5);
for (int i =0; i < 5; i++)
cout << x[i] << ‘ ‘;

*/

#include "stdafx.h"
#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

template <typename T>
void reverseArray(T *a, T b) {
	T temp;
		for (int i = 0; i < b/2; i++) {
			temp = a[i];
			a[i] = a[b - i - 1];
			a[b - i - 1] = temp;
		}
}
int main(void) {
	int x[] = { 1, 10, 100, 5, 4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++)
		cout << x[i] << ' ';

}