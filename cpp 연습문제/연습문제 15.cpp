/*
15)	������ ���� static ����� ���� Random Ŭ������ �ϼ��϶�. 
�׸��� Random Ŭ������ �̿��Ͽ� ������ ���� ������ ���� ����ϴ� main() �Լ��� �ۼ��϶�. 
main()���� RandomŬ������ seed() �Լ��� Ȱ���϶�


class Random {
public:
// �׻� �ٸ� �������� �߻���Ű�� ���� seed�� �����ϴ� �Լ�
static void seed() { srand((unsigned)time(0)); } // ���� ����
static int nextInt(int min=0, int max=32767); //min�� max ������ ���� ���� ����
static char nextAlphabet();
static double nextDouble(); // 0���� ũ�ų� ���� 1���� ���� �Ǽ� ����
};

���࿹)
1���� 100���� ������ ���� 10���� ����մϴ�.
1 96 81 59 23 61 35 1 86 12
���ĺ��� �����ϰ� 10�� ����մϴ�.
K h r s O P I N x A
������ �Ǽ� 10���� ����մϴ�.
0.198373  0.832232  0.632341  0.480230  0.397142
0.062807  0.266891  0.934193  0.379839  0.501923

*/

#include<stdio.h>
#include"stdafx.h"
#include <iostream>
#include<string>
#include <stdlib.h>
#include<ctime>
using namespace std;

class Random {
public:
	Random() {
		seed();
	}

	// �׻� �ٸ� �������� �߻���Ű�� ���� seed�� �����ϴ� �Լ�
	static void seed() { srand((unsigned)time(0)); } // ���� ����
	static int nextInt(int min = 0, int max = 32767) { //min�� max ������ ���� ���� ����
		int n = ((double)rand() / RAND_MAX*(max - min) + min);
		return n;
	}
	static char nextAlphabet() {
		//65~90 97~122
			char n;
			if (rand() < 16384)
				n = nextInt(65, 90);
			else {
				n = nextInt(97, 122);
			}
			return n;
	}
	static double nextDouble() { // 0���� ũ�ų� ���� 1���� ���� �Ǽ� ����
		double d = (double)rand() / RAND_MAX;
		return d;
	}
};

int main(void) {
	Random rand;
	cout << "1���� 100���� ������ ���� 10���� ����մϴ�." << endl;
	for(int i=0;i<10;i++)
		cout << rand.nextInt(1, 100)<<" " ;
	cout << endl;
	cout << "���ĺ��� �����ϰ� 10�� ����մϴ�." << endl;
	for(int i=0;i<10;i++)
		cout << rand.nextAlphabet() << " ";
	cout << endl;
	cout << "������ �Ǽ��� 10�� ����մϴ�." << endl;
	for (int i = 0; i < 10; i++) {
		if (i ==5)
			cout << endl;
		cout << rand.nextDouble() << " ";
	}
	cout << endl;

}