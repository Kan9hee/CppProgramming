#include<iostream>
#include<string>
using namespace std;

int main() {
	string target;
	cout << "�Ʒ��� �� ���� �Է��Ͻÿ�.(exit �Է½� ����)"<<endl;
	while (1) {
		cout << ">>";
		getline(cin, target, '\n');
		if (target == "exit")
			break;
		for(int i=target.length()-1;i>=0;i--)
			cout<<target[i];;
		cout << endl;
	}
}