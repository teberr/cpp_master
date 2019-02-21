/*
4)	������ ������ ��ȯ�ϴ� �߻� Ŭ���� Converter �̴�.
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
cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
cout << getSourceString() << "�� �Է��ϼ���>> ";
cin >> src;
cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
}
};
Convert Ŭ������ ��ӹ޾� �޷��� ��ȭ�� ȯ���ϴ� WonToDollar Ŭ������
km�� mile�� ��ȯ�ϴ� KmToMile Ŭ������ �ۼ��϶�. �޷��� ��ȭ�� ȯ���ϴ� WonToDollar Ŭ������ �ۼ��Ͻÿ�.

int main() {
WonToDollar wd(1010); // 1 �޷��� 1010��
wd.run();
KmToMile toMile(1.609344); // 1mile�� 1.609344 Km
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
		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
		cout << getSourceString() << "�� �Է��ϼ���>> ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
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
	WonToDollar wd(1010); // 1 �޷��� 1010��
	wd.run();
	KmToMile toMile(1.609344); // 1mile�� 1.609344 Km
	toMile.run();
}