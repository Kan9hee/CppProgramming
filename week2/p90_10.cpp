#include<iostream>
#include<string>
using namespace std;
int main() {
	string name;
	cout << "input sentence>>";
	getline(cin, name);
	for (int i = 0; i <= name.length(); i++)
		cout << name.substr(0, i) << endl;
	return 0;
}