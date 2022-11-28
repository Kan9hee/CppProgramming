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
	cout << "�̸�: ";
	stream >> a.name;
	cout << "��ȭ��ȣ: ";
	stream >> a.telnum;
	cout << "�ּ�: ";
	stream >> a.address;
	return stream;
}

ostream& operator<<(ostream& stream, Phone a) {
	stream << "(������" << a.name << "," << a.telnum << "," << a.address << ")";
	return stream;
}

int main() {
	Phone girl, boy;
	cin >> girl >> boy;
	cout << girl << endl << boy << endl;
}