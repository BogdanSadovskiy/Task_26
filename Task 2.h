#pragma once
#include <iostream>
using namespace std;
void Taks2(double pi) {
	double z;
	double a;
	cout << "INput a "; cin >> a;
	z = (sin(pi / 2 + 3 * a)) / (1 - sin(3 * a - pi));
	printf("n1 = %.2f\n", z);
	z = cos((5 / 4 * pi + 3 / 2 * a)) / (sin(5 / 4 * pi + 3 / 2 * a));
	printf( "n2 = %.2f\n", z);
}