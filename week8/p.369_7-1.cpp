#include<iostream>
using namespace std;

class Matrix {
private:
	int list[4];
public:
	Matrix(int t1 = 0, int t2 = 0, int t3 = 0, int t4 = 0) {
		list[0] = t1;
		list[1] = t2;
		list[2] = t3;
		list[3] = t4;
	}
	void show() {
		cout << "Matrix = { ";
		for (int i = 0; i < 4; i++)
			cout << list[i] << " ";
		cout << "}" << endl;
	}
	void operator>>(int* temp) {
		for (int i = 0; i < 4; i++)
			temp[i] = this->list[i];
	}
	void operator<<(int* temp) {
		for (int i = 0; i < 4; i++)
			this->list[i] = temp[i];
	}
};

int main() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1,2,3,4 };
	a >> x;
	b << y;
	for (int i = 0; i < 4; i++)
		cout << x[i] << " ";
	cout << endl;
	b.show();
	return 0;
}