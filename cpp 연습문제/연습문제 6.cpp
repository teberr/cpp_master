/*
6)	���� ���� �߻���Ű�� Random Ŭ������ ������. �Ʒ���  main()�� �̿��ϰ�, Random Ŭ���� ������, next(), nextInteger() �� 3���� ��� �Լ��� �������� �ۼ��ϰ� main() �Լ��� ���� �ϳ��� cpp ���Ͽ� �����϶�.

int main() {
Random r;
cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
for(int i=0; i<10; i++) {
int n = r.next(); // 0���� RAND_MAX(32767) ������ ������ ����
cout << n << ' ';
}
cout << endl << endl << "-- 2���� " << "4 ������ ���� ���� 10 �� --" << endl;
for(int i=0; i<10; i++) {
int n = r.nextInRange(2, 4); // 2���� 4 ������ ������ ����
cout << n << ' ';
}
cout << endl;
}

���� ������ �߻���Ű�� ���� ���� �� ������ �ڵ尡 �ʿ��ϰ�, <cstdlib>�� <ctime>��� ������ include �ؾ� �Ѵ�.
srand(unsigned) time(0));   // seed ����
Int n = rand();		// 0 ���� RAND_MAX932767) ������ ������ ���� �߻�

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
		   // seed ����
		int n = rand();		//
		return n;
	}
	int nextInRange(int a, int b) { // seed ����
		 
		int n = int((double)rand() / RAND_MAX * (b - a) + a);
		return n;
	}
};






int main() {
	Random r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
	for (int i = 0; i<10; i++) {
		int n = r.next(); // 0���� RAND_MAX(32767) ������ ������ ����
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "4 ������ ���� ���� 10 �� --" << endl;
	for (int i = 0; i<10; i++) {
		int n = r.nextInRange(2, 4); // 2���� 4 ������ ������ ����
		cout << n << ' ';
	}
	cout << endl;
}