#pragma once
#include <iostream>
using namespace std;
void task3(double pi) {
	double m;
	cout << "Input m "; cin >> m;
	double z;
	z = sqrt(pow((3 * m + 2), 2) - 24 * m) / 3 * sqrt(m) - 2 / sqrt(m);
	printf("z1 = %.2f\n", z);
	z = sqrt(m);
	printf("z1 = %.2f\n", z);
}