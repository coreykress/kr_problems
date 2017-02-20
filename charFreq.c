#include <stdio.h>

int main ()
{
	int c, count;
	int charCounts[26];
	char label;
	count = 0;

	for (int k = 0; k < 26; k++) {
		charCounts[k] = 0;
	}

	while((c = getchar()) != EOF) {
		if(c >= 'a' && c <= 'z') {
			charCounts[c - 'a']++;
		} else if (c >= 'A' && c <= 'Z') {
			charCounts[c - 'A']++;
		}
	}

	for (int i = 0; i < 26; i++) {
		count = charCounts[i];
		label = i + 'a';
		printf("%c :", label);
		for (int j = 0; j < count; j++) {
			printf("=");
		}
		printf("\n");
	}

	return 0;
}