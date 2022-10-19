/* the reverse function was written by me, 
the main and copy were written by Dr. Chuck 
https://www.cc4e.com/lessons_launch/cc4e_1_17 */

#include <stdio.h>
#include <string.h>

int main() {
  char t[1000];
  char *copy();
  void reverse();

  copy("Hello world", t);
  printf("%s\n", t);
  reverse(t);
  printf("%s\n", t);

  reverse(copy("XY", t));
  printf("%s\n", t);
  reverse(copy("Even", t));
  printf("%s\n", t);
  reverse(copy("Odd", t));
  printf("%s\n", t);
  reverse(copy("civic", t));
  printf("%s\n", t);
}

/* copy s1 to s2; assume s2 big enough */
char *copy(s1, s2)
char s1[], s2[];
{
    int i;
    for(i=0;(s2[i] = s1[i]);i++);
    return s2;
}

void reverse(t)
char t[];
{
  	int len, tmp, i;
    len = strlen(t) - 1; /* get the length of the char array minus the '\0' */
    for (i=0; i<=len/2; ++i) /* iterrate through the char arrary half-way through */
    {
    	tmp = t[i]; /* store the value of t[0] in tmp */
      	t[i] = t[len - i]; /* replace the value of t[0] with t[len - 0] */
      	t[len - i] = tmp; /* replace the value of t[len - 0] with tmp */
    }
    return;
}