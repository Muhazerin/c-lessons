#include<stdio.h>

/* Count characters in input, 1st version */
int main(void) {
	long nc;

	nc = 0;
	while(getchar() != EOF) {
		++nc;
	}
	printf("%li\n",nc);
	return 0;
}
