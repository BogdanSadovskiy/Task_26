#pragma once
#include <iostream>
using namespace std;
string yes(char* str, int size) {
	for (int i = 1; i < size; i++) {
		if ((int)str[i] < (int)str[i - 1]) {
			return "No";
		}
	}
	return"YES";
}
void task8() {
	int size = 10;
	char* str = new char[size];
	for (int i = 0; i < size; i++) {
		cout << i + 1 << " char ";
		cin >> str[i];
	}
	cout << yes(str, size) << endl;

	
}