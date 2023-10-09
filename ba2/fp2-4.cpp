#include <stdio.h>	
#include <math.h>

void cal(int x1, int y1, int x2, int y2) {
	double result;

	result = sqrt((abs(x2) - abs(x1)) * (abs(x2) - abs(x1)) + (abs(y2) - abs(y1)) * (abs(y2) - abs(y1)));
	printf("2点間の距離は %lf です", result);
}

int main(void) {
	int x1, y1, x2, y2;

	printf("座標(x1, y1)を順に入力してください\n");
	scanf("%d%d", &x1, &y1);
	printf("座標(x2, y2)を順に入力してください\n");
	scanf("%d%d", &x2, &y2);
	cal(x1, y1, x2, y2);

	return 0;
}