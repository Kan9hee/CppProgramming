#include<iostream>
#include<string>
#include<ctime>
#include<random>
using namespace std;

int main() {
	srand((unsigned)time(NULL));
	string temp;
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�.)" << endl;
	while (1) {
		cout << ">>";
		getline(cin, temp, '\n');
		if (temp == "exit")
			break;
		temp[rand() % temp.length()] = 'a' + rand() % 26;
		cout << temp << endl;
	}
}