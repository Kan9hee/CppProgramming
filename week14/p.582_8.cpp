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
	cout << "������: ";
	stream >> a.radius;
	cout << "�̸�: ";
	stream >> a.name;
	return stream;
}

ostream& operator<<(ostream& stream, Circle a) {
	stream << "(������" << a.radius << "�� " << a.name << ")";
	return stream;
}

int main() {
	Circle d, w;
	cin >> d >> w;
	cout << d << w << endl;
}