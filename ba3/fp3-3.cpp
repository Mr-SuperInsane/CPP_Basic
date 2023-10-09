#include <stdio.h>

double ave_weight(double high) {
	double result;

	result = high * high * 22;
	result += 0.5;
	return result;
}

int main(void) {
	double num, result;
	printf("身長(m)を入力してください：");
	scanf("%lf", &num);
	result = ave_weight(num);
	printf("%.2f(m)の平均体重は%.2fkgです", num, result);
	return 0;
}