#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	ifstream fin("C:\\cpptemp\\images.jpg", ios::in | ios::binary);
	if (!fin) {
		cout << "����";
		return 0;
	}

	ofstream fout("c:\\cpptemp\\copy2.jpg", ios::out | ios::binary);
	if (!fout) {
		cout << "����";
		return 0;
	}

	fin.seekg(0, ios::end);
	int filesize = fin.tellg();
	for (int i = 0; i < filesize; i++) {
		fin.seekg(filesize - i);
		int ch = fin.get();
		fout.put(ch);
	}
	//�̹��� ����� ������ �� �� ���� �̹����� �ȴ�.
	fin.close();
	fout.close();
}