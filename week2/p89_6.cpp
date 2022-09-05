#include<iostream>
#include<string>
using namespace std;
int main() {
	string line1,line2;
	cout << "input password: ";
	getline(cin, line1);
	cout << "one more input password: ";
	getline(cin, line2);
	if (line1.compare(line2) == 0)
		cout << "correct" << endl;
	else
		cout << "incorrect" << endl;
	return 0;
}