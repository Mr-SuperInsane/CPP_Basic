#include <stdio.h>

void func1(int num) {
	int result;
	
	result = num * num + 2 * num + 5;
	printf("%d", result);
}

int main(void) {
	int num;
	printf("xの値を入力してください : ");
	scanf("%d", &num);
	func1(num);
}