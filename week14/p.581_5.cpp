#include<iostream>
#include<string>
using namespace std;

int main() {
	string cmd;
	cout << "���ڸ� �н��ϴ�." << endl;
	while (true) {
		cout << "�����Ϸ��� exit�� �Է��ϼ��� >> ";
		getline(cin, cmd);
		if (!cmd.compare("exit"))
			break;
	}
}