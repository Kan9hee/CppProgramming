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
	Circle cl[3];
	int temp,count=0;
	for (int i = 0; i < 3; i++) {
		cout << "�� "<< i+1 <<"�� ������ >> ";
		cin >> temp;
		cl[i].setRadius(temp);
	}
	for(int i=0;i<3;i++)
		if (cl[i].getArea() > 100)
			count++;
	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�" << endl;
	delete cl;
	return 0;
}