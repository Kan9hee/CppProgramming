#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	cout << left;
	for(int i=0;i<4;i++)
		cout << setw(8) << "DEC" << setw(8) << "HEXA" << setw(8) << "CHAR";
	cout << endl;
	for (int i = 0; i < 128; i++) {
		cout << setw(8) << dec <<i;
		cout << setw(8) << hex << i;
		cout << setw(8) << (isprint(i)? (char)i : '.');
		if ((i + 1) % 4 == 0)
			cout << endl;
	}

}