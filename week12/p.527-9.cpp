#include<iostream>
#include<vector>
using namespace std;

double calculate(vector<int>temp) {
	double result = 0.0;
	for (int i = 0; i < temp.size(); i++) {
		result += temp.at(i);
		cout << temp.at(i) << ' ';
	}
	cout << endl;
	return result;
}

int main() {
	vector<int>list;
	while (true) {
		int temp;
		cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����)>> ";
		cin >> temp;
		if (temp == 0)
			break;
		list.push_back(temp);
		cout << "��� = " << calculate(list) / list.size() << endl;
	}
	return 0;
}