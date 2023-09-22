#include <stdio.h>

void sum(void) {
	int i;
	int result = 0;
	for (i = 0; i < 100; i++) {
		result += i + 1;
	}
	printf("%d", result);
}

int main(void) {
	sum();
	return 0;
}