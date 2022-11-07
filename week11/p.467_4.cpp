#include <iostream>
#include<string>
using namespace std;

class LoopAdder {
	string name;
	int x, y, sum;
	void read();
	void write();
protected:
	LoopAdder(string name = "") { this->name = name; }
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0;
public:
	void run();
};

class ForLoopAdder :public LoopAdder {
	int calculate() {
		int result = 0;
		for (int i = getX(); i <= getY(); i++)
			result += i;
		return result;
	}
public:
	ForLoopAdder(string name) :LoopAdder(name) {}
};

class WhileLoopAdder:public LoopAdder {
	int calculate() {
		int temp = getX(), result = 0;
		while (temp <= getY())
			result += temp++;
		return result;
	}
public:
	WhileLoopAdder(string name) :LoopAdder(name) {}
};

class DoWhileLoopAdder :public LoopAdder {
	int calculate() {
		int temp = getX(), result = 0;
		do {
			result += temp++;
		} while (temp <= getY());
		return result;
	}
public:
	DoWhileLoopAdder(string name) :LoopAdder(name) {}
};

void LoopAdder::read() {
	cout << name << ":" << endl;
	cout << "처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요 >> ";
	cin >> x >> y;
}
void LoopAdder::write() {
	cout << x << "에서 " << y << "까지의 합 = " << sum << " 입니다" << endl;
}

void LoopAdder::run() {
	read();
	sum = calculate();
	write();
}

int main() {
	ForLoopAdder forLoop("For Loop");
	WhileLoopAdder whileLoop("While Loop");
	DoWhileLoopAdder doWhileLoop("Do while Loop");

	forLoop.run();
	whileLoop.run();
	doWhileLoop.run();
}