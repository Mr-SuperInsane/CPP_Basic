#include <stdio.h>

void ave_weight(double high) {
	double result;

	result = high * high * 22;
	result += 0.5;
	printf("標準体重は %d kgです", (int)result);
}

int main(void) {
	double num;
	printf("身長(m)を入力してください：");
	scanf("%lf", &num);
	ave_weight(num);
	return 0;
}