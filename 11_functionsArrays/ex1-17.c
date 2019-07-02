#include<stdio.h>
#define MAXLINE 1000	/* maximum input line size */
#define MAXINPUT 100 	/* maximum input size that are more than 80 characters */
#define MAXCHAR 80		// maximum input characters size

int getLine(char line[], int maxLine);
void copy(char s[], char d[]);

/* print longest input line */
int main(void) {
	int len, i = 0;	/* current line length */
	char line[MAXLINE];	/* current line */
	char input80[MAXINPUT][MAXLINE];
	
	while ((len = getLine(line, MAXLINE)) > 0) {
		if (len > MAXCHAR && i < MAXINPUT) {
			copy(line, input80[i]);
			++i;
		}
	}
	if (i > 0) {
		for (int j = 0; j < i; j++) {
			printf("line with more than 80 characters: %s\n", input80[j]);
		}
	}
	return 0;
}

/* read a line into s, return i */
int getLine(char l[], int lim) {
	int c, i;

	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		l[i] = c;
	}
	if (c == '\n') {
		l[i] = c;
		++i;
	}
	l[i] = '\0';
	return i;
}

/* copy source into dest */
void copy(char s[], char d[]) {
	int i = 0;

	while ((d[i] = s[i]) != '\0') {
		++i;
	}
}
