#include <stdio.h>
int main()
{
float a,n,d,s,j,r,l,k,R1,R2;
printf("Введите сопротивления для B: \n");
scanf("%d%d", &d,&s);
printf("Введите сопротивления для A: \n");
scanf("%d%d", &a,&n);
j=a+n;
r=d+s;
l=a*n-d*s;
k=a*s*+d*n;
R1=(l*j-r*k)/(j*j+r*r);
R2=(r*l+j*k)/(j*j+r*r);
printf("Cопротивление %.2d + (%.2d)*i \n",R1,R2 );
return 0;
}
