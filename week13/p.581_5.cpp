#include<iostream>
#include<string>
using namespace std;

int main() {
	string cmd;
	cout << "getline()���� ���ڿ� ����" << endl;
	while (true) {
		cout << "�����Ϸ��� exit�� �Է��Ͻÿ� >> ";
		getline(cin, cmd);
		if (cmd == "exit")
			break;
	}
	cout << "���α׷��� �����մϴ�..." << endl;
}