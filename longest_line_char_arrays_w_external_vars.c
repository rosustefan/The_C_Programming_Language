// In certain circumstances, the extern declaration can be omitted: 
// if the external definition of a variable occurs in the source file 
// before its use in a particular function, then there is no need for 
// an extern declaration in the function. The extern declarations in 
// main, get_line and copy are thus redundant. In fact, common practice 
// is to place definitions of all external variables at the beginning 
// of the source file, and then omit all extern declarations.

// If the program is on several source files, and a variable is defined in, 
// say file1, and used in file2, then an extern declaration is needed in 
// file2 to connect the two occurrences of the variable. This topic is 
// discussed at length in Chapter 4.

#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

char line[MAXLINE]; /* input line */
char save[MAXLINE]; /* longest line saved here */
int max; /* length of longest line seen so far */

main() /* find longest line; specialized version */
{
    int len;
    // extern int max;
    // extern char save[];
    max = 0;
    while ((len = get_line()) > 0)
        if (len > max) {
            max = len;
            copy();
        }
    if (max > 0) /* there was a line */
        printf("The longest line is %s", save);
}

get_line() /* specialized version */
{
    int c, i;
    // extern char line[];

    printf("Input a new line OR execute EOF using CTRL+D:\n");
    for (i = 0; i < MAXLINE-1
        && (c=getchar()) != EOF && c != '\n'; ++i)
            line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return(i);
}

copy() /* specialized version */
{
    int i;
    // extern char line[], save[];

    i = 0;
    while ((save[i] = line[i]) != '\0')
        ++i;
}