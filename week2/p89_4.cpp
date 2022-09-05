#include<iostream>
using namespace std;

double MAX_returner(double v[]) {
	double MAX=v[0];
	for (int i = 0; i < 4; i++)
		MAX = (v[i] > v[i + 1]) ? v[i] : v[i + 1];
	return MAX;
}

int main() {
	double value[5];
	cout << "input 5 double type values: ";
	for (int i = 0; i < 5; i++)
		cin >> value[i];
	cout << "max value is: " << MAX_returner(value) << endl;
	return 0;
}