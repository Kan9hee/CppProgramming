#include<iostream>
#include"p.530.h"

void Map::addMap() {
	string key, value;
	cout << "키와 값>> ";
	cin >> key >> value;
	if(m.find(key)==m.end())
		m.insert(make_pair(key, value));
}

void Map::getValue() {
	string temp;
	cout << "키>> ";
	cin >> temp;
	if (m.find(temp) == m.end())
		cout << "결과 없음" << endl;
	else
		cout << "값: " << m.at(temp) << endl;
}

int main() {
	Map program;
	cout << "***** 점수관리 프로그램 *****" << endl;
	while (true) {
		int option;
		cout << "입력:1, 조회:2, 종료:3 >> ";
		cin >> option;
		if (option == 1)
			program.addMap();
		else if (option == 2)
			program.getValue();
		else if (option == 3)
			break;
	}
}