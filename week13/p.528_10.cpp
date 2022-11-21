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
	Nation n[] = { Nation{"한국","서울"},Nation{"일본", "도쿄"},Nation{"중국","베이징"},
				Nation{"미국","워싱턴"},Nation{"영국", "런던"},Nation{"러시아","모스크바"},
				Nation{"우크라이나","헤르손"},Nation{"프랑스", "파리"},Nation{"독일","베를린"} };
	for (int i = 0; i < 9; i++)
		v.push_back(n[i]);
}

void gameData::add() {
	cout << "현재 " << v.size() << "개의 나라가 입력되어 있습니다." << endl;
	cout << "나라와 수도를 입력하세요(no no이면 입력 끝)" << endl;
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
		cout << v.at(q).getNation() << "의 수도는? ";
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
	cout << "***** 나라 수도 맞추기 게임 *****" << endl;
	while (true) {
		int option;
		cout << "정보 입력: 1, 퀴즈: 2, 종료: 3 >> ";
		cin >> option;
		if (option == 1)
			g.add();
		else if (option == 2)
			g.quiz();
		else if (option == 3)
			break;
	}
}