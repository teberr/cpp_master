/*
11)	���� Ŭ���� MyIntStack �� �����϶�. MyIntStack �� ������ �� �ִ� ������ �ִ� ������ 10�̴�.
class MyIntStack {
int p[10];
int tos; // ������ ����⸦ ����Ű�� �ε���
public:
MyIntStack();
bool push(int n); // ���� n Ǫ��. �� �� ������ false, �ƴϸ� true ����
bool pop(int &n); // ���Ͽ� n�� ����.������ ��� ������ false, �ƴϸ� true ����
};
int main() {
MyIntStack a;
for(int i=0; i<11; i++) { // 11���� Ǫ���ϸ�, ���������� stack full�� �ȴ�.
if(a.push(i)) cout << i << ' '; // Ǫ�õ� �� ����
else cout << endl << i+1 << " ��° stack full" << endl;
}
int n;
for(int i=0; i<11; i++) { // 11���� ���ϸ�, ���������� stack empty�� �ȴ�.
if(a.pop(n)) cout << n << ' '; // �� �� �� ���
else cout << endl << i+1 << " ��° stack empty";
}
cout << endl;
���࿹:
0 1 2 3 4 5 6 7 8 9
11��° stack full
9 8 7 6 5 4 3 2 1 0
11��° stack empty

*/

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class MyIntStack {
	int p[10];
	int tos; // ������ ����⸦ ����Ű�� �ε���
public:
	MyIntStack() {
		tos = 0;
	}
	bool push(int n) { // ���� n Ǫ��. �� �� ������ false, �ƴϸ� true ����
		if(tos<10){
			p[tos] = n;
			tos++;
			return true;
		}
		else {
			return false;
		}
	}
	bool pop(int &n) { // ���Ͽ� n�� ����.������ ��� ������ false, �ƴϸ� true ����
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
	for (int i = 0; i < 11; i++) { // 11���� Ǫ���ϸ�, ���������� stack full�� �ȴ�.
		if (a.push(i)) cout << i << ' '; // Ǫ�õ� �� ����
		else cout << endl << i + 1 << " ��° stack full" << endl;
	}
	int n;
	for (int i = 0; i < 11; i++) { // 11���� ���ϸ�, ���������� stack empty�� �ȴ�.
		if (a.pop(n)) cout << n << ' '; // �� �� �� ���
		else cout << endl << i + 1 << " ��° stack empty";
	}
	cout << endl;
}