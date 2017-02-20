#include <stdio.h>

int main ()
{
	int c, i, nWhite, nOther;
	int ndigit[10];

	nWhite = nOther = 0;
	for (int i =0; i < 10; i++) {
		ndigit[i] = 0;
	}
	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9') {
			++ndigit[c - '0'];
		}
		else if (c == ' ' || c == '\n' || c == '\t') {
			++nWhite;
		} else {
			++nOther;
		}
	}

	printf("Counts: \n");
	for (int i = 0; i < 10 ; i++) {
		printf("%d", ndigit[i]);
	}

	printf("\twhite chars: %d", nWhite);
	printf("\tother chars: %d\n", nOther);
	return 0;
}