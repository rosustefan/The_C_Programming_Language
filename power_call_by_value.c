#include <stdio.h>

main()
{
    int num,pwr;

    printf("Lift 2 to the power of\n");
    scanf("%d", &pwr);
    
    printf("%d\n", power(2, pwr));
}

power(x, n) /* raise x to the n-th power; n > 0 */
int x, n;
{
    int i,p;

    for (p = 1; n > 0; --n)
        p = p * x;
    return (p);
}