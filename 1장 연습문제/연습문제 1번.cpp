//Q1. 자신의 이름과 나이를 입력받고 "나의 이름은 홍길동이고, 20살입니다."라고 출력한느 프로그램을 작성하세요. 단, 반드시 std::cout, std::cin을 이용해 작성합니다.

#include <iostream>
#include <string>
#include<cstdio>
using namespace std;

int main() {

	string name;
	std::cout << "이름을 입력하세요" << std::endl;
	std::cin >> name;

	int age;
	std::cout << "나이를입력하세요" << std::endl;
	std::cin >> age;

	std::cout << "나의 이름은" << name << "이고, " << age << "살 입니다.";

	return 0;
}