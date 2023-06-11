#pragma once
#pragma once
#include <iostream>
using namespace std;
int sum(string str) {
	int sum = 0;
	for (int i = 0; str[i] != NULL; i++) {
		if (int(str[i]) > 47 && int(str[i]) < 58) {
			sum += int(str[i] - 48);
		}
	}
	return sum;
}
void task10() {

	string str;
	cout << "Input str\n";
	cin >> str;
	cout << sum(str) << endl;


}