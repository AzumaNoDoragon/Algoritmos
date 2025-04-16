#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");	

	float salario, sal_familia;
	int depend;
	
	printf("Digite o valor do salario: ");
	scanf("%f", &salario);
	printf("Digite a quantidade de dependentes voce possui: ");
	scanf("%d", &depend);
	
	sal_familia = salario * 0.02 * depend;
	
	printf("\nO valor do salario-familia é %0.2f!\n", sal_familia);
	
	return 0;
}