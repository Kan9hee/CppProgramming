#include<iostream>
using namespace std;

void combine(string s1, string s2, string& s3) {
	s3 = s1.append(s2);
}

int main() {
	string s1 = "qwer";
	string s2 = "12345";
	string s3;
	combine(s1, s2, s3);
	cout << s3 << endl;
}