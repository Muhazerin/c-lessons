#include<stdio.h>
#define MAXLINE 1000	/* maximum input line size */

// global variable
int max;				// max length seen so far
char line[MAXLINE];		// current input line
char longest[MAXLINE];	// longest line saved here

int getLine(void);
void copy(void);

/* print longest input line, specialized version */
int main(void) {
	int len;
	extern int max;
	extern char longest[];

	max = 0;
	while ((len = getLine()) > 0) {
		if (len > max ) {
			max = len;
			copy();
		}
	}
	if (max > 0) {		// if there was a line
		printf("longest line: %s\n", longest);
	}
	return 0;
}

// getLine: specialized version
int getLine(void) {
	int c, i;
	extern char line[];

	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		line[i] = c;
	}
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

// copy: specialized version
void copy(void) {
	int i = 0;
	extern char line[], longest[];

	while ((longest[i] = line[i]) != '\0') {
		++i;
	}
}
