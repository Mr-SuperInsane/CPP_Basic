#include <stdio.h>
#include <cmath>

double power(double x, int n) {
	if (n == 0) {
		return 1;
	}
	else if (n < 0) {
		return 1 / (x * power(x, -n - 1));
	}
	else {
		return x * power(x, n - 1);
	}
}

int main(void) {
	int x, n;
	double result;

	printf("実数値を入力してくださ：");
	scanf("%d", &x);
	printf("乗数を入力してください：");
	scanf("%d", &n);
	result = power(x, n);
	printf("%dの%d乗は%lfです", x, n, result);
}