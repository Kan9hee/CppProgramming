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
	cout << "원의 개수 >>";
	cin >> find;
	for (int i = 1; i <= find; i++) {
		cout << "원 " << i << "의 반지름 >> ";
		cin >> temp;
		cl.setRadius(temp);
		if (cl.getArea() > 100)
			count++;
	}
	cout << "면적이 100보다 큰 원은 " << count << "개 입니다" << endl;
	return 0;
}