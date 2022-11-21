#include<iostream>
#include"p.528_10.h"

Nation::Nation(string nation, string capital) {
	this->nation = nation;
	this->capital = capital;
}

string Nation::getNation() {
	return nation;
}

string Nation::getCapital() {
	return capital;
}

gameData::gameData() {
	Nation n[] = { Nation{"�ѱ�","����"},Nation{"�Ϻ�", "����"},Nation{"�߱�","����¡"},
				Nation{"�̱�","������"},Nation{"����", "����"},Nation{"���þ�","��ũ��"},
				Nation{"��ũ���̳�","�츣��"},Nation{"������", "�ĸ�"},Nation{"����","������"} };
	for (int i = 0; i < 9; i++)
		v.push_back(n[i]);
}

void gameData::add() {
	cout << "���� " << v.size() << "���� ���� �ԷµǾ� �ֽ��ϴ�." << endl;
	cout << "����� ������ �Է��ϼ���(no no�̸� �Է� ��)" << endl;
	while (true) {
		string n, c;
		bool check = true;
		cout << v.size()+1 << ">>";
		cin >> n >> c;
		if (n == "no" && c == "no")
			break;
		for (int i = 0; i < v.size(); i++)
			if (v.at(i).getNation() == n) {
				check = false;
				cout << "already exists!!" << endl;
				break;
			}
		if (check)
			v.push_back(Nation{ n,c });
	}
}

void gameData::quiz() {
	srand((unsigned)time(NULL));
	while(true) {
		string answer;
		int q = rand() % v.size();
		cout << v.at(q).getNation() << "�� ������? ";
		cin >> answer;
		if (answer == "exit")
			break;
		else if (v.at(q).getCapital() == answer)
			cout << "Correct!" << endl;
		else
			cout << "Fail..." << endl;
	}
}

int main() {
	gameData g;
	cout << "***** ���� ���� ���߱� ���� *****" << endl;
	while (true) {
		int option;
		cout << "���� �Է�: 1, ����: 2, ����: 3 >> ";
		cin >> option;
		if (option == 1)
			g.add();
		else if (option == 2)
			g.quiz();
		else if (option == 3)
			break;
	}
}