#include <stdio.h>

void main( void )
{
  float x, aver;
  int sum = 0, col = 0;
  scanf("%f", &x);
  while ((int)x != x)
    x *= 10;
  while ((int)x != 0)
  {
    col += 1;
    sum += (int)x % 10;
    x /= 10;
  }
  printf("sum: %i, average: %f", sum, (float)sum / col);
  return(0); 
}
