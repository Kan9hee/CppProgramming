#include<iostream>
using namespace std;

class Phone {
	string name;
	string telnum;
	string address;
public:
	Phone(string name = "", string telnum = "", string address = "") {
		this->name = name;
		this->telnum = telnum;
		this->address = address;
	}
	friend istream& operator>>(istream& stream, Phone& a);
	friend ostream& operator<<(ostream& stream, Phone temp);
};
istream& operator>>(istream& stream, Phone& a) {
	cout << "이름: ";
	stream >> a.name;
	cout << "전화번호: ";
	stream >> a.telnum;
	cout << "주소: ";
	stream >> a.address;
	return stream;
}

ostream& operator<<(ostream& stream, Phone a) {
	stream << "(반지름" << a.name << "," << a.telnum << "," << a.address << ")";
	return stream;
}

int main() {
	Phone girl, boy;
	cin >> girl >> boy;
	cout << girl << endl << boy << endl;
}