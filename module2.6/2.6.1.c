#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{	
	FILE *f;
	FILE *p;
	f=fopen("Text.txt","r");
	p=fopen("Theendofthetext.txt","w");
	char string[250];
	char **mas1;
	char *mas2;
	int n = 1, *amount, t = 0, k = 0, j;
	printf("результаты выведутся в файле Theendofthetext.txt");
	fscanf(f,"%s",string);
	mas1 = (char**)malloc(n * sizeof(char*));
	mas1[n-1] = (char*)malloc(sizeof(char) * strlen(string) + 1);
	strcpy(mas1[n-1], string);
	amount = (int*)malloc(sizeof(int) * n);
	amount[n-1] = 1;
	while (fscanf(f,"%s",string) !=EOF)
	{	
		for(k = 0; k < n; ++k)
		{   		
			if(strcmp(mas1[k],string) == 0)
			{
				amount[k]++;
				t = 1;
			}
		}
		if(!t)
		{
			n++;
			mas1 = (char**)realloc(mas1, n * sizeof(char*));
			mas1[n-1] = (char*)malloc(sizeof(char) * strlen(string) + 1);
			strcpy(mas1[n-1], string);
			amount = (int*)realloc(amount, sizeof(int) * n);
			amount[n-1] = 1;
		}
	t = 0;
	}
	fclose(f);
	fprintf(p,"Введенные слова и их количeство:\n"
			  "Слово                  Количество\n");
	for (j=0; j<=n-1;j++)
	{
		for (k=0;k<n-j-1;k++)
		{
			if (amount[k] > amount[k+1])
			{
				int tmp = amount[k];
				mas2 = mas1[k]; 
				amount[k]=amount[k+1];
				mas1[k]=mas1[k+1];
				mas1[k+1]=mas2;
				amount[k+1] = tmp;	
			}
		}
	fprintf(p,"%-15s%20d \n",mas1[k], amount[k]);
	}
fclose(p);
return 0;
}
