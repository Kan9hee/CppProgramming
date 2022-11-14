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
		cout << "정수를 입력하세요(0을 입력하면 종료)>> ";
		cin >> temp;
		if (temp == 0)
			break;
		list.push_back(temp);
		cout << "평균 = " << calculate(list) / list.size() << endl;
	}
	return 0;
}