#include <stdio.h>

int main(void)
{	
	float a,b,c,y1,y2,D;
	printf("Введите коэффициенты квадратного уравнения:ax^2+bx+c\n");
	scanf("%f %f %f ",&a,&b,&c);
	if ((b*b-4*a*c)<0)
		{printf("Ошибка,корни комплексные..\n");
		return 0;}
	y1=(-b+ sqrt(D))/(2*a);
	y2=(-b- sqrt(D))/(2*a);
	printf("x1=%.2f ; x2=%.2f \n",x1,x2 );
	if(x1==x2)
		printf("Корни совпадают\n");
	return 0;
}
