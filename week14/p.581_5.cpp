#include<iostream>
#include<string>
using namespace std;

int main() {
	string cmd;
	cout << "문자를 읽습니다." << endl;
	while (true) {
		cout << "종료하려면 exit을 입력하세요 >> ";
		getline(cin, cmd);
		if (!cmd.compare("exit"))
			break;
	}
}