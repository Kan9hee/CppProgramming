#include<iostream>
using namespace std;

class Color {
private:
	int r, g, b;
public:
	Color(int r=0, int g=0, int b=0){
		this->r = r;
		this->g = g;
		this->b = b;
	}
	void show() { cout << r << " " << g << " " << b << endl; }
	Color operator+(Color b) {
		Color temp;
		temp.r = this->r + b.r;
		temp.g = this->g + b.g;
		temp.b = this->b + b.b;
		return temp;
	}
	bool operator==(Color temp) {
		return this->r == temp.r && this->b == temp.b;
	}
};

int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchisia(255, 0, 255);
	if (c == fuchisia)
		cout << "보라색 맞음" << endl;
	else
		cout << "보라색 아님" << endl;
	return 0;
}