#include <stdio.h>
#include <math.h>
#include <assert.h>
int main()
{
float x,y, result;
char operation;
printf("Введите команду:\n");
scanf("%f%c%f", &x,&operation,&y);
switch(operation)
{
case '-': result=x-y;
 break;
case '+': result=x+y;
 break;
case '*': result=x*y;
 break;
case '/': assert(y!=0);
          result=x/y;
 break;
 case '%':  assert(y!=0);
            result=x/y*100;
 break;
case '^': result=pow(x,y);
 break;

}
printf("=%.2f\n", result);
return 0;
}
