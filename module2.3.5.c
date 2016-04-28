#include <stdio.h>
#include <math.h>

int main()
{
	int x1,x2,x3,a1,a2,a3,y1,y2,y3;
	printf("Введите 2 координаты(В ДСК) для каждой из вершин треугольника АВС\n");
	printf("x1 a1 :");
	scanf("%d %d",&x1,&x4);
	printf("x2 x5 :");
	scanf("%d %d",&x2,&a1);
	printf("x3 a3 :");
	scanf("%d %d",&x3,&a3);
	y1=pow(x2 - x1, 2) + pow(a2 - a1, 2);
	y2=pow(x3 - x1, 2) + pow(a3 - a2, 2);
	y3=pow(x3 - x1, 2) + pow(a3 - a1, 2);
	if((y1==y2+y3)||(y2==y1+y3)||(y3==y2+y1))
		printf("Треугольник прямоугольный\n");
	else
	printf("Треугольник не прямоугольный\n");
	return 0;
}
