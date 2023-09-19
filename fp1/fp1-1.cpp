#include <stdio.h>
int main(void) {
	int i = 0, sum = 0;
	int test[3];

	printf("3科目のテストの点数を入力してください \n");
	for (i = 0; i < 3; i++) {
		scanf("%d", &test[i]);
	}
	for (i = 0; i < 3; i++) {
		sum += test[i];
	}
	sum /= 3;
	if (sum >= 60) {
		printf("合格");
	}
	else {
		printf("不合格");
	}
}

// 30 50 70