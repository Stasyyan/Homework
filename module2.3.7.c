#include <stdio.h>

int main()
{
long  a, b;
	int wealth, r, l, n, h, leather;
	printf("Введите выосту треугольника Паскаля:\n");
	scanf("%d", &wealth);
	while(wealth<0)
	{
		printf("Введите положительное число:\n");
		scanf("%d", &wealth);
	}
	leather=wealth;
	for(r=1; r<=wealth; r++)
	{
		for(l=1; l<leather; l++)
		printf("   ");
		h=i;
	 	for (n=1, a=1, b=1; n<=r; n++)
	 	{
	 		if (n==1)
	 		{	
	 			printf("%-5d ", 1);
	 			continue;
	 		}
	 		h-- ;
	 		b *= h;
	 		a *= n-1;	
	 		printf("%-5ld ", z/c);
		}
		printf("\n");
		leather--;
	}	
	return 0;
}
