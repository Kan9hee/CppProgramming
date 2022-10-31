#include <iostream>
using namespace std;

class BaseArray {
private:
	int capacity;
	int* mem;
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity; mem = new int[capacity];
	}
	~BaseArray() { delete[] mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyQueue :public BaseArray {
	int head,tail;
public:
	MyQueue(int capacity) :BaseArray(capacity) { this->head = 0; this->tail = 0; }
	void enqueue(int n) {
		put(head, n);
		head++;
	}
	int capacity() { return getCapacity(); }
	int length() { return head-tail; }
	int dequeue() { return get(tail++); }
};

class MyStack :public BaseArray {
	int size;
public:
	MyStack(int capacity) :BaseArray(capacity) { this->size = 0; }
	void push(int n) {
		put(size, n);
		size++;
	}
	int capacity() { return getCapacity(); }
	int length() { return size; }
	int pop() { return get(--size); }
};

int main() {
	MyStack mStack(100);
	int n;
	cout << "���ÿ� ������ 5���� ������ �Է��϶�>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mStack.push(n);
	}
	cout << "���� �뷮:" << mStack.capacity() << ", ���� ũ��:" << mStack.length() << endl;
	cout << "������ ��� ���Ҹ� ���Ͽ� ����Ѵ�>> ";
	while (mStack.length() != 0) {
		cout << mStack.pop() << ' ';
	}
	cout << endl << "������ ���� ũ�� : " << mStack.length() << endl;
}