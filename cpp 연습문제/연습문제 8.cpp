/*
8)	������ ���� ���� �߻�ȭ�� Circle Ŭ������ �ִ�. Circle Ŭ������ main() �Լ��� �ۼ��ϰ�
3���� Circle ��ü�� ���� �迭�� �����ϰ�,
������ ���� �Է� �޾� ������ 100���� ū ���� ������ ����ϴ� ���α׷��� �ϼ��϶�. Circle Ŭ������ �ϼ��϶�.
class Circle {
int radius; // ���� ������ ��
public:
void setRadius(int radius); // �������� �����Ѵ�.
double getArea(); // ������ �����Ѵ�.
};

�� 1�� ������ >> 5
�� 2�� ������ >> 6
�� 3�� ������ >> -5
�������� ���� �����Դϴ�. ���� �������� �ٽ� �Է��Ͻÿ�.
�� 3�� ������ >> 7
������ 100���� ū ���� 2���Դϴ�.


*/
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius; // ���� ������ ��
public:
	void setRadius(int radius) {
		this->radius = radius;
	} // �������� �����Ѵ�.
	double getArea() {
		return radius*radius*3.14;
	} // ������ �����Ѵ�.
};

int main() {
	Circle circle[3];
	int count = 0;
	int radius;
	while (count <= 2) {
		cout << "�� " << count + 1 << "�� ������ >>";
		cin >> radius;
		if (radius < 0)
		{
			cout << "�������� ���� �����Դϴ�. ���� �������� �ٽ� �Է��Ͻÿ�." << endl;
			continue;
		}
		Circle temp;
		temp.setRadius(radius);
		circle[count] = temp;
		count++;

	}
	count = 0;
	for (int i = 0; i < 3; i++) {
		if (circle[i].getArea() >= 100) {
			count++;
		}
	}
	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�." << endl;


	return 0;
}