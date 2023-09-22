#include <stdio.h>

void triangle(int num) {
	int i, j;
	for (i = 0; i < num; i++) {
		for (j = 0; j < num-i-1; j++) {
			printf(" ");
		}
		for (j = 0; j < i+1; j++) {
			printf("*");
		}
		printf("\n");

	}
}

int main(void) {
	int num;
	printf("三角形の縦サイズ：");
	scanf("%d", &num);
	triangle(num);
	return 0;
}