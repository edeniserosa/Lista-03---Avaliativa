#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	int cont1=0, cont2=0;
	int num=0;
	char teste;
	
	printf("Ol�, digite um n�mero: ");
	scanf("%d", &num);
	
		for(cont1=1;cont1<=num;cont1++) 
		{
			printf("\t\t");
			for(cont2=1;cont2<=cont1;cont2++)
			{
				printf("*");
			}
				printf("\n");
		}		
	return 0;
}


