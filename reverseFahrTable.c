#include <stdio.h>

int main ()
{
	float celsius, fahr;
	int upper, lower, step;

	step = 20;
	upper = 300;
	lower = -20;

	printf("%c%c \t %c\n",' ', 'F', 'C');
	for (int i = upper; i >= lower; i -= step)
	{
		fahr = i;
		celsius = 5.0 * (fahr-32.0) / 9.0;
		printf("%3.0f %6.1f\n", fahr, celsius);
 
	}
}