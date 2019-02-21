/*
2)	BbaseArray Ŭ������ ������ ����.
class BaseArray {
private:
int capacity; // ���� �Ҵ�� �޸� �뷮
int *mem;
protected:
BaseArray(int capacity=100) {
this->capacity = capacity; mem = new int [capacity];
}
~BaseArray() { delete [] mem; }
void put(int index, int val) { mem[index] = val; }
int get(int index) { return mem[index]; }
int getCapacity() { return capacity; }
};
��	BaseArray�� ��ӹ޾� ťó�� �۵��ϴ� MyQueue Ŭ������ �ۼ��϶�.

int main() {
MyQueue mQ(100);
int n;
cout << "ť�� ������ 5���� ������ �Է��϶�>> ";
for(int i=0; i<5; i++) {
cin >> n;
mQ.enqueue(n); // ť�� ����
}
cout << "ť�� �뷮:" << mQ.capacity() << ", ť�� ũ��:" << mQ.length() << endl;
cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
while(mQ.length() != 0) {
cout << mQ.dequeue() << ' '; // ť���� �����Ͽ� ���
}
cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;
}
��	BaseArray�� ��ӹ޾� ����ó�� �۵��ϴ� MyStack Ŭ������ �ۼ��϶�.

int main() {
MyStack mStack(100);
int n;
cout << "���ÿ� ������ 5���� ������ �Է��϶�>> ";
for(int i=0; i<5; i++) {
cin >> n;
mStack.push(n); // ���ÿ� Ǫ��
}
cout << "���� �뷮:" << mStack.capacity() << ", ���� ũ��:" << mStack.length() << endl;
cout << "������ ��� ���Ҹ� ���Ͽ� ����Ѵ�>> ";
while(mStack.length() != 0) {
cout << mStack.pop() << ' '; // ���ÿ��� ��
}
cout << endl << "������ ���� ũ�� : " << mStack.length() << endl;
}

*/

#include<stdio.h>
#include"stdafx.h"
#include<string>
#include<iostream>
using namespace std;

class BaseArray {
private:
	int capacity; // ���� �Ҵ�� �޸� �뷮
	int *mem;
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity; mem = new int[capacity];
	}
	~BaseArray() { delete[] mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};
class MyQueue : public BaseArray {
	int start;
	int end;
public:
	MyQueue(int capacity = 100) :BaseArray(capacity) {
		start = 0;
		end = 0;
	}
	void enqueue(int n) {
		if (end > 99)
			cout << "there is no capacity!" << endl;
		put(end, n);
		end++;
	}
	int dequeue() {
		if (end == start)
			cout << "this is empty!" << endl;

		return get(start++);
	}
	int capacity() {
		return this->getCapacity()-end;
	}
	int length() {
		return end-start;
	}
};
class MyStack : public BaseArray {
	int pointer;
public:
	MyStack(int capacity):BaseArray(capacity) {
		pointer = -1;
	}
	void push(int n) {
		pointer++;
		put(pointer, n);
	}
	int pop() {
		if (pointer == -1)
			cout << "this is empty" << endl;
		int result = get(pointer);
		pointer--;
		return result;
	}
	int capacity() {
		return getCapacity()-length();
	}
	int length() {
		return pointer + 1;

	}

};
int main() {
	MyQueue mQ(100);
	int n;
	cout << "ť�� ������ 5���� ������ �Է��϶�>> ";
	for (int i = 0; i<5; i++) {
		cin >> n;
		mQ.enqueue(n); // ť�� ����
	}
	cout << "ť�� �뷮:" << mQ.capacity() << ", ť�� ũ��:" << mQ.length() << endl;
	cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
	while (mQ.length() != 0) {
		cout << mQ.dequeue() << ' '; // ť���� �����Ͽ� ���
	}
	cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;


	MyStack mStack(100);
	cout << "���ÿ� ������ 5���� ������ �Է��϶�>> ";
	for (int i = 0; i<5; i++) {
		cin >> n;
		mStack.push(n); // ���ÿ� Ǫ��
	}
	cout << "���� �뷮:" << mStack.capacity() << ", ���� ũ��:" << mStack.length() << endl;
	cout << "������ ��� ���Ҹ� ���Ͽ� ����Ѵ�>> ";
	while (mStack.length() != 0) {
		cout << mStack.pop() << ' '; // ���ÿ��� ��
	}
	cout << endl << "������ ���� ũ�� : " << mStack.length() << endl;
}
