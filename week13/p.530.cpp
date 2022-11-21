#include<iostream>
#include"p.530.h"

void Map::addMap() {
	string key, value;
	cout << "Ű�� ��>> ";
	cin >> key >> value;
	if(m.find(key)==m.end())
		m.insert(make_pair(key, value));
}

void Map::getValue() {
	string temp;
	cout << "Ű>> ";
	cin >> temp;
	if (m.find(temp) == m.end())
		cout << "��� ����" << endl;
	else
		cout << "��: " << m.at(temp) << endl;
}

int main() {
	Map program;
	cout << "***** �������� ���α׷� *****" << endl;
	while (true) {
		int option;
		cout << "�Է�:1, ��ȸ:2, ����:3 >> ";
		cin >> option;
		if (option == 1)
			program.addMap();
		else if (option == 2)
			program.getValue();
		else if (option == 3)
			break;
	}
}