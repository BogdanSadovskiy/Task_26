#pragma once
#include <iostream>
using namespace std;
void task7() {
	float  n, k;
	printf("Input k ");
	cin >> k;
	printf("Input n ");
	cin >> n;
	float sum = 0;
	for (int i = n; i < 19; i++) {
		sum += sqrt(sin(k)*sin(k)+cos(n/k)*cos(n/k));
	}
	printf("sum = %.2f\n", sum);
}