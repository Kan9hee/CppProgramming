#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	ifstream fin("C:\\users\\m520\\desktop\\project2\\p.638_1.cpp");
	if (!fin) {
		cout << "실패";
		return 0;
	}

	ofstream fout("c:\\cpptemp\\out3.txt");
	if (!fout) {
		cout << "실패";
		return 0;
	}

	string line;
	bool check = false;
	while (getline(fin, line)) {
		for(int i=0;i<line.size();i++)
			if (line[i] == '/' && line[i + 1] == '/') {
				check = true;
				break;
			}
		if (check == true) {
			check = false;
			continue;
		}
		cout << line << endl;
	}
	fin.close();
	fout.close();
}