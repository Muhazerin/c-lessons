#include<stdio.h>
/* Print EOF */
int main(void) {
	printf("%d\n", EOF);

	/* int c;
	 * c = getchar();
	 * if ((c = getchar()) == EOF) {
	 *     putchar(c);
	 * }
	 *
	 * This code does not work as EOF is not a character.
	 * EOF is a "signal" to signify End Of File.
	 * so when getchar() encounters EOF, it terminates.
	 * the condition is checking "empty" == EOF,
	 * which is false so putchar(c) doesn't get executed.
	 */
}
