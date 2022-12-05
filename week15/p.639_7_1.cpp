#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	ifstream fin("C:\\cpptemp\\images.jpg", ios::in | ios::binary);
	if (!fin) {
		cout << "실패";
		return 0;
	}

	ofstream fout("c:\\cpptemp\\copy2.jpg", ios::out | ios::binary);
	if (!fout) {
		cout << "실패";
		return 0;
	}

	fin.seekg(0, ios::end);
	int filesize = fin.tellg();
	for (int i = 0; i < filesize; i++) {
		fin.seekg(filesize - i);
		int ch = fin.get();
		fout.put(ch);
	}
	//이미지 헤더가 뒤집혀 볼 수 없는 이미지가 된다.
	fin.close();
	fout.close();
}