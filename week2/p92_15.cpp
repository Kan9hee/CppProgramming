#include<iostream>
using namespace std;
int main() {
	int value1, value2;
	char tool;
	while (true) {
		cout << "? ";		
		cin >> value1 >> tool >> value2;
		if (tool == 't')
			break;
		switch (tool) {
		case'+':cout << value1 << "+" << value2 << "=" << value1 + value2 << endl; break;
		case'-':cout << value1 << "-" << value2 << "=" << value1 - value2 << endl; break;
		case'*':cout << value1 << "*" << value2 << "=" << value1 * value2 << endl; break;
		case'/':cout << value1 << "/" << value2 << "=" << value1 / value2 << endl; break;
		case'%':cout << value1 << "%" << value2 << "=" << value1 % value2 << endl; break;
		default:break;
		}
	}
	return 0;
}