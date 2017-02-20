#include <stdio.h>

int main()
{
	int c, nc;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ') {
			putchar(c);
			while ((c = getchar()) == ' ') {
				continue;
			}
		}
			putchar(c);
	}

	return 0;
}