#include<stdio.h>

int power(int m, int n);
/* Test power function */
int main(void) {
	for (int i = 0; i < 10; ++i) {
		printf("i: %d. 2 power i: %d. -3 power i: %d\n", i, power(2,i), power(-3, i));
	}
	return 0;
}

/* raise base to n-th powrr; n >= 0 */
int power(int base, int n) {
	int p = 1;
	for (int i = 1; i <= n; ++i ) {
		p = p * base;
	}
	return p;
}
