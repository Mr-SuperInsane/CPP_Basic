#include <stdio.h>
int main(void) {
	int prog[4];
	int i;
	int max = 0;
	int max_index = 0;

	printf("4名の点数を入力してください。\n");
	for (i = 0; i < 4; i++) {
		scanf("%d", &prog[i]);
	}
	for (i = 0; i < 4; i++) {
		if (max < prog[i]) {
			max = prog[i];
			max_index = i;
		}
	}
	printf("最高点数は %d です。最高点は先頭から %d 番目の値です。", max, max_index+1);
}