#include <stdio.h>
#ifndef EOF
#define EOF (-1)
#endif
int main(void)
{
    int nb, nl, nt, c;
    nb = 0;
    nl = 0;
    nt = 0;
    while ((c = getchar()) != EOF){
        if (c == ' ')
            ++nb;
        else if (c == '\n')
            ++nl;
        else if (c == '\t')
            ++nt;
    }
    printf("Input has %d blanks, %d tabs, and %d newlines\n", nb, nt, nl);
    return 0;
}