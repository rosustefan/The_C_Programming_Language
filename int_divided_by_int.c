#include <stdio.h>

int main()
{
    int i, j, n;
    printf("%d\n", 99/100);
    // printf("%f\n", 99.0/100.0);

    printf("%f\n", 13*1.5);
    n = (12>10);
    printf("%d\n", n);

    i = 42;
    j = i++;
    printf("%d\n", j);

    i = 40;
    j = 1;
    i += ++j;
    printf("%d\n", i);
}