#include <stdio.h>
#include <math.h>

int main()
{
	for (int i = 0; i <=10; i++) {
		int power = (int)pow((float)i, 2);
		printf("\nthe number %d squared is %d", i, power);
	}

	return 0;
}