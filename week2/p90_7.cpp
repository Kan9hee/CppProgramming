#include<iostream>
#include<string>
using namespace std;
int main() {
	string input;
	while (true) {
		cout << "if you input ""YES"", the loop ends: ";
		getline(cin, input);
		if (input.compare("yes") == 0)
			break;
	}
	return 0;
}