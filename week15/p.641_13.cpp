#include<iostream>
#include<fstream>
#include<vector>
#include<string>

using namespace std;

void fileRead(vector<string>& v, ifstream& fin) {
	string line;
	while (getline(fin, line))
		v.push_back(line);
}

void search(vector<string>& v, string word) {
	for (int i = 0; i < v.size(); i++) {
		int index = v[i].find(word);
		if (index == 0)
			cout << v[i] << endl;
	}
}

int main() {
	vector<string>v;
	ifstream fin("C:\\cpptemp\\words.txt");
	if (!fin) {
		cout << "����";
		return 0;
	}

	fileRead(v, fin);
	fin.close();

	string word;
	while (true) {
		cout << "�˻��� �ܾ �Է��Ͻÿ�: ";
		getline(cin, word);
		if (word == "exit")
			break;
		search(v, word);
	}
}