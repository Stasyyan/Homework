#include <stdio.h>

void main( void )
{
  char s[10000];
  int i;
  scanf("%s", s);
  printf("%s ->", s);
  for (i = 0; s[i] != 0; i++)
  {
    if (s[i] > 96 && s[i] < 123)
      s[i] -= 32;
  }
  printf("%s", s);  
  return(0);
}
