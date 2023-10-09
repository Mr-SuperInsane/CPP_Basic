#include <stdio.h>

double circle(int x) {
	double area;

	area = 3.14 * x * x;

	return area;
}

int main(void) {
	int radius;
	double area;

	printf("円の半径を入力：");
	scanf("%d", &radius);
	area = circle(radius);
	printf("円の面積は%.2fです", area);
	return 0;
}