#include<iostream>
#include<string>

using namespace std;

class Printer {
	string model, manufacturer;
	int printedCount, availableCount;
public:
	Printer(string name, string maker, int page) :printedCount(0) {
		this->model = name;
		this->manufacturer = maker;
		this->availableCount = page;
	}
	~Printer() {}
	string getModel() { return model; }
	string getManufacturer() { return manufacturer; }
	int getAvailableCount() { return availableCount; }
	bool print(int pages) {
		if (pages <= availableCount) {
			availableCount -= pages;
			printedCount += pages;
			cout << "프린트하였습니다." << endl;
			return true;
		}
		else
			cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
		return false;
	}
};

class InkJet :public Printer {
	int availableInk;
public:
	InkJet(string name, string maker, int page, int availableInk) :Printer(name, maker, page) { this->availableInk = availableInk; }
	~InkJet() {}
	void printInkJet(int pages) {
		if (pages <= availableInk) {
			if (print(pages))
				availableInk -= pages;
		}
		else
			cout << "잉크가 부족하여 프린트할 수 없습니다." << endl;
	}
	void showSpec() { cout << "잉크젯: " << getModel() << ", " << getManufacturer() << ", 남은 종이 " << getAvailableCount() << "장, 남은 잉크" << availableInk << endl; }
};

class Lazer :public Printer {
	int availableToner;
public:
	Lazer(string name, string maker, int page, int availableToner) :Printer(name, maker, page) { this->availableToner = availableToner; }
	~Lazer() {}
	void printLazer(int pages) {
		if (pages <= availableToner) {
			if (print(pages))
				availableToner -= pages;
		}
		else
			cout << "토너가 부족하여 프린트할 수 없습니다." << endl;
	}
	void showSpec() { cout << "레이저: " << getModel() << ", " << getManufacturer() << ", 남은 종이 " << getAvailableCount() << "장, 남은 토너" << availableToner << endl; }
};

int main() {
	InkJet* printer1 = new InkJet("Officejet V40", "HP", 5, 10);
	Lazer* printer2 = new Lazer("SCX-6x46", "삼성전자", 3, 20);

	cout << "현재 작동중인 2대의 프린터는 아래와 같다" << endl;
	printer1->showSpec();
	printer2->showSpec();

	while (true) {
		int tmp1, tmp2;
		string check;
		cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
		cin >> tmp1 >> tmp2;
		if (tmp1 == 1)
			printer1->printInkJet(tmp2);
		else
			printer2->printLazer(tmp2);
		printer1->showSpec();
		printer2->showSpec();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "계속 프린트 하시겠습니까? (y/n)>>";
		cin >> check;
		if (!check.compare("n"))
			break;
	}
	delete printer1;
	delete printer2;
}