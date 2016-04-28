#include <stdio.h>
int main(void)
{
int i, klen, mlen ;
printf("Введите количество процентов\n");
scanf("%d", &i);
i=i/2;
printf("[");
for(i=0; mlen<i; mlen++)
printf("=");
klen=50-i;
for(mlen=0; mlen<klen; mlen++)
printf(" ");
printf("]");
return 0;
}
