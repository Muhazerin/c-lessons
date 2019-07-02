#include<stdio.h>

	/* print Fahrenheit-Celsius table
	 * for fahr = 0, 20, ..., 300  */
int main(void) {
	float fahr, celsius;
	float upper, lower, step;

	upper = 300.0;	// upper limit of the temp table
	lower = 20.0;	// lower limit
	step = 20.0;	// step size

	printf("+------------+---------+\n");
	printf("|  Fahrenheit|  Celsius|\n");
	printf("|------------+---------|\n");

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("|%10.0f°F|%7.1f°C|\n", fahr, celsius);
		fahr = fahr + step;
	}
	printf("+------------+---------+\n");
	return 0;
}
