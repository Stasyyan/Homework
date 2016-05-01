#include <stdio.h>
#include <assert.h>
#include  "Task2_5_5_1.c"
int main() {
	int n,k,j,c;
	float D,d;
	int **matr;
	printf("Введите размерность квадратной матрицы: ");
	scanf("%d", &n);
	matr=(int**)malloc(sizeof(int*)*n);
	for(k=0;k<n;k++) 
	{
		matr[k]=(int*)malloc(sizeof(int)*n);
		for(j=0;j<n;j++) 
		{
			printf("Элемент [%d][%d]= ",k+1,j+1);
			scanf("%d",&matr[k][j]);
		}
	}
	D=Det(matr,n);
	assert(D!=0);
	int svob[n];  
	printf("Введите столбец свободных коэффициентов:\n");
	for(k=0;k<n;k++)
	{
		printf("Элемент [%d] = ",k+1);
		scanf ("%d",&svob[k]);
	}
	printf("Корни системы уравнений:\n");
	for(k=0;k<n;k++)
	{
		for(j=0;j<n;j++)
		{
			c=matr[j][k];
			matr[j][k] = svob[j];
			svob[j]=c;
		}
		d=Det(matr,n);
		printf("x%d=%f\n",k+1, d/D);
		for(j=0;j<n;j++)
		{
			c=svob[j];
			svob[j] = matr[j][k];
			matr[j][k]=c;
		}
	}
	return 0;
}
