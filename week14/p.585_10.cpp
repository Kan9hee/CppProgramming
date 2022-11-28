#include<iostream>
#include<string>
using namespace std;

istream& prompt(istream& stream) {
	cout << "¾ÏÈ£?";
	return stream;
}

int main() {
	string password;
	while (true) {
		cin >> prompt >> password;
		if (password == "C++") {
			cout << "login success!!" << endl;
			break;
		}
		else
			cout << "login failed" << endl;
	}
}