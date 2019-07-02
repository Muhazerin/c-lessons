#include<stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

	/* print Fahrenheit-Celsius table */
int main(void) {
	printf("+------------+---------+\n");
	printf("|  Fahrenheit|  Celsius|\n");
	printf("|------------+---------|\n");

	for (float celsius = UPPER; celsius >= LOWER; celsius -= STEP) {
		printf("|%10.1f°F|%7.0f°C|\n", (celsius * (9.0/5.0)) + 32.0, celsius);
	}
	printf("+------------+---------+\n");
	return 0;
}
