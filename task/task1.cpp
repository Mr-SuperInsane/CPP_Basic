#include<stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>

double cal(int x1, int y1, int x2, int y2) {
    double temp, result;

    temp = sqrt((x2-x1) * (x2-x1) + (y2 - y1) * (y2 - y1));
    result = temp / 2.0;
    return result;
}

double circle(double num) {
    double result;

    result = num * num * M_PI;
    return result;
}

int main(void) {
    int x1, y1, x2, y2;
    double result1, result2;
    printf("点Aを入力してください。\n");
    scanf("%d%d", &x1, &y1);
    printf("点Bを入力してください。\n");
    scanf("%d%d", &x2, &y2);
    result1 = cal(x1, y1, x2, y2);
    result2 = circle(result1);
    printf("2点(%d,%d),(%d,%d)間を直径とする円の面積は %lf です", x1, y1, x2, y2, result2);
    return 0;
}
