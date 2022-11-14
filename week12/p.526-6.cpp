#include<iostream>
#include<vector>
using namespace std;

template<typename T>vector<T> remove(T* target, int sizeTar, T* minus, int sizeMin, int& retsize) {
	vector<T> temp;
	retsize = sizeTar;
	for (int i = 0; i < sizeTar; i++) {
		bool check = true;
		for (int t = 0; t < sizeMin; t++)
			if (target[i] == minus[t]){
				check = false;
				retsize--;
				break;
			}
		if (check)
			temp.push_back(target[i]);
	}
	return temp;
}

int main() {
	int retsize = 0;
	int x[] = { 1,10,100,5,4 };
	int y[] = { 1,20,100 };
	vector<int> result = remove(x, 5, y, 3, retsize);
	for (int i = 0; i < retsize; i++)
		cout << result.at(i) << ' ';
	return 0;
}