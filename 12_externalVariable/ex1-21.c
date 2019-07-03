#include <stdio.h>

#define MAXLINE 1000	// max char in a line
#define TAB_WIDTH 8		// tab width size cos linux tab = 8 blanks

int getLine(char l[], int lim);
void entab(char s[], char d[], int w);

int main(void) {
	int len;	// length of the line
	char line[MAXLINE], entabLine[MAXLINE];	// current line, entab line

	while ((len = getLine(line, MAXLINE)) > 0) {
		entab(line, entabLine, TAB_WIDTH);
		printf("entab line:\n%s\n", entabLine);
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

// entab: copy s and entab it into d. w = TAB_WIDTH
void entab(char s[], char d[], int w) {
	int i = 0, h = 0, g = 0, blanks, tabs;	// i = index for s, h = index for d, g = index for blankBuffer, no of blanks, no of tabs
	char blankBuffer[MAXLINE];
	while (s[i] != '\0') {
		if (s[i] == ' ') {		// if s[i] is a blank
			blankBuffer[g] = s[i];
			++g;
			++i;
		}
		else {					// s[i] not a blank
			if (g > 0) {		// do operation for entab
				tabs = i / w;
				if (tabs > 0) {	// if there is a need to add tab, calculate no of spaces needed left
					blanks = g - ((tabs * 8) - (h % 8));
					for (int j = 0; j < tabs; ++j) {	// add the tab
						d[h] = '\t';
						++h;
					}
					for (int j = 0; j < blanks; ++j) {	// add the blanks. if no blanks, will not execute this code segment
						d[h] = ' ';
						++h;
					}
				}
				else {			// if there is no need to tab, put back the spaces
					for (int j = 0; j < g; ++j) {
						d[h] = ' ';
						++h;
					}
				}

				g = 0;
				d[h] = s[i];	// dont forget to do normal copy after doing entab process
				++i;
				++h;
			}
			else {				// normal copy
				d[h] = s[i];
				++h;
				++i;
			}
		}
		
	}
	d[h] = '\0';
}