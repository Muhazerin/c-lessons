/*
 * Exercise 1-19
 * Write a function reverse(s) that reverse the character string s.
 * Use it to write a program that reverses its input a line at a time.
 */

#include<stdio.h>
#define MAXLINE 1000	/* maximum input line size */

int getLine(char line[], int maxLine);
void reverse(char s[], char d[], int i);

/* print longest input line */
int main(void) {
	int len;	// length of line
	char line[MAXLINE], reverseLine[MAXLINE];	/* current line, line with reverse string */
	
	while ((len = getLine(line, MAXLINE)) > 0) {
		reverse(line, reverseLine, len);
		printf("reverse: %s\n", reverseLine);
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

// reverse the source and copy it to the destination
void reverse(char s[], char d[], int i) {
	i = i - 2;
	int j;
	for (j = 0; i >= 0; --i) {
		d[j] = s[i];
		++j;
	}
	d[j] = '\n';
	++j;
	d[j] = '\0';
}