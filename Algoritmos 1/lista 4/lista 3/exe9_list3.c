#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");	
	int alunos, grupos, resto;
	
	printf("insira a quantidade de alunos: ");
	scanf("%d", &alunos);
	
	grupos = alunos / 4;
	resto = alunos % 4;

	printf("\nA quantidade de grupos ser� de %d e a quantidade de alunos sem grupo ser� %d!\n ", grupos, resto);
		
	return 0;
}