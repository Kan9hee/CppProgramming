#include<iostream>
#include<string>
using namespace std;

int main() {
	string cmd;
	cout << "getline()으로 문자열 읽음" << endl;
	while (true) {
		cout << "종료하려면 exit을 입력하시오 >> ";
		getline(cin, cmd);
		if (cmd == "exit")
			break;
	}
	cout << "프로그램을 종료합니다..." << endl;
}