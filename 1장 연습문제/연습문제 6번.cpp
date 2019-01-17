// Q. 다음과 같은 int 배열을 오름차순으로 정렬한 후 화면에 결과를 출력하는 프로그램을 작성하세요. 정렬 방법은 상관없습니다.
// int aList[5] = {10, 20, 30, 40, 50,};
// 단 화면에 배열 내용을 출력할 때는 반드시 '범위 기반 for문' 을 사용해야 합니다.

#include <iostream>
using namespace std;

int main(void) {

	int aList[5] = { 20,10,40,30,50 };

	for (auto &n : aList)
		cout << n << ' ';

	cout << endl;

	for (int i = 0; i < 5; i++) {
		int min = i;
		for (int j = i; j < 5; j++)
		{
			
			if (aList[min] > aList[j]) {
				min = j;

			}
		}
		int temp = aList[i];
		aList[i] = aList[min];
		aList[min] = temp;
	}
	for (auto &n : aList)
		cout << n << ' ';
	system("pause");
}