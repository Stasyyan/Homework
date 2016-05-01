#include <stdio.h>
#define  a 256
#define  b 2455
#define  d 55552
#define  c 141
#define max(a,b) ((a>b)?a:b)

int main()
{
	int i,k, x1, x2;
	printf("введите количество пар \n");
	scanf("%d",&k);
  k=k*2;
 for(i=1; i<=k; i++)
 {x1=(a*x1+c)%m;
 printf("%d  ", x1);
 if(i%2==1)
 x2=x1;
 else
  printf("%d\n", max(x1,x2));}
return 0;
}
	
