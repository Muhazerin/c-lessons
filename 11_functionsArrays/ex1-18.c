/*
 *	Exercise 1-18
 *	Write a program to remove trailing blanks and tabs from each line of input,
 *	and to delete entirely blank lines
 */

#include<stdio.h>
#define MAXLINE 1000	/* maximum input line size */
#define MAXBUFFER 1000	/* maximum buffer size */

int getLine(char line[], int maxLine);


/* print longest input line */
int main(void) {
	int result;
	char line[MAXLINE];	/* current line */
	
	while ((result = getLine(line, MAXLINE)) != 0) {
		if (result > 0) {
			printf("line: %s\n", line);
		}
		if (result < 0) {
			printf("Line is blank\n");
		}
	}
	return 0;
}

/* read a line into s, return i */
int getLine(char l[], int lim) {
	int c, i = 0, b = 0;
	char buffer[MAXBUFFER];		/* buffer to hold all the blanks and tabs */

	while (i < lim - 1 && (c = getchar()) && c != '\n') {
		if (c == ' ' || c == '\t') {	/* if getchar encounters blanks or tabs, put insde buffer first */
			buffer[b] = c;
			b++;
		}
		else if (b > 0 && c != ' ' && c != '\t') {	/* if buffer got blanks and tabs, AND user typed other char, put buffer back in line */
			for (int j = 0; j < b; ++j) {
				l[i] = buffer[j];
				++i;
			}
			l[i] = c;	/* need to put the current char in line */
			++i;
			b = 0;
		}
		else {
			l[i] = c;	/*if not blanks or tabs, put char in line*/
			++i;
		}
		if (c == EOF) {
			return 0;
		}
	}

	// different return outcomes
	if (i == 0) {	// if i == 0, means line is empty or filled with spaces or tabs
		return -1;
	}
	if (c == '\n') {	// return line as it is
		l[i] = c;
		++i;
		l[i] = '\0';
		return i;
	}
}