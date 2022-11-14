#include<iostream>
using namespace std;

template<typename T>T* concat(T* listA, int sizeA,T*listB,int sizeB) {
	int fsize = sizeA + sizeB;
	T *result=new T[fsize];
	for (int i = 0; i < fsize; i++) {
		if (i < sizeA)
			result[i] = listA[i];
		else
			result[i] = listB[i - sizeA];
	}
	return result;
}

int main() {
	int x[] = { 1,10,100,5,4 };
	int y[] = { 20,30,40,50,23,44 };
	int *fusion = concat(x, 5, y, 6);
	for (int i = 0; i < 11; i++)
		cout << fusion[i] << ' ';
	return 0;
}