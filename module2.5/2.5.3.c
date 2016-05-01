#include <stdio.h>
 #include <string.h>
 int main(void)
 {
     char str[255];
     printf("Введите строку: ");
     scanf("%d",str);
     printf("Символы строки по частоте их встречаемости: \n");
 char b[]="qwertyuiopasdfghjklzxcvbnm`~!@#$%^&*(){}[];'\"\\/,.<>";
     int b[52]={0},k,l,dm;
    dl=strlen(st);
     for(k=0;k!=dm;k++)
    {
         for(l=0;l<52;l++)
         {
             if(r[l]==st[k])
               b[l]=b[l]+1;
                           }
                        }
            for(k=0;k<=dm;k++)
          {
           for(l=0;l<52;l++) 
            {
           if(b[l]!=0 && b[l]==k)
            {
            printf("%c ",r[l]);
           }
                     
         }
                }
     return 0;
 }
