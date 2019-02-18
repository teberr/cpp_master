/*
14)	������ ũ���� �迭�� ��ȯ�ϴ� ���� 2���� static ��� �Լ��� ���� ArrayUtility2 Ŭ������ �����,
�� Ŭ������ �̿��Ͽ� �Ʒ� ����� ���� ��µǵ��� ���α׷��� �ϼ��Ͻÿ�.
// s1�� s2�� ������ ���ο� �迭�� ���� �����ϰ� ������ ����
static int* concat(int s1[], int s2[], int size);

// s1���� s2�� �ִ� ���ڸ� ��� ������ ���ο� �迭�� ���� �����Ͽ� ����
// �����ϴ� �迭�� ũ��� retSize �� ����, retSize�� 0�� ��� NULL ����
static int* remove(int s1[], int s2[], int size, int&retSize);

���࿹:
������ 5�� �Է��϶�. �迭 x�� �����Ѵ�. >>  5  4  3  2  1
������ 5�� �Է��϶�. �迭 y�� �����Ѵ�. >>  3  2  1  0  -1
��ģ ���� �迭�� ����Ѵ�.
5  4  3  2  1  3  2  1  0  -1
�迭 x[]���� y[]�� �� ����� ����Ѵ�. ������ 2



*/
#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;
class ArrayUtility2 {

public:
	// s1�� s2�� ������ ���ο� �迭�� ���� �����ϰ� ������ ����
	static int* concat(int s1[], int s2[], int size) {
		int *result = new int[size*2];
		for (int i = 0; i < size; i++) {
			result[i] = s1[i];
		}
		for (int i = 0; i < size; i++) {
			result[i + size] = s2[i];
		}

		return result;
	}


	
	// s1���� s2�� �ִ� ���ڸ� ��� ������ ���ο� �迭�� ���� �����Ͽ� ����
	// �����ϴ� �迭�� ũ��� retSize �� ����, retSize�� 0�� ��� NULL ����
	static int* remove(int s1[], int s2[], int size, int&retSize) {
		int *resulttemp = new int[size * 2];
		int resultsize = 0;
		int count;
		for (int i = 0; i < size; i++) {
			count = 1;
			for (int j = 0; j < size; j++) {
				if (s2[j] == s1[i]) {//s2�� �����ϸ� count�� ������
					count = 0;
				}
			}
			if (count) {// s2�� �������� ���� �� ��
				resulttemp[resultsize] = s1[i];
				resultsize++;
			}
		}
		if (resultsize == 0) {
			return NULL;
		}
		else {
			int *result = new int[resultsize];
			for (int i = 0; i < resultsize; i++) {
				result[i] = resulttemp[i];
			}
			delete[] resulttemp;
			retSize = resultsize;
			return result;

		}
	}
};
int main() {
	int s1[5];
	int s2[5];
	ArrayUtility2 util;
	int size;
		cout << "������ 5�� �Է��϶�. �迭x�� �����Ѵ�. >>";
	for (int i = 0; i < 5; i++)
		cin >> s1[i];
	cout << "������ 5�� �Է��϶�. �迭y�� �����Ѵ�. >>";
	for (int i = 0; i < 5; i++)
		cin >> s2[i];

	cout << "��ģ ���� �迭�� ����Ѵ�." << endl;
	int* s3 = util.concat(s1, s2, 5);
	for (int i = 0; i < 10; i++)
		cout << s3[i] << " ";
	cout << endl;
	int* s4=util.remove(s1, s2, 5, size);
	cout << "�迭 x[]���� y[]�� �� ����� ����Ѵ�. ������" << size << endl;
	for (int i = 0; i < size; i++) {
		cout << s4[i] << " ";
	}
	
}