#include<iostream>
#include<string>
#include<ctime>
#include<random>
using namespace std;

int main() {
	srand((unsigned)time(NULL));
	string temp;
	cout << "아래에 한 줄을 입력하세요.(exit을 입력하면 종료합니다.)" << endl;
	while (1) {
		cout << ">>";
		getline(cin, temp, '\n');
		if (temp == "exit")
			break;
		temp[rand() % temp.length()] = 'a' + rand() % 26;
		cout << temp << endl;
	}
}