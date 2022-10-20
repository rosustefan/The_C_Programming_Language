// // K&R Exercise 2-2.

// // You should write a function (no #include statements are needed) 
// called htoi(str) that converts hexadecimal constant (base-16 0-9 and a-f) 
// to an integer. There will not be a '0x' prefix (like in C) - just assume 
// the input is a hex number. You should not use ctype.h and your code can 
// assume the ASCII character set.

#include <stdio.h>

int main() {
  int htoi();
  printf("htoi('dac9e') = %d\n", htoi("dac9e"));
  printf("htoi('f') = %d\n", htoi("f"));
  printf("htoi('F0') = %d\n", htoi("F0"));
  printf("htoi('12fab') = %d\n", htoi("12fab"));
}

int htoi(s) /* convert s to integer */
char s[];
{
    int i, j, decimal, base;

    decimal = 0;
  	base = 1;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) /* not good, need to go from max s[] length to 0 */
        for (j = 0; j <= i; ++j)
        {
            decimal += s[i - '0'] * base;
            base *= 16;
        }
    return(decimal);
}