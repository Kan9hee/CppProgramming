#include<iostream>
#include<string>
using namespace std;

int main() {
	string target;
	cout << "아래에 한 줄을 입력하시오.(exit 입력시 종료)"<<endl;
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