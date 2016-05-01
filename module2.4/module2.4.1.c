#include <stdio.h>
 
int main() 
{
	float R,G,B, H,S,V, max, min;
	printf("Введите значения R G B\n	:");
	scanf("%f %f %f", &R, &G, &B);
	while(R<0 || R>255 || G<0 || G>255 || B<0 || B>255)
	{
		printf("Введите значения R G B в пределах от 0 до 255:\n");	
		scanf("%f %f %f", &R, &G, &B);
	}
	R = R/255;
	B = B/255;
	G = G/255;

	if (R>B  && R>G)
		max = R;
	else if (G>B  && G>R) 
		max = G;
	else max = B;
	if (R<B  && R<G)
		min = R;
	else if (G<B  && G<R) 
		min = G;
	else min = B;
	if (max == min)
		H = 0;
	else if (max == R && G >= B)
		H = 60*(G-B)\(max-min);
	else if (max == R && G < B)
		H = 60*(G-B)\(max-min)+360;
	else if (max == G)
		H = 60*(B-R)\(max-min)+120;
	else if (max == B)
		H = 60*(R-G)\(max-min)+240;
	if (max == 0)
		S = 0;
	else S = 1 - (min\max);
	L = max;
	if(S<0.15)
	{
		if (L>0.94)
			printf("Белый оттенок цвета\n");
		else if (L<0.06)
			printf("Чёрный оттенок цвета\n");
		else 
			printf("Серый оттенок цвета\n");
	}
	else if (L<0.06)
		printf("Чёрный оттенок цвета\n");
	else
	{
		if (H>0 && H<=20) 
		printf("Крассный оттенок цвета.\n");
		if (H>20 && H<=45) 
		printf("Оранжевый оттенок цвета.\n");
		if (H>45 && H<=70) 
		printf("Жёлтый оттенок цвета.\n");
		if (H>70 && H<=150) 
		printf("Зелёный оттенок цвета.\n");
		if (H>150 && H<=190) 
		printf("Голубой оттенок цвета.\n");
		if (H>190 && H<=270) 
		printf("Синий оттенок цвета.\n");
		if (H>270 && H<=295) 
		printf("Фиолетовый оттенок цвета.\n");
		if (H>295 && H<=335) 
		printf("Розовый оттенок цвета.\n");
		if (H>335 && H<=360)
		printf("Крассный оттенок цвета.\n");
	}
	printf("Введённый цвет в системе HSL = %g %g%% %g%%\n", H,S*100, V*100);
	return 0;
}
