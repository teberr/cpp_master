//Q.int에 대한 참조 형식을 매개변수로 받고 두 변수의 값을 교환하는 함수를 작성하세요. 함수 원형은 void Swap(int &a,int &b)입니다.

#include<iostream>

using namespace std;
void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;

}

int main(void) {

	int a = 10;
	int b = 20;

	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	swap(a, b);

	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	system("pause");



}