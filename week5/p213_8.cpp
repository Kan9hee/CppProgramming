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

int main() {
	Circle cl;
	int find,temp, count = 0;
	cout << "���� ���� >>";
	cin >> find;
	for (int i = 1; i <= find; i++) {
		cout << "�� " << i << "�� ������ >> ";
		cin >> temp;
		cl.setRadius(temp);
		if (cl.getArea() > 100)
			count++;
	}
	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�" << endl;
	return 0;
}