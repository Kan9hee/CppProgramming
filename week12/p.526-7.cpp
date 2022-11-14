#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 1) { this->radius = radius; }
	int getRadius() { return radius; }
};

template<class T>
T bigger(T a, T b) {
	return max(a, b);
}

int main() {
	int a = 20, b = 50, c;
	c = bigger(a, b);
	cout << a << "�� " << b << "�� ū ���� " << c << endl;
	Circle waffle(10), pizza(20);
	c = bigger(waffle.getRadius(), pizza.getRadius());
	cout << "waffle�� pizza�� ū ���� �������� " << c << endl;
}