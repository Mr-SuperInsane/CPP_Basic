#include <stdio.h>

void kuku(void) {
    int i, j;

    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
}

int main(void) {
    kuku();
    return 0;
}