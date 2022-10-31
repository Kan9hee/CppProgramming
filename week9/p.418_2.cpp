#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; };
};

class NamedCircle : public Circle {
	string name;
public:
	NamedCircle() {}
	NamedCircle(int radius, string name):Circle(radius) {
		this->name = name;
	}
	string getName() { return name; }
	void show() {
		cout << "반지름이 " << getRadius() << "인 " << name << endl;
	}
};

int main() {
	NamedCircle pizza[5];
	string temp;
	NamedCircle biggest;
	cout << "5개의 정수 반지름과 원의 이름을 입력하세요" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">> ";
		getline(cin, temp, '\n');
		int empty = temp.find(" ");
		NamedCircle exam(stoi(temp.substr(0, empty)), temp.substr(empty + 1));
		pizza[i] = exam;
		biggest = (biggest.getArea() > pizza[i].getArea()) ? biggest : pizza[i];
	}
	cout << "가장 면적이 큰 피자는 " << biggest.getName() << "입니다" << endl;
}