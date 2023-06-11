#pragma once
#include <iostream>
using namespace std;
void task6(){
	float i, n, k;
	printf("Input i ");
	cin >> i;
	printf("Input n ");
	cin >> n;
	k = i;
	float sum = 0;
	for (double i = k; i < n; i++) {
		sum += (i * i) / (k * k + n * n);
	}
	printf("sum = %.2f\n", sum);
}