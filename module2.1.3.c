#include <stdio.h>

void main( void )
{
  int day = 8, month = 5, temp;
  temp = day;
  day = month;
  month = temp;
  printf("%d/%d", day, month);
  return 0;
}
