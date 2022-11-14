#include<iostream>
using namespace std;

template<typename T>int biggest(T list[],int size) {
	int result = 0;
	for (int i = 0; i < size; i++)
		result = max(list[i], result);
	return result;
}

int main() {
	int x[] = { 1,10,100,5,4 };
	cout << biggest(x, 5) << endl;
	return 0;
}