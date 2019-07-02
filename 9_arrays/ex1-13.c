#include<stdio.h>

/* Write a program to print a histogram
 * of the length of words in its input.
 * It is easy to draw the histogram with bars horizontal;
 * a vertical orientation is more challenging.
 */

#define IN 1	/* inside a word */
#define OUT 0	/* outside a word */
int main(void) {
	int c, state, wordLength[10], count = 0;

	for (int i=0; i<10; ++i) {
		wordLength[i] = 0;
	}

	state = OUT;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			state = OUT;
			++wordLength[--count];
			count = 0;
		}
		else if (state == OUT) {
			state = IN;
			++count;
		}
		else {
			++count;
		}
	}

	for (int i=0; i<10; ++i) {
		printf("Frequency of %2d length word: ", i+1);
		for (int j=0; j<wordLength[i]; ++j) {
			printf("-");
		}
		printf("\n");
	}
	return 0;
}
