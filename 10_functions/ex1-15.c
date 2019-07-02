#include<stdio.h>

float fahr2cels(float f);

	/* print Fahrenheit-Celsius table
	 * for fahr = 0, 20, ..., 300  */
int main(void) {
	float fahr;
	float upper, lower, step;

	upper = 300.0;	// upper limit of the temp table
	lower = 20.0;	// lower limit
	step = 20.0;	// step size

	printf("+------------+---------+\n");
	printf("|  Fahrenheit|  Celsius|\n");
	printf("|------------+---------|\n");

	fahr = lower;
	while (fahr <= upper) {
		printf("|%10.0f°F|%7.1f°C|\n", fahr, fahr2cels(fahr));
		fahr = fahr + step;
	}
	printf("+------------+---------+\n");
	return 0;
}

float fahr2cels(float f) {
	return ((5.0/9.0) * (f -32.0));
}
