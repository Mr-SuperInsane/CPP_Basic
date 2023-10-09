#include <cstdio>
#include <cmath>

double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

double heronFormula(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double x1, y1, x2, y2, x3, y3;

    printf("座標 (x1, y1) を入力してください: ");
    scanf("%lf %lf", &x1, &y1);

    printf("座標 (x2, y2) を入力してください: ");
    scanf("%lf %lf", &x2, &y2);

    printf("座標 (x3, y3) を入力してください: ");
    scanf("%lf %lf", &x3, &y3);

    double a = distance(x1, y1, x2, y2);
    double b = distance(x2, y2, x3, y3);
    double c = distance(x1, y1, x3, y3);

    if (a + b > c && c > abs(a - b)) {
        printf("これは三角形です。\n");
        printf("面積: %lf\n", heronFormula(a, b, c));
    }
    else {
        printf("これは三角形ではありません。\n");
    }

    return 0;
}
