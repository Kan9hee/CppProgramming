#include<iostream>
#include<ctime>

using namespace std;

class Random {
public:
	static void seed() { srand((unsigned)time(0)); }
	static int nextInt(int min = 0, int max = RAND_MAX);
	static char nextAlphabet();
	static double nextDouble();
};

int Random::nextInt(int min, int max) {
	int r = max - min + 1;
	if (r < 0)
		exit(1);
	int n = (rand() % r) + min;
	return n;
}
char Random::nextAlphabet() {
	int n = Random::nextInt(0, 52) % 52;
	if (n < 26)
		return 'a' + n;
	return 'A' + (n - 26);
}
double Random::nextDouble() {
	double d = (double)Random::nextInt();
	d = d / RAND_MAX;
	return d;
}

int main() {
	Random::seed();
	cout << "1���� 100���� ������ ���� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++)
		cout << Random::nextInt(1, 100) << ' ';
	cout << endl;

	cout << "���ĺ��� �����ϰ� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++)
		cout << Random::nextAlphabet() << ' ';
	cout << endl;

	cout << "������ �Ǽ��� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++)
		cout << Random::nextDouble() << ' ';
	cout << endl;

}
