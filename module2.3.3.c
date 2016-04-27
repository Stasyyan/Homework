#include <stdio.h>

int main(void)
{
	int a,b,c,d,max;
	printf("введите 2 числа:\n");
	scanf("%d %d",&a,&b);
	d=(a>b) ? b:a;
	for(c=1;c<=d;c++)
		{   
			if((a % c == b % c) && (a % c ==0))
			 max=c;
        }
    printf("Максимальный общий делитель : %d \n",max);
    return 0;    
}
