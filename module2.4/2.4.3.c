#include <stdio.h>
long fib(int n)
{	if(n>2)
return fib(n-1)+fib(n-2);
	else
		return 1;
		}
int main()
{
	int n,i;
	printf("Введите количество чисел Фибоначчи\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		printf("%ld  ",fib(i) );
	putchar('\n');
	return 0;
}
