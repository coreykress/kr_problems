#include <stdio.h>

int main()
{
	int this_is_a_number;
	
	printf("Input a number :");
	scanf("%d", &this_is_a_number);
	printf("You entered %d \n", &this_is_a_number);
	getchar();
	return 0;
}