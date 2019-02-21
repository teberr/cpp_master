/*
1)	다음은 2차원상의 한 점을 표현하는 Point 클래스가 있다.
class Point {
int x, y;
public:
Point(int x, int y) { this->x = x; this->y = y; 	}
int getX() { return x; }
int getY() { return y; }
protected:
void move(int x, int y) { this->x = x; this->y = y; }
};
①	다음 main(0 함수가 실행되도록 Point 클래스를 상속받는 ColorPoint 클래스를 작성하고, 전체 프로그램을 완성하라.
int main() {
ColorPoint cp(5, 5, "RED");
cp.setPoint(10, 20);
cp.setColor("BLUE");
cp.show();
}
②	다음 main() 함수가 실행되도록 Point 클래스를 상속 받는 ColorPoint 클래스를 작성하고, 전체프로그램을 완성하시오.
int main() {
ColorPoint zeroPoint; // BLACK에 (0, 0) 위치의 점
zeroPoint.show(); // zeroPoint를 출력한다.

ColorPoint cp(5, 5);
cp.setPoint(10, 20);
cp.setColor("BLUE");
cp.show(); // cp를 출력한다.
}


*/
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Point {
	int x, y;
public:
	Point(int x, int y) { this->x = x; this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};

class ColorPoint :public Point {
	string color;

public:
	ColorPoint(int x, int y):Point(x, y) {
	}
	ColorPoint(int x=0, int y=0, string s="BLACK"):Point(x,y) {
		color = s;
	}

	void setPoint(int x, int y) {
		move(x, y);
	}
	void setColor(string s) {
		color = s;
	}
	void show(){
		cout << "("<<this->getX() <<" , "<< this->getY() << " , "<<this->getColor() <<")"<< endl;
	}
	string getColor() {
		return color;
	}
};
int main() {
	ColorPoint zeroPoint; // BLACK에 (0, 0) 위치의 점
	zeroPoint.show(); // zeroPoint를 출력한다.

	ColorPoint cp(5, 5, "RED");
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();
}