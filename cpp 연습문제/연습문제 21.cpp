/*
2)	BbaseArray 클래스는 다음과 같다.
class BaseArray {
private:
int capacity; // 동적 할당된 메모리 용량
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
①	BaseArray를 상속받아 큐처럼 작동하는 MyQueue 클래스를 작성하라.

int main() {
MyQueue mQ(100);
int n;
cout << "큐에 삽입할 5개의 정수를 입력하라>> ";
for(int i=0; i<5; i++) {
cin >> n;
mQ.enqueue(n); // 큐에 삽입
}
cout << "큐의 용량:" << mQ.capacity() << ", 큐의 크기:" << mQ.length() << endl;
cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";
while(mQ.length() != 0) {
cout << mQ.dequeue() << ' '; // 큐에서 제거하여 출력
}
cout << endl << "큐의 현재 크기 : " << mQ.length() << endl;
}
②	BaseArray를 상속받아 스택처럼 작동하는 MyStack 클래스를 작성하라.

int main() {
MyStack mStack(100);
int n;
cout << "스택에 삽입할 5개의 정수를 입력하라>> ";
for(int i=0; i<5; i++) {
cin >> n;
mStack.push(n); // 스택에 푸시
}
cout << "스택 용량:" << mStack.capacity() << ", 스택 크기:" << mStack.length() << endl;
cout << "스택의 모든 원소를 팝하여 출력한다>> ";
while(mStack.length() != 0) {
cout << mStack.pop() << ' '; // 스택에서 팝
}
cout << endl << "스택의 현재 크기 : " << mStack.length() << endl;
}

*/

#include<stdio.h>
#include"stdafx.h"
#include<string>
#include<iostream>
using namespace std;

class BaseArray {
private:
	int capacity; // 동적 할당된 메모리 용량
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
	cout << "큐에 삽입할 5개의 정수를 입력하라>> ";
	for (int i = 0; i<5; i++) {
		cin >> n;
		mQ.enqueue(n); // 큐에 삽입
	}
	cout << "큐의 용량:" << mQ.capacity() << ", 큐의 크기:" << mQ.length() << endl;
	cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";
	while (mQ.length() != 0) {
		cout << mQ.dequeue() << ' '; // 큐에서 제거하여 출력
	}
	cout << endl << "큐의 현재 크기 : " << mQ.length() << endl;


	MyStack mStack(100);
	cout << "스택에 삽입할 5개의 정수를 입력하라>> ";
	for (int i = 0; i<5; i++) {
		cin >> n;
		mStack.push(n); // 스택에 푸시
	}
	cout << "스택 용량:" << mStack.capacity() << ", 스택 크기:" << mStack.length() << endl;
	cout << "스택의 모든 원소를 팝하여 출력한다>> ";
	while (mStack.length() != 0) {
		cout << mStack.pop() << ' '; // 스택에서 팝
	}
	cout << endl << "스택의 현재 크기 : " << mStack.length() << endl;
}
