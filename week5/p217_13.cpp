#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Histogram {
	string line;
	int histogram[26];
public:
	Histogram(string start) { this->line = start; this->line += '\n'; }
	void put(string add) { this->line.append(add); }
	void putc(char add) { this->line.append({add,'\0'}); }
	void print();
};

void Histogram::print() {
	cout << line << endl;
	for (int i = 0; i < 26; i++)
		histogram[i] = 0;

	for (int i = 0; i < line.length(); i++) {
		char temp = line.at(i);
		if (isalpha(temp))
			histogram[tolower(temp) - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		cout << (char)('a' + i) << " (" << histogram[i] << ")   : ";
		for (int n = 0; n < histogram[i]; n++)
			cout << "*";
		cout << endl;
	}
}

int main() {
	Histogram elvisHisto("Wise man sqy, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
	return 0;
}