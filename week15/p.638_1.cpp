#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	ifstream fin("c:\\cpptemp\\test.txt");
	if (!fin) {
		cout << "실패";
		return 0;
	}

	ofstream fout("c:\\cpptemp\\out.txt");
	if (!fout) {
		cout << "실패";
		return 0;
	}

	string line;
	int no = 1;
	while (getline(fin, line)) {
		cout << line << endl;
		fout << line << endl;
	}
	fin.close();
	fout.close();
}