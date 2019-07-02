#include<stdio.h>
	/* print Fahrenheit-Celsius table */
int main(void) {
	printf("+------------+---------+\n");
	printf("|  Fahrenheit|  Celsius|\n");
	printf("|------------+---------|\n");

	for (float celsius = 300.0; celsius >= 0; celsius -= 20.0) {
		printf("|%10.1f°F|%7.0f°C|\n", (celsius * (9.0/5.0)) + 32.0, celsius);
	}
	printf("+------------+---------+\n");
	return 0;
}
