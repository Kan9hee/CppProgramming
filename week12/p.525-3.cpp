#include<iostream>
using namespace std;

template<typename T>void reverseArray(T *listA, int size) {
	T temp;
	for (int i = 0; i < size / 2; i++) {
		temp = listA[i];
		listA[i] = listA[(size - 1) - i];
		listA[(size - 1) - i] = temp;
	}
}

int main() {
	int x[] = { 1,10,100,5,4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++)
		cout << x[i] << ' ';
	return 0;
}