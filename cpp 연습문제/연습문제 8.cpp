/*
8)	다음과 같이 원을 추상화한 Circle 클래스가 있다. Circle 클래스와 main() 함수를 작성하고
3개의 Circle 객체를 가진 배열을 선언하고,
반지름 값을 입력 받아 면적이 100보다 큰 원의 개수를 출력하는 프로그램을 완성하라. Circle 클래스를 완성하라.
class Circle {
int radius; // 원의 반지름 값
public:
void setRadius(int radius); // 반지름을 설정한다.
double getArea(); // 면적을 리턴한다.
};

원 1의 반지름 >> 5
원 2의 반지름 >> 6
원 3의 반지름 >> -5
반지름의 값이 음수입니다. 원의 반지름을 다시 입력하시오.
원 3의 반지름 >> 7
면적이 100보다 큰 원은 2개입니다.


*/
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius; // 원의 반지름 값
public:
	void setRadius(int radius) {
		this->radius = radius;
	} // 반지름을 설정한다.
	double getArea() {
		return radius*radius*3.14;
	} // 면적을 리턴한다.
};

int main() {
	Circle circle[3];
	int count = 0;
	int radius;
	while (count <= 2) {
		cout << "원 " << count + 1 << "의 반지름 >>";
		cin >> radius;
		if (radius < 0)
		{
			cout << "반지름의 값이 음수입니다. 원의 반지름을 다시 입력하시오." << endl;
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
	cout << "면적이 100보다 큰 원은 " << count << "개 입니다." << endl;


	return 0;
}