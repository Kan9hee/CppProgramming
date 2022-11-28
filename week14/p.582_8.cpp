#include<iostream>
using namespace std;

class Circle {
	string name;
	int radius;
public:
	Circle(int radius = 1, string name = "") {
		this->radius = radius;
		this->name = name;
	}
	friend istream& operator>>(istream& stream, Circle&a);
	friend ostream& operator<<(ostream& stream, Circle temp);
};
istream& operator>>(istream& stream, Circle&a) {
	cout << "반지름: ";
	stream >> a.radius;
	cout << "이름: ";
	stream >> a.name;
	return stream;
}

ostream& operator<<(ostream& stream, Circle a) {
	stream << "(반지름" << a.radius << "인 " << a.name << ")";
	return stream;
}

int main() {
	Circle d, w;
	cin >> d >> w;
	cout << d << w << endl;
}