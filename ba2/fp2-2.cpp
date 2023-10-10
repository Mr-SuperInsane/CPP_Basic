#include <stdio.h>
void as(int a) {
	for (int j = 0; j < a; j++) {
		printf("*"); 
	} 
}

void air(int b) {
	for (int j = 0; j < b; j++) {
		printf(" "); 
	} 
}

int main(void) {
	int x,i;
	printf("三角形の縦のサイズ：");
	scanf("%d", &x);
	for (int i = 1; i <= x; i++) {
		air(x - i);
		as(i);
		printf("\n");
	}
	return 0; 
}
