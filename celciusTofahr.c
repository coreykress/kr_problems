#include <stdio.h>

int main()
{
	float celcius, fahr;
	int step, lower, upper;

	lower = -20;
	upper = 300;
	step = 10;

	printf("%3.0c %6.0c\n", 'C', 'F');
	celcius = lower;
	while(celcius <= upper) {
		fahr = (celcius * 1.8) + 32;
		printf("%3.0f %6.1f\n", celcius, fahr);
		celcius += step;
	}
}