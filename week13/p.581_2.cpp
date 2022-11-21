#include<iostream>
#include<string>
using namespace std;

int main() {
	char temp;
	int count = 0;
	while(true) {
		cin.get(temp);
		if (cin.eof() || temp == '\n')
			break;
		else if (temp == ' ')
			count++;
	}
	cout << count << endl;
}