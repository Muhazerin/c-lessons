#include<stdio.h>
#define MAXLINE 1000	/* maximum input line size */

int getLine(char line[], int maxLine);
void copy(char s[], char d[]);

/* print longest input line */
int main(void) {
	int len, max;	/* current line length, maximum line length */
	char line[MAXLINE], longest[MAXLINE];	/* current line, longest line */
	
	max = 0;
	while ((len = getLine(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(line, longest);
		}
	}
	if (max > 0) {
		printf("longest line: %s", longest);
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
