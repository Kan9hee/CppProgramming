#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	ifstream fin("C:\\cpptemp\\images.jpg",ios::in|ios::binary);
	if (!fin) {
		cout << "실패";
		return 0;
	}

	ofstream fout("c:\\cpptemp\\copy.jpg",ios::out|ios::binary);
	if (!fout) {
		cout << "실패";
		return 0;
	}

	char buf[1024];
	while (!fin.eof()) {
		fin.read(buf, 1024);
		int n = fin.gcount();
		fout.write(buf, n);
	}
	fin.close();
	fout.close();
}