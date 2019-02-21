/*
1)	������ 2�������� �� ���� ǥ���ϴ� Point Ŭ������ �ִ�.
class Point {
int x, y;
public:
Point(int x, int y) { this->x = x; this->y = y; 	}
int getX() { return x; }
int getY() { return y; }
protected:
void move(int x, int y) { this->x = x; this->y = y; }
};
��	���� main(0 �Լ��� ����ǵ��� Point Ŭ������ ��ӹ޴� ColorPoint Ŭ������ �ۼ��ϰ�, ��ü ���α׷��� �ϼ��϶�.
int main() {
ColorPoint cp(5, 5, "RED");
cp.setPoint(10, 20);
cp.setColor("BLUE");
cp.show();
}
��	���� main() �Լ��� ����ǵ��� Point Ŭ������ ��� �޴� ColorPoint Ŭ������ �ۼ��ϰ�, ��ü���α׷��� �ϼ��Ͻÿ�.
int main() {
ColorPoint zeroPoint; // BLACK�� (0, 0) ��ġ�� ��
zeroPoint.show(); // zeroPoint�� ����Ѵ�.

ColorPoint cp(5, 5);
cp.setPoint(10, 20);
cp.setColor("BLUE");
cp.show(); // cp�� ����Ѵ�.
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
	ColorPoint zeroPoint; // BLACK�� (0, 0) ��ġ�� ��
	zeroPoint.show(); // zeroPoint�� ����Ѵ�.

	ColorPoint cp(5, 5, "RED");
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();
}