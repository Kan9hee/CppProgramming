#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cout << "�Ʒ��� ���ڿ��� �Է��ϼ���. ��ĭ�� �־ �˴ϴ�.(�ѱ۾ȵ�)" << endl;
	getline(cin, s, '\n');
	int len = s.length();
	for (int i = 0; i < len; i++) {
		string sub = s.substr(0, len-1);
		string last = s.substr(len-1, 1);
		s = last+sub;
		cout << s << endl;
	}
}