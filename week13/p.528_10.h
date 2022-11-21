#pragma once
#include<string>
#include<vector>
#include<cstdlib>
#include<ctime>
#include<algorithm>
using namespace std;

class Nation {
private:
	string nation;
	string capital;
public:
	Nation(string nation, string capital);
	string getNation();
	string getCapital();
};

class gameData {
private:
	vector<Nation>v;
public:
	gameData();
	void add();
	void quiz();
};