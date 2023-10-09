#include <stdio.h>
#include <cmath>

void multiplier(int x, int n) {
	int i;
	double result = 1;

	for (i = 0; i < abs(n); i++) {
		result *= x;
	}
	if (n < 0) {
		result = 1 / result;
	}
	printf("%dの%d乗は%lfです", x, n, result);
}

int main(void) {
	int x, n;

	printf("実数値を入力してくださ：");
	scanf("%d", &x);
	printf("乗数を入力してください：");
	scanf("%d", &n);
	multiplier(x, n);
}