#include <stdio.h>

// The conditional expression often leads to succinct code. For example,
// this loop prints N elements of an array, 10 per line, with each 
// column separated by one blank, and with each line (including the last) 
// terminated by exactly one newline.

int main()
{
    int i, j, N;
    char a[1000];
    char c = 33;

    printf("What is the value of N?\n");
    scanf("%d", &N);

    for (i = 0; i< N; i++)
        a[i] = c++;
        
    for (i = 0; i < N; i++)
        // print the value of a[i] followed by a space if the conditional expression is
        // False, or followed or by a newline if the conditioal expression is True
        // using the ternary operator ?:
        printf("%6c%c", a[i], (i%10==9 || i==N-1) ? '\n' : ' ');
}