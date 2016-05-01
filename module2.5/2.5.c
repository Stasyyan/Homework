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
int k=0,g;
      while(gar2[k]!='\0') k++;
       j--;
      for(g=0;g<k;g++,k--) 
       {
          new=line2[g];
          gar2[g]=gar2[k];
          gar2[k]=new;
          }
	  printf("%d %d\n",gar1,gar2);
	 return 0;
}
