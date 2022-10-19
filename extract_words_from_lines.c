// K&R Exercise 1-10. Write a program which prints the words 
// in its input, one per line. A word is any string separated 
// by a space or newline

#include <stdio.h>

main() {
    int c;
    
    while ((c = getchar()) != EOF) {
      	if (c == ' ' || c == '\n')
            printf("\n");
      	else
            putchar(c);   	
    } 
}