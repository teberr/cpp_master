//Q.char[12]배열 메모리를 new 연산자로 동적 할당하고 해제하는 코드 예를 작성하세요.

#include <iostream>

using namespace std;
int main(void) {

	char * arr = new char[12];

	for (int i =0;i<12 ; i++)
		arr[i] = 'a'+i;

	for (int i = 0; i<12; i++)
		cout << arr[i] << endl;


	delete[] arr;

	system("pause");
	return 0;
}