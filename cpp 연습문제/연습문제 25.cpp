/*
6)	�迭�� ���Ҹ� �ݴ� ������ ������ reverseArray() �Լ��� ���ø����� �ۼ��϶�. 
reverseArray()�� ù��° �Ű������� �迭�� ���� �������̰�, �ι�° �Ű� ������ �迭�� �����̴�. 
ȣ�� ��ʴ� �Ʒ��� ����.
int x[] = {1, 10, 100, 5, 4};
reverseArray(x, 5);
for (int i =0; i < 5; i++)
cout << x[i] << �� ��;

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