#include<iostream>
using namespace std;

istream& pos(istream&stream) {
	cout << "À§Ä¡´Â? ";
	return stream;
}

int main() {
	int x, y;
	cin >> pos >> x;
	cin >> pos >> y;
	cout << x << ',' << y << endl;
}