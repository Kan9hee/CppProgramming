#include<iostream>
using namespace std;

template<typename T>bool search(T target, T* listA, int size) {
	for (int i = 0; i < size; i++)
		if (listA[i] == target)
			return true;
	return false;
}

int main() {
	int x[] = { 1,10,100,5,4 };
	if (search(100, x, 5))
		cout << "�迭 ���� ���ԵǾ� �ֽ��ϴ�.";
	else
		cout << "�迭 ���� ���ԵǾ� ���� �ʽ��ϴ�.";
	return 0;
}