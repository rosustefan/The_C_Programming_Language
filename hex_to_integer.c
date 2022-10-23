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
    printf("\n---------------------------------\n");
	int i, j, decimal, base, nc;

    nc = 0;
	for (i = 0; s[i]; ++i)
    	if (s[i] != EOF)
			++nc;
  
	printf("The number of characters in the string '%s' is %d\n", s, nc);
	
    decimal = 0;
  	base = 1;
    for (i = nc-1; i >= 0; --i)
        {
			printf("The current base value is %d\n", base);
			printf("The current decimal value is %d\n", s[i]);

			if (s[i] >= '0' && s[i] <= '9')
				decimal += (s[i] - '0') * base;
			else if (s[i] >= 'a' && s[i] <= 'z')
				decimal += (s[i] - 'a') * base;
			else if (s[i] >= 'A' && s[i] <= 'Z')
				decimal += (s[i] - 'A') * base;

			base *= 16;
        }
    return(decimal);
}

// 10^0 = 1
// 10^1 = 10
// 10^2 = 100
// 10^3 = 1000
// 10^4 = 10000