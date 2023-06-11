#pragma once
#include <iostream>
using namespace std;


void findz(double pi) {
	double a;
	cout << "Input a "; cin >> a;
    double z;
	z = 2.0 * pow(sin(3.0 * pi - 2.0 * a), 2.0) * pow(cos(5.0 * pi + 2.0 * a), 2.0);
	cout << "z1 = " << z << endl;
	z = 1.0 / 4.0 - 1.0/ 4.0 * sin(5.0 / 2.0 * pi - 8.0 * a);
	cout << "z2 = " << z << endl;
}