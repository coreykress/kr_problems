#include <stdio.h>

int power(int x, int y);

int main ()
{
	int x, y;

	x = 2;
	y = 3;
	printf("final: %d\n", power(x,y));
	return 0;
}

int power (int x, int y)
{
	int p;
	p = 1;
	printf("x: %d y: %d \n", x, y);
	for (int i = 0; i < y; i++)
	{
		printf("p is now: %d\n", p);
		p *= x;
	}

	return p;
}