#include <stdio.h>

int main ()
{
	char result = '*';

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < i; j++) {
			printf("%c", result);
		}
		printf("\n");
	}

	return 0;
}