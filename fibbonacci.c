#include <stdio.h>

int main()
{
	int a = 0;
	int b = 1;
	int sum;

	printf("%d\n", a);
	printf("%d\n", b);
	while (a <= 10) {
		sum = a + b;
		printf("%d\n", sum);
		a = b;
		b = sum;
	}
}