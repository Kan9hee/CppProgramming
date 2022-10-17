#include<iostream>
#include<string>

using namespace std;

class Book {
	string title;
	int price;
	int pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; 	this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}
	Book& operator+=(int i) {
		this->price += i;
		return *this;
	}
	Book& operator-=(int i) {
		this->price -= i;
		return *this;
	}
	friend bool operator==(Book a, int i);
	friend bool operator==(Book a, string str);
	friend bool operator==(Book a, Book b);
	string getTitle() { return title; }
};

bool operator==(Book a,int i) {
	return a.price == i;
}
bool operator==(Book a, string str) {
	return a.title == str;
}
bool operator==(Book a, Book b) {
	return (a == b.price && a == b.pages && a==b.title);
}

int main() {
	Book a("��ǰ C++", 30000, 500), b("�̷�", 30000, 500);
	if (a == 30000)cout << "���� 30000��" << endl;
	if (a == "��ǰ C++")cout << "��ǰ C++�Դϴ�." << endl;
	if (a == b)cout << "�� å�� ���� å�Դϴ�." << endl;
	return 0;
}
