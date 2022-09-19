#include<iostream>
#include<string>
using namespace std;

int main() {
	string target;
	int count = 0, start = 0;

	cout << "문자열 입력>> ";
	getline(cin, target, '\n');

	for (int i = 0; i < target.length(); i++)
		if (target[i] == 'a')
			count++;
	cout << "문자 a는 " << count << "개 있습니다." << endl;

	count = 0;

	while (1) {
		start = target.find('a', start);
		if (start == -1)
			break;
		else {
			count++;
			start++;
		}
	}
	cout << "문자 a는 " << count << "개 있습니다." << endl;
}