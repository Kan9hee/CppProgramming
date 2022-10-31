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
			cout << "����Ʈ�Ͽ����ϴ�." << endl;
			return true;
		}
		else
			cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
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
			cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
	}
	void showSpec() { cout << "��ũ��: " << getModel() << ", " << getManufacturer() << ", ���� ���� " << getAvailableCount() << "��, ���� ��ũ" << availableInk << endl; }
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
			cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
	}
	void showSpec() { cout << "������: " << getModel() << ", " << getManufacturer() << ", ���� ���� " << getAvailableCount() << "��, ���� ���" << availableToner << endl; }
};

int main() {
	InkJet* printer1 = new InkJet("Officejet V40", "HP", 5, 10);
	Lazer* printer2 = new Lazer("SCX-6x46", "�Ｚ����", 3, 20);

	cout << "���� �۵����� 2���� �����ʹ� �Ʒ��� ����" << endl;
	printer1->showSpec();
	printer2->showSpec();

	while (true) {
		int tmp1, tmp2;
		string check;
		cout << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
		cin >> tmp1 >> tmp2;
		if (tmp1 == 1)
			printer1->printInkJet(tmp2);
		else
			printer2->printLazer(tmp2);
		printer1->showSpec();
		printer2->showSpec();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "��� ����Ʈ �Ͻðڽ��ϱ�? (y/n)>>";
		cin >> check;
		if (!check.compare("n"))
			break;
	}
	delete printer1;
	delete printer2;
}