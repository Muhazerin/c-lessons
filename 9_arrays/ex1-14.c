#include<stdio.h>

/* Write a program to print a histogram of
 * the frequencies of different characters in its input
 */
int main(void) {
	int c, characters[94];
	for (int i=0; i<94; i++) {
		characters[i] = 0;
	}
	while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '\t' && c != '\n') {
			++characters[c - 33];
		}
	}
	for (int i=0; i<94; ++i) {
		printf("Frequency of %c: ", (char)(i + 33));
		for (int j=0; j<characters[i]; ++j) {
			printf("-");
		}
		printf("\n");
	}
}
