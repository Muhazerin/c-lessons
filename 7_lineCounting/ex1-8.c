#include<stdio.h>

/* Exercise 1-8
 * Write a program to count blanks, tabs, and newlines
 */
/* count lines in input */
int main(void) {
	int c, nl = 0, nb = 0, nt = 0;
	
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			++nl;
		}
		if (c == '\t') {
			++nt;
		}
		if (c == ' ') {
			++nb;
		}
	}
	printf("No. of blanks: %d\n", nb);
	printf("No. of tabs: %d\n", nt);
	printf("No. of newlines: %d\n", nl);
	return 0;
}

/* '\n' in expression is an integer 
 * but "\n" in expression is a newline
 *
 * E.g i == 'A'. 'A', in this case, is 65 
 * but c == "A". "A", in this case, is A
 */
