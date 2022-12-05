#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	ifstream fin("c:\\windows\\system.ini");
	if (!fin) {
		cout << "실패";
		return 0;
	}

	ofstream fout("c:\\cpptemp\\out2.txt");
	if (!fout) {
		cout << "실패";
		return 0;
	}

	char ch;
	int no = 1;
	while ((ch=fin.get())!=EOF) {
		if (islower(ch))
			ch = toupper(ch);
		cout << ch;
		fout.put(ch);
	}
	fin.close();
	fout.close();
}