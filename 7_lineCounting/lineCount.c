#include<stdio.h>

/* count lines in input */
int main(void) {
	int c, nl;
	
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			++nl;
		}
	}
	printf("%d\n", nl);
	return 0;
}

/* '\n' in expression is an integer 
 * but "\n" in expression is a newline
 *
 * E.g i == 'A'. 'A', in this case, is 65 
 * but c == "A". "A", in this case, is A
 */
