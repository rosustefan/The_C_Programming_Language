// K&R Exercise 2-10.

// You should write a function (no #include statements are needed) 
// called lower(c) that converts its input parameter to lower case. 
// If the letter is not an upper case ASCII letter - just return 
// the parameter unchanged. You should not use ctype.h and your 
// code can assume the ASCII character set. You should use the 
// queston mark operator and not an if-then-else construct.

#include <stdio.h>
int main() {
  int lower();
  printf("Lower M is %c\n", lower('M'));
  printf("Lower x is %c\n", lower('x'));
  printf("Lower @ is %c\n", lower('@'));
  printf("Lower k is %c\n", lower('k'));
}

int lower(c) /* convert c to lower case; ASCII only */
int c;
{
  if (c >= 'A' && c <= 'Z' ? c = (c + 'a' - 'A') : c);
  return c;
}