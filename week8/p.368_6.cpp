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
		cout << "{ ";
		for (int i = 0; i < 4; i++)
			cout << list[i] << " ";
		cout << "}" << endl;
	}
	Matrix operator+(Matrix b) {
		Matrix temp;
		for (int i = 0; i < 4; i++)
			temp.list[i] = this->list[i] + b.list[i];
		return temp;
	}
	Matrix& operator+=(Matrix temp) {
		for (int i = 0; i < 4; i++)
			this->list[i] += temp.list[i];
		return *this;
	}
	bool operator==(Matrix temp) {
		for (int i = 0; i < 4; i++)
			if (this->list[i] != temp.list[i])
				return false;
		return true;
	}
};

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show();
	b.show();
	c.show();
	if (a == c)
		cout << "a and c are the same" << endl;
	return 0;
}