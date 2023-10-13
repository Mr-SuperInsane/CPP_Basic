#include <stdio.h>

int func(int num1, int num2) {

	if (num1 < num2) {
		return num1;
	}
	else {
		return num2;
	}
}

int main(void) {
	int num1, num2, num3, result;
	printf("整数を2つ入力してください:");
	scanf("%d%d%d", &num1, &num2, &num3);
	result = func(num1, num2);
	result = func(result, num3);
	printf("%d のほうが小さい", result);
}
