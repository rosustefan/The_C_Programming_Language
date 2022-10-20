// The conditional expression, written with the ternary operator "?:", 
// provides an alternate way to write this and similar constructions. 
// In the expression: 
// e1 ? e2 : e3
// ... the expression e1 is evaluated first. If it is non-zero (true), 
// then the expression e2 is evaluated, and that is the value of the 
// conditional expression. Otherwise e3 is evaluated, and that is the 
// value. Only one of e2 and e3 is evaluated. Thus to set z to the 
// maximum of a and b,

#include <stdio.h>

int main()
{
    int z, a, b;

    printf("What is the first value:\n");
    scanf("%d", &a);
    printf("What is the second value:\n");
    scanf("%d", &b);

    // if (a > b)
    //     z = a;
    // else
    //     z = b;

    z = (a > b) ? a : b; /* z = max(a, b) */

    printf("The max value is %d.\n", z);
}