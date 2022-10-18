#include <stdio.h>

int main() /* count new lines in input */
{
    int c, nl, blanks;
  	blanks = 0;
    nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ')
          	++blanks;
      	if (c == '\n')
            ++nl;
    }
    printf("%d %d\n", blanks, nl);
}