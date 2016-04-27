#include <stdio.h>

void main( void )
{
  float angle, speed, sin;
  printf("Input angle in radians and speed: ");
  scanf("%f %f", &angle, &speed);
  sin = angle-(angle*angle*angle)/6+(angle*angle*angle*angle*angle)/120-(angle*angle*angle*angle*angle*angle*angle)/5040;
  printf("Time: %f", 2 * speed * sin / 9.8);
  return(0); 
}
