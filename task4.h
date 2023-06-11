#pragma once
#include <iostream>
using namespace std;
void task4(){
	float a, b, c, x;
	b = 2; x = 6;
	float sum;
	printf("Input a  ");
	cin >> a;
	printf("Input c  ");
	cin >> c;
	if (a < 0 && c != 0) {
		sum = a * x * x + b * x + c;
	}
	else if (a > 0 && c == 0) {
		sum = -a / (x - c);
	}
	else {
		
		sum = a * (x + c);
	}
	printf("F = %.2f\n", sum);
}
