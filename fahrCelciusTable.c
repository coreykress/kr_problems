#include <stdio.h>

int convertToCelsius(int f);

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("%c%c \t %c\n",' ', 'F', 'C');
	while(fahr <= upper) {
		celsius = convertToCelsius(fahr);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	return 0;
}

int convertToCelsius(int f)
{
	return 5.0 * (f-32.0) / 9.0;
}