#include <iostream>
using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0;
	virtual bool pop(int& n) = 0;
	virtual int getsize() = 0;
};

class IntStack :public AbstractStack {
	int length, top;
	int* stack;
public:
	IntStack(int size) {
		top = 0;
		this->length = size;
		stack = new int[this->length];
	}
	virtual bool push(int n) {
		if (top == length)
			return false;
		stack[top++] = n;
		return true;
	}
	virtual bool pop(int& n) {
		if (top == 0)
			return false;
		n = stack[--top];
		return true;
	}
	virtual int getsize(){return top;}
};

int main() {
	IntStack a(5);
	for (int i = 0; i < 10; i++) {
		if (a.push(i)) cout << "push 성공" << endl;
		else cout << "스택 full" << endl;
	}

	int n;
	for (int i = 0; i < 10; i++) {
		if (a.pop(n)) cout << "pop 성공 " << n << endl;
		else cout << "스택 empty" << endl;
	}
}