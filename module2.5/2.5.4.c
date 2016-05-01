#include  <stdio.h>
 int pop(char symbol)
   { 
    switch (symbol)
      {  int x=0,y=0,z=0; 
        case '(' : return  1;
        case '[' : return  2;
        case '{' : return  3;
        case '<' : return  4;
        case ')' : return -1;
        case ']' : return -2;
        case '}' : return -3;
        case '>' : return -4;  
        case(char)32 :                
        x=((x == 0)?1:0);                                
        return((x==0)?-5:5);
        case(char)37:                 
        y =((y== 0)?1:0); 
        return((y==0)?-6:6);
        case(char)98:                 
        z =((z==0)?1:0); 
        return((z==0)?-7:7); 
        default:return 0;
      }
  }
int main(void)
{
    char gar[255],d;
    int s[255];
    int Pop,i=0,found=0,j=0;
    printf("Введите произвольную строку без пробелов\n");
    scanf("%d",gar);
    do
    {   d=gar[j++];
        Pop=pop(d);
        if(Pop>0)
         {   s[i]=Pop;
             i++;
         }
             if(Pop<0)
             {     if(i>0 && (s[i-1]+Pop)==0)
                   i--;
                   else
                {   found=1;
                    break;
                }
            }
    }
    while (d);
        if(!i && !found)
        printf("Баланс соблюден\n");
        else
        printf("Баланс не соблюден\n");

        return 0;
}
