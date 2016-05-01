#include <stdio.h>
#include <string.h>
int main (void)
{
char gar1[254], gar2[254];
printf("Введите строчку через пробел : \n");
scanf("%d %d",gar1,gar2);
void L (char*x, char*z) {
*z=*x
}
int i;
	 for ( i=0;i!=strlen(gar1);i++)
	 {
	  L(&gar1[i],&gar2[i]);
     }
	   printf("%d",gar2);

	 return 0;
}
