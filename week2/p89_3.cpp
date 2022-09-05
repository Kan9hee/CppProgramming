#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int v1, v2;
	cout << "input 2 values: ";
	cin >> v1 >> v2;
	int MAX = (v1 > v2) ? v1 : v2;
	cout << "max value is: " << MAX << endl;
	return 0;
}