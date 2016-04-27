#include <stdio.h>

void main( void )
{
  printf("int: %i, float: %i, double: %i, long: %i, long double: %i, __INT64: %i, char: %i", sizeof(int), sizeof(float), sizeof(double), sizeof(long), sizeof(long double), sizeof(__INT64), sizeof(char));
  return(0); 
}
