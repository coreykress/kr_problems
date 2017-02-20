#include <stdio.h>

int main ()
{
	printf("Value of getchar != EOF: %d\n", (getchar() != EOF));
	printf("Value of EOF: %d\n", EOF);
	return 0;
}