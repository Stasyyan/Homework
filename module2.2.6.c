#include <stdio.h>

void main( void )
{
  int num, fact = 1;
  int i;
  scanf("%i", &num);
  for (i = 1; i < num + 1; i++)
    fact *= i;
  printf("%i", fact); 
  return(0);
}
