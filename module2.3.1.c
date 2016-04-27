#include <stdio.h>

int main(void)
{
printf("Введите строку\n");
char lam,gh;
while((lam=getchar())!='\n')
{
if (gh>=lam)
			lam=gh;	
	} 

	printf("Наибольший ASCII-код имеет %c \n", lam);
	return 0;
}
