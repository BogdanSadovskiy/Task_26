#pragma once
#include <iostream>
using namespace std;
void task5() {
	float a, b, c, x;
	c = 2; a = 4;
	float sum;
	printf("Input x  ");
	cin >> x;
	printf("Input b ");
	cin >> b;
	if (x - 1 < 0 && b-x!=0) {
		sum = a * x * x + b;
	}
	else if (x - 1 > 0 && b + x == 0) {
		sum = (x - a)/x;
	}
	else {
		
		sum = x / c;
	}
	printf("F = %.2f\n", sum);
}
