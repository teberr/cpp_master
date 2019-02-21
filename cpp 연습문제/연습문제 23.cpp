/*
4)	다음은 단위를 변환하는 추상 클래스 Converter 이다.
class Converter {
protected:
double ratio;
virtual double convert(double src)=0;
virtual string getSourceString()=0;
virtual string getDestString()=0;
public:
Converter(double ratio) {	this->ratio = ratio;	}
void run() {
double src;
cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
cout << getSourceString() << "을 입력하세요>> ";
cin >> src;
cout << "변환 결과 : " << convert(src) << getDestString() << endl;
}
};
Convert 클래스를 상속받아 달러를 원화로 환산하는 WonToDollar 클래스와
km를 mile로 변환하는 KmToMile 클래스를 작성하라. 달러를 원화로 환산하는 WonToDollar 클래스를 작성하시오.

int main() {
WonToDollar wd(1010); // 1 달러에 1010원
wd.run();
KmToMile toMile(1.609344); // 1mile은 1.609344 Km
toMile.run();
}


*/

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0;
	virtual string getSourceString() = 0;
	virtual string getDestString() = 0;
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
		cout << getSourceString() << "을 입력하세요>> ";
		cin >> src;
		cout << "변환 결과 : " << convert(src) << getDestString() << endl;
	}
};
class WonToDollar : public Converter {
public:
	WonToDollar(int n) :Converter(n) {}
	double convert(double src){
		return src*ratio;
	}
	string getSourceString(){
		return "dollar";
	}
	string getDestString(){
		return "Won";
	}
};
class KmToMile : public Converter {
public:
	KmToMile(double d) :Converter(d) {}
	double convert(double src) {
		return src*ratio;
	}
	string getSourceString() {
		return "Km";
	}
	string getDestString() {
		return "Mile";
	}
};

int main() {
	WonToDollar wd(1010); // 1 달러에 1010원
	wd.run();
	KmToMile toMile(1.609344); // 1mile은 1.609344 Km
	toMile.run();
}