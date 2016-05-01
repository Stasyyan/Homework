#include <stdio.h>
#include <stdlib.h>

int main () 
{
	FILE *one;
  FILE *two;
	char letter;
	char key[6]={'1', '0', '1', '1', '1', '0'};
	int k=0;
    one=fopen("begin.txt", "rb");
    two=fopen("theend.txt", "wb");
    printf("результаты выведутся в файле theend.txt");
    while(feof(one) == 0) {
        fread(&letter, 1, 1, one);
        if(letter != '\n') 
        {
            k = (k == 6) ? k : 0;
            letter^=key[k];
            k++;
        }
        fwrite(&letter, 1, 1, two);
    }	
    fclose(one);
    fclose(two);
    return 0;
}
