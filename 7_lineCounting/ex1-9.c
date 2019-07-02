#include<stdio.h>
#include<stdbool.h>

/* Ex 1-9
 * Write a program to copy its input to its output,
 * replacing each strings of one or more blanks
 * by a single blank.
 */
int main(void) {
	int c;
	bool blankEncountered = false;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			blankEncountered = true;
		}
		else if (c != ' ' && !blankEncountered) {
			putchar(c);
		}
		else {
			putchar(' ');
			putchar(c);
			blankEncountered = false;
		}
	}
	return 0;
}
