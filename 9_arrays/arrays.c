#include<stdio.h>

/* count digits, white space, and others */
int main(void) {
	int c, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	for (int i = 0; i < 10; ++i) {
		ndigit[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9') {
			++ndigit[c - '0'];
		}
		else if (c == ' ' || c == '\t' || c == '\n') {
			++nwhite;
		}
		else {
			++nother;
		}
	}

	for (int i = 0; i < 10; ++i) {
		printf("No of %d: %d\n", i, ndigit[i]);
	}
	printf("No of white space: %d\nNo of other char: %d\n", nwhite, nother);
}
