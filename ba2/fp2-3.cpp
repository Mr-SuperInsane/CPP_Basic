#include<stdio.h>
void biger(int a, int b) {
    if (a < b) {
        printf("%dの方がでっかい", b);
    }
    else if (b < a) {
        printf("%dの方がでっかい", a);
    }
    else {
        printf("%dと%dは同じ値です。", a, b);
    }
}
int main(void) {
    int num1, num2;
    printf("一つ目の整数を入力してください\n");
    scanf("%d", &num1);
    printf("二つ目の整数を入力してください\n");
    scanf("%d", &num2);
    biger(num1, num2);
}