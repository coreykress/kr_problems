#include <stdio.h>
#define MAXLINE 1000

void getLine(char line[], int maxline, int tabLength);

int main ()
{
	int len;
	int tabLength;
	char line[MAXLINE];

	tabLength = 3;
	getLine(line, MAXLINE, tabLength);

	printf("%s", line);
	return 0;
}

void getLine (char s[], int lim, int tl)
{
	int c, j, count;

	count = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			for (j = 0; j < tl; j ++)
			{
				s[count] = ' ';
				count++;
			}
		} else {
			s[count] = c;
			count++;
		}
	}
}