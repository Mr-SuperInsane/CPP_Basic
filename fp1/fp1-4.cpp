#include <stdio.h>

#define X 3
#define Y 5

void sum(int select) {
	if (select == 1) {
		printf("X + Y = %d", X+Y);
	}
	else if (select == 2) {
		printf("X - Y = %d", X-Y);
	}
	else if (select == 3) {
		printf("X * Y = %d", X*Y);
	}
	else if (select == 4) {
		printf("X / Y = %d", X/Y);
	}
	/*
	else {
		printf("正しい値を入力してください");
	}
	*/
}

int main(void) {
	int select;
	printf("2つのマクロの四則演算を実行します\n");
	printf("1. 足し算 2. 引き算 3. 掛け算 4. 割り算\n");
	printf("どの演算を行いますか？番号を入力せよ>>");
	scanf("%d", &select);
	sum(select);
	return 0;
}
