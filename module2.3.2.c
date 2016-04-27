#include <stdio.h>

int main(void)
{
	printf("Введите строку\n");
		char fluf,mluf;
	fluf='\n';
	while((mluf=getchar()) !='\n' )
	{
		if(mluf != fluf)
			{
				putchar(mluf);
				pred=mluf;
			}		

    } 
printf("\n");
return 0;
}
