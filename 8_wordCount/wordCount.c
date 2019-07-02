#include<stdio.h>

#define IN 1	/* inside a word */
#define OUT 0	/* outside a word */

/* count lines, words, and characters in input */
int main(void) {
	int c, nl, nc, nw, state;

	state = OUT;
	nl = nw = nc = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			++nl;
		}
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
		}
		else if (state == OUT) {
			state = IN;
			++nw;
			++nc;
		}
		else {
			++nc;
		}
	}
	printf("No. of char: %d\n", nc);
	printf("No. of word: %d\n", nw);
	printf("No. of line: %d\n", nl);
	return 0;
}
