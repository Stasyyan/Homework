#include <stdio.h>
#include <string.h>

void main( void )
{
  char s[10000];
  
  scanf("%s", s);
  printf("%i", strlen(s) + 1); 
  return(0);
}
