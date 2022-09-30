#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius);
	double getArea();
};
void Circle::setRadius(int radius) { this->radius = radius; }
double Circle::getArea() { return 3.14 * radius * radius; }

void swap(Circle& c1, Circle& c2) {
	Circle temp = c1;
	c1 = c2;
	c2 = temp;
}

int main() {
	Circle c1, c2;

	c1.setRadius(10);
	c2.setRadius(5);
	cout << c1.getArea() << endl;
	cout << c2.getArea() << endl;

	swap(c1, c2);
	cout << c1.getArea() << endl;
	cout << c2.getArea() << endl;
}