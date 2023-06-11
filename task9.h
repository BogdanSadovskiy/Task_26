#pragma once
#include <iostream>
using namespace std;
string let(char* str, int size) {
	int l= 0;
	int d = 0;


	for (int i = 0; i < size; i++) {
		if ((int(str[i]) > 64 && int(str[i]) < 91) || (int(str[i]) > 96 && int(str[i]) < 123)) {
			l++;
		}
		if (int(str[i]) > 47 && int(str[i]) < 58) {
			d++;
		}
	}
	if (l == 10) {
		return"Only letters";
	}
	else if (d == 10) {
		return"Only digitals";
	}
	else {
		return"Anouther";
	}
}
