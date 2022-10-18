#include <stdio.h>

// The decision as to whether a character is a digit, a white space, or something else is made with the sequence
// if (c >= '0' && c <= '9')
//     ++ndigit[c-'0'];
// else if (c == ' ' || c == '\n' || c == '\t')
//     ++nwhite;
// else
//     ++nother;

main() /* count digits, white space, others */
{
    int c, i, j, nwhite, nother, digits;
    int ndigit[10];

    nwhite = nother = digits = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

    printf("\n");

    while ((c = getchar()) != EOF)
        // operations on ASCII values: '0' is the ASCII value of 0, which is 48, etc
        if (c >= '0' && c <= '9')
            {
            ++ndigit[c-'0'];
            ++digits;
            }
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;

    printf("\n-----------\n\ndigits = %d\n", digits);

    // for (i = 0; i < 10; ++i)
    //     printf(" %d\n", ndigit[i]);

    // Exercise 1-12. Write a program to print a histogram of the lengths of words in its input. It is easiest to draw the histogram horizontally; a vertical orientation is more challenging.

    for (i = 0; i < 10; ++i) {
        printf("\n%3d|", i);
        for (j = 0; j < ndigit[i]; ++j)
            printf(" #");
    }

    printf("\n\n-----------\n");
    printf("\nwhite space = %d, other = %d\n", nwhite, nother);
    printf("\n-----------\n");
}