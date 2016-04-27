#include <stdio.h>

void main( void )
{
  int days, year, day, month;
  printf("Input days: ");
  scanf("%i", &days);
  year = days / 365;
  days = days - year * 365;
  month = days / 30;
  day = days - month * 30;
  printf("years - %i, months - %i, day - %i", yaer, day, month);
  return(0);
}
