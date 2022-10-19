// K&R Exercise 1-7. Write a program to copy its input to its output, 
// replacing each string of one or more blanks by a single blank.

#include <stdio.h>

#include <stdio.h>

main() {
    int c, t;
  	t = 0;
    
    while ((c = getchar()) != EOF) {
      	if (c == ' ')
        {
          	t = 1;
			continue;
        }
      	if (t == 1)
        {
        	putchar(' ');
          	putchar(c);
          	t = 0;
        }
      	else
        	putchar(c);
    } 
}