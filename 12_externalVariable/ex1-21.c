#include <stdio.h>

#define MAXLINE 1000	// max char in a line
#define TAB_WIDTH 4		// tab width size

int getLine(char l[], int lim);
void detab(char s[], char d[], int w);

int main(void) {
	int len;	// length of the line
	char line[MAXLINE], detabLine[MAXLINE];	// current line, detab line

	while ((len = getLine(line, MAXLINE)) > 0) {
		detab(line, detabLine, TAB_WIDTH);
		printf("detab line:\n%s\n", detabLine);
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

// detab: copy s and detab it into d
void detab(char s[], char d[], int w) {
	int i = 0, h = 0, blank;	// i = index for s, h = index for d
	while ((d[h] = s[i]) != '\0') {
		if (s[i] == '\t') {
			blank = w - h % w;
			for(int j = 0; j < blank; ++j) {
				d[h] = ' ';
				++h;
			}
			++i;
		}
		else {
			++i;
			++h;
		}
	}
}