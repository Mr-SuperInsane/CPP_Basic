#include <stdio.h>

int num1, num2;

int func() {

	if (num1 < num2) {
		return num1;
	}
	else {
		return num2;
	}
}

int main(void) {
	int result;
	printf("整数を2つ入力してください:");
	scanf("%d%d", &num1, &num2);
	result = func();
	printf("%d のほうが小さい", result);
}
