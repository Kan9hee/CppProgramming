#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	cout << left;
	cout << setw(15) <<"NUMBER"<< setw(15) <<"SQUARE"<< setw(15) <<"SQUARE ROOT" << endl;
	for (int i = 0; i < 50; i += 5) {
		cout << setw(15) << setfill('_') << i;
		cout << setw(15) << setfill('_') << i*i;
		cout << setw(15) << setfill('_') << setprecision(3)<<sqrt(i)<<endl;
	}
	
}